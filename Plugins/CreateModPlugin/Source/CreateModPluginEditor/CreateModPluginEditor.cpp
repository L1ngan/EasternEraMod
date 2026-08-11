#include "CreateModPluginEditor.h"
#include "ModInfoEditorWindow.h"
#include "CreateModWindow.h"
#include "PackageModWindow.h"
#include "UsmapExporter.h"
#include "ModInfoEditorCommands.h"
#include "ModInfoDataCustomization.h"
#include "ToolMenus.h"
#include "LevelEditor.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Widgets/Docking/SDockTab.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/SWindow.h"
#include "PropertyEditorModule.h"
#include "SlateBasics.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"

#define LOCTEXT_NAMESPACE "FCreateModPluginEditorModule"

static TWeakPtr<SWindow> ModInfoEditorWindowInstance;
static TWeakPtr<SWindow> CreateModWindowInstance;
static TWeakPtr<SWindow> PackageModWindowInstance;

void FCreateModPluginEditorModule::StartupModule()
{
	// 注册命令
	FModInfoEditorCommands::Register();
	const FModInfoEditorCommands& Commands = FModInfoEditorCommands::Get();

	PluginCommands = MakeShareable(new FUICommandList);
	PluginCommands->MapAction(
		Commands.OpenModInfoEditor,
		FExecuteAction::CreateRaw(this, &FCreateModPluginEditorModule::OpenModInfoEditor),
		FCanExecuteAction()
	);
	PluginCommands->MapAction(
		Commands.CreateMod,
		FExecuteAction::CreateRaw(this, &FCreateModPluginEditorModule::OpenCreateModWindow),
		FCanExecuteAction()
	);
	PluginCommands->MapAction(
		Commands.PackageMod,
		FExecuteAction::CreateRaw(this, &FCreateModPluginEditorModule::OpenPackageModWindow),
		FCanExecuteAction()
	);
	PluginCommands->MapAction(
		Commands.ExportUsmap,
		FExecuteAction::CreateRaw(this, &FCreateModPluginEditorModule::ExportUsmap),
		FCanExecuteAction()
	);

	// 注册自定义类布局（用于自定义属性显示）
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomClassLayout(
		UModInfoData::StaticClass()->GetFName(),
		FOnGetDetailCustomizationInstance::CreateStatic(&FModInfoDataCustomization::MakeInstance)
	);

	// 添加到菜单
	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FCreateModPluginEditorModule::RegisterMenus));
}

void FCreateModPluginEditorModule::ShutdownModule()
{
	UToolMenus::UnRegisterStartupCallback(this);
	UToolMenus::UnregisterOwner(this);
	FModInfoEditorCommands::Unregister();

	// 取消注册自定义属性编辑器
	if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
	{
		FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.UnregisterCustomClassLayout("ModInfoData");
	}

	if (ModInfoEditorWindowInstance.IsValid())
	{
		ModInfoEditorWindowInstance.Reset();
	}
	if (CreateModWindowInstance.IsValid())
	{
		CreateModWindowInstance.Reset();
	}
	if (PackageModWindowInstance.IsValid())
	{
		PackageModWindowInstance.Reset();
	}
}

void FCreateModPluginEditorModule::RegisterMenus()
{
	// 添加到主工具栏（运行按钮那一行）
	FToolMenuOwnerScoped OwnerScoped(this);
	
	// 扩展主工具栏，使用 User section（类似 UnLua）
	UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.User");
	FToolMenuSection& ToolbarSection = ToolbarMenu->AddSection("ModTools", LOCTEXT("ModTools_Section", "Mod Tools"));
	
	const FModInfoEditorCommands& Commands = FModInfoEditorCommands::Get();
	
	// 添加 Mod 工具下拉菜单按钮（类似 UnLua）
	ToolbarSection.AddEntry(FToolMenuEntry::InitComboButton(
		"ModTools",
		FUIAction(),
		FOnGetContent::CreateRaw(this, &FCreateModPluginEditorModule::GenerateModToolsMenu),
		LOCTEXT("ModTools_Label", "Mod"),
		LOCTEXT("ModTools_ToolTip", "Mod Tools"),
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Edit")
	));
	
	// 同时保留 Tools 菜单中的选项（可选）
	UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Tools");
	FToolMenuSection& MenuSection = Menu->FindOrAddSection("Modding");
	MenuSection.AddMenuEntryWithCommandList(Commands.OpenModInfoEditor, PluginCommands);
	MenuSection.AddMenuEntryWithCommandList(Commands.CreateMod, PluginCommands);
	MenuSection.AddMenuEntryWithCommandList(Commands.ExportUsmap, PluginCommands);
}

TSharedRef<SWidget> FCreateModPluginEditorModule::GenerateModToolsMenu()
{
	const FModInfoEditorCommands& Commands = FModInfoEditorCommands::Get();
	FMenuBuilder MenuBuilder(true, PluginCommands);

	MenuBuilder.BeginSection(NAME_None, LOCTEXT("Section_ModTools", "Mod Tools"));
	MenuBuilder.AddMenuEntry(Commands.OpenModInfoEditor, NAME_None, LOCTEXT("ModInfoEditor", "Mod Info Editor"));
	MenuBuilder.AddMenuEntry(Commands.CreateMod, NAME_None, LOCTEXT("CreateNewMod", "Create New Mod"));
	MenuBuilder.AddMenuEntry(Commands.PackageMod, NAME_None, LOCTEXT("PackageMod", "Package Mod"));
	MenuBuilder.AddMenuEntry(Commands.ExportUsmap, NAME_None, LOCTEXT("ExportUsmap", "Export Usmap"));
	MenuBuilder.EndSection();

	return MenuBuilder.MakeWidget();
}

void FCreateModPluginEditorModule::OpenModInfoEditor()
{
	// 如果窗口已存在，尝试激活它
	if (ModInfoEditorWindowInstance.IsValid())
	{
		// 检查窗口是否仍然在 Slate 应用的管理中
		TSharedPtr<SWindow> WindowPtr = ModInfoEditorWindowInstance.Pin();
		if (WindowPtr.IsValid())
		{
			WindowPtr->BringToFront();
			return;
		}
		// 如果窗口已失效，清理引用
		ModInfoEditorWindowInstance.Reset();
	}

	// 创建新窗口
	FString DefaultModPath = TEXT("Mods");
	
	TSharedRef<SModInfoEditorWindow> EditorWindow = SNew(SModInfoEditorWindow)
		.ModFolderPath(TEXT(""));

	TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(LOCTEXT("ModInfoEditorWindowTitle", "Mod Info Editor"))
		.ClientSize(FVector2D(800, 600))
		.SupportsMaximize(true)
		.SupportsMinimize(true)
		[
			EditorWindow
		];

	// 设置窗口关闭回调，清理引用
	Window->SetOnWindowClosed(FOnWindowClosed::CreateLambda([this](const TSharedRef<SWindow>&)
	{
		ModInfoEditorWindowInstance.Reset();
	}));

	ModInfoEditorWindowInstance = Window;

	FSlateApplication::Get().AddWindow(Window);
}

void FCreateModPluginEditorModule::OpenCreateModWindow()
{
	// 如果窗口已存在，尝试激活它
	if (CreateModWindowInstance.IsValid())
	{
		// 检查窗口是否仍然在 Slate 应用的管理中
		TSharedPtr<SWindow> WindowPtr = CreateModWindowInstance.Pin();
		if (WindowPtr.IsValid())
		{
			WindowPtr->BringToFront();
			return;
		}
		// 如果窗口已失效，清理引用
		CreateModWindowInstance.Reset();
	}

	// 创建新窗口
	TSharedRef<SCreateModWindow> EditorWindow = SNew(SCreateModWindow);

	TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(LOCTEXT("CreateModWindowTitle", "Create New Mod"))
		.ClientSize(FVector2D(800, 600))
		.SupportsMaximize(true)
		.SupportsMinimize(true)
		[
			EditorWindow
		];

	// 设置窗口关闭回调，清理引用
	Window->SetOnWindowClosed(FOnWindowClosed::CreateLambda([this](const TSharedRef<SWindow>&)
	{
		CreateModWindowInstance.Reset();
	}));

	CreateModWindowInstance = Window;

	FSlateApplication::Get().AddWindow(Window);
}

void FCreateModPluginEditorModule::OpenPackageModWindow()
{
	// 如果窗口已存在，尝试激活它
	if (PackageModWindowInstance.IsValid())
	{
		TSharedPtr<SWindow> WindowPtr = PackageModWindowInstance.Pin();
		if (WindowPtr.IsValid())
		{
			WindowPtr->BringToFront();
			return;
		}
		PackageModWindowInstance.Reset();
	}

	// 创建新窗口
	TSharedRef<SPackageModWindow> PackageWindow = SNew(SPackageModWindow);

	TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(LOCTEXT("PackageModWindowTitle", "Package Mod"))
		.ClientSize(FVector2D(600, 400))
		.SupportsMaximize(true)
		.SupportsMinimize(true)
		[
			PackageWindow
		];

	// 设置窗口引用到 PackageWindow，以便它可以阻止关闭
	PackageWindow->SetWindow(Window);
	
	// 设置窗口关闭覆盖，检查是否可以关闭
	Window->SetRequestDestroyWindowOverride(FRequestDestroyWindowOverride::CreateLambda([this, PackageWindow](const TSharedRef<SWindow>& WindowToClose)
	{
		// 检查是否可以关闭
		if (!PackageWindow->CanCloseWindow())
		{
			// 阻止关闭，显示提示
			FNotificationInfo Info(LOCTEXT("CannotCloseWhilePackaging", "无法关闭窗口：正在打包中，请等待打包完成。"));
			Info.ExpireDuration = 3.0f;
			Info.bFireAndForget = true;
			FSlateNotificationManager::Get().AddNotification(Info);
			
			// 重新显示窗口
			WindowToClose->BringToFront();
			// 不调用 RequestDestroyWindow，从而阻止关闭
			return;
		}
		
		// 可以关闭，清理引用
		PackageModWindowInstance.Reset();
		// 调用默认的关闭行为
		FSlateApplication::Get().RequestDestroyWindow(WindowToClose);
	}));
	
	// 设置窗口关闭回调，清理引用（仅在成功关闭后调用）
	Window->SetOnWindowClosed(FOnWindowClosed::CreateLambda([this](const TSharedRef<SWindow>&)
	{
		PackageModWindowInstance.Reset();
	}));

	PackageModWindowInstance = Window;
	FSlateApplication::Get().AddWindow(Window);
}

void FCreateModPluginEditorModule::ExportUsmap()
{
	FString ResultMessage;
	const bool bSuccess = FUsmapExporter::Export(FString(), ResultMessage);

	FNotificationInfo Info(FText::FromString(ResultMessage));
	Info.ExpireDuration = bSuccess ? 5.0f : 8.0f;
	Info.bFireAndForget = true;
	Info.bUseSuccessFailIcons = true;
	FSlateNotificationManager::Get().AddNotification(Info);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCreateModPluginEditorModule, CreateModPluginEditor)

