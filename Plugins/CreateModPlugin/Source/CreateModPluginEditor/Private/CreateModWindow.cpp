#include "CreateModWindow.h"
#include "ModInfoEditorData.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "AssetToolsModule.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "BaseDataStruct.h"
#include "FileHelpers.h"
#include "UObject/UObjectGlobals.h"
#include "UObject/Package.h"
#include "Misc/PackageName.h"
#include "EditorAssetLibrary.h"
#include "EditorSubsystem.h"
#include "Editor.h"
#include "Subsystems/EditorAssetSubsystem.h"

#define LOCTEXT_NAMESPACE "CreateModWindow"

void SCreateModWindow::Construct(const FArguments& InArgs)
{
	// 创建 ModInfoData 对象（每次都创建新的，确保数据是干净的）
	ModInfoData = TStrongObjectPtr<UModInfoData>(NewObject<UModInfoData>(GetTransientPackage()));
	
	// 确保 ModInfoData 使用默认值
	ModInfoData->ModId = TEXT("");
	ModInfoData->ModName = TEXT("");
	ModInfoData->Version = TEXT("1.0.0");
	ModInfoData->Author = TEXT("");
	ModInfoData->Description = TEXT("");
	ModInfoData->Icon = TEXT("");
	ModInfoData->MainLuaFile = TEXT("Main.lua");
	ModInfoData->ModInformationAssetPath = FSoftObjectPath();
	ModInfoData->bNewGameLoad = false;
	ModInfoData->MinGameVersion = TEXT("0.1");
	ModInfoData->bIncludeGameplayTags = false;
	ModInfoData->GameplayTagsIniFile.Empty();
	ModInfoData->ModFolderPath = TEXT("");
	ModInfoData->PublishedFileId = TEXT("");
	ModInfoData->Dependencies.Empty();
	ModInfoData->AdditionalAssets.Empty();

	// 创建属性详情视图
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs DetailsViewArgs;
	DetailsViewArgs.bUpdatesFromSelection = false;
	DetailsViewArgs.bLockable = false;
	DetailsViewArgs.bAllowSearch = true;
	DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
	DetailsViewArgs.bHideSelectionTip = true;
	DetailsViewArgs.bSearchInitialKeyFocus = false;
	DetailsViewArgs.bShowOptions = false;
	DetailsViewArgs.bShowModifiedPropertiesOption = false;

	DetailsView = PropertyModule.CreateDetailView(DetailsViewArgs);
	
	// 隐藏 MainLuaFile 和 ModInformationAssetPath（创建时自动设置）
	// 使用 IsPropertyVisible 委托来隐藏属性（需要在 SetObject 之前设置）
	DetailsView->SetIsPropertyVisibleDelegate(
		FIsPropertyVisible::CreateLambda([](const FPropertyAndParent& PropertyAndParent) -> bool
		{
			FName PropertyName = PropertyAndParent.Property.GetFName();
			// 隐藏 MainLuaFile、ModInformationAssetPath、PublishedFileId
			if (PropertyName == GET_MEMBER_NAME_CHECKED(UModInfoData, MainLuaFile) ||
				PropertyName == GET_MEMBER_NAME_CHECKED(UModInfoData, ModInformationAssetPath) ||
				PropertyName == GET_MEMBER_NAME_CHECKED(UModInfoData, PublishedFileId))
			{
				return false;
			}
			return true;
		})
	);
	
	// 先清除之前的对象（如果有）
	DetailsView->SetObjects(TArray<UObject*>());
	
	// 设置新的对象
	DetailsView->SetObject(ModInfoData.Get());
	
	// 强制刷新以确保属性显示
	DetailsView->ForceRefresh();

	ChildSlot
	[
		SNew(SScrollBox)
		+ SScrollBox::Slot()
		.Padding(10)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 10)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("CreateModTitle", "Create New Mod"))
				.TextStyle(FAppStyle::Get(), "LargeText")
			]
			+ SVerticalBox::Slot()
			.FillHeight(1.0f)
			[
				DetailsView.ToSharedRef()
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 10, 0, 0)
			.HAlign(HAlign_Right)
			[
				SAssignNew(CreateButton, SButton)
				.Text(LOCTEXT("CreateButton", "Create Mod"))
				.OnClicked(this, &SCreateModWindow::OnCreateButtonClicked)
			]
		]
	];
}

FReply SCreateModWindow::OnCreateButtonClicked()
{
	if (!ValidateModInfo())
	{
		return FReply::Handled();
	}

	bool bIncludeGameplayTags = ModInfoData->bIncludeGameplayTags;
	
	if (CreateMod())
	{
		FNotificationInfo Info(LOCTEXT("ModCreatedSuccess", "Mod created successfully!"));
		Info.bUseLargeFont = false;
		Info.ExpireDuration = 3.0f;
		FSlateNotificationManager::Get().AddNotification(Info);
		
		// 如果勾选了包含 GameplayTag，提示需要重启项目
		if (bIncludeGameplayTags)
		{
			const FString TagsIniFileName = UModInfoData::MakeGameplayTagsIniFileName(ModInfoData->ModId);
			FNotificationInfo RestartInfo(FText::Format(LOCTEXT("RestartRequired", "GameplayTags configuration ({0}) created. Please restart the project to load the tags."), FText::FromString(TagsIniFileName)));
			RestartInfo.bUseLargeFont = true;
			RestartInfo.ExpireDuration = 10.0f;
			RestartInfo.Image = FAppStyle::Get().GetBrush(TEXT("Icons.Warning"));
			RestartInfo.bFireAndForget = true;
			FSlateNotificationManager::Get().AddNotification(RestartInfo);
		}
	}
	else
	{
		FNotificationInfo Info(LOCTEXT("ModCreatedFailed", "Failed to create mod. Check Output Log for details."));
		Info.bUseLargeFont = false;
		Info.ExpireDuration = 5.0f;
		FSlateNotificationManager::Get().AddNotification(Info);
	}

	return FReply::Handled();
}

bool SCreateModWindow::ValidateModInfo()
{
	if (ModInfoData->ModId.IsEmpty())
	{
		FNotificationInfo Info(LOCTEXT("ModIdEmpty", "Mod ID cannot be empty!"));
		Info.bUseLargeFont = false;
		Info.ExpireDuration = 3.0f;
		FSlateNotificationManager::Get().AddNotification(Info);
		return false;
	}

	if (ModInfoData->bIncludeGameplayTags)
	{
		ModInfoData->EnsureDefaultGameplayTagsIni();
		const FString TagsFull = ModInfoData->GetDefaultGameplayTagsIniFullPath();
		if (TagsFull.IsEmpty() || !FPaths::FileExists(TagsFull))
		{
			FNotificationInfo Info(LOCTEXT("TagsIniCreateFailed", "无法创建或找到 GameplayTags 配置文件。请重试或取消勾选后重新勾选。"));
			Info.ExpireDuration = 4.0f;
			FSlateNotificationManager::Get().AddNotification(Info);
			return false;
		}
	}

	return true;
}

bool SCreateModWindow::CreateMod()
{
	// 构建 Mod 文件夹路径
	FString ModFolderPath = FString::Printf(TEXT("Mods/%s"), *ModInfoData->ModId);
	FString FullModFolderPath = FPaths::ProjectContentDir() / ModFolderPath;
	FPaths::NormalizeDirectoryName(FullModFolderPath);

	// 创建 Mod 文件夹
	if (!CreateModFolder(FullModFolderPath))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create mod folder: %s"), *FullModFolderPath);
		return false;
	}

	// 更新 ModInfoData 的 ModFolderPath
	ModInfoData->ModFolderPath = ModFolderPath;
	
	// 有了 ModFolderPath 后再次确保 GameplayTags 默认配置路径正确
	if (ModInfoData->bIncludeGameplayTags)
	{
		ModInfoData->EnsureDefaultGameplayTagsIni();
	}
	
	// 确保 MainLuaFile 使用默认值
	if (ModInfoData->MainLuaFile.IsEmpty())
	{
		ModInfoData->MainLuaFile = TEXT("Main.lua");
	}

	// 处理 Icon 文件：如果指定了 Icon，将其拷贝到 mod 目录下
	if (!ModInfoData->Icon.IsEmpty())
	{
		FString IconSourcePath = ModInfoData->Icon;
		FString IconFileName;
		
		// 如果是 UE 资源路径（/Game/...），转换为实际文件路径
		if (IconSourcePath.StartsWith(TEXT("/Game/")))
		{
			FString RelativePath = IconSourcePath.Mid(6);
			RelativePath.ReplaceCharInline(TEXT('/'), TEXT('\\'));
			
			FString FullIconPath = FPaths::ProjectContentDir() / RelativePath;
			FPaths::NormalizeFilename(FullIconPath);
			
			bool bFoundFile = false;
			if (FPaths::FileExists(FullIconPath))
			{
				IconSourcePath = FullIconPath;
				IconFileName = FPaths::GetCleanFilename(RelativePath);
				bFoundFile = true;
			}
			else
			{
				TArray<FString> ImageExtensions = { TEXT(".png"), TEXT(".jpg"), TEXT(".jpeg"), TEXT(".bmp"), TEXT(".tga"), TEXT(".exr") };
				for (const FString& Ext : ImageExtensions)
				{
					FString TestPath = FullIconPath + Ext;
					if (FPaths::FileExists(TestPath))
					{
						IconSourcePath = TestPath;
						IconFileName = FPaths::GetBaseFilename(RelativePath) + Ext;
						bFoundFile = true;
						break;
					}
				}
			}
			
			if (!bFoundFile)
			{
				UE_LOG(LogTemp, Warning, TEXT("Icon file not found for path: %s"), *ModInfoData->Icon);
			}
		}
		else
		{
			// 直接使用文件路径
			FPaths::NormalizeFilename(IconSourcePath);
			IconFileName = FPaths::GetCleanFilename(IconSourcePath);
		}
		
		// 检查源文件是否存在并拷贝
		if (FPaths::FileExists(IconSourcePath) && !IconFileName.IsEmpty())
		{
			FString IconDestPath = FullModFolderPath / IconFileName;
			
			// 使用 IPlatformFile 拷贝文件
			IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
			if (PlatformFile.CopyFile(*IconDestPath, *IconSourcePath))
			{
				// 更新 Icon 路径为相对于 mod 文件夹的相对路径（只保存文件名）
				ModInfoData->Icon = IconFileName;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Failed to copy icon file from %s to %s"), *IconSourcePath, *IconDestPath);
			}
		}
	}

	// 创建 UModInformationAsset
	FString ModDataAssetPath = FString::Printf(TEXT("/Game/%s/DA_ModDataAsset"), *ModFolderPath);
	if (!CreateModInformationAsset(ModDataAssetPath))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create ModInformationAsset: %s"), *ModDataAssetPath);
		return false;
	}

	// 更新 ModInformationAssetPath（需要包含完整的资产路径，包括资产名称）
	FString FullModDataAssetPath = FString::Printf(TEXT("%s.DA_ModDataAsset"), *ModDataAssetPath);
	ModInfoData->ModInformationAssetPath = FSoftObjectPath(FullModDataAssetPath);

	// 生成 ModInfo.json
	FString JsonPath = FullModFolderPath / TEXT("ModInfo.json");
	if (!GenerateModInfoJson(JsonPath))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to generate ModInfo.json: %s"), *JsonPath);
		return false;
	}

	// 生成 Main.lua
	FString LuaPath = FullModFolderPath / ModInfoData->MainLuaFile;
	if (!GenerateMainLuaFile(LuaPath))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to generate Main.lua: %s"), *LuaPath);
		return false;
	}

	// 保存所有资产
	FEditorFileUtils::SaveDirtyPackages(false, true, true, false, false, false, nullptr);

	return true;
}

bool SCreateModWindow::CreateModFolder(const FString& ModFolderPath)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	if (!PlatformFile.DirectoryExists(*ModFolderPath))
	{
		return PlatformFile.CreateDirectoryTree(*ModFolderPath);
	}
	return true;
}

bool SCreateModWindow::CreateModInformationAsset(const FString& AssetPath)
{
	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	FString AssetName = TEXT("DA_ModDataAsset");
	FString PackagePath = FPackageName::GetLongPackagePath(AssetPath);
	FString FullAssetPath = FString::Printf(TEXT("%s.%s"), *AssetPath, *AssetName);

	// 检查资产是否已存在（可能在资产注册表中）
	FAssetData ExistingAssetData = AssetRegistryModule.Get().GetAssetByObjectPath(*FullAssetPath);
	
	if (ExistingAssetData.IsValid())
	{
		// 资产已存在，尝试使用编辑器API删除
		UE_LOG(LogTemp, Warning, TEXT("Asset already exists in registry: %s. Attempting to delete it."), *FullAssetPath);
		
		UEditorAssetSubsystem* EditorAssetSubsystem = GEditor->GetEditorSubsystem<UEditorAssetSubsystem>();
		if (EditorAssetSubsystem)
		{
			// 尝试删除资产（这会处理卸载和文件删除）
			if (EditorAssetSubsystem->DeleteAsset(FullAssetPath))
			{
				UE_LOG(LogTemp, Log, TEXT("Successfully deleted existing asset: %s"), *FullAssetPath);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Failed to delete existing asset via EditorAssetSubsystem: %s"), *FullAssetPath);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("EditorAssetSubsystem not available. Attempting to continue anyway."));
		}
	}

	// 使用 AssetTools 创建资产
	UModInformationAsset* NewAsset = Cast<UModInformationAsset>(AssetToolsModule.Get().CreateAsset(
		AssetName,
		PackagePath,
		UModInformationAsset::StaticClass(),
		nullptr
	));

	if (!NewAsset)
	{
		// 如果创建失败，可能是因为资产文件已存在但损坏，尝试删除文件后重试
		FString AssetFilePath = FPackageName::LongPackageNameToFilename(AssetPath, FPackageName::GetAssetPackageExtension());
		FString AssetFilePathFull = FPaths::ConvertRelativePathToFull(AssetFilePath);
		
		if (FPaths::FileExists(AssetFilePathFull))
		{
			UE_LOG(LogTemp, Warning, TEXT("Asset file exists but creation failed. Attempting to delete file: %s"), *AssetFilePathFull);
			
			// 确保包未加载
			UPackage* PackageToUnload = FindPackage(nullptr, *AssetPath);
			if (PackageToUnload)
			{
				PackageToUnload->MarkAsGarbage();
				CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);
			}
			
			// 删除文件
			IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
			if (PlatformFile.DeleteFile(*AssetFilePathFull))
			{
				UE_LOG(LogTemp, Log, TEXT("Deleted existing asset file. Retrying creation."));
				
				// 重试创建
				NewAsset = Cast<UModInformationAsset>(AssetToolsModule.Get().CreateAsset(
					AssetName,
					PackagePath,
					UModInformationAsset::StaticClass(),
					nullptr
				));
			}
		}
		
		if (!NewAsset)
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to create ModInformationAsset after cleanup attempts: %s"), *FullAssetPath);
			return false;
		}
	}

	NewAsset->MarkPackageDirty();
	AssetRegistryModule.Get().AssetCreated(NewAsset);

	return true;
}

bool SCreateModWindow::GenerateModInfoJson(const FString& JsonPath)
{
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);

	JsonObject->SetStringField(TEXT("ModId"), ModInfoData->ModId);
	JsonObject->SetStringField(TEXT("ModName"), ModInfoData->ModName);
	JsonObject->SetStringField(TEXT("Version"), ModInfoData->Version);
	JsonObject->SetStringField(TEXT("Author"), ModInfoData->Author);
	JsonObject->SetStringField(TEXT("Description"), ModInfoData->Description);
	JsonObject->SetStringField(TEXT("Icon"), ModInfoData->Icon);
	
	// MainLuaFile 应该是相对于 Mod 文件夹的路径
	FString MainLuaFile = ModInfoData->MainLuaFile;
	if (!MainLuaFile.IsEmpty() && !MainLuaFile.StartsWith(TEXT("/")))
	{
		// 确保路径格式正确
		MainLuaFile.ReplaceCharInline(TEXT('\\'), TEXT('/'));
	}
	JsonObject->SetStringField(TEXT("MainLuaFile"), MainLuaFile);

	// ModInformationAssetPath（确保包含完整的资产路径，包括资产名称后缀）
	FString ModInfoAssetPath = ModInfoData->ModInformationAssetPath.ToString();
	if (ModInfoAssetPath.IsEmpty())
	{
		ModInfoAssetPath = FString::Printf(TEXT("/Game/%s/DA_ModDataAsset.DA_ModDataAsset"), *ModInfoData->ModFolderPath);
	}
	else
	{
		// 如果路径不包含资产名称后缀，添加它
		if (!ModInfoAssetPath.Contains(TEXT(".DA_ModDataAsset")))
		{
			ModInfoAssetPath = FString::Printf(TEXT("%s.DA_ModDataAsset"), *ModInfoAssetPath);
		}
	}
	JsonObject->SetStringField(TEXT("ModInformationAssetPath"), ModInfoAssetPath);

	JsonObject->SetBoolField(TEXT("NewGameLoad"), ModInfoData->bNewGameLoad);
	JsonObject->SetStringField(TEXT("MinGameVersion"), ModInfoData->MinGameVersion);
	JsonObject->SetBoolField(TEXT("IncludeGameplayTags"), ModInfoData->bIncludeGameplayTags);
	JsonObject->SetStringField(TEXT("GameplayTagsIniFile"), ModInfoData->GameplayTagsIniFile);
	
	// PublishedFileId（Steam 发布的文件 ID）
	if (!ModInfoData->PublishedFileId.IsEmpty())
	{
		JsonObject->SetStringField(TEXT("PublishedFileId"), ModInfoData->PublishedFileId);
	}

	// AdditionalAssets（额外资产列表）
	TArray<TSharedPtr<FJsonValue>> AdditionalAssetsArray;
	for (const FString& AssetPath : ModInfoData->AdditionalAssets)
	{
		AdditionalAssetsArray.Add(MakeShareable(new FJsonValueString(AssetPath)));
	}
	JsonObject->SetArrayField(TEXT("AdditionalAssets"), AdditionalAssetsArray);

	// Dependencies
	TArray<TSharedPtr<FJsonValue>> DependenciesArray;
	for (const FModDependencyData& Dep : ModInfoData->Dependencies)
	{
		TSharedPtr<FJsonObject> DepObj = MakeShareable(new FJsonObject);
		DepObj->SetStringField(TEXT("ModId"), Dep.ModId);
		if (!Dep.MinVersion.IsEmpty())
		{
			DepObj->SetStringField(TEXT("MinVersion"), Dep.MinVersion);
		}
		DepObj->SetBoolField(TEXT("Required"), Dep.bRequired);
		DependenciesArray.Add(MakeShareable(new FJsonValueObject(DepObj)));
	}
	JsonObject->SetArrayField(TEXT("Dependencies"), DependenciesArray);

	// 写入文件
	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	return FFileHelper::SaveStringToFile(OutputString, *JsonPath);
}

bool SCreateModWindow::GenerateMainLuaFile(const FString& LuaPath)
{
	FString LuaContent = TEXT("-- ============================================\n");
	LuaContent += TEXT("-- Mod - 主入口文件\n");
	LuaContent += TEXT("-- ============================================\n");
	LuaContent += TEXT("\n");
	LuaContent += TEXT("local Mod = {}\n");
	LuaContent += TEXT("\n");
	LuaContent += TEXT("-- ============================================\n");
	LuaContent += TEXT("-- 工具函数\n");
	LuaContent += TEXT("-- ============================================\n");
	LuaContent += TEXT("\n");
	LuaContent += TEXT("function Mod:Log(Message, LogLevel)\n");
	LuaContent += TEXT("    LogLevel = LogLevel or \"Log\"\n");
	LuaContent += TEXT("    UE.UModLuaLibrary.ModLog(self.ModInfo.Metadata.ModId,Message,LogLevel)\n");
	LuaContent += TEXT("end\n");
	LuaContent += TEXT("\n");
	LuaContent += TEXT("function Mod:Debug(Message)\n");
	LuaContent += TEXT("    self:Log(Message, \"Debug\")\n");
	LuaContent += TEXT("end\n");
	LuaContent += TEXT("\n");
	LuaContent += TEXT("function Mod:Warn(Message)\n");
	LuaContent += TEXT("    self:Log(Message, \"Warning\")\n");
	LuaContent += TEXT("end\n");
	LuaContent += TEXT("\n");
	LuaContent += TEXT("function Mod:Error(Message)\n");
	LuaContent += TEXT("    self:Log(Message, \"Error\")\n");
	LuaContent += TEXT("end\n");
	LuaContent += TEXT("\n");
	LuaContent += TEXT("-- ============================================\n");
	LuaContent += TEXT("-- Mod生命周期\n");
	LuaContent += TEXT("-- ============================================\n");
	LuaContent += TEXT("\n");
	LuaContent += TEXT("-- Mod加载时调用\n");
	LuaContent += TEXT("function Mod:OnModLoaded()\n");
	LuaContent += TEXT("    self:Log(\"Mod loaded!\")\n");
	LuaContent += TEXT("    self:CommandShowInfo()\n");
	LuaContent += TEXT("end\n");
	LuaContent += TEXT("\n");
	LuaContent += TEXT("-- Mod卸载时调用\n");
	LuaContent += TEXT("function Mod:OnModUnloaded()\n");
	LuaContent += TEXT("    self:Log(\"Mod unloaded!\")\n");
	LuaContent += TEXT("end\n");
	LuaContent += TEXT("\n");
	LuaContent += TEXT("-- 显示Mod信息\n");
	LuaContent += TEXT("function Mod:CommandShowInfo()\n");
	LuaContent += TEXT("    self:Log(\"=== Mod Information ===\")\n");
	LuaContent += TEXT("    self:Log(string.format(\"Mod ID: %s\", self.ModInfo.Metadata.ModId))\n");
	LuaContent += TEXT("    self:Log(string.format(\"Mod Name: %s\", self.ModInfo.Metadata.ModName))\n");
	LuaContent += TEXT("end\n");
	LuaContent += TEXT("\n");
	LuaContent += TEXT("return Mod\n");

	return FFileHelper::SaveStringToFile(LuaContent, *LuaPath);
}

#undef LOCTEXT_NAMESPACE

