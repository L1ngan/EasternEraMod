#include "PackageModWindow.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Views/SListView.h"
#include "Widgets/Views/STableRow.h"
#include "Containers/Set.h"
#include "SlateBasics.h"
#include "EditorStyleSet.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "DesktopPlatformModule.h"
#include "IDesktopPlatform.h"
#include "Framework/Application/SlateApplication.h"
#include "Input/Events.h"
#include "Misc/MessageDialog.h"
#include "HAL/PlatformProcess.h"
#include "Misc/CommandLine.h"
#include "Misc/App.h"
#include "Async/Async.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/DateTime.h"
#include "Misc/Timespan.h"
#include "Math/UnrealMathUtility.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonWriter.h"
#include "ModToolVersion.h"

namespace PackageModHelpers
{
static FString ResolveGameplayTagsIniSourcePath(
	const FString& ModFolderPath,
	const bool bIncludeGameplayTags,
	const FString& GameplayTagsIniFileField,
	const FString& ModId)
{
	if (!bIncludeGameplayTags)
	{
		return TEXT("");
	}
	FString Key = GameplayTagsIniFileField;
	if (Key.IsEmpty())
	{
		Key = ModId + TEXT("GameplayTags.ini");
	}
	FString Full;
	if (!FPaths::IsRelative(Key))
	{
		Full = FPaths::ConvertRelativePathToFull(Key);
	}
	else
	{
		// ModFolderPath 调用方已为 ProjectContentDir()/Mods/{ModName}，不可再拼 ProjectContentDir，否则路径重复导致找不到 ini、无法拷贝到打包输出目录
		FString ModRoot = ModFolderPath;
		FPaths::NormalizeDirectoryName(ModRoot);
		if (FPaths::IsRelative(ModRoot))
		{
			ModRoot = FPaths::ConvertRelativePathToFull(ModRoot);
			FPaths::NormalizeDirectoryName(ModRoot);
		}
		Full = FPaths::ConvertRelativePathToFull(ModRoot / Key);
	}
	FPaths::NormalizeFilename(Full);
	return Full;
}

/** ModInfo Icon 可能为相对路径；旧数据常见无扩展名，需与 Save 逻辑一致尝试常见图片后缀 */
static FString ResolveModIconSourcePath(const FString& ModFolderPath, const FString& IconField)
{
	if (IconField.IsEmpty())
	{
		return TEXT("");
	}
	FString Full;
	if (!FPaths::IsRelative(IconField))
	{
		Full = FPaths::ConvertRelativePathToFull(IconField);
	}
	else
	{
		FString ModRoot = ModFolderPath;
		FPaths::NormalizeDirectoryName(ModRoot);
		if (FPaths::IsRelative(ModRoot))
		{
			ModRoot = FPaths::ConvertRelativePathToFull(ModRoot);
			FPaths::NormalizeDirectoryName(ModRoot);
		}
		Full = FPaths::ConvertRelativePathToFull(ModRoot / IconField);
	}
	FPaths::NormalizeFilename(Full);
	if (FPaths::FileExists(Full))
	{
		return Full;
	}
	static const TArray<FString> ImageExtensions = {
		TEXT(".png"), TEXT(".jpg"), TEXT(".jpeg"), TEXT(".bmp"), TEXT(".tga"), TEXT(".exr")
	};
	for (const FString& Ext : ImageExtensions)
	{
		const FString TryPath = Full + Ext;
		if (FPaths::FileExists(TryPath))
		{
			return TryPath;
		}
	}
	return Full;
}
} // namespace PackageModHelpers

#define LOCTEXT_NAMESPACE "PackageModWindow"

void SPackageModWindow::Construct(const FArguments& InArgs)
{
	bIsPackaging = false;
	bIsCooking = false;
	CurrentPackagingIndex = 0;
	TotalPackagingCount = 0;
	CheckedModPaths.Empty();
	bIsCheckboxEnabled = true; // 初始化为可用
	RefreshModList();

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
				.Text(LOCTEXT("PackageModTitle", "Package Mod"))
				.TextStyle(FAppStyle::Get(), "LargeText")
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 10)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("SelectModHint", "Check the mods you want to package:"))
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 10)
			[
				SNew(SBox)
				.HeightOverride(150.0f)
				[
					SAssignNew(ModListView, SListView<TSharedPtr<FString>>)
					.ListItemsSource(&ModList)
					.OnGenerateRow(this, &SPackageModWindow::GenerateModListRow)
					.SelectionMode(ESelectionMode::None)
					.ConsumeMouseWheel(EConsumeMouseWheel::Always)
					.ItemHeight(20.0f)
					.AllowOverscroll(EAllowOverscroll::No)
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 10)
			[
				SAssignNew(StatusTextBlock, STextBlock)
				.Text(this, &SPackageModWindow::GetStatusText)
				.ColorAndOpacity(FSlateColor::UseForeground())
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 10)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				[
					SNullWidget::NullWidget
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					SAssignNew(PackageButton, SButton)
					.Text(LOCTEXT("PackageButton", "Package"))
					.OnClicked(this, &SPackageModWindow::OnPackageButtonClicked)
					.IsEnabled(this, &SPackageModWindow::IsPackageEnabled)
				]
			]
		]
	];
}

void SPackageModWindow::RefreshModList()
{
	// 只在 Construct 时调用，避免重复刷新
	if (ModListView.IsValid())
	{
		return;
	}
	
	FString ModsDir = FPaths::ProjectContentDir() / TEXT("Mods");
	FPaths::NormalizeDirectoryName(ModsDir);
	
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	if (PlatformFile.DirectoryExists(*ModsDir))
	{
		// 枚举 Mods 目录下的所有子文件夹
		TArray<FString> SubDirs;
		PlatformFile.IterateDirectory(*ModsDir, [&](const TCHAR* Filename, bool bIsDirectory) -> bool
		{
			if (bIsDirectory)
			{
				FString DirName = FPaths::GetCleanFilename(Filename);
				// 跳过 . 和 .. 目录
				if (DirName != TEXT(".") && DirName != TEXT(".."))
				{
					SubDirs.Add(DirName);
				}
			}
			return true;
		});
		
		// 将目录名添加到列表（使用 TSharedPtr）
		for (const FString& DirName : SubDirs)
		{
			ModList.Add(MakeShareable(new FString(DirName)));
		}
	}
}

TSharedRef<ITableRow> SPackageModWindow::GenerateModListRow(TSharedPtr<FString> InItem, const TSharedRef<STableViewBase>& OwnerTable)
{
	return SNew(STableRow<TSharedPtr<FString>>, OwnerTable)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(0, 0, 5, 0)
			[
				SNew(SCheckBox)
				.IsChecked(this, &SPackageModWindow::IsModChecked, InItem)
				.OnCheckStateChanged(this, &SPackageModWindow::OnModCheckStateChanged, InItem)
				.IsEnabled(this, &SPackageModWindow::IsCheckboxEnabled)
			]
			+ SHorizontalBox::Slot()
			.FillWidth(1.0f)
			.VAlign(VAlign_Center)
		[
			SNew(STextBlock)
			.Text(InItem.IsValid() ? FText::FromString(*InItem) : FText::GetEmpty())
			]
		];
}

void SPackageModWindow::OnModCheckStateChanged(ECheckBoxState NewState, TSharedPtr<FString> ModPath)
{
	if (!ModPath.IsValid())
	{
		return;
	}
	
	FString ModPathStr = *ModPath;
	
	if (NewState == ECheckBoxState::Checked)
	{
		CheckedModPaths.Add(ModPathStr);
	}
	else
	{
		CheckedModPaths.Remove(ModPathStr);
	}
	
	// 更新SelectedModPaths数组
	SelectedModPaths = CheckedModPaths.Array();
}

ECheckBoxState SPackageModWindow::IsModChecked(TSharedPtr<FString> ModPath) const
{
	if (!ModPath.IsValid())
	{
		return ECheckBoxState::Unchecked;
	}
	
	return CheckedModPaths.Contains(*ModPath) ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

FText SPackageModWindow::GetStatusText() const
{
	if (bIsCooking)
	{
		return LOCTEXT("CookingInProgress", "正在Cook所有资产...");
	}
	else if (bIsPackaging)
	{
		if (TotalPackagingCount > 1)
		{
			return FText::Format(LOCTEXT("PackagingInProgressMultiple", "正在打包中... ({0}/{1})"), 
				CurrentPackagingIndex, TotalPackagingCount);
		}
		return LOCTEXT("PackagingInProgress", "正在打包中...");
	}
	return FText::GetEmpty();
}

FReply SPackageModWindow::OnPackageButtonClicked()
{
	if (SelectedModPaths.Num() == 0 || bIsPackaging)
	{
		return FReply::Handled();
	}

	// 设置打包状态
	bIsPackaging = true;
	bIsCheckboxEnabled = false; // 禁用复选框
	CurrentPackagingIndex = 0;
	TotalPackagingCount = SelectedModPaths.Num();
	ModPackagingQueue = SelectedModPaths;
	
	if (StatusTextBlock.IsValid())
	{
		StatusTextBlock->SetText(GetStatusText());
	}
	if (PackageButton.IsValid())
	{
		PackageButton->SetEnabled(false);
	}
	// 刷新列表视图以更新复选框状态
	if (ModListView.IsValid())
	{
		ModListView->RequestListRefresh();
	}

	// 检查是否需要Cook（是否有任何mod包含资产文件）
	if (CheckIfNeedCook())
	{
		// 先Cook所有资产（整个项目）
		ExecuteCookForAllMods();
	}
	else
	{
		// 不需要Cook，直接开始打包
		StartPackagingAfterCook();
	}
	
		return FReply::Handled();
	}

bool SPackageModWindow::CheckIfNeedCook()
{
	// 检查所有选中的mod是否有资产文件
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	
	for (const FString& ModPath : SelectedModPaths)
	{
		FString ModFolderPath = FPaths::ProjectContentDir() / TEXT("Mods") / ModPath;
		FPaths::NormalizeDirectoryName(ModFolderPath);
		
		if (!PlatformFile.DirectoryExists(*ModFolderPath))
		{
			continue;
		}
		
		// 扫描目录查找资产文件
		TFunction<bool(const FString&)> HasAssetFiles = [&](const FString& DirPath) -> bool
		{
			IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
			TFunction<bool(const FString&)> IterateDir = [&](const FString& CurrentDir) -> bool
			{
				bool bFound = false;
				FileManager.IterateDirectory(*CurrentDir, [&](const TCHAR* Filename, bool bIsDirectory) -> bool
				{
					if (bIsDirectory)
					{
						if (IterateDir(FString(Filename)))
						{
							bFound = true;
							return false; // 停止迭代
						}
					}
					else
					{
						FString FullPath = FString(Filename);
						FPaths::NormalizeFilename(FullPath);
						FString Extension = FPaths::GetExtension(FullPath, true).ToLower();
						
						if (Extension == TEXT(".uasset") || Extension == TEXT(".umap"))
						{
							bFound = true;
							return false; // 停止迭代
						}
					}
					return true;
				});
				return bFound;
			};
			return IterateDir(DirPath);
		};
		
		if (HasAssetFiles(ModFolderPath))
		{
			return true; // 找到资产文件，需要Cook
		}
	}
	
	return false; // 没有资产文件，不需要Cook
}

void SPackageModWindow::ExecuteCookForAllMods()
{
	// 设置Cook状态
	bIsCooking = true;
	if (StatusTextBlock.IsValid())
	{
		StatusTextBlock->SetText(GetStatusText());
	}
	
	FString ProjectName = FApp::GetProjectName();
	FString ProjectPath = FPaths::GetProjectFilePath();
	
	// 创建可更新的进度通知
	FNotificationInfo Info(LOCTEXT("CookingAllAssets", "Cooking all project assets..."));
	Info.ExpireDuration = 0.0f;
	Info.bFireAndForget = false;
	Info.bUseLargeFont = false;
	Info.bUseSuccessFailIcons = false;
	CookProgressNotification = FSlateNotificationManager::Get().AddNotification(Info);
	if (CookProgressNotification.IsValid())
	{
		CookProgressNotification.Pin()->SetCompletionState(SNotificationItem::CS_Pending);
	}
	
	// 在主线程中获取 WeakPtr
	TWeakPtr<SPackageModWindow> WeakThisPtr = StaticCastSharedRef<SPackageModWindow>(AsShared());
	
	// 在后台线程中执行Cook
	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [WeakThisPtr, ProjectPath, ProjectName]()
	{
		// 构建Cook输出目录
		FString CookDir = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("Cooked"), ProjectName);
		FPaths::NormalizeDirectoryName(CookDir);
		
		// 创建Cook日志文件路径（用于诊断）
		FString CookLogPath = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("Logs"), FString::Printf(TEXT("Cook_%s.log"), *FDateTime::Now().ToString(TEXT("%Y%m%d_%H%M%S"))));
		FPaths::NormalizeFilename(CookLogPath);
		FString CookLogPathFull = FPaths::ConvertRelativePathToFull(CookLogPath);
		
		// Cook命令参数：Cook整个项目
		// -TargetPlatform=Windows 指定目标平台（Windows平台）
		// -stdout 确保输出到标准输出，避免输出缓冲问题
		// -Unattended 非交互模式
		// -NoLogTimes 不记录时间戳（减少输出量）
		// -abslog 指定日志文件路径（用于诊断，使用绝对路径）
		// 注意：Cook输出路径可能是 Saved/Cooked/Windows/... 或 Saved/Cooked/WindowsNoEditor/...
		FString CookCommandLine = FString::Printf(
			TEXT("-run=Cook -TargetPlatform=Windows -CookDir=\"%s\" -Unversioned -Compressed -stdout -Unattended -NoLogTimes -abslog=\"%s\""),
			*CookDir, *CookLogPathFull
		);
		
		UE_LOG(LogTemp, Log, TEXT("Cook log file will be written to: %s"), *CookLogPathFull);
		
		UE_LOG(LogTemp, Log, TEXT("Starting Cook for all assets with command line: %s"), *CookCommandLine);
		
		// 使用 UnrealEditor-Cmd.exe 执行 CookCommandlet
		FString EngineDir = FPaths::EngineDir();
		FString UnrealEditorCmdPath = EngineDir / TEXT("Binaries") / FPlatformProcess::GetBinariesSubdirectory() / TEXT("UnrealEditor-Cmd.exe");
		
		if (!FPaths::FileExists(UnrealEditorCmdPath))
		{
			UnrealEditorCmdPath = EngineDir / TEXT("Binaries") / TEXT("Win64") / TEXT("UnrealEditor-Cmd.exe");
		}
		
		if (!FPaths::FileExists(UnrealEditorCmdPath))
		{
			UE_LOG(LogTemp, Error, TEXT("UnrealEditor-Cmd.exe not found!"));
			AsyncTask(ENamedThreads::GameThread, [WeakThisPtr]()
			{
				TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
				if (PinnedThis.IsValid())
				{
					FNotificationInfo ErrorInfo(LOCTEXT("UnrealEditorCmdNotFound", "UnrealEditor-Cmd.exe not found! Cannot cook assets. Packaging interrupted."));
					ErrorInfo.ExpireDuration = 5.0f;
					ErrorInfo.bFireAndForget = true;
					ErrorInfo.bUseSuccessFailIcons = true;
					FSlateNotificationManager::Get().AddNotification(ErrorInfo);
					
					// 清除Cook状态
					PinnedThis->bIsCooking = false;
					
					// Cook失败，直接中断打包流程
					PinnedThis->ModPackagingQueue.Empty();
					PinnedThis->bIsPackaging = false;
					PinnedThis->bIsCheckboxEnabled = true; // 重新启用复选框
					if (PinnedThis->StatusTextBlock.IsValid())
					{
						PinnedThis->StatusTextBlock->SetText(PinnedThis->GetStatusText());
					}
					if (PinnedThis->PackageButton.IsValid())
					{
						PinnedThis->PackageButton->SetEnabled(PinnedThis->IsPackageEnabled());
					}
					// 刷新列表视图以更新复选框状态
					if (PinnedThis->ModListView.IsValid())
					{
						PinnedThis->ModListView->RequestListRefresh();
					}
				}
			});
			return;
		}
		
		// 构建完整命令行
		FString FullCommandLine = FString::Printf(TEXT("\"%s\" %s"), *ProjectPath, *CookCommandLine);
		
		// 创建输出管道
		void* ReadPipe = nullptr;
		void* WritePipe = nullptr;
		FPlatformProcess::CreatePipe(ReadPipe, WritePipe);
		
		FString WorkingDirectory = FPaths::GetPath(UnrealEditorCmdPath);
		FProcHandle ProcHandle = FPlatformProcess::CreateProc(
			*UnrealEditorCmdPath,
			*FullCommandLine,
			true,
			true,
			true,
			nullptr,
			0,
			*WorkingDirectory,
			WritePipe,
			ReadPipe,
			nullptr
		);
		
		if (!ProcHandle.IsValid())
		{
			FPlatformProcess::ClosePipe(ReadPipe, WritePipe);
			UE_LOG(LogTemp, Error, TEXT("Failed to start Cook process! Executable: %s, CommandLine: %s, WorkingDir: %s"), 
				*UnrealEditorCmdPath, *FullCommandLine, *WorkingDirectory);
			AsyncTask(ENamedThreads::GameThread, [WeakThisPtr]()
			{
				TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
				if (PinnedThis.IsValid())
				{
					FNotificationInfo ErrorInfo(LOCTEXT("CookStartFailed", "Failed to start cook process! Check Output Log for details. Packaging interrupted."));
					ErrorInfo.ExpireDuration = 5.0f;
					ErrorInfo.bFireAndForget = true;
					ErrorInfo.bUseSuccessFailIcons = true;
					FSlateNotificationManager::Get().AddNotification(ErrorInfo);
					
					// 清除Cook状态
					PinnedThis->bIsCooking = false;
					
					// Cook失败，直接中断打包流程
					PinnedThis->ModPackagingQueue.Empty();
					PinnedThis->bIsPackaging = false;
					PinnedThis->bIsCheckboxEnabled = true; // 重新启用复选框
					if (PinnedThis->StatusTextBlock.IsValid())
					{
						PinnedThis->StatusTextBlock->SetText(PinnedThis->GetStatusText());
					}
					if (PinnedThis->PackageButton.IsValid())
					{
						PinnedThis->PackageButton->SetEnabled(PinnedThis->IsPackageEnabled());
					}
					// 刷新列表视图以更新复选框状态
					if (PinnedThis->ModListView.IsValid())
					{
						PinnedThis->ModListView->RequestListRefresh();
					}
				}
			});
			return;
		}
		
		UE_LOG(LogTemp, Log, TEXT("Cook process started successfully."));
		
		// 等待一小段时间，检查进程是否立即退出（可能是启动失败）
		FPlatformProcess::Sleep(1.0f);
		if (!FPlatformProcess::IsProcRunning(ProcHandle))
		{
			UE_LOG(LogTemp, Error, TEXT("Cook process exited immediately after start!"));
			int32 ImmediateReturnCode = 0;
			FPlatformProcess::GetProcReturnCode(ProcHandle, &ImmediateReturnCode);
			FString ImmediateOutput;
			if (ReadPipe)
			{
				ImmediateOutput = FPlatformProcess::ReadPipe(ReadPipe);
			}
			FPlatformProcess::CloseProc(ProcHandle);
			FPlatformProcess::ClosePipe(ReadPipe, WritePipe);
			
			UE_LOG(LogTemp, Error, TEXT("Cook process immediate output: %s"), *ImmediateOutput);
			
			AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, ImmediateReturnCode, ImmediateOutput]()
			{
				TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
				if (PinnedThis.IsValid())
				{
					FString ErrorMessage = FString::Printf(TEXT("Cook进程立即退出（返回码: %d）！\n请检查Output Log中的详细错误信息。\n打包已中断。"), ImmediateReturnCode);
					FNotificationInfo ErrorInfo(FText::FromString(ErrorMessage));
					ErrorInfo.ExpireDuration = 8.0f;
					ErrorInfo.bFireAndForget = true;
					ErrorInfo.bUseSuccessFailIcons = true;
					FSlateNotificationManager::Get().AddNotification(ErrorInfo);
					
					// 清除Cook状态
					PinnedThis->bIsCooking = false;
					
					// Cook失败，直接中断打包流程
					PinnedThis->ModPackagingQueue.Empty();
					PinnedThis->bIsPackaging = false;
					PinnedThis->bIsCheckboxEnabled = true; // 重新启用复选框
					if (PinnedThis->StatusTextBlock.IsValid())
					{
						PinnedThis->StatusTextBlock->SetText(PinnedThis->GetStatusText());
					}
					if (PinnedThis->PackageButton.IsValid())
					{
						PinnedThis->PackageButton->SetEnabled(PinnedThis->IsPackageEnabled());
					}
					// 刷新列表视图以更新复选框状态
					if (PinnedThis->ModListView.IsValid())
					{
						PinnedThis->ModListView->RequestListRefresh();
					}
				}
			});
			return;
		}
		
		// 等待进程完成，同时读取输出并更新进度
		int32 ReturnCode = 0;
		FString AccumulatedOutput;
		FDateTime StartTime = FDateTime::Now();
		const double MaxWaitTimeSeconds = 1800.0; // 最大等待30分钟
		int32 NoOutputCount = 0;
		const int32 MaxNoOutputCount = 60; // 如果60次（30秒）没有输出，检查进程状态
		
		// 记录Cooked目录的初始状态，用于检测Cook是否在进行
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		FString CookedDir = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("Cooked"), ProjectName);
		FPaths::NormalizeDirectoryName(CookedDir);
		int32 InitialCookedFileCount = 0;
		if (PlatformFile.DirectoryExists(*CookedDir))
		{
			TArray<FString> InitialFiles;
			PlatformFile.FindFilesRecursively(InitialFiles, *CookedDir, nullptr);
			InitialCookedFileCount = InitialFiles.Num();
		}
		FDateTime LastCookedDirCheckTime = FDateTime::Now();
		int32 LastCookedFileCount = InitialCookedFileCount;
		
		UE_LOG(LogTemp, Log, TEXT("Starting to monitor Cook process. Executable: %s, CommandLine: %s"), 
			*UnrealEditorCmdPath, *FullCommandLine);
		UE_LOG(LogTemp, Log, TEXT("Initial Cooked directory file count: %d"), InitialCookedFileCount);
		
		while (FPlatformProcess::IsProcRunning(ProcHandle))
		{
			// 检查超时
			FTimespan Elapsed = FDateTime::Now() - StartTime;
			if (Elapsed.GetTotalSeconds() > MaxWaitTimeSeconds)
			{
				UE_LOG(LogTemp, Error, TEXT("Cook process timeout after %d minutes!"), (int32)(MaxWaitTimeSeconds / 60.0));
				FPlatformProcess::TerminateProc(ProcHandle, true);
				ReturnCode = -1;
				break;
			}
			
			if (ReadPipe)
			{
				FString NewOutput = FPlatformProcess::ReadPipe(ReadPipe);
				if (!NewOutput.IsEmpty())
				{
					NoOutputCount = 0; // 重置无输出计数
					AccumulatedOutput += NewOutput;
					UE_LOG(LogTemp, Verbose, TEXT("Cook output chunk (%d chars): %s"), 
						NewOutput.Len(), *NewOutput.Left(200));
					
					// 解析进度并更新通知
					float Progress = ParseCookProgress(AccumulatedOutput);
					if (Progress >= 0.0f)
					{
						FText StatusText = FText::Format(LOCTEXT("CookingProgress", "Cooking assets... ({0}%) - {1}m {2}s"),
							FText::AsNumber(FMath::RoundToInt(Progress * 100.0f)),
							FText::AsNumber(Elapsed.GetMinutes()),
							FText::AsNumber(Elapsed.GetSeconds() % 60));
						
						AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, Progress, StatusText]()
						{
							TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
							if (PinnedThis.IsValid())
							{
								PinnedThis->UpdateCookProgress(Progress, StatusText);
							}
						});
					}
					else
					{
						// 即使无法解析进度，也显示已用时间
						FText StatusText = FText::Format(LOCTEXT("CookingTime", "Cooking assets... ({0}m {1}s)"),
							FText::AsNumber(Elapsed.GetMinutes()),
							FText::AsNumber(Elapsed.GetSeconds() % 60));
						
						AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, StatusText]()
						{
							TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
							if (PinnedThis.IsValid())
							{
								PinnedThis->UpdateCookProgress(-1.0f, StatusText);
							}
						});
					}
				}
				else
				{
					NoOutputCount++;
					
					// 如果长时间没有输出，检查Cooked目录是否有新文件（判断Cook是否在进行）
					if (NoOutputCount >= MaxNoOutputCount)
					{
						FTimespan TimeSinceLastCheck = FDateTime::Now() - LastCookedDirCheckTime;
						if (TimeSinceLastCheck.GetTotalSeconds() >= 10.0) // 每10秒检查一次
						{
							int32 CurrentCookedFileCount = InitialCookedFileCount;
							if (PlatformFile.DirectoryExists(*CookedDir))
							{
								TArray<FString> CurrentFiles;
								PlatformFile.FindFilesRecursively(CurrentFiles, *CookedDir, nullptr);
								CurrentCookedFileCount = CurrentFiles.Num();
							}
							
							if (CurrentCookedFileCount > LastCookedFileCount)
							{
								UE_LOG(LogTemp, Log, TEXT("Cook process is working (no output but files are being created). File count: %d -> %d (+%d)"), 
									LastCookedFileCount, CurrentCookedFileCount, CurrentCookedFileCount - LastCookedFileCount);
								LastCookedFileCount = CurrentCookedFileCount;
								NoOutputCount = 0; // 重置计数，因为Cook确实在进行
							}
							
							LastCookedDirCheckTime = FDateTime::Now();
						}
						
						// 即使没有输出，也更新已用时间
						FText StatusText = FText::Format(LOCTEXT("CookingTime", "Cooking assets... ({0}m {1}s)"),
							FText::AsNumber(Elapsed.GetMinutes()),
							FText::AsNumber(Elapsed.GetSeconds() % 60));
						
						AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, StatusText]()
						{
							TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
							if (PinnedThis.IsValid())
							{
								PinnedThis->UpdateCookProgress(-1.0f, StatusText);
							}
						});
					}
				}
			}
			
			// 减少睡眠时间，更频繁地读取输出，避免缓冲区满导致死锁
			// 根据搜索结果，输出缓冲区通常是4KB，如果满了会导致死锁
			FPlatformProcess::Sleep(0.1f);
		}
		
		// 进程已完成
		FPlatformProcess::GetProcReturnCode(ProcHandle, &ReturnCode);
		
		if (ReadPipe)
		{
			FString RemainingOutput = FPlatformProcess::ReadPipe(ReadPipe);
			if (!RemainingOutput.IsEmpty())
			{
				AccumulatedOutput += RemainingOutput;
			}
		}
		
		FString Output = AccumulatedOutput;
		if (!Output.IsEmpty())
		{
			UE_LOG(LogTemp, Log, TEXT("Cook process output:\n%s"), *Output);
		}
		
		FPlatformProcess::CloseProc(ProcHandle);
		FPlatformProcess::ClosePipe(ReadPipe, WritePipe);
		
		UE_LOG(LogTemp, Log, TEXT("Cook process completed with return code: %d"), ReturnCode);
		
		// 如果Cook失败，尝试从日志文件读取更详细的错误信息
		FString LogFileContent;
		if (ReturnCode != 0 && FPaths::FileExists(CookLogPathFull))
		{
			if (FFileHelper::LoadFileToString(LogFileContent, *CookLogPathFull))
			{
				UE_LOG(LogTemp, Log, TEXT("Reading Cook log file for error details: %s"), *CookLogPathFull);
				// 如果标准输出为空或很短，使用日志文件内容
				if (Output.IsEmpty() || Output.Len() < 100)
				{
					Output = LogFileContent;
					UE_LOG(LogTemp, Log, TEXT("Using log file content as Cook output (length: %d)"), LogFileContent.Len());
				}
				else
				{
					// 合并日志文件内容到输出中（日志文件可能包含更详细的错误信息）
					Output += TEXT("\n\n=== Log File Content ===\n");
					Output += LogFileContent;
				}
			}
		}
		
		// 在主线程中处理结果
		AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, ReturnCode, Output, CookLogPathFull]()
		{
			TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
			if (PinnedThis.IsValid())
			{
				// 清除Cook状态
				PinnedThis->bIsCooking = false;
				if (PinnedThis->StatusTextBlock.IsValid())
				{
					PinnedThis->StatusTextBlock->SetText(PinnedThis->GetStatusText());
				}
				
				// 更新并关闭进度通知
				TSharedPtr<SNotificationItem> Notification = PinnedThis->CookProgressNotification.Pin();
				if (Notification.IsValid())
				{
					if (ReturnCode == 0)
					{
						Notification->SetCompletionState(SNotificationItem::CS_Success);
						Notification->SetText(LOCTEXT("CookSuccess", "Cook completed successfully!"));
					}
					else
					{
						Notification->SetCompletionState(SNotificationItem::CS_Fail);
						Notification->SetText(LOCTEXT("CookFailed", "Cook process failed!"));
					}
					Notification->ExpireAndFadeout();
					PinnedThis->CookProgressNotification.Reset();
				}
				
				if (ReturnCode == 0)
				{
					FNotificationInfo SuccessInfo(LOCTEXT("CookSuccessPackaging", "Cook completed successfully! Starting packaging..."));
					SuccessInfo.ExpireDuration = 3.0f;
					SuccessInfo.bFireAndForget = true;
					SuccessInfo.bUseSuccessFailIcons = true;
					FSlateNotificationManager::Get().AddNotification(SuccessInfo);
					
					// Cook成功，开始打包队列
					PinnedThis->StartPackagingAfterCook();
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Cook process failed with return code: %d"), ReturnCode);
					
					// 检测是否是断言失败或其他特定错误
					FString ErrorMessage;
					if (Output.Contains(TEXT("Assertion failed")) || Output.Contains(TEXT("AssertionFailed")))
					{
						if (Output.Contains(TEXT("AnimSequence")))
						{
							ErrorMessage = TEXT("Cook过程中动画资源(AnimSequence)发生断言失败。\n这通常表示某个动画资源有问题（损坏或未正确编译）。\n请检查并修复有问题的动画资源，然后重新Cook。\n打包已中断。");
						}
						else if (Output.Contains(TEXT("DataTable")) && Output.Contains(TEXT("Missing RowStruct")))
						{
							ErrorMessage = TEXT("Cook过程中DataTable资源发生错误（缺少RowStruct）。\n请检查并修复有问题的DataTable资源，然后重新Cook。\n打包已中断。");
						}
						else if (Output.Contains(TEXT("Failure -")) && Output.Contains(TEXT("error(s)")))
						{
							ErrorMessage = TEXT("Cook过程失败！检测到资源错误。\n请检查Output Log中的详细错误信息，\n修复所有错误后重新Cook。\n打包已中断。");
						}
						else
						{
							ErrorMessage = TEXT("Cook过程中发生断言失败。\n请检查Output Log中的详细错误信息，\n找到有问题的资源并修复后重新Cook。\n打包已中断。");
						}
					}
					else if (Output.Contains(TEXT("Failure -")) && Output.Contains(TEXT("error(s)")))
					{
						// 尝试提取错误数量
						int32 ErrorCount = 0;
						FString ErrorCountStr;
						int32 ErrorPos = Output.Find(TEXT("Failure -"), ESearchCase::IgnoreCase);
						if (ErrorPos != INDEX_NONE)
						{
							int32 ErrorNumStart = ErrorPos + 9; // "Failure -" 的长度
							int32 ErrorNumEnd = ErrorNumStart;
							while (ErrorNumEnd < Output.Len() && FChar::IsDigit(Output[ErrorNumEnd]))
							{
								ErrorNumEnd++;
							}
							if (ErrorNumEnd > ErrorNumStart)
							{
								ErrorCountStr = Output.Mid(ErrorNumStart, ErrorNumEnd - ErrorNumStart);
								ErrorCount = FCString::Atoi(*ErrorCountStr);
							}
						}
						
						if (ErrorCount > 0)
						{
							ErrorMessage = FString::Printf(TEXT("Cook过程失败！检测到 %d 个错误。\n请检查Output Log或日志文件中的详细错误信息：\n%s\n修复所有错误后重新Cook。\n打包已中断。"), 
								ErrorCount, *CookLogPathFull);
						}
						else
						{
							ErrorMessage = FString::Printf(TEXT("Cook过程失败！检测到资源错误。\n请检查Output Log或日志文件中的详细错误信息：\n%s\n修复所有错误后重新Cook。\n打包已中断。"), 
								*CookLogPathFull);
						}
					}
					else
					{
						ErrorMessage = FString::Printf(TEXT("Cook过程失败！\n请检查Output Log或日志文件中的详细错误信息：\n%s\n打包已中断。"), 
							*CookLogPathFull);
					}
					
					FNotificationInfo ErrorInfo(FText::FromString(ErrorMessage));
					ErrorInfo.ExpireDuration = 12.0f;
					ErrorInfo.bFireAndForget = true;
					ErrorInfo.bUseSuccessFailIcons = true;
					FSlateNotificationManager::Get().AddNotification(ErrorInfo);
					
					// Cook失败，直接中断打包流程
					PinnedThis->ModPackagingQueue.Empty();
					PinnedThis->bIsPackaging = false;
					PinnedThis->bIsCheckboxEnabled = true; // 重新启用复选框
					if (PinnedThis->StatusTextBlock.IsValid())
					{
						PinnedThis->StatusTextBlock->SetText(PinnedThis->GetStatusText());
					}
					if (PinnedThis->PackageButton.IsValid())
					{
						PinnedThis->PackageButton->SetEnabled(PinnedThis->IsPackageEnabled());
					}
					// 刷新列表视图以更新复选框状态
					if (PinnedThis->ModListView.IsValid())
					{
						PinnedThis->ModListView->RequestListRefresh();
					}
				}
			}
		});
	});
}

void SPackageModWindow::StartPackagingAfterCook()
{
	// 开始打包队列中的第一个mod
	if (ModPackagingQueue.Num() > 0)
	{
		FString FirstModPath = ModPackagingQueue[0];
		PackageSingleMod(FirstModPath);
	}
	else
	{
		// 队列为空，完成
		bIsPackaging = false;
		bIsCheckboxEnabled = true; // 重新启用复选框
		if (StatusTextBlock.IsValid())
		{
			StatusTextBlock->SetText(GetStatusText());
		}
		if (PackageButton.IsValid())
		{
			PackageButton->SetEnabled(IsPackageEnabled());
		}
		// 刷新列表视图以更新复选框状态
		if (ModListView.IsValid())
		{
			ModListView->RequestListRefresh();
		}
	}
}

void SPackageModWindow::PackageSingleMod(const FString& ModPath)
{
	// 更新当前打包索引
	CurrentPackagingIndex = TotalPackagingCount - ModPackagingQueue.Num() + 1;
	if (StatusTextBlock.IsValid())
	{
		StatusTextBlock->SetText(GetStatusText());
	}

	// 获取 Mod 文件夹路径
	FString ModFolderPath = FPaths::ProjectContentDir() / TEXT("Mods") / ModPath;
	FPaths::NormalizeDirectoryName(ModFolderPath);

	// 检查 Mod 文件夹是否存在
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	if (!PlatformFile.DirectoryExists(*ModFolderPath))
	{
		FNotificationInfo Info(FText::Format(LOCTEXT("ModNotFoundFormat", "Mod folder not found: {0}"), FText::FromString(ModPath)));
		Info.ExpireDuration = 3.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		
		// 继续处理下一个mod
		ModPackagingQueue.RemoveAt(0);
		if (ModPackagingQueue.Num() > 0)
		{
			PackageSingleMod(ModPackagingQueue[0]);
		}
		else
		{
			// 所有mod处理完成
			bIsPackaging = false;
			bIsCheckboxEnabled = true; // 重新启用复选框
			if (StatusTextBlock.IsValid())
			{
				StatusTextBlock->SetText(GetStatusText());
			}
			if (PackageButton.IsValid())
			{
				PackageButton->SetEnabled(IsPackageEnabled());
			}
			// 刷新列表视图以更新复选框状态
			if (ModListView.IsValid())
			{
				ModListView->RequestListRefresh();
			}
		}
		return;
	}

	// 计算 Cooked 目录路径（用于后续打包）
	// Cook 输出路径格式可能是：
	// 1. Saved/Cooked/Windows/ProjectName/Content/Mods/ModName（最常见）
	// 2. Saved/Cooked/WindowsNoEditor/ProjectName/Content/Mods/ModName（某些配置）
	// 3. Saved/Cooked/ProjectName/Content/Mods/ModName（旧格式，无平台目录）
	FString ProjectName = FApp::GetProjectName();
	FString CookedModPath;
	
	// 首先尝试 Windows 平台路径
	CookedModPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / TEXT("Windows") / ProjectName / TEXT("Content") / TEXT("Mods") / ModPath;
	FPaths::NormalizeDirectoryName(CookedModPath);
	
	if (!PlatformFile.DirectoryExists(*CookedModPath))
	{
		// 尝试 WindowsNoEditor 平台路径
		FString WindowsNoEditorPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / TEXT("WindowsNoEditor") / ProjectName / TEXT("Content") / TEXT("Mods") / ModPath;
		FPaths::NormalizeDirectoryName(WindowsNoEditorPath);
		if (PlatformFile.DirectoryExists(*WindowsNoEditorPath))
		{
			CookedModPath = WindowsNoEditorPath;
			UE_LOG(LogTemp, Log, TEXT("Using WindowsNoEditor cooked path: %s"), *CookedModPath);
		}
		else
		{
			// 尝试旧格式（无平台目录）
			FString OldCookedModPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / ProjectName / TEXT("Content") / TEXT("Mods") / ModPath;
			FPaths::NormalizeDirectoryName(OldCookedModPath);
			if (PlatformFile.DirectoryExists(*OldCookedModPath))
			{
				CookedModPath = OldCookedModPath;
				UE_LOG(LogTemp, Warning, TEXT("Using old cooked path format (no platform directory): %s"), *CookedModPath);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Cooked mod path not found at any expected location. Will try again after Cook completes."));
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Using Windows cooked path: %s"), *CookedModPath);
	}

	// 自动保存到项目根目录的 Mods 文件夹
	FString ModsDir = FPaths::ProjectDir() / TEXT("Mods");
	FPaths::NormalizeDirectoryName(ModsDir);
	
	// 确保 Mods 目录存在
	if (!PlatformFile.DirectoryExists(*ModsDir))
	{
		PlatformFile.CreateDirectoryTree(*ModsDir);
	}
	
	FString SavePath = ModsDir / FString::Printf(TEXT("%s.pak"), *ModPath);
	FPaths::NormalizeFilename(SavePath);

	// 构建 UnrealPak 命令
	FString UnrealPakPath = FPaths::ConvertRelativePathToFull(FPaths::EngineDir() / TEXT("Binaries") / TEXT("Win64") / TEXT("UnrealPak.exe"));
	
	// 如果 UnrealPak.exe 不存在，尝试其他路径
	if (!FPaths::FileExists(UnrealPakPath))
	{
		UnrealPakPath = FPaths::ConvertRelativePathToFull(FPaths::EngineDir() / TEXT("Binaries") / FPlatformProcess::GetBinariesSubdirectory() / TEXT("UnrealPak.exe"));
	}

	if (!FPaths::FileExists(UnrealPakPath))
	{
		FNotificationInfo Info(LOCTEXT("UnrealPakNotFound", "UnrealPak.exe not found! Please ensure Unreal Engine is properly installed."));
		Info.ExpireDuration = 5.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		
		// 继续处理下一个mod
		ModPackagingQueue.RemoveAt(0);
		if (ModPackagingQueue.Num() > 0)
		{
			PackageSingleMod(ModPackagingQueue[0]);
		}
		else
		{
			// 所有mod处理完成
			bIsPackaging = false;
			if (StatusTextBlock.IsValid())
			{
				StatusTextBlock->SetText(GetStatusText());
			}
			if (PackageButton.IsValid())
			{
				PackageButton->SetEnabled(IsPackageEnabled());
			}
		}
		return;
	}

	// 检查是否有资产文件需要 Cook
	bool bHasAssetFiles = false;
	TArray<FString> AssetFiles;
	TArray<FString> NonAssetFiles;
	
	// 先扫描源目录，分类文件
	TFunction<void(const FString&)> ScanSourceFiles = [&](const FString& DirPath)
	{
		IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
		TFunction<void(const FString&)> IterateDir = [&](const FString& CurrentDir)
		{
			FileManager.IterateDirectory(*CurrentDir, [&](const TCHAR* Filename, bool bIsDirectory) -> bool
			{
				if (bIsDirectory)
				{
					IterateDir(FString(Filename));
				}
				else
				{
					FString FullPath = FString(Filename);
					FPaths::NormalizeFilename(FullPath);
					FString Extension = FPaths::GetExtension(FullPath, true).ToLower();
					
					if (Extension == TEXT(".uasset") || Extension == TEXT(".umap"))
					{
						bHasAssetFiles = true;
						AssetFiles.Add(FullPath);
					}
					else if (Extension != TEXT(".tmp") && !FPaths::GetCleanFilename(FullPath).StartsWith(TEXT(".")))
					{
						NonAssetFiles.Add(FullPath);
					}
				}
				return true;
			});
		};
		IterateDir(DirPath);
	};
	
	ScanSourceFiles(ModFolderPath);
	
		// 保存打包所需的变量
	SavedModPath = ModPath;
		SavedModFolderPath = ModFolderPath;
		SavedCookedModPath = CookedModPath;
		SavedSavePath = SavePath;
		SavedUnrealPakPath = UnrealPakPath;
		SavedNonAssetFiles = NonAssetFiles;
	bHasAssetFilesToCook = bHasAssetFiles;
	
	// 直接开始打包（Cook已经在ExecuteCookForAllMods中完成）
	ContinuePackaging();
}

void SPackageModWindow::ContinuePackaging()
{
	// 直接使用保存的变量，避免与类成员变量冲突
	// 注意：创建副本而不是引用，避免在异步执行时出现生命周期问题
	// 先验证关键变量是否有效
	if (SavedModPath.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("SavedModPath is empty! Cannot continue packaging."));
		FNotificationInfo Info(LOCTEXT("InvalidModPath", "Invalid mod path! Cannot package mod."));
		Info.ExpireDuration = 5.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		return;
	}
	
	// 安全地创建副本，逐个验证并复制，避免在复制时崩溃
	FString ModPath;
	FString ModFolderPath;
	FString CookedModPath;
	FString SavePath;
	FString UnrealPakPath;
	TArray<FString> NonAssetFiles;
	bool bHasAssetFiles = false;
	
	// 使用临时变量安全地复制，避免直接访问可能已失效的成员变量
	{
		FString TempModPath = SavedModPath;
		FString TempModFolderPath = SavedModFolderPath;
		FString TempCookedModPath = SavedCookedModPath;
		FString TempSavePath = SavedSavePath;
		FString TempUnrealPakPath = SavedUnrealPakPath;
		TArray<FString> TempNonAssetFiles = SavedNonAssetFiles;
		bool TempHasAssetFiles = bHasAssetFilesToCook;
		
		// 验证关键变量
		if (TempModPath.IsEmpty())
		{
			UE_LOG(LogTemp, Error, TEXT("SavedModPath is empty! Cannot continue packaging."));
			FNotificationInfo Info(LOCTEXT("InvalidModPath", "Invalid mod path! Cannot package mod."));
			Info.ExpireDuration = 5.0f;
			Info.bFireAndForget = true;
			FSlateNotificationManager::Get().AddNotification(Info);
			return;
		}
		
		if (TempUnrealPakPath.IsEmpty() || !FPaths::FileExists(TempUnrealPakPath))
		{
			UE_LOG(LogTemp, Error, TEXT("Invalid UnrealPakPath: %s"), *TempUnrealPakPath);
			FNotificationInfo Info(LOCTEXT("InvalidUnrealPakPath", "UnrealPak.exe path is invalid! Cannot package mod."));
			Info.ExpireDuration = 5.0f;
			Info.bFireAndForget = true;
			FSlateNotificationManager::Get().AddNotification(Info);
			return;
		}
		
		// 所有验证通过后，才赋值给最终变量
		ModPath = MoveTemp(TempModPath);
		ModFolderPath = MoveTemp(TempModFolderPath);
		CookedModPath = MoveTemp(TempCookedModPath);
		SavePath = MoveTemp(TempSavePath);
		UnrealPakPath = MoveTemp(TempUnrealPakPath);
		NonAssetFiles = MoveTemp(TempNonAssetFiles);
		bHasAssetFiles = TempHasAssetFiles;
	}
	
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString ProjectName = FApp::GetProjectName();
	
	// 调试：打印路径信息
	UE_LOG(LogTemp, Log, TEXT("ContinuePackaging - ModPath: %s"), *ModPath);
	UE_LOG(LogTemp, Log, TEXT("ContinuePackaging - CookedModPath: %s"), *CookedModPath);
	UE_LOG(LogTemp, Log, TEXT("ContinuePackaging - CookedModPath exists: %d"), PlatformFile.DirectoryExists(*CookedModPath));
	
	bool bHasCookedContent = PlatformFile.DirectoryExists(*CookedModPath);
	
	// 读取 ModInfo.json 获取 ModId、MainLuaFile、Icon 和 AdditionalAssets
	FString ModInfoJsonPath = ModFolderPath / TEXT("ModInfo.json");
	FString ModId = ModPath; // 默认使用 ModPath 作为 ModId
	FString MainLuaFile;
	FString Icon;
	TArray<FString> AdditionalAssets;
	bool bIncludeGameplayTags = false;
	FString GameplayTagsIniFileField;
	
	if (FPaths::FileExists(ModInfoJsonPath))
	{
		FString JsonContent;
		if (FFileHelper::LoadFileToString(JsonContent, *ModInfoJsonPath))
		{
			TSharedPtr<FJsonObject> JsonObject;
			TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonContent);
			
			if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
			{
				if (JsonObject->HasField(TEXT("ModId")))
				{
					ModId = JsonObject->GetStringField(TEXT("ModId"));
				}
				if (JsonObject->HasField(TEXT("MainLuaFile")))
				{
					MainLuaFile = JsonObject->GetStringField(TEXT("MainLuaFile"));
				}
				if (JsonObject->HasField(TEXT("Icon")))
				{
					Icon = JsonObject->GetStringField(TEXT("Icon"));
				}
				if (JsonObject->HasField(TEXT("IncludeGameplayTags")))
				{
					bIncludeGameplayTags = JsonObject->GetBoolField(TEXT("IncludeGameplayTags"));
				}
				if (JsonObject->HasField(TEXT("GameplayTagsIniFile")))
				{
					GameplayTagsIniFileField = JsonObject->GetStringField(TEXT("GameplayTagsIniFile"));
				}
				// 读取额外资产列表
				if (JsonObject->HasField(TEXT("AdditionalAssets")))
				{
					const TArray<TSharedPtr<FJsonValue>>* AdditionalAssetsArray;
					if (JsonObject->TryGetArrayField(TEXT("AdditionalAssets"), AdditionalAssetsArray))
					{
						for (const TSharedPtr<FJsonValue>& Value : *AdditionalAssetsArray)
						{
							if (Value.IsValid() && Value->Type == EJson::String)
							{
								AdditionalAssets.Add(Value->AsString());
							}
						}
					}
				}
			}
		}
	}
	
	// 构建输出文件夹路径：项目根目录的 Mods/{ModId}
	FString OutputDir = FPaths::ProjectDir() / TEXT("Mods") / ModId;
	FPaths::NormalizeDirectoryName(OutputDir);
	
	// 清理输出文件夹（如果存在），删除所有文件
	if (PlatformFile.DirectoryExists(*OutputDir))
	{
		// 删除目录中的所有文件
		TArray<FString> FilesToDelete;
		PlatformFile.FindFiles(FilesToDelete, *OutputDir, nullptr);
		for (const FString& File : FilesToDelete)
		{
			PlatformFile.DeleteFile(*File);
		}
		
		// 删除目录中的所有子目录
		PlatformFile.IterateDirectory(*OutputDir, [&](const TCHAR* Filename, bool bIsDirectory) -> bool
		{
			if (bIsDirectory)
			{
				FString DirPath = FString(Filename);
				PlatformFile.DeleteDirectoryRecursively(*DirPath);
			}
			return true;
		});
	}
	
	// 重新创建输出文件夹
	PlatformFile.CreateDirectoryTree(*OutputDir);
	
	// 修改 SavePath 为输出文件夹中的 pak 文件
	FString NewSavePath = OutputDir / FString::Printf(TEXT("%s.pak"), *ModId);
	FPaths::NormalizeFilename(NewSavePath);
	
	// 创建临时响应文件
	FString ResponseFilePath = FPaths::CreateTempFilename(*FPaths::ProjectIntermediateDir(), TEXT("PakResponse"), TEXT(".txt"));
	
	// 收集所有需要打包的文件
	TArray<FString> FilesToPackage;
	
	// 从 Cooked 目录收集资产文件
	if (bHasCookedContent)
	{
		TFunction<void(const FString&)> CollectCookedFiles = [&](const FString& DirPath)
		{
			IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
			TFunction<void(const FString&)> IterateDir = [&](const FString& CurrentDir)
			{
				FileManager.IterateDirectory(*CurrentDir, [&](const TCHAR* Filename, bool bIsDirectory) -> bool
				{
					if (bIsDirectory)
					{
						IterateDir(FString(Filename));
					}
					else
					{
						FString FullPath = FString(Filename);
						FPaths::NormalizeFilename(FullPath);
						
						// 只收集 Cooked 后的文件
						FString Extension = FPaths::GetExtension(FullPath, true).ToLower();
						if (Extension == TEXT(".uasset") || Extension == TEXT(".umap") || 
						    Extension == TEXT(".uexp") || Extension == TEXT(".ubulk") || 
						    Extension == TEXT(".uptnl"))
						{
							// 计算相对于 Cooked Mod 文件夹的路径
							FString RelativePath = FullPath;
							FString CookedModPathWithSlash = CookedModPath;
							FPaths::NormalizeDirectoryName(CookedModPathWithSlash);
							if (!CookedModPathWithSlash.EndsWith(TEXT("/")) && !CookedModPathWithSlash.EndsWith(TEXT("\\")))
							{
								CookedModPathWithSlash += TEXT("/");
							}
							
							// 规范化 FullPath 以便比较
							FString NormalizedFullPath = FullPath;
							FPaths::NormalizeFilename(NormalizedFullPath);
							
							// 安全检查：确保路径有效且长度合理
							// 使用不区分大小写的比较（Windows 路径）
							if (!NormalizedFullPath.IsEmpty() && !CookedModPathWithSlash.IsEmpty() && 
							    NormalizedFullPath.Len() >= CookedModPathWithSlash.Len())
							{
								// 转换为小写进行比较（Windows 路径不区分大小写）
								FString LowerFullPath = NormalizedFullPath.ToLower();
								FString LowerCookedPath = CookedModPathWithSlash.ToLower();
								
								if (LowerFullPath.StartsWith(LowerCookedPath))
								{
									int32 PrefixLen = CookedModPathWithSlash.Len();
									if (PrefixLen < NormalizedFullPath.Len())
									{
										RelativePath = NormalizedFullPath.Mid(PrefixLen);
									}
									else
									{
										RelativePath = TEXT("");
									}
									
							RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
							
									// 挂载路径格式：../../../EasternEra/Content/Mods/{ModName}/...
									// 挂载点是 ../../../EasternEra/Content/，文件相对于挂载点的路径是 Mods/{ModName}/...
									FString MountPath = FString::Printf(TEXT("../../../%s/Content/Mods/%s/%s"), *ProjectName, *ModPath, *RelativePath);
									MountPath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
									
									// 验证文件是否存在
									if (FPaths::FileExists(NormalizedFullPath))
									{
										// 响应文件格式："Cook资源路径" "挂载路径"
										// 第一列：Cook 输出的绝对路径
										// 第二列：挂载路径（相对路径，格式为 ../../../EasternEra/Content/Mods/...）
										FString ResponseLine = FString::Printf(TEXT("\"%s\" \"%s\""), *NormalizedFullPath, *MountPath);
							FilesToPackage.Add(ResponseLine);
										
										UE_LOG(LogTemp, Verbose, TEXT("ContinuePackaging - Added file: CookPath=%s, MountPath=%s"), *NormalizedFullPath, *MountPath);
									}
									else
									{
										UE_LOG(LogTemp, Warning, TEXT("ContinuePackaging - File does not exist: %s"), *NormalizedFullPath);
									}
								}
								else
								{
									UE_LOG(LogTemp, Warning, TEXT("ContinuePackaging - FullPath does not start with CookedModPath: %s vs %s"), *NormalizedFullPath, *CookedModPathWithSlash);
								}
							}
							else
							{
								UE_LOG(LogTemp, Warning, TEXT("ContinuePackaging - Invalid path comparison: FullPath=%s, CookedModPathWithSlash=%s"), *NormalizedFullPath, *CookedModPathWithSlash);
							}
						}
					}
					return true;
				});
			};
			IterateDir(DirPath);
		};
		
		CollectCookedFiles(CookedModPath);
		UE_LOG(LogTemp, Log, TEXT("ContinuePackaging - Found %d cooked files"), FilesToPackage.Num());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ContinuePackaging - CookedModPath does not exist: %s"), *CookedModPath);
	}
	
	// 从源目录收集非资产文件（Lua、JSON 等），但排除 MainLuaFile、ModInfo.json 和 Icon
	FString ModInfoJsonPathFull = ModFolderPath / TEXT("ModInfo.json");
	FPaths::NormalizeFilename(ModInfoJsonPathFull);
	FString MainLuaFilePathFull;
	if (!MainLuaFile.IsEmpty())
	{
		// MainLuaFile 可能是相对路径或绝对路径
		if (FPaths::IsRelative(MainLuaFile))
		{
			MainLuaFilePathFull = ModFolderPath / MainLuaFile;
		}
		else
		{
			MainLuaFilePathFull = MainLuaFile;
		}
		FPaths::NormalizeFilename(MainLuaFilePathFull);
	}
	const FString IconFilePathFull = PackageModHelpers::ResolveModIconSourcePath(ModFolderPath, Icon);
	const FString GameplayTagsIniPathFull = PackageModHelpers::ResolveGameplayTagsIniSourcePath(
		ModFolderPath, bIncludeGameplayTags, GameplayTagsIniFileField, ModId);
	
	for (const FString& NonAssetFile : NonAssetFiles)
	{
		FString NormalizedNonAssetFile = NonAssetFile;
		FPaths::NormalizeFilename(NormalizedNonAssetFile);
		
		// 排除 ModInfo.json、MainLuaFile、Icon 与 GameplayTags ini（单独复制到输出目录）
		if (NormalizedNonAssetFile.Equals(ModInfoJsonPathFull, ESearchCase::IgnoreCase) ||
		    (!MainLuaFilePathFull.IsEmpty() && NormalizedNonAssetFile.Equals(MainLuaFilePathFull, ESearchCase::IgnoreCase)) ||
		    (!IconFilePathFull.IsEmpty() && NormalizedNonAssetFile.Equals(IconFilePathFull, ESearchCase::IgnoreCase)) ||
		    (!GameplayTagsIniPathFull.IsEmpty() && NormalizedNonAssetFile.Equals(GameplayTagsIniPathFull, ESearchCase::IgnoreCase)))
		{
			UE_LOG(LogTemp, Log, TEXT("Skipping file (will be copied separately): %s"), *NonAssetFile);
			continue;
		}
		
		// 计算相对于 Mod 文件夹的路径
		FString RelativePath = NonAssetFile;
		FString ModPathWithSlash = ModFolderPath;
		if (!ModPathWithSlash.EndsWith(TEXT("/")) && !ModPathWithSlash.EndsWith(TEXT("\\")))
		{
			ModPathWithSlash += TEXT("/");
		}
		
		// 安全检查：确保路径有效且长度合理
		if (!NonAssetFile.IsEmpty() && !ModPathWithSlash.IsEmpty() &&
		    NonAssetFile.Len() >= ModPathWithSlash.Len() &&
		    NonAssetFile.StartsWith(ModPathWithSlash))
		{
			int32 PrefixLen = ModPathWithSlash.Len();
			if (PrefixLen < NonAssetFile.Len())
			{
				RelativePath = NonAssetFile.Mid(PrefixLen);
			}
			else
			{
				RelativePath = TEXT("");
			}
		}
		RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
		
		// 挂载路径格式：../../../EasternEra/Content/Mods/{ModName}/...
		// 挂载点是 ../../../EasternEra/Content/，文件相对于挂载点的路径是 Mods/{ModName}/...
		FString MountPath = FString::Printf(TEXT("../../../%s/Content/Mods/%s/%s"), *ProjectName, *ModPath, *RelativePath);
		MountPath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
		
		// 响应文件格式："Cook资源路径" "挂载路径"
		// 第一列：源文件路径（绝对路径）
		// 第二列：挂载路径（相对路径，格式为 ../../../EasternEra/Content/Mods/...）
		FString ResponseLine = FString::Printf(TEXT("\"%s\" \"%s\""), *NonAssetFile, *MountPath);
		FilesToPackage.Add(ResponseLine);
	}
	
	// 自动扫描 Content/Script/{ModId} 目录下的 lua 文件并加入打包列表
	FString ScriptDir = FPaths::ProjectContentDir() / TEXT("Script") / ModId;
	FPaths::NormalizeDirectoryName(ScriptDir);
	
	if (PlatformFile.DirectoryExists(*ScriptDir))
	{
		UE_LOG(LogTemp, Log, TEXT("Scanning Script directory: %s"), *ScriptDir);
		
		PlatformFile.IterateDirectory(*ScriptDir, [&](const TCHAR* Filename, bool bIsDirectory) -> bool
		{
			if (!bIsDirectory)
			{
				FString FullPath = FString(Filename);
				FPaths::NormalizeFilename(FullPath);
				FString Extension = FPaths::GetExtension(FullPath, true).ToLower();
				
				// 只处理 lua 文件
				if (Extension == TEXT(".lua"))
				{
					// 计算相对于 Script/{ModId} 的路径
					FString RelativePath = FullPath;
					FString ScriptDirWithSlash = ScriptDir;
					if (!ScriptDirWithSlash.EndsWith(TEXT("/")) && !ScriptDirWithSlash.EndsWith(TEXT("\\")))
					{
						ScriptDirWithSlash += TEXT("/");
					}
					
					if (FullPath.Len() >= ScriptDirWithSlash.Len() && FullPath.StartsWith(ScriptDirWithSlash))
					{
						int32 PrefixLen = ScriptDirWithSlash.Len();
						if (PrefixLen < FullPath.Len())
						{
							RelativePath = FullPath.Mid(PrefixLen);
						}
					}
					RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
					
					// 挂载路径格式：../../../EasternEra/Content/Script/{ModId}/...
					// 挂载点是 ../../../EasternEra/Content/，文件相对于挂载点的路径是 Script/{ModId}/...
					FString MountPath = FString::Printf(TEXT("../../../%s/Content/Script/%s/%s"), *ProjectName, *ModId, *RelativePath);
					MountPath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
					
					// 响应文件格式："Cook资源路径" "挂载路径"
					// 第一列：源文件路径（绝对路径）
					// 第二列：挂载路径（相对路径，格式为 ../../../EasternEra/Content/Script/...）
					FString ResponseLine = FString::Printf(TEXT("\"%s\" \"%s\""), *FullPath, *MountPath);
					FilesToPackage.Add(ResponseLine);
					
					UE_LOG(LogTemp, Log, TEXT("Added Script lua file: %s -> %s"), *FullPath, *MountPath);
				}
			}
			return true;
		});
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Script directory does not exist: %s"), *ScriptDir);
	}
	
	// 处理额外资产列表
	FString ContentDir = FPaths::ProjectContentDir();
	FPaths::NormalizeDirectoryName(ContentDir);
	for (const FString& AdditionalAssetPath : AdditionalAssets)
	{
		if (AdditionalAssetPath.IsEmpty())
		{
			continue;
		}
		
		// 构建完整路径（相对于Content目录）
		FString FullAssetPath = ContentDir / AdditionalAssetPath;
		FPaths::NormalizeFilename(FullAssetPath);
		
		// 检查文件是否存在
		if (PlatformFile.FileExists(*FullAssetPath))
		{
			// 计算相对于Content目录的路径
			FString RelativePath = AdditionalAssetPath;
			RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
			
			// 挂载路径格式：../../../EasternEra/Content/...
			FString MountPath = FString::Printf(TEXT("../../../%s/Content/%s"), *ProjectName, *RelativePath);
			MountPath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
			
			// 检查是否是资产文件（需要从Cooked目录获取）
			FString Extension = FPaths::GetExtension(FullAssetPath, true).ToLower();
			if (Extension == TEXT(".uasset") || Extension == TEXT(".umap"))
			{
				// 资产文件需要从Cooked目录获取
				// 构建Cooked路径
				FString CookedAssetPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / TEXT("Windows") / ProjectName / TEXT("Content") / RelativePath;
				FPaths::NormalizeFilename(CookedAssetPath);
				
				// 检查Cooked路径是否存在，如果不存在尝试其他平台路径
				if (!PlatformFile.FileExists(*CookedAssetPath))
				{
					FString WindowsNoEditorCookedPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / TEXT("WindowsNoEditor") / ProjectName / TEXT("Content") / RelativePath;
					FPaths::NormalizeFilename(WindowsNoEditorCookedPath);
					if (PlatformFile.FileExists(*WindowsNoEditorCookedPath))
					{
						CookedAssetPath = WindowsNoEditorCookedPath;
			}
			else
			{
						// 尝试旧格式路径
						FString LegacyCookedPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / ProjectName / TEXT("Content") / RelativePath;
						FPaths::NormalizeFilename(LegacyCookedPath);
						if (PlatformFile.FileExists(*LegacyCookedPath))
						{
							CookedAssetPath = LegacyCookedPath;
						}
						else
						{
							UE_LOG(LogTemp, Warning, TEXT("Additional asset cooked file not found: %s (tried: %s, %s, %s)"), *RelativePath, *CookedAssetPath, *WindowsNoEditorCookedPath, *LegacyCookedPath);
							continue;
						}
					}
				}
				
				// 使用Cooked路径
				FString ResponseLine = FString::Printf(TEXT("\"%s\" \"%s\""), *CookedAssetPath, *MountPath);
			FilesToPackage.Add(ResponseLine);
				UE_LOG(LogTemp, Log, TEXT("Added additional cooked asset: %s -> %s"), *CookedAssetPath, *MountPath);
			}
			else
			{
				// 非资产文件直接使用源路径
				FString ResponseLine = FString::Printf(TEXT("\"%s\" \"%s\""), *FullAssetPath, *MountPath);
				FilesToPackage.Add(ResponseLine);
				UE_LOG(LogTemp, Log, TEXT("Added additional non-asset file: %s -> %s"), *FullAssetPath, *MountPath);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Additional asset file not found: %s (ContentDir: %s, RelativePath: %s)"), *FullAssetPath, *ContentDir, *AdditionalAssetPath);
			// 尝试检查是否是绝对路径
			if (FPaths::IsRelative(AdditionalAssetPath))
			{
				UE_LOG(LogTemp, Warning, TEXT("Path is relative, but file not found. Make sure the path is correct relative to Content directory."));
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Path appears to be absolute. AdditionalAssets should be relative to Content directory."));
			}
		}
	}
	
	UE_LOG(LogTemp, Log, TEXT("Finished processing AdditionalAssets. Total files to package: %d"), FilesToPackage.Num());
	
	// 写入响应文件
	if (FilesToPackage.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("ContinuePackaging - No files to package!"));
		UE_LOG(LogTemp, Error, TEXT("ContinuePackaging - bHasCookedContent: %d"), bHasCookedContent);
		UE_LOG(LogTemp, Error, TEXT("ContinuePackaging - NonAssetFiles.Num(): %d"), NonAssetFiles.Num());
		FNotificationInfo Info(LOCTEXT("NoFilesToPackage", "No files found to package! Please ensure the mod folder contains files, and if it has asset files, cook the project first."));
		Info.ExpireDuration = 5.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		return;
	}
	
	// 构建响应文件内容（PakList.txt 格式）
	// UnrealPak 响应文件格式：每行是 "Cook资源路径" "挂载路径"
	//   - 第一列：Cook 输出的绝对路径，例如：F:/MyModSource/ConfigTableMod/Content/Data/DA_ModInfo.uasset
	//   - 第二列：挂载路径（相对路径），例如：../../../EasternEra/Content/Mods/ConfigTableMod/Data/DA_ModInfo.uasset
	// 注意：不需要第一行的 MountPoint，每行直接是 "CookPath" "MountPath" 格式
	FString ResponseFileContent = FString::Join(FilesToPackage, TEXT("\n"));
	
	UE_LOG(LogTemp, Log, TEXT("PakList.txt will contain %d files"), FilesToPackage.Num());
	UE_LOG(LogTemp, Log, TEXT("PakList.txt content (first 1000 chars):\n%s"), *ResponseFileContent.Left(1000));
	UE_LOG(LogTemp, Log, TEXT("CookedModPath: %s"), *CookedModPath);
	UE_LOG(LogTemp, Log, TEXT("Note: Format is \"CookPath\" \"MountPath\", where MountPath is ../../../%s/Content/Mods/..."), *ProjectName);
	
	// 验证响应文件中的路径是否正确
	if (FilesToPackage.Num() > 0)
	{
		FString FirstLine = FilesToPackage[0];
		UE_LOG(LogTemp, Log, TEXT("First response line: %s"), *FirstLine);
	}
	
	if (!FFileHelper::SaveStringToFile(ResponseFileContent, *ResponseFilePath))
	{
		FNotificationInfo Info(LOCTEXT("FailedToCreateResponseFile", "Failed to create response file!"));
		Info.ExpireDuration = 3.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		return;
	}

	// 构建 UnrealPak 命令参数
	// UnrealPak.exe <PakFile> -Create=<ResponseFile> -MountPoint=<MountPoint>
	// 确保路径使用完整路径并规范化，避免中文编码问题
	
	// 使用新的 SavePath（已经在上面设置为输出文件夹中的 pak 文件）
	FString FinalSavePath = NewSavePath;
	
	FString SavePathFull = FPaths::ConvertRelativePathToFull(FinalSavePath);
	FString ResponseFilePathFull = FPaths::ConvertRelativePathToFull(ResponseFilePath);
	FPaths::NormalizeFilename(SavePathFull);
	FPaths::NormalizeFilename(ResponseFilePathFull);
	
	// 使用反斜杠转义路径中的引号，确保命令行正确解析
	FString SavePathEscaped = SavePathFull.Replace(TEXT("\""), TEXT("\\\""));
	FString ResponseFilePathEscaped = ResponseFilePathFull.Replace(TEXT("\""), TEXT("\\\""));
	
	// UnrealPak 命令格式：<PakFile> -Create=<ResponseFile>
	// 注意：第一个参数是 pak 文件路径
	// MountPoint 已经在响应文件的第一行指定，所以不需要 -MountPoint 参数
	// 这样 UnrealPak 会直接使用响应文件中的 FullPath 来查找文件
	FString CommandLine = FString::Printf(TEXT("\"%s\" -Create=\"%s\""), 
		*SavePathEscaped, 
		*ResponseFilePathEscaped);
	
	UE_LOG(LogTemp, Log, TEXT("UnrealPak command line: %s"), *CommandLine);
	UE_LOG(LogTemp, Log, TEXT("SavePath: %s"), *SavePathFull);
	UE_LOG(LogTemp, Log, TEXT("ModPath: %s"), *ModPath);
	UE_LOG(LogTemp, Log, TEXT("ResponseFile: %s"), *ResponseFilePathFull);
	
	// 执行 UnrealPak
	// 注意：WorkingDirectory 设置为项目根目录，这样相对路径 MountPoint 才能正确解析
	FString WorkingDirectory = FPaths::ProjectDir();
	FPaths::NormalizeDirectoryName(WorkingDirectory);
	
	// 创建输出管道以捕获 UnrealPak 的输出
	void* ReadPipe = nullptr;
	void* WritePipe = nullptr;
	FPlatformProcess::CreatePipe(ReadPipe, WritePipe);
	
	FProcHandle ProcHandle = FPlatformProcess::CreateProc(
		*UnrealPakPath,
		*CommandLine,
		true,
		true,
		true,
		nullptr,
		0,
		*WorkingDirectory,
		WritePipe,
		ReadPipe,
		nullptr
	);

	if (!ProcHandle.IsValid())
	{
		FPlatformProcess::ClosePipe(ReadPipe, WritePipe);
		UE_LOG(LogTemp, Error, TEXT("Failed to start UnrealPak process!"));
		FNotificationInfo Info(LOCTEXT("FailedToStartUnrealPak", "Failed to start UnrealPak!"));
		Info.ExpireDuration = 3.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		
		// 清理临时文件
		PlatformFile.DeleteFile(*ResponseFilePath);
		return;
	}

	// 创建 Pak 进度通知
	TWeakPtr<SPackageModWindow> WeakThisPtr = StaticCastSharedRef<SPackageModWindow>(AsShared());
	FNotificationInfo PakProgressInfo(LOCTEXT("PackagingMod", "Packaging mod..."));
	PakProgressInfo.bFireAndForget = false;
	PakProgressInfo.bUseSuccessFailIcons = true;
	PakProgressInfo.ExpireDuration = 0.0f;
	TSharedPtr<SNotificationItem> PakNotification = FSlateNotificationManager::Get().AddNotification(PakProgressInfo);
	PakProgressNotification = PakNotification;
	
		// 在后台线程中等待进程完成，避免阻塞主线程
		// 捕获必要的变量
		FString CapturedSavePathFull = SavePathFull;
		FString CapturedResponseFilePath = ResponseFilePath;
		FString CapturedOutputDir = OutputDir;
		FString CapturedModInfoJsonPath = ModInfoJsonPathFull;
		FString CapturedMainLuaFilePath = MainLuaFilePathFull;
		FString CapturedIconFilePath = IconFilePathFull;
		const FString CapturedGameplayTagsSourcePath = GameplayTagsIniPathFull;
		const FString CapturedModIdForTags = ModId;
	
	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [ProcHandle, ReadPipe, WritePipe, CapturedSavePathFull, CapturedResponseFilePath, CapturedOutputDir, CapturedModInfoJsonPath, CapturedMainLuaFilePath, CapturedIconFilePath, CapturedGameplayTagsSourcePath, CapturedModIdForTags, WeakThisPtr]() mutable
	{
		// 等待进程完成，同时定期读取输出并更新进度
	int32 ReturnCode = 0;
		FString AccumulatedOutput;
		FDateTime StartTime = FDateTime::Now();
		
		// 定期检查进程状态并读取输出
		while (FPlatformProcess::IsProcRunning(ProcHandle))
		{
			// 读取新的输出
			if (ReadPipe)
			{
				FString NewOutput = FPlatformProcess::ReadPipe(ReadPipe);
				if (!NewOutput.IsEmpty())
				{
					AccumulatedOutput += NewOutput;
					UE_LOG(LogTemp, Verbose, TEXT("UnrealPak output: %s"), *NewOutput);
					
					// 解析进度并更新通知
					float Progress = SPackageModWindow::ParsePakProgress(AccumulatedOutput);
					if (Progress >= 0.0f)
					{
						FText StatusText = FText::Format(LOCTEXT("PackagingProgress", "Packaging mod... {0}%"), FText::AsNumber(FMath::RoundToInt(Progress * 100.0f)));
						AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, Progress, StatusText]()
						{
							TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
							if (PinnedThis.IsValid())
							{
								PinnedThis->UpdatePakProgress(Progress, StatusText);
							}
						});
					}
					else
					{
						// 如果无法解析进度，显示已用时间
						FTimespan Elapsed = FDateTime::Now() - StartTime;
						FText StatusText = FText::Format(LOCTEXT("PackagingTime", "Packaging mod... ({0}m {1}s)"), 
							FText::AsNumber(Elapsed.GetMinutes()), 
							FText::AsNumber(Elapsed.GetSeconds() % 60));
						AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, StatusText]()
						{
							TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
							if (PinnedThis.IsValid())
							{
								PinnedThis->UpdatePakProgress(-1.0f, StatusText);
							}
						});
					}
				}
			}
			
			// 等待一小段时间再检查
			FPlatformProcess::Sleep(0.5f);
		}
		
		// 进程已完成，获取返回码
	FPlatformProcess::GetProcReturnCode(ProcHandle, &ReturnCode);
		
		// 读取剩余的输出
		FString Output = AccumulatedOutput;
		if (ReadPipe)
		{
			FString RemainingOutput = FPlatformProcess::ReadPipe(ReadPipe);
			if (!RemainingOutput.IsEmpty())
			{
				Output += RemainingOutput;
			}
		}
		
	FPlatformProcess::CloseProc(ProcHandle);
		FPlatformProcess::ClosePipe(ReadPipe, WritePipe);

		UE_LOG(LogTemp, Log, TEXT("UnrealPak process completed with return code: %d"), ReturnCode);
		
		// 如果 UnrealPak 输出不为空，记录输出以便调试
		if (!Output.IsEmpty())
		{
			UE_LOG(LogTemp, Log, TEXT("UnrealPak full output:\n%s"), *Output);
		}

		// 在主线程中处理结果
		AsyncTask(ENamedThreads::GameThread, [ReturnCode, Output, CapturedSavePathFull, CapturedResponseFilePath, CapturedOutputDir, CapturedModInfoJsonPath, CapturedMainLuaFilePath, CapturedIconFilePath, CapturedGameplayTagsSourcePath, CapturedModIdForTags, WeakThisPtr]()
		{
			IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
			
			// 更新并关闭进度通知
			TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
			if (PinnedThis.IsValid())
			{
				TSharedPtr<SNotificationItem> Notification = PinnedThis->PakProgressNotification.Pin();
				if (Notification.IsValid())
				{
					if (ReturnCode == 0)
					{
						Notification->SetCompletionState(SNotificationItem::CS_Success);
						Notification->SetText(LOCTEXT("PackageSuccess", "Mod packaged successfully!"));
					}
					else
					{
						Notification->SetCompletionState(SNotificationItem::CS_Fail);
						Notification->SetText(LOCTEXT("PackageFailed", "Mod packaging failed!"));
					}
					Notification->ExpireAndFadeout();
					PinnedThis->PakProgressNotification.Reset();
				}
			}

	// 清理临时文件
			PlatformFile.DeleteFile(*CapturedResponseFilePath);

			if (ReturnCode == 0)
			{
				if (FPaths::FileExists(CapturedSavePathFull))
				{
					// 检查文件大小
					int64 FileSize = IFileManager::Get().FileSize(*CapturedSavePathFull);
					UE_LOG(LogTemp, Log, TEXT("Pak file created successfully! Size: %lld bytes"), FileSize);
					
					if (FileSize > 0)
					{
						// 更新并拷贝 ModInfo.json 到输出文件夹（确保包含最新的ModToolVersion）
						if (FPaths::FileExists(CapturedModInfoJsonPath))
						{
							FString DestModInfoJson = CapturedOutputDir / TEXT("ModInfo.json");
							
							// 读取原始 ModInfo.json
							FString JsonContent;
							if (FFileHelper::LoadFileToString(JsonContent, *CapturedModInfoJsonPath))
							{
								TSharedPtr<FJsonObject> JsonObject;
								TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonContent);
								
								if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
								{
									// 更新 ModToolVersion 为当前工具版本号
									FString CurrentModToolVersion = UModToolVersion::GetModToolVersion();
									JsonObject->SetStringField(TEXT("ModToolVersion"), CurrentModToolVersion);
									
									// 保存更新后的 JSON
									FString UpdatedJsonContent;
									TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&UpdatedJsonContent);
									FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
									
									if (FFileHelper::SaveStringToFile(UpdatedJsonContent, *DestModInfoJson))
									{
										UE_LOG(LogTemp, Log, TEXT("Updated and saved ModInfo.json with ModToolVersion %s to: %s"), 
											*CurrentModToolVersion, *DestModInfoJson);
									}
									else
									{
										UE_LOG(LogTemp, Warning, TEXT("Failed to save updated ModInfo.json to: %s"), *DestModInfoJson);
									}
								}
								else
								{
									// 如果 JSON 解析失败，直接拷贝原文件
									if (PlatformFile.CopyFile(*DestModInfoJson, *CapturedModInfoJsonPath))
									{
										UE_LOG(LogTemp, Log, TEXT("Copied ModInfo.json (failed to update ModToolVersion) to: %s"), *DestModInfoJson);
									}
									else
									{
										UE_LOG(LogTemp, Warning, TEXT("Failed to copy ModInfo.json to: %s"), *DestModInfoJson);
									}
								}
							}
							else
							{
								// 如果读取失败，直接拷贝原文件
								if (PlatformFile.CopyFile(*DestModInfoJson, *CapturedModInfoJsonPath))
								{
									UE_LOG(LogTemp, Log, TEXT("Copied ModInfo.json to: %s"), *DestModInfoJson);
								}
								else
								{
									UE_LOG(LogTemp, Warning, TEXT("Failed to copy ModInfo.json to: %s"), *DestModInfoJson);
								}
							}
						}
						
						if (!CapturedMainLuaFilePath.IsEmpty() && FPaths::FileExists(CapturedMainLuaFilePath))
						{
							FString MainLuaFileName = FPaths::GetCleanFilename(CapturedMainLuaFilePath);
							FString DestMainLuaFile = CapturedOutputDir / MainLuaFileName;
							if (PlatformFile.CopyFile(*DestMainLuaFile, *CapturedMainLuaFilePath))
							{
								UE_LOG(LogTemp, Log, TEXT("Copied MainLuaFile to: %s"), *DestMainLuaFile);
							}
							else
							{
								UE_LOG(LogTemp, Warning, TEXT("Failed to copy MainLuaFile to: %s"), *DestMainLuaFile);
							}
						}
						
						// 拷贝 Icon 文件到输出文件夹
						if (!CapturedIconFilePath.IsEmpty() && FPaths::FileExists(CapturedIconFilePath))
						{
							FString IconFileName = FPaths::GetCleanFilename(CapturedIconFilePath);
							FString DestIconFile = CapturedOutputDir / IconFileName;
							if (PlatformFile.CopyFile(*DestIconFile, *CapturedIconFilePath))
							{
								UE_LOG(LogTemp, Log, TEXT("Copied Icon to: %s"), *DestIconFile);
							}
							else
							{
								UE_LOG(LogTemp, Warning, TEXT("Failed to copy Icon to: %s"), *DestIconFile);
							}
						}
						
						if (!CapturedGameplayTagsSourcePath.IsEmpty() && FPaths::FileExists(CapturedGameplayTagsSourcePath) && !CapturedModIdForTags.IsEmpty())
						{
							const FString DestTagsIni = CapturedOutputDir / FPaths::GetCleanFilename(CapturedGameplayTagsSourcePath);
							if (PlatformFile.CopyFile(*DestTagsIni, *CapturedGameplayTagsSourcePath))
							{
								UE_LOG(LogTemp, Log, TEXT("Copied GameplayTags ini to: %s"), *DestTagsIni);
							}
							else
							{
								UE_LOG(LogTemp, Warning, TEXT("Failed to copy GameplayTags ini to: %s"), *DestTagsIni);
							}
						}
						
						FNotificationInfo Info(LOCTEXT("PackageSuccessDetails", "Mod packaged successfully!"));
		Info.ExpireDuration = 3.0f;
		Info.bFireAndForget = true;
		Info.bUseSuccessFailIcons = true;
		FSlateNotificationManager::Get().AddNotification(Info);
						
						// 处理下一个mod或清除打包状态
						if (PinnedThis.IsValid())
						{
							// 从队列中移除当前mod
							if (PinnedThis->ModPackagingQueue.Num() > 0)
							{
								PinnedThis->ModPackagingQueue.RemoveAt(0);
							}
							
							// 如果还有待处理的mod，继续打包下一个
							if (PinnedThis->ModPackagingQueue.Num() > 0)
							{
								PinnedThis->PackageSingleMod(PinnedThis->ModPackagingQueue[0]);
	}
	else
	{
								// 所有mod处理完成
								PinnedThis->bIsPackaging = false;
								PinnedThis->bIsCheckboxEnabled = true; // 重新启用复选框
								if (PinnedThis->StatusTextBlock.IsValid())
								{
									PinnedThis->StatusTextBlock->SetText(PinnedThis->GetStatusText());
								}
								if (PinnedThis->PackageButton.IsValid())
								{
									PinnedThis->PackageButton->SetEnabled(PinnedThis->IsPackageEnabled());
								}
								// 刷新列表视图以更新复选框状态
								if (PinnedThis->ModListView.IsValid())
								{
									PinnedThis->ModListView->RequestListRefresh();
								}
								
								FNotificationInfo AllDoneInfo(LOCTEXT("AllModsPackaged", "All mods packaged successfully!"));
								AllDoneInfo.ExpireDuration = 3.0f;
								AllDoneInfo.bFireAndForget = true;
								AllDoneInfo.bUseSuccessFailIcons = true;
								FSlateNotificationManager::Get().AddNotification(AllDoneInfo);
							}
						}
					}
					else
					{
						UE_LOG(LogTemp, Warning, TEXT("Pak file created but size is 0!"));
						FNotificationInfo Info(LOCTEXT("PackageEmpty", "Pak file created but is empty! Check response file and cooked files."));
		Info.ExpireDuration = 5.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
						
						// 处理下一个mod或清除打包状态
						if (PinnedThis.IsValid())
						{
							// 从队列中移除当前mod
							if (PinnedThis->ModPackagingQueue.Num() > 0)
							{
								PinnedThis->ModPackagingQueue.RemoveAt(0);
							}
							
							// 如果还有待处理的mod，继续打包下一个
							if (PinnedThis->ModPackagingQueue.Num() > 0)
							{
								PinnedThis->PackageSingleMod(PinnedThis->ModPackagingQueue[0]);
							}
							else
							{
								// 所有mod处理完成
								PinnedThis->bIsPackaging = false;
								PinnedThis->bIsCheckboxEnabled = true; // 重新启用复选框
								if (PinnedThis->StatusTextBlock.IsValid())
								{
									PinnedThis->StatusTextBlock->SetText(PinnedThis->GetStatusText());
								}
								if (PinnedThis->PackageButton.IsValid())
								{
									PinnedThis->PackageButton->SetEnabled(PinnedThis->IsPackageEnabled());
								}
								// 刷新列表视图以更新复选框状态
								if (PinnedThis->ModListView.IsValid())
								{
									PinnedThis->ModListView->RequestListRefresh();
								}
							}
						}
					}
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("UnrealPak returned 0 but pak file does not exist!"));
					FNotificationInfo Info(LOCTEXT("PackageFileNotFound", "UnrealPak completed but pak file not found! Check Output Log for details."));
					Info.ExpireDuration = 5.0f;
					Info.bFireAndForget = true;
					FSlateNotificationManager::Get().AddNotification(Info);
					
					// 处理下一个mod或清除打包状态
					if (PinnedThis.IsValid())
					{
						// 从队列中移除当前mod
						if (PinnedThis->ModPackagingQueue.Num() > 0)
						{
							PinnedThis->ModPackagingQueue.RemoveAt(0);
						}
						
						// 如果还有待处理的mod，继续打包下一个
						if (PinnedThis->ModPackagingQueue.Num() > 0)
						{
							PinnedThis->PackageSingleMod(PinnedThis->ModPackagingQueue[0]);
						}
						else
						{
							// 所有mod处理完成
							PinnedThis->bIsPackaging = false;
							PinnedThis->bIsCheckboxEnabled = true; // 重新启用复选框
							if (PinnedThis->StatusTextBlock.IsValid())
							{
								PinnedThis->StatusTextBlock->SetText(PinnedThis->GetStatusText());
							}
							if (PinnedThis->PackageButton.IsValid())
							{
								PinnedThis->PackageButton->SetEnabled(PinnedThis->IsPackageEnabled());
							}
							// 刷新列表视图以更新复选框状态
							if (PinnedThis->ModListView.IsValid())
							{
								PinnedThis->ModListView->RequestListRefresh();
							}
						}
					}
				}
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("UnrealPak failed with return code: %d"), ReturnCode);
				if (!Output.IsEmpty())
				{
					UE_LOG(LogTemp, Error, TEXT("UnrealPak error output:\n%s"), *Output);
				}
				
				FNotificationInfo Info(LOCTEXT("PackageFailedDetails", "Mod packaging failed! Check Output Log for details."));
				Info.ExpireDuration = 5.0f;
	Info.bFireAndForget = true;
	FSlateNotificationManager::Get().AddNotification(Info);
				
				// 处理下一个mod或清除打包状态
				if (PinnedThis.IsValid())
				{
					// 从队列中移除当前mod
					if (PinnedThis->ModPackagingQueue.Num() > 0)
					{
						PinnedThis->ModPackagingQueue.RemoveAt(0);
					}
					
					// 如果还有待处理的mod，继续打包下一个
					if (PinnedThis->ModPackagingQueue.Num() > 0)
					{
						PinnedThis->PackageSingleMod(PinnedThis->ModPackagingQueue[0]);
					}
					else
					{
						// 所有mod处理完成
						PinnedThis->bIsPackaging = false;
						PinnedThis->bIsCheckboxEnabled = true; // 重新启用复选框
						if (PinnedThis->StatusTextBlock.IsValid())
						{
							PinnedThis->StatusTextBlock->SetText(PinnedThis->GetStatusText());
						}
						if (PinnedThis->PackageButton.IsValid())
						{
							PinnedThis->PackageButton->SetEnabled(PinnedThis->IsPackageEnabled());
						}
						// 刷新列表视图以更新复选框状态
						if (PinnedThis->ModListView.IsValid())
						{
							PinnedThis->ModListView->RequestListRefresh();
						}
					}
				}
			}
		});
	});
}

void SPackageModWindow::UpdateCookProgress(float Progress, const FText& StatusText)
{
	TSharedPtr<SNotificationItem> Notification = CookProgressNotification.Pin();
	if (Notification.IsValid())
	{
		Notification->SetText(StatusText);
		if (Progress >= 0.0f && Progress <= 1.0f)
		{
			Notification->SetCompletionState(SNotificationItem::CS_Pending);
			Notification->SetExpireDuration(0.0f); // 不自动过期
		}
	}
}

void SPackageModWindow::UpdatePakProgress(float Progress, const FText& StatusText)
{
	TSharedPtr<SNotificationItem> Notification = PakProgressNotification.Pin();
	if (Notification.IsValid())
	{
		Notification->SetText(StatusText);
		if (Progress >= 0.0f && Progress <= 1.0f)
		{
			Notification->SetCompletionState(SNotificationItem::CS_Pending);
			Notification->SetExpireDuration(0.0f); // 不自动过期
		}
	}
}

float SPackageModWindow::ParseCookProgress(const FString& Output)
{
	// 尝试从输出中解析进度信息
	// Cook 命令通常会输出类似 "Cooked X/Y packages" 或百分比信息
	
	// 方法1: 查找百分比模式，例如 "50%" 或 "50.5%"
	// 使用简单的字符串搜索来查找百分比
	int32 PercentPos = Output.Find(TEXT("%"), ESearchCase::CaseSensitive, ESearchDir::FromEnd);
	if (PercentPos != INDEX_NONE)
	{
		// 向前查找数字
		int32 StartPos = PercentPos - 1;
		while (StartPos >= 0 && (FChar::IsDigit(Output[StartPos]) || Output[StartPos] == TEXT('.')))
		{
			StartPos--;
		}
		StartPos++; // 调整到数字开始位置
		
		if (StartPos < PercentPos)
		{
			FString PercentStr = Output.Mid(StartPos, PercentPos - StartPos);
			float Percent = FCString::Atof(*PercentStr);
			if (Percent > 0.0f && Percent <= 100.0f)
			{
				return Percent / 100.0f;
			}
		}
	}
	
	// 方法2: 查找 "Cooked X/Y" 模式
	int32 CookedPos = Output.Find(TEXT("Cooked"), ESearchCase::IgnoreCase);
	if (CookedPos != INDEX_NONE)
	{
		// 查找 "X/Y" 模式
		int32 SlashPos = Output.Find(TEXT("/"), ESearchCase::CaseSensitive, ESearchDir::FromStart, CookedPos);
		if (SlashPos != INDEX_NONE)
		{
			// 向前查找第一个数字
			int32 FirstNumEnd = SlashPos - 1;
			int32 FirstNumStart = FirstNumEnd;
			while (FirstNumStart > CookedPos && FChar::IsDigit(Output[FirstNumStart - 1]))
			{
				FirstNumStart--;
			}
			
			// 向后查找第二个数字
			int32 SecondNumStart = SlashPos + 1;
			int32 SecondNumEnd = SecondNumStart;
			while (SecondNumEnd < Output.Len() && FChar::IsDigit(Output[SecondNumEnd]))
			{
				SecondNumEnd++;
			}
			
			if (FirstNumStart < FirstNumEnd && SecondNumStart < SecondNumEnd)
			{
				FString CookedStr = Output.Mid(FirstNumStart, FirstNumEnd - FirstNumStart);
				FString TotalStr = Output.Mid(SecondNumStart, SecondNumEnd - SecondNumStart);
				
				int32 Cooked = FCString::Atoi(*CookedStr);
				int32 Total = FCString::Atoi(*TotalStr);
				
				if (Total > 0 && Cooked >= 0 && Cooked <= Total)
				{
					return static_cast<float>(Cooked) / static_cast<float>(Total);
				}
			}
		}
	}
	
	// 如果都没有找到，返回 -1 表示无法确定进度
	return -1.0f;
}

float SPackageModWindow::ParsePakProgress(const FString& Output)
{
	// 尝试从 UnrealPak 输出中解析进度信息
	// UnrealPak 通常会输出类似 "X/Y files" 或百分比信息
	
	// 方法1: 查找百分比模式，例如 "50%" 或 "50.5%"
	int32 PercentPos = Output.Find(TEXT("%"), ESearchCase::CaseSensitive, ESearchDir::FromEnd);
	if (PercentPos != INDEX_NONE)
	{
		// 向前查找数字
		int32 StartPos = PercentPos - 1;
		while (StartPos >= 0 && (FChar::IsDigit(Output[StartPos]) || Output[StartPos] == TEXT('.')))
		{
			StartPos--;
		}
		StartPos++; // 调整到数字开始位置
		
		if (StartPos < PercentPos)
		{
			FString PercentStr = Output.Mid(StartPos, PercentPos - StartPos);
			float Percent = FCString::Atof(*PercentStr);
			if (Percent > 0.0f && Percent <= 100.0f)
			{
				return Percent / 100.0f;
			}
		}
	}
	
	// 方法2: 查找 "X/Y files" 或 "X/Y" 模式
	int32 FilesPos = Output.Find(TEXT("files"), ESearchCase::IgnoreCase);
	if (FilesPos == INDEX_NONE)
	{
		FilesPos = Output.Len(); // 如果没有找到 "files"，搜索整个字符串
	}
	
	// 在 "files" 之前查找 "X/Y" 模式
	int32 SlashPos = Output.Find(TEXT("/"), ESearchCase::CaseSensitive, ESearchDir::FromEnd, FilesPos);
	if (SlashPos != INDEX_NONE)
	{
		// 向前查找第一个数字
		int32 FirstNumEnd = SlashPos - 1;
		int32 FirstNumStart = FirstNumEnd;
		while (FirstNumStart > 0 && FChar::IsDigit(Output[FirstNumStart - 1]))
		{
			FirstNumStart--;
		}
		
		// 向后查找第二个数字
		int32 SecondNumStart = SlashPos + 1;
		int32 SecondNumEnd = SecondNumStart;
		while (SecondNumEnd < FilesPos && FChar::IsDigit(Output[SecondNumEnd]))
		{
			SecondNumEnd++;
		}
		
		if (FirstNumStart < FirstNumEnd && SecondNumStart < SecondNumEnd)
		{
			FString FirstNumStr = Output.Mid(FirstNumStart, FirstNumEnd - FirstNumStart + 1);
			FString SecondNumStr = Output.Mid(SecondNumStart, SecondNumEnd - SecondNumStart);
			
			int32 FirstNum = FCString::Atoi(*FirstNumStr);
			int32 SecondNum = FCString::Atoi(*SecondNumStr);
			
			if (SecondNum > 0 && FirstNum >= 0 && FirstNum <= SecondNum)
			{
				return static_cast<float>(FirstNum) / static_cast<float>(SecondNum);
			}
		}
	}
	
	return -1.0f; // 无法解析进度
}

bool SPackageModWindow::ExecuteCook(const FString& InModPath, const FString& InModFolderPath, const FString& InCookedModPath,
	const FString& InSavePath, const FString& InUnrealPakPath, const TArray<FString>& InNonAssetFiles, bool bInHasAssetFiles)
{
	FString ProjectName = FApp::GetProjectName();
	FString ProjectPath = FPaths::GetProjectFilePath();
	
	// 创建可更新的进度通知
	FNotificationInfo Info(LOCTEXT("CookingStarted", "Cooking project assets..."));
	Info.ExpireDuration = 0.0f; // 不自动过期，手动控制
	Info.bFireAndForget = false; // 需要手动管理
	Info.bUseLargeFont = false;
	Info.bUseSuccessFailIcons = false;
	CookProgressNotification = FSlateNotificationManager::Get().AddNotification(Info);
	if (CookProgressNotification.IsValid())
	{
		CookProgressNotification.Pin()->SetCompletionState(SNotificationItem::CS_Pending);
	}
	
	// 在 lambda 中捕获所有需要的值，避免访问可能已失效的成员变量
	FString CapturedModPath = InModPath;
	FString CapturedModFolderPath = InModFolderPath;
	FString CapturedCookedModPath = InCookedModPath;
	FString CapturedSavePath = InSavePath;
	FString CapturedUnrealPakPath = InUnrealPakPath;
	TArray<FString> CapturedNonAssetFiles = InNonAssetFiles;
	bool CapturedHasAssetFiles = bInHasAssetFiles;
	
	// 在主线程中获取 WeakPtr，避免在后台线程中调用 AsShared()
	TWeakPtr<SPackageModWindow> WeakThisPtr = StaticCastSharedRef<SPackageModWindow>(AsShared());
	
	// 使用 CookCommandlet 来执行 Cook
	// 在后台线程中执行，避免阻塞编辑器
	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [WeakThisPtr, ProjectPath, ProjectName, CapturedModPath, CapturedModFolderPath, CapturedCookedModPath, CapturedSavePath, CapturedUnrealPakPath, CapturedNonAssetFiles, CapturedHasAssetFiles]()
	{
		
		// 注意：Unreal Engine的Cook命令不支持只Cook特定目录的资产
		// Cook命令会Cook整个项目的所有资产，但我们可以只使用Cooked后的mod资产进行打包
		// 构建Cook输出目录
		FString CookDir = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("Cooked"), ProjectName);
		FPaths::NormalizeDirectoryName(CookDir);
		
		// Cook命令参数说明：
		// -run=Cook 执行Cook命令
		// -TargetPlatform=Windows 指定目标平台（Windows平台）
		// -CookDir 指定Cook输出目录（注意：这是输出目录，不是限制Cook范围）
		// -Unversioned 不包含版本信息
		// -Compressed 压缩资源
		// 注意：Cook会处理整个项目，但后续打包时只会使用mod相关的Cooked资产
		// 注意：Cook输出路径可能是 Saved/Cooked/Windows/... 或 Saved/Cooked/WindowsNoEditor/...
		FString CookCommandLine = FString::Printf(
			TEXT("-run=Cook -TargetPlatform=Windows -CookDir=\"%s\" -Unversioned -Compressed"),
			*CookDir
		);
		
		UE_LOG(LogTemp, Log, TEXT("Starting Cook with command line: %s"), *CookCommandLine);
		
		// 使用 UnrealEditor-Cmd.exe 执行 CookCommandlet
		FString EngineDir = FPaths::EngineDir();
		FString UnrealEditorCmdPath = EngineDir / TEXT("Binaries") / FPlatformProcess::GetBinariesSubdirectory() / TEXT("UnrealEditor-Cmd.exe");
		
		// 如果 UnrealEditor-Cmd.exe 不存在，尝试其他路径
		if (!FPaths::FileExists(UnrealEditorCmdPath))
		{
			UnrealEditorCmdPath = EngineDir / TEXT("Binaries") / TEXT("Win64") / TEXT("UnrealEditor-Cmd.exe");
		}
		
		if (!FPaths::FileExists(UnrealEditorCmdPath))
		{
			UE_LOG(LogTemp, Error, TEXT("UnrealEditor-Cmd.exe not found!"));
			AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, CapturedModPath, CapturedModFolderPath, CapturedCookedModPath, CapturedSavePath, CapturedUnrealPakPath, CapturedNonAssetFiles, CapturedHasAssetFiles]()
			{
				TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
				if (PinnedThis.IsValid())
			{
				FNotificationInfo ErrorInfo(LOCTEXT("UnrealEditorCmdNotFound", "UnrealEditor-Cmd.exe not found! Falling back to RunUAT method."));
				ErrorInfo.ExpireDuration = 5.0f;
				ErrorInfo.bFireAndForget = true;
				FSlateNotificationManager::Get().AddNotification(ErrorInfo);
				
					// 回退到 RunUAT 方法，传递捕获的值
					PinnedThis->ExecuteCookWithRunUAT(CapturedModPath, CapturedModFolderPath, CapturedCookedModPath, CapturedSavePath, CapturedUnrealPakPath, CapturedNonAssetFiles, CapturedHasAssetFiles);
				}
			});
			return;
		}
		
		// 构建完整命令行：项目路径 + Cook 参数
		FString FullCommandLine = FString::Printf(TEXT("\"%s\" %s"), *ProjectPath, *CookCommandLine);
		
		// 创建输出管道
		void* ReadPipe = nullptr;
		void* WritePipe = nullptr;
		FPlatformProcess::CreatePipe(ReadPipe, WritePipe);
		
		FString WorkingDirectory = FPaths::GetPath(UnrealEditorCmdPath);
		FProcHandle ProcHandle = FPlatformProcess::CreateProc(
			*UnrealEditorCmdPath,
			*FullCommandLine,
			true,
			true,
			true,
			nullptr,
			0,
			*WorkingDirectory,
			WritePipe,
			ReadPipe,
			nullptr
		);
		
		if (!ProcHandle.IsValid())
		{
			FPlatformProcess::ClosePipe(ReadPipe, WritePipe);
			UE_LOG(LogTemp, Error, TEXT("Failed to start Cook process!"));
			
			AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, CapturedModPath, CapturedModFolderPath, CapturedCookedModPath, CapturedSavePath, CapturedUnrealPakPath, CapturedNonAssetFiles, CapturedHasAssetFiles]()
			{
				TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
				if (PinnedThis.IsValid())
			{
				FNotificationInfo ErrorInfo(LOCTEXT("CookStartFailed", "Failed to start cook process! Falling back to RunUAT method."));
				ErrorInfo.ExpireDuration = 5.0f;
				ErrorInfo.bFireAndForget = true;
				FSlateNotificationManager::Get().AddNotification(ErrorInfo);
				
					// 回退到 RunUAT 方法，传递捕获的值
					PinnedThis->ExecuteCookWithRunUAT(CapturedModPath, CapturedModFolderPath, CapturedCookedModPath, CapturedSavePath, CapturedUnrealPakPath, CapturedNonAssetFiles, CapturedHasAssetFiles);
				}
			});
			return;
		}
		
		// 等待 Cook 完成，同时定期读取输出并更新进度
		int32 ReturnCode = 0;
		FString AccumulatedOutput;
		FDateTime StartTime = FDateTime::Now();
		
		// 定期检查进程状态并读取输出
		while (FPlatformProcess::IsProcRunning(ProcHandle))
		{
			// 读取新的输出
			if (ReadPipe)
			{
				FString NewOutput = FPlatformProcess::ReadPipe(ReadPipe);
				if (!NewOutput.IsEmpty())
				{
					AccumulatedOutput += NewOutput;
					UE_LOG(LogTemp, Verbose, TEXT("Cook output: %s"), *NewOutput);
					
					// 解析进度并更新通知
					float Progress = SPackageModWindow::ParseCookProgress(AccumulatedOutput);
					if (Progress >= 0.0f)
					{
						FText StatusText = FText::Format(LOCTEXT("CookingProgress", "Cooking project assets... {0}%"), FText::AsNumber(FMath::RoundToInt(Progress * 100.0f)));
						AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, Progress, StatusText]()
						{
							TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
							if (PinnedThis.IsValid())
							{
								PinnedThis->UpdateCookProgress(Progress, StatusText);
							}
						});
					}
					else
					{
						// 如果无法解析进度，显示已用时间
						FTimespan Elapsed = FDateTime::Now() - StartTime;
						FText StatusText = FText::Format(LOCTEXT("CookingTime", "Cooking project assets... ({0}m {1}s)"), 
							FText::AsNumber(Elapsed.GetMinutes()), 
							FText::AsNumber(Elapsed.GetSeconds() % 60));
						AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, StatusText]()
						{
							TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
							if (PinnedThis.IsValid())
							{
								PinnedThis->UpdateCookProgress(-1.0f, StatusText);
							}
						});
					}
				}
			}
			
			// 等待一小段时间再检查
			FPlatformProcess::Sleep(0.5f);
		}
		
		// 进程已完成，获取返回码
		FPlatformProcess::GetProcReturnCode(ProcHandle, &ReturnCode);
		
		// 读取剩余的输出
		if (ReadPipe)
		{
			FString RemainingOutput = FPlatformProcess::ReadPipe(ReadPipe);
			if (!RemainingOutput.IsEmpty())
			{
				AccumulatedOutput += RemainingOutput;
			}
		}
		
		FString Output = AccumulatedOutput;
			if (!Output.IsEmpty())
			{
				UE_LOG(LogTemp, Log, TEXT("Cook process output:\n%s"), *Output);
		}
		
		FPlatformProcess::CloseProc(ProcHandle);
		FPlatformProcess::ClosePipe(ReadPipe, WritePipe);
		
		UE_LOG(LogTemp, Log, TEXT("Cook process completed with return code: %d"), ReturnCode);
		
		// 在主线程中处理结果
		// 使用外层 lambda 捕获的值（从函数参数传入的 CapturedModPath 等）
		// 注意：即使窗口已关闭，如果 Cook 成功，也应该继续执行打包
		AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, ReturnCode, ProjectName, Output, CapturedModPath, CapturedCookedModPath, CapturedSavePath, CapturedUnrealPakPath, CapturedNonAssetFiles, CapturedHasAssetFiles]()
		{
			TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
			if (PinnedThis.IsValid())
			{
				PinnedThis->HandleCookResult(ReturnCode, ProjectName, Output, CapturedModPath, CapturedCookedModPath, CapturedSavePath, CapturedUnrealPakPath, CapturedNonAssetFiles, CapturedHasAssetFiles);
			}
			else
			{
				// 窗口已关闭，但如果 Cook 成功，仍然继续执行打包
				UE_LOG(LogTemp, Log, TEXT("SPackageModWindow object is no longer valid, but continuing packaging if cook succeeded"));
				if (ReturnCode == 0)
				{
					// 直接调用静态打包函数，不依赖窗口对象
					SPackageModWindow::HandleCookResultStandalone(ReturnCode, ProjectName, Output, CapturedModPath, CapturedCookedModPath, CapturedSavePath, CapturedUnrealPakPath, CapturedNonAssetFiles, CapturedHasAssetFiles);
				}
			}
		});
	});
	
	return true;
}

bool SPackageModWindow::ExecuteCookWithRunUAT(const FString& InModPath, const FString& InModFolderPath, const FString& InCookedModPath,
	const FString& InSavePath, const FString& InUnrealPakPath, const TArray<FString>& InNonAssetFiles, bool bInHasAssetFiles)
{
	FString ProjectName = FApp::GetProjectName();
	FString ProjectPath = FPaths::GetProjectFilePath();
	FString EngineDir = FPaths::EngineDir();
	FString BatchFilesDir = EngineDir / TEXT("Build") / TEXT("BatchFiles");
	FString RunUATPath = BatchFilesDir / TEXT("RunUAT.bat");
	
	// 检查 RunUAT.bat 是否存在
	if (!FPaths::FileExists(RunUATPath))
	{
		UE_LOG(LogTemp, Error, TEXT("RunUAT.bat not found at: %s"), *RunUATPath);
		FNotificationInfo ErrorInfo(LOCTEXT("RunUATNotFound", "RunUAT.bat not found! Please ensure Unreal Engine is properly installed."));
		ErrorInfo.ExpireDuration = 5.0f;
		ErrorInfo.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(ErrorInfo);
		return false;
	}
	
	// 如果还没有创建进度通知，创建一个
	if (!CookProgressNotification.IsValid())
	{
		FNotificationInfo Info(LOCTEXT("CookingStarted", "Cooking project assets..."));
		Info.ExpireDuration = 0.0f;
		Info.bFireAndForget = false;
		Info.bUseLargeFont = false;
		Info.bUseSuccessFailIcons = false;
		CookProgressNotification = FSlateNotificationManager::Get().AddNotification(Info);
		if (CookProgressNotification.IsValid())
		{
			CookProgressNotification.Pin()->SetCompletionState(SNotificationItem::CS_Pending);
		}
	}
	
	// 在 lambda 中捕获所有需要的值
	FString CapturedModPath = InModPath;
	FString CapturedModFolderPath = InModFolderPath;
	FString CapturedCookedModPath = InCookedModPath;
	FString CapturedSavePath = InSavePath;
	FString CapturedUnrealPakPath = InUnrealPakPath;
	TArray<FString> CapturedNonAssetFiles = InNonAssetFiles;
	bool CapturedHasAssetFiles = bInHasAssetFiles;
	
	// 注意：Unreal Engine的Cook命令不支持只Cook特定目录的资产
	// Cook命令会Cook整个项目的所有资产，但我们可以只使用Cooked后的mod资产进行打包
	// 构建 Cook 命令
	// 注意：RunUAT的BuildCookRun会Cook整个项目，但后续打包时只会使用mod相关的Cooked资产
	FString CookCommandLine = FString::Printf(
		TEXT("-ScriptsForProject=\"%s\" BuildCookRun -project=\"%s\" -cook -platform=Win64 -targetplatform=Win64 -nocompileeditor -utf8output -ddc=InstalledDerivedDataBackendGraph -installed"),
		*ProjectPath,
		*ProjectPath
	);
	
	UE_LOG(LogTemp, Log, TEXT("Starting Cook with RunUAT: %s %s"), *RunUATPath, *CookCommandLine);
	
	// 在主线程中获取 WeakPtr，避免在后台线程中调用 AsShared()
	TWeakPtr<SPackageModWindow> WeakThisPtr = StaticCastSharedRef<SPackageModWindow>(AsShared());
	
	// 在后台线程中执行 Cook
	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [WeakThisPtr, RunUATPath, CookCommandLine, ProjectName, CapturedModPath, CapturedModFolderPath, CapturedCookedModPath, CapturedSavePath, CapturedUnrealPakPath, CapturedNonAssetFiles, CapturedHasAssetFiles]()
	{
		// 执行 Cook 命令
		FString WorkingDirectory = FPaths::GetPath(RunUATPath);
		
		// 创建输出和错误管道来捕获日志
		void* ReadPipe = nullptr;
		void* WritePipe = nullptr;
		FPlatformProcess::CreatePipe(ReadPipe, WritePipe);
		
		FProcHandle ProcHandle = FPlatformProcess::CreateProc(
			*RunUATPath,
			*CookCommandLine,
			true,
			true,
			true,
			nullptr,
			0,
			*WorkingDirectory,
			WritePipe,
			ReadPipe,
			nullptr
		);
		
		if (!ProcHandle.IsValid())
		{
			FPlatformProcess::ClosePipe(ReadPipe, WritePipe);
			UE_LOG(LogTemp, Error, TEXT("Failed to start Cook process! RunUAT: %s, CommandLine: %s"), *RunUATPath, *CookCommandLine);
			
			AsyncTask(ENamedThreads::GameThread, [WeakThisPtr]()
			{
				TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
				if (PinnedThis.IsValid())
			{
				FNotificationInfo ErrorInfo(LOCTEXT("CookStartFailed", "Failed to start cook process! Check Output Log for details."));
				ErrorInfo.ExpireDuration = 5.0f;
				ErrorInfo.bFireAndForget = true;
				FSlateNotificationManager::Get().AddNotification(ErrorInfo);
				}
			});
			return;
		}
		
		// 等待 Cook 完成，同时定期读取输出并更新进度
		int32 ReturnCode = 0;
		FString AccumulatedOutput;
		FDateTime StartTime = FDateTime::Now();
		
		// 定期检查进程状态并读取输出
		while (FPlatformProcess::IsProcRunning(ProcHandle))
		{
			// 读取新的输出
			if (ReadPipe)
			{
				FString NewOutput = FPlatformProcess::ReadPipe(ReadPipe);
				if (!NewOutput.IsEmpty())
				{
					AccumulatedOutput += NewOutput;
					UE_LOG(LogTemp, Verbose, TEXT("Cook output: %s"), *NewOutput);
					
					// 解析进度并更新通知
					float Progress = SPackageModWindow::ParseCookProgress(AccumulatedOutput);
					if (Progress >= 0.0f)
					{
						FText StatusText = FText::Format(LOCTEXT("CookingProgress", "Cooking project assets... {0}%"), FText::AsNumber(FMath::RoundToInt(Progress * 100.0f)));
						AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, Progress, StatusText]()
						{
							TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
							if (PinnedThis.IsValid())
							{
								PinnedThis->UpdateCookProgress(Progress, StatusText);
							}
						});
					}
					else
					{
						// 如果无法解析进度，显示已用时间
						FTimespan Elapsed = FDateTime::Now() - StartTime;
						FText StatusText = FText::Format(LOCTEXT("CookingTime", "Cooking project assets... ({0}m {1}s)"), 
							FText::AsNumber(Elapsed.GetMinutes()), 
							FText::AsNumber(Elapsed.GetSeconds() % 60));
						AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, StatusText]()
						{
							TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
							if (PinnedThis.IsValid())
							{
								PinnedThis->UpdateCookProgress(-1.0f, StatusText);
							}
						});
					}
				}
			}
			
			// 等待一小段时间再检查
			FPlatformProcess::Sleep(0.5f);
		}
		
		// 进程已完成，获取返回码
		FPlatformProcess::GetProcReturnCode(ProcHandle, &ReturnCode);
		
		// 读取剩余的输出
		if (ReadPipe)
		{
			FString RemainingOutput = FPlatformProcess::ReadPipe(ReadPipe);
			if (!RemainingOutput.IsEmpty())
			{
				AccumulatedOutput += RemainingOutput;
			}
		}
		
		FString Output = AccumulatedOutput;
			if (!Output.IsEmpty())
			{
				UE_LOG(LogTemp, Log, TEXT("Cook process output:\n%s"), *Output);
		}
		
		FPlatformProcess::CloseProc(ProcHandle);
		FPlatformProcess::ClosePipe(ReadPipe, WritePipe);
		
		UE_LOG(LogTemp, Log, TEXT("Cook process completed with return code: %d"), ReturnCode);
		
		// 在主线程中处理结果
		// 使用外层 lambda 捕获的值（从函数参数传入的 CapturedModPath 等）
		// 注意：即使窗口已关闭，如果 Cook 成功，也应该继续执行打包
		AsyncTask(ENamedThreads::GameThread, [WeakThisPtr, ReturnCode, ProjectName, Output, CapturedModPath, CapturedCookedModPath, CapturedSavePath, CapturedUnrealPakPath, CapturedNonAssetFiles, CapturedHasAssetFiles]()
		{
			TSharedPtr<SPackageModWindow> PinnedThis = WeakThisPtr.Pin();
			if (PinnedThis.IsValid())
			{
				PinnedThis->HandleCookResult(ReturnCode, ProjectName, Output, CapturedModPath, CapturedCookedModPath, CapturedSavePath, CapturedUnrealPakPath, CapturedNonAssetFiles, CapturedHasAssetFiles);
			}
			else
			{
				// 窗口已关闭，但如果 Cook 成功，仍然继续执行打包
				UE_LOG(LogTemp, Log, TEXT("SPackageModWindow object is no longer valid, but continuing packaging if cook succeeded"));
				if (ReturnCode == 0)
				{
					// 直接调用静态打包函数，不依赖窗口对象
					SPackageModWindow::HandleCookResultStandalone(ReturnCode, ProjectName, Output, CapturedModPath, CapturedCookedModPath, CapturedSavePath, CapturedUnrealPakPath, CapturedNonAssetFiles, CapturedHasAssetFiles);
				}
			}
		});
	});
	
	return true;
}

void SPackageModWindow::HandleCookResult(int32 ReturnCode, const FString& ProjectName, const FString& Output, 
	const FString& InModPath, const FString& InCookedModPath, const FString& InSavePath, 
	const FString& InUnrealPakPath, const TArray<FString>& InNonAssetFiles, bool bInHasAssetFiles)
{
	// 更新并关闭进度通知
	TSharedPtr<SNotificationItem> Notification = CookProgressNotification.Pin();
	if (Notification.IsValid())
	{
		if (ReturnCode == 0)
		{
			Notification->SetCompletionState(SNotificationItem::CS_Success);
			Notification->SetText(LOCTEXT("CookSuccess", "Cook completed successfully!"));
		}
		else
		{
			Notification->SetCompletionState(SNotificationItem::CS_Fail);
			Notification->SetText(LOCTEXT("CookFailed", "Cook process failed!"));
		}
		Notification->ExpireAndFadeout();
		CookProgressNotification.Reset();
	}
	
	if (ReturnCode == 0)
	{
		// 检查 Cooked 目录是否存在
		// Cook 输出路径格式可能是：
		// 1. Saved/Cooked/Windows/ProjectName/Content/Mods/ModName（最常见）
		// 2. Saved/Cooked/WindowsNoEditor/ProjectName/Content/Mods/ModName（某些配置）
		// 3. Saved/Cooked/ProjectName/Content/Mods/ModName（旧格式，无平台目录）
		// 使用传入的参数而不是成员变量，避免访问可能已失效的成员
		FString NormalizedModPath = InModPath;
		FPaths::NormalizeDirectoryName(NormalizedModPath);
		
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		FString CookedModPath;
		
		// 首先尝试 Windows 平台路径
		CookedModPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / TEXT("Windows") / ProjectName / TEXT("Content") / TEXT("Mods") / NormalizedModPath;
		FPaths::NormalizeDirectoryName(CookedModPath);
		
		if (!PlatformFile.DirectoryExists(*CookedModPath))
		{
			// 尝试 WindowsNoEditor 平台路径
			FString WindowsNoEditorPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / TEXT("WindowsNoEditor") / ProjectName / TEXT("Content") / TEXT("Mods") / NormalizedModPath;
			FPaths::NormalizeDirectoryName(WindowsNoEditorPath);
			if (PlatformFile.DirectoryExists(*WindowsNoEditorPath))
			{
				CookedModPath = WindowsNoEditorPath;
				UE_LOG(LogTemp, Log, TEXT("Using WindowsNoEditor cooked path: %s"), *CookedModPath);
			}
			else
			{
				// 尝试旧格式（无平台目录）
				FString OldCookedModPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / ProjectName / TEXT("Content") / TEXT("Mods") / NormalizedModPath;
				FPaths::NormalizeDirectoryName(OldCookedModPath);
				if (PlatformFile.DirectoryExists(*OldCookedModPath))
				{
					CookedModPath = OldCookedModPath;
					UE_LOG(LogTemp, Warning, TEXT("Using old cooked path format (no platform directory): %s"), *CookedModPath);
				}
			}
		}
		
		UE_LOG(LogTemp, Log, TEXT("Checking for cooked mod files at: %s"), *CookedModPath);
		UE_LOG(LogTemp, Log, TEXT("InModPath: %s"), *InModPath);
		UE_LOG(LogTemp, Log, TEXT("NormalizedModPath: %s"), *NormalizedModPath);
		
		if (PlatformFile.DirectoryExists(*CookedModPath))
		{
			// 检查目录中是否有文件
			TArray<FString> CookedFiles;
			PlatformFile.FindFilesRecursively(CookedFiles, *CookedModPath, nullptr);
			
			UE_LOG(LogTemp, Log, TEXT("Found %d cooked files in mod directory"), CookedFiles.Num());
			
			// 显示开始打包的通知
			FNotificationInfo SuccessInfo(LOCTEXT("CookSuccessPackaging", "Cook completed successfully! Starting packaging..."));
			SuccessInfo.ExpireDuration = 3.0f;
			SuccessInfo.bFireAndForget = true;
			SuccessInfo.bUseSuccessFailIcons = true;
			FSlateNotificationManager::Get().AddNotification(SuccessInfo);
			
			// 更新成员变量并继续打包
			SavedModPath = InModPath;
			SavedCookedModPath = CookedModPath;
			SavedSavePath = InSavePath;
			SavedUnrealPakPath = InUnrealPakPath;
			SavedNonAssetFiles = InNonAssetFiles;
			bHasAssetFilesToCook = bInHasAssetFiles;
			ContinuePackagingAfterCook();
		}
		else
		{
			// 检查整个 Cooked 目录结构
			// Cook 输出路径格式可能是：Saved/Cooked/Windows/ProjectName/Content 或 Saved/Cooked/WindowsNoEditor/ProjectName/Content
			FString CookedContentPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / TEXT("Windows") / ProjectName / TEXT("Content");
			FPaths::NormalizeDirectoryName(CookedContentPath);
			if (!PlatformFile.DirectoryExists(*CookedContentPath))
			{
				CookedContentPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / TEXT("WindowsNoEditor") / ProjectName / TEXT("Content");
				FPaths::NormalizeDirectoryName(CookedContentPath);
			}
			
			UE_LOG(LogTemp, Warning, TEXT("Cooked mod directory not found at: %s"), *CookedModPath);
			UE_LOG(LogTemp, Warning, TEXT("Cooked content path: %s, exists: %d"), *CookedContentPath, PlatformFile.DirectoryExists(*CookedContentPath));
			
			FNotificationInfo WarningInfo(LOCTEXT("CookNoModFiles", "Cook completed but mod files not found in cooked directory. The mod may not have any assets to cook, or they were not included. Packaging non-asset files only."));
			WarningInfo.ExpireDuration = 8.0f;
			WarningInfo.bFireAndForget = true;
			FSlateNotificationManager::Get().AddNotification(WarningInfo);
			
			// 即使没有 Cooked 的 Mod 文件，也继续打包非资产文件
			// 更新成员变量
			SavedModPath = InModPath;
			SavedCookedModPath = InCookedModPath;
			SavedSavePath = InSavePath;
			SavedUnrealPakPath = InUnrealPakPath;
			SavedNonAssetFiles = InNonAssetFiles;
			bHasAssetFilesToCook = bInHasAssetFiles;
			ContinuePackagingAfterCook();
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Cook process failed with return code: %d"), ReturnCode);
		if (!Output.IsEmpty())
		{
			UE_LOG(LogTemp, Error, TEXT("Cook output: %s"), *Output);
		}
		
		// 错误信息已通过进度通知显示，这里只显示详细错误
		FNotificationInfo ErrorInfo(LOCTEXT("CookFailedDetails", "Cook process failed! Check Output Log for details. You may need to cook manually from File -> Cook Content."));
		ErrorInfo.ExpireDuration = 8.0f;
		ErrorInfo.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(ErrorInfo);
		
		// 处理下一个mod或清除打包状态
		// 从队列中移除当前mod
		if (ModPackagingQueue.Num() > 0)
		{
			ModPackagingQueue.RemoveAt(0);
		}
		
		// 如果还有待处理的mod，继续打包下一个
		if (ModPackagingQueue.Num() > 0)
		{
			PackageSingleMod(ModPackagingQueue[0]);
		}
		else
		{
			// 所有mod处理完成
			bIsPackaging = false;
			bIsCheckboxEnabled = true; // 重新启用复选框
			if (StatusTextBlock.IsValid())
			{
				StatusTextBlock->SetText(GetStatusText());
			}
			if (PackageButton.IsValid())
			{
				PackageButton->SetEnabled(IsPackageEnabled());
			}
			// 刷新列表视图以更新复选框状态
			if (ModListView.IsValid())
			{
				ModListView->RequestListRefresh();
			}
		}
	}
}

void SPackageModWindow::ContinuePackagingAfterCook()
{
	// 重新检查 Cooked 目录（如果需要的话）
	// 注意：ContinuePackaging() 函数内部会重新检查 Cooked 目录，所以这里不需要重复检查
	// 但我们可以确保 SavedCookedModPath 已正确设置
	if (SavedCookedModPath.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("SavedCookedModPath is empty in ContinuePackagingAfterCook!"));
	}
	
	// 继续打包流程
	ContinuePackaging();
}

void SPackageModWindow::HandleCookResultStandalone(int32 ReturnCode, const FString& ProjectName, const FString& Output,
	const FString& InModPath, const FString& InCookedModPath, const FString& InSavePath,
	const FString& InUnrealPakPath, const TArray<FString>& InNonAssetFiles, bool bInHasAssetFiles)
{
	// 独立于窗口对象的 Cook 结果处理函数
	// 当窗口已关闭时，仍然可以继续执行打包
	
	if (ReturnCode == 0)
	{
		// 检查 Cooked 目录是否存在
		// Cook 输出路径格式可能是：
		// 1. Saved/Cooked/Windows/ProjectName/Content/Mods/ModName（最常见）
		// 2. Saved/Cooked/WindowsNoEditor/ProjectName/Content/Mods/ModName（某些配置）
		// 3. Saved/Cooked/ProjectName/Content/Mods/ModName（旧格式，无平台目录）
		FString NormalizedModPath = InModPath;
		FPaths::NormalizeDirectoryName(NormalizedModPath);
		
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		FString CookedModPath;
		
		// 首先尝试 Windows 平台路径
		CookedModPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / TEXT("Windows") / ProjectName / TEXT("Content") / TEXT("Mods") / NormalizedModPath;
		FPaths::NormalizeDirectoryName(CookedModPath);
		
		if (!PlatformFile.DirectoryExists(*CookedModPath))
		{
			// 尝试 WindowsNoEditor 平台路径
			FString WindowsNoEditorPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / TEXT("WindowsNoEditor") / ProjectName / TEXT("Content") / TEXT("Mods") / NormalizedModPath;
			FPaths::NormalizeDirectoryName(WindowsNoEditorPath);
			if (PlatformFile.DirectoryExists(*WindowsNoEditorPath))
			{
				CookedModPath = WindowsNoEditorPath;
				UE_LOG(LogTemp, Log, TEXT("Using WindowsNoEditor cooked path: %s"), *CookedModPath);
			}
			else
			{
				// 尝试旧格式（无平台目录）
				FString OldCookedModPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / ProjectName / TEXT("Content") / TEXT("Mods") / NormalizedModPath;
				FPaths::NormalizeDirectoryName(OldCookedModPath);
				if (PlatformFile.DirectoryExists(*OldCookedModPath))
				{
					CookedModPath = OldCookedModPath;
					UE_LOG(LogTemp, Warning, TEXT("Using old cooked path format (no platform directory): %s"), *CookedModPath);
				}
			}
		}
		
		UE_LOG(LogTemp, Log, TEXT("Checking for cooked mod files at: %s"), *CookedModPath);
		
		if (PlatformFile.DirectoryExists(*CookedModPath))
		{
			// 检查目录中是否有文件
			TArray<FString> CookedFiles;
			PlatformFile.FindFilesRecursively(CookedFiles, *CookedModPath, nullptr);
			
			UE_LOG(LogTemp, Log, TEXT("Found %d cooked files in mod directory"), CookedFiles.Num());
			
			// 显示开始打包的通知
			FNotificationInfo SuccessInfo(LOCTEXT("CookSuccessPackaging", "Cook completed successfully! Starting packaging..."));
			SuccessInfo.ExpireDuration = 3.0f;
			SuccessInfo.bFireAndForget = true;
			SuccessInfo.bUseSuccessFailIcons = true;
			FSlateNotificationManager::Get().AddNotification(SuccessInfo);
			
			// 计算 ModFolderPath（从 ModPath 推断）
			FString ModFolderPath = FPaths::ProjectContentDir() / TEXT("Mods") / NormalizedModPath;
			FPaths::NormalizeDirectoryName(ModFolderPath);
			
			// 直接调用静态打包函数
			ContinuePackagingStandalone(InModPath, ModFolderPath, CookedModPath, InSavePath, InUnrealPakPath, InNonAssetFiles, bInHasAssetFiles);
		}
		else
		{
			FNotificationInfo WarningInfo(LOCTEXT("CookNoModFiles", "Cook completed but mod files not found in cooked directory. The mod may not have any assets to cook, or they were not included. Packaging non-asset files only."));
			WarningInfo.ExpireDuration = 8.0f;
			WarningInfo.bFireAndForget = true;
			FSlateNotificationManager::Get().AddNotification(WarningInfo);
			
			// 计算 ModFolderPath（从 ModPath 推断）
			FString ModFolderPath = FPaths::ProjectContentDir() / TEXT("Mods") / NormalizedModPath;
			FPaths::NormalizeDirectoryName(ModFolderPath);
			
			// 即使没有 Cooked 的 Mod 文件，也继续打包非资产文件
			ContinuePackagingStandalone(InModPath, ModFolderPath, InCookedModPath, InSavePath, InUnrealPakPath, InNonAssetFiles, bInHasAssetFiles);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Cook process failed with return code: %d"), ReturnCode);
		FNotificationInfo ErrorInfo(LOCTEXT("CookFailedDetails", "Cook process failed! Check Output Log for details."));
		ErrorInfo.ExpireDuration = 8.0f;
		ErrorInfo.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(ErrorInfo);
		
		// HandleCookResultStandalone 是静态函数，不能访问成员变量
		// 如果窗口已关闭，无法清除状态，这是正常的
	}
}

void SPackageModWindow::ContinuePackagingStandalone(const FString& ModPath, const FString& ModFolderPath, const FString& CookedModPath,
	const FString& SavePath, const FString& UnrealPakPath, const TArray<FString>& NonAssetFiles, bool bHasAssetFiles)
{
	// 独立于窗口对象的打包函数
	// 这个函数与 ContinuePackaging() 类似，但不依赖成员变量
	
	// 验证关键变量
	if (ModPath.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("ModPath is empty! Cannot continue packaging."));
		FNotificationInfo Info(LOCTEXT("InvalidModPath", "Invalid mod path! Cannot package mod."));
		Info.ExpireDuration = 5.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		return;
	}
	
	if (UnrealPakPath.IsEmpty() || !FPaths::FileExists(UnrealPakPath))
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid UnrealPakPath: %s"), *UnrealPakPath);
		FNotificationInfo Info(LOCTEXT("InvalidUnrealPakPath", "UnrealPak.exe path is invalid! Cannot package mod."));
		Info.ExpireDuration = 5.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		return;
	}
	
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString ProjectName = FApp::GetProjectName();
	bool bHasCookedContent = PlatformFile.DirectoryExists(*CookedModPath);
	
	// 读取 ModInfo.json 获取 ModId、MainLuaFile、Icon 和 AdditionalAssets
	FString ModInfoJsonPath = ModFolderPath / TEXT("ModInfo.json");
	FString ModId = ModPath; // 默认使用 ModPath 作为 ModId
	FString MainLuaFile;
	FString Icon;
	TArray<FString> AdditionalAssets;
	bool bIncludeGameplayTags = false;
	FString GameplayTagsIniFileField;
	
	if (FPaths::FileExists(ModInfoJsonPath))
	{
		FString JsonContent;
		if (FFileHelper::LoadFileToString(JsonContent, *ModInfoJsonPath))
		{
			TSharedPtr<FJsonObject> JsonObject;
			TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonContent);
			
			if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
			{
				if (JsonObject->HasField(TEXT("ModId")))
				{
					ModId = JsonObject->GetStringField(TEXT("ModId"));
				}
				if (JsonObject->HasField(TEXT("MainLuaFile")))
				{
					MainLuaFile = JsonObject->GetStringField(TEXT("MainLuaFile"));
				}
				if (JsonObject->HasField(TEXT("Icon")))
				{
					Icon = JsonObject->GetStringField(TEXT("Icon"));
				}
				if (JsonObject->HasField(TEXT("IncludeGameplayTags")))
				{
					bIncludeGameplayTags = JsonObject->GetBoolField(TEXT("IncludeGameplayTags"));
				}
				if (JsonObject->HasField(TEXT("GameplayTagsIniFile")))
				{
					GameplayTagsIniFileField = JsonObject->GetStringField(TEXT("GameplayTagsIniFile"));
				}
				// 读取额外资产列表
				if (JsonObject->HasField(TEXT("AdditionalAssets")))
				{
					const TArray<TSharedPtr<FJsonValue>>* AdditionalAssetsArray;
					if (JsonObject->TryGetArrayField(TEXT("AdditionalAssets"), AdditionalAssetsArray))
					{
						for (const TSharedPtr<FJsonValue>& Value : *AdditionalAssetsArray)
						{
							if (Value.IsValid() && Value->Type == EJson::String)
							{
								AdditionalAssets.Add(Value->AsString());
							}
						}
					}
				}
			}
		}
	}
	
	// 构建输出文件夹路径：项目根目录的 Mods/{ModId}
	FString OutputDir = FPaths::ProjectDir() / TEXT("Mods") / ModId;
	FPaths::NormalizeDirectoryName(OutputDir);
	
	// 清理输出文件夹（如果存在），删除所有文件
	if (PlatformFile.DirectoryExists(*OutputDir))
	{
		// 删除目录中的所有文件
		TArray<FString> FilesToDelete;
		PlatformFile.FindFiles(FilesToDelete, *OutputDir, nullptr);
		for (const FString& File : FilesToDelete)
		{
			PlatformFile.DeleteFile(*File);
		}
		
		// 删除目录中的所有子目录
		PlatformFile.IterateDirectory(*OutputDir, [&](const TCHAR* Filename, bool bIsDirectory) -> bool
		{
			if (bIsDirectory)
			{
				FString DirPath = FString(Filename);
				PlatformFile.DeleteDirectoryRecursively(*DirPath);
			}
			return true;
		});
	}
	
	// 重新创建输出文件夹
	PlatformFile.CreateDirectoryTree(*OutputDir);
	
	// 修改 SavePath 为输出文件夹中的 pak 文件
	FString NewSavePath = OutputDir / FString::Printf(TEXT("%s.pak"), *ModId);
	FPaths::NormalizeFilename(NewSavePath);
	
	// 创建临时响应文件
	FString ResponseFilePath = FPaths::CreateTempFilename(*FPaths::ProjectIntermediateDir(), TEXT("PakResponse"), TEXT(".txt"));
	
	// 收集所有需要打包的文件
	TArray<FString> FilesToPackage;
	
	// 从 Cooked 目录收集资产文件（这部分逻辑与 ContinuePackaging 相同）
	if (bHasCookedContent)
	{
		TFunction<void(const FString&)> CollectCookedFiles = [&](const FString& DirPath)
		{
			IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
			TFunction<void(const FString&)> IterateDir = [&](const FString& CurrentDir)
			{
				FileManager.IterateDirectory(*CurrentDir, [&](const TCHAR* Filename, bool bIsDirectory) -> bool
				{
					if (bIsDirectory)
					{
						IterateDir(FString(Filename));
					}
					else
					{
						FString FullPath = FString(Filename);
						FPaths::NormalizeFilename(FullPath);
						
						FString Extension = FPaths::GetExtension(FullPath, true).ToLower();
						if (Extension == TEXT(".uasset") || Extension == TEXT(".umap") || 
						    Extension == TEXT(".uexp") || Extension == TEXT(".ubulk") || 
						    Extension == TEXT(".uptnl"))
						{
							FString RelativePath = FullPath;
							FString CookedModPathWithSlash = CookedModPath;
							if (!CookedModPathWithSlash.EndsWith(TEXT("/")) && !CookedModPathWithSlash.EndsWith(TEXT("\\")))
							{
								CookedModPathWithSlash += TEXT("/");
							}
							
							if (!FullPath.IsEmpty() && !CookedModPathWithSlash.IsEmpty() && 
							    FullPath.Len() >= CookedModPathWithSlash.Len() &&
							    FullPath.StartsWith(CookedModPathWithSlash))
							{
								int32 PrefixLen = CookedModPathWithSlash.Len();
								if (PrefixLen < FullPath.Len())
								{
									RelativePath = FullPath.Mid(PrefixLen);
								}
								else
								{
									RelativePath = TEXT("");
								}
							}
							RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
							
							// 挂载路径格式：../../../EasternEra/Content/Mods/{ModName}/...
							// 挂载点是 ../../../EasternEra/Content/，文件相对于挂载点的路径是 Mods/{ModName}/...
							FString MountPath = FString::Printf(TEXT("../../../%s/Content/Mods/%s/%s"), *ProjectName, *ModPath, *RelativePath);
							MountPath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
							
							// 响应文件格式："Cook资源路径" "挂载路径"
							// 第一列：Cook 输出的绝对路径
							// 第二列：挂载路径（相对路径，格式为 ../../../EasternEra/Content/Mods/...）
							FString ResponseLine = FString::Printf(TEXT("\"%s\" \"%s\""), *FullPath, *MountPath);
							FilesToPackage.Add(ResponseLine);
						}
					}
					return true;
				});
			};
			IterateDir(DirPath);
		};
		
		CollectCookedFiles(CookedModPath);
	}
	
	// 从源目录收集非资产文件，但排除 MainLuaFile、ModInfo.json 和 Icon
	FString ModInfoJsonPathFull = ModFolderPath / TEXT("ModInfo.json");
	FPaths::NormalizeFilename(ModInfoJsonPathFull);
	FString MainLuaFilePathFull;
	if (!MainLuaFile.IsEmpty())
	{
		// MainLuaFile 可能是相对路径或绝对路径
		if (FPaths::IsRelative(MainLuaFile))
		{
			MainLuaFilePathFull = ModFolderPath / MainLuaFile;
		}
		else
		{
			MainLuaFilePathFull = MainLuaFile;
		}
		FPaths::NormalizeFilename(MainLuaFilePathFull);
	}
	const FString IconFilePathFull = PackageModHelpers::ResolveModIconSourcePath(ModFolderPath, Icon);
	const FString GameplayTagsIniPathFullStandalone = PackageModHelpers::ResolveGameplayTagsIniSourcePath(
		ModFolderPath, bIncludeGameplayTags, GameplayTagsIniFileField, ModId);
	
	for (const FString& NonAssetFile : NonAssetFiles)
	{
		FString NormalizedNonAssetFile = NonAssetFile;
		FPaths::NormalizeFilename(NormalizedNonAssetFile);
		
		// 排除 ModInfo.json、MainLuaFile、Icon 与 GameplayTags ini
		if (NormalizedNonAssetFile.Equals(ModInfoJsonPathFull, ESearchCase::IgnoreCase) ||
		    (!MainLuaFilePathFull.IsEmpty() && NormalizedNonAssetFile.Equals(MainLuaFilePathFull, ESearchCase::IgnoreCase)) ||
		    (!IconFilePathFull.IsEmpty() && NormalizedNonAssetFile.Equals(IconFilePathFull, ESearchCase::IgnoreCase)) ||
		    (!GameplayTagsIniPathFullStandalone.IsEmpty() && NormalizedNonAssetFile.Equals(GameplayTagsIniPathFullStandalone, ESearchCase::IgnoreCase)))
		{
			UE_LOG(LogTemp, Log, TEXT("ContinuePackagingStandalone - Skipping file (will be copied separately): %s"), *NonAssetFile);
			continue;
		}
		
		FString RelativePath = NonAssetFile;
		FString ModPathWithSlash = ModFolderPath;
		if (!ModPathWithSlash.EndsWith(TEXT("/")) && !ModPathWithSlash.EndsWith(TEXT("\\")))
		{
			ModPathWithSlash += TEXT("/");
		}
		
		if (!NonAssetFile.IsEmpty() && !ModPathWithSlash.IsEmpty() && 
		    NonAssetFile.Len() >= ModPathWithSlash.Len() &&
		    NonAssetFile.StartsWith(ModPathWithSlash))
		{
			int32 PrefixLen = ModPathWithSlash.Len();
			if (PrefixLen < NonAssetFile.Len())
			{
				RelativePath = NonAssetFile.Mid(PrefixLen);
			}
			else
			{
				RelativePath = TEXT("");
			}
		}
		RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
		
		// 挂载路径格式：../../../EasternEra/Content/Mods/{ModName}/...
		// 挂载点是 ../../../EasternEra/Content/，文件相对于挂载点的路径是 Mods/{ModName}/...
		FString MountPath = FString::Printf(TEXT("../../../%s/Content/Mods/%s/%s"), *ProjectName, *ModPath, *RelativePath);
		MountPath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
		
		// 响应文件格式："Cook资源路径" "挂载路径"
		// 第一列：源文件路径（绝对路径）
		// 第二列：挂载路径（相对路径，格式为 ../../../EasternEra/Content/Mods/...）
		FString ResponseLine = FString::Printf(TEXT("\"%s\" \"%s\""), *NonAssetFile, *MountPath);
		FilesToPackage.Add(ResponseLine);
	}
	
	// 自动扫描 Content/Script/{ModId} 目录下的 lua 文件并加入打包列表
	FString ScriptDir = FPaths::ProjectContentDir() / TEXT("Script") / ModId;
	FPaths::NormalizeDirectoryName(ScriptDir);
	
	if (PlatformFile.DirectoryExists(*ScriptDir))
	{
		UE_LOG(LogTemp, Log, TEXT("ContinuePackagingStandalone - Scanning Script directory: %s"), *ScriptDir);
		
		// 递归扫描目录
		TFunction<void(const FString&)> ScanScriptDir = [&](const FString& DirPath)
		{
			PlatformFile.IterateDirectory(*DirPath, [&](const TCHAR* Filename, bool bIsDirectory) -> bool
			{
				if (bIsDirectory)
				{
					// 递归扫描子目录
					ScanScriptDir(FString(Filename));
				}
				else
				{
					FString FullPath = FString(Filename);
					FPaths::NormalizeFilename(FullPath);
					FString Extension = FPaths::GetExtension(FullPath, true).ToLower();
					
					// 只处理 lua 文件
					if (Extension == TEXT(".lua"))
					{
						// 计算相对于 Script/{ModId} 的路径
						FString RelativePath = FullPath;
						FString ScriptDirWithSlash = ScriptDir;
						if (!ScriptDirWithSlash.EndsWith(TEXT("/")) && !ScriptDirWithSlash.EndsWith(TEXT("\\")))
						{
							ScriptDirWithSlash += TEXT("/");
						}
						
						if (FullPath.Len() >= ScriptDirWithSlash.Len() && FullPath.StartsWith(ScriptDirWithSlash))
						{
							int32 PrefixLen = ScriptDirWithSlash.Len();
							if (PrefixLen < FullPath.Len())
							{
								RelativePath = FullPath.Mid(PrefixLen);
							}
						}
						RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
						
						// 挂载路径格式：../../../EasternEra/Content/Script/{ModId}/...
						// 挂载点是 ../../../EasternEra/Content/，文件相对于挂载点的路径是 Script/{ModId}/...
						FString MountPath = FString::Printf(TEXT("../../../%s/Content/Script/%s/%s"), *ProjectName, *ModId, *RelativePath);
						MountPath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
						
						// 响应文件格式："Cook资源路径" "挂载路径"
						// 第一列：源文件路径（绝对路径）
						// 第二列：挂载路径（相对路径，格式为 ../../../EasternEra/Content/Script/...）
						FString ResponseLine = FString::Printf(TEXT("\"%s\" \"%s\""), *FullPath, *MountPath);
						FilesToPackage.Add(ResponseLine);
						
						UE_LOG(LogTemp, Log, TEXT("ContinuePackagingStandalone - Added Script lua file: %s -> %s"), *FullPath, *MountPath);
					}
				}
				return true;
			});
		};
		
		ScanScriptDir(ScriptDir);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("ContinuePackagingStandalone - Script directory does not exist: %s"), *ScriptDir);
	}
	
	// 处理额外资产列表
	FString ContentDir = FPaths::ProjectContentDir();
	FPaths::NormalizeDirectoryName(ContentDir);
	for (const FString& AdditionalAssetPath : AdditionalAssets)
	{
		if (AdditionalAssetPath.IsEmpty())
		{
			continue;
		}
		
		// 构建完整路径（相对于Content目录）
		FString FullAssetPath = ContentDir / AdditionalAssetPath;
		FPaths::NormalizeFilename(FullAssetPath);
		
		// 检查文件是否存在
		if (PlatformFile.FileExists(*FullAssetPath))
		{
			// 计算相对于Content目录的路径
			FString RelativePath = AdditionalAssetPath;
			RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
			
			// 挂载路径格式：../../../EasternEra/Content/...
			FString MountPath = FString::Printf(TEXT("../../../%s/Content/%s"), *ProjectName, *RelativePath);
			MountPath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
			
			// 检查是否是资产文件（需要从Cooked目录获取）
			FString Extension = FPaths::GetExtension(FullAssetPath, true).ToLower();
			if (Extension == TEXT(".uasset") || Extension == TEXT(".umap"))
			{
				// 资产文件需要从Cooked目录获取
				// 构建Cooked路径
				FString CookedAssetPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / TEXT("Windows") / ProjectName / TEXT("Content") / RelativePath;
				FPaths::NormalizeFilename(CookedAssetPath);
				
				// 检查Cooked路径是否存在，如果不存在尝试其他平台路径
				if (!PlatformFile.FileExists(*CookedAssetPath))
				{
					FString WindowsNoEditorCookedPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / TEXT("WindowsNoEditor") / ProjectName / TEXT("Content") / RelativePath;
					FPaths::NormalizeFilename(WindowsNoEditorCookedPath);
					if (PlatformFile.FileExists(*WindowsNoEditorCookedPath))
					{
						CookedAssetPath = WindowsNoEditorCookedPath;
					}
					else
					{
						// 尝试旧格式路径
						FString LegacyCookedPath = FPaths::ProjectSavedDir() / TEXT("Cooked") / ProjectName / TEXT("Content") / RelativePath;
						FPaths::NormalizeFilename(LegacyCookedPath);
						if (PlatformFile.FileExists(*LegacyCookedPath))
						{
							CookedAssetPath = LegacyCookedPath;
						}
						else
						{
							UE_LOG(LogTemp, Warning, TEXT("ContinuePackagingStandalone - Additional asset cooked file not found: %s (tried: %s, %s, %s)"), *RelativePath, *CookedAssetPath, *WindowsNoEditorCookedPath, *LegacyCookedPath);
							continue;
						}
					}
				}
				
				// 使用Cooked路径
				FString ResponseLine = FString::Printf(TEXT("\"%s\" \"%s\""), *CookedAssetPath, *MountPath);
				FilesToPackage.Add(ResponseLine);
				UE_LOG(LogTemp, Log, TEXT("ContinuePackagingStandalone - Added additional cooked asset: %s -> %s"), *CookedAssetPath, *MountPath);
			}
			else
			{
				// 非资产文件直接使用源路径
				FString ResponseLine = FString::Printf(TEXT("\"%s\" \"%s\""), *FullAssetPath, *MountPath);
				FilesToPackage.Add(ResponseLine);
				UE_LOG(LogTemp, Log, TEXT("ContinuePackagingStandalone - Added additional non-asset file: %s -> %s"), *FullAssetPath, *MountPath);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ContinuePackagingStandalone - Additional asset file not found: %s (ContentDir: %s, RelativePath: %s)"), *FullAssetPath, *ContentDir, *AdditionalAssetPath);
			// 尝试检查是否是绝对路径
			if (FPaths::IsRelative(AdditionalAssetPath))
			{
				UE_LOG(LogTemp, Warning, TEXT("ContinuePackagingStandalone - Path is relative, but file not found. Make sure the path is correct relative to Content directory."));
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("ContinuePackagingStandalone - Path appears to be absolute. AdditionalAssets should be relative to Content directory."));
			}
		}
	}
	
	UE_LOG(LogTemp, Log, TEXT("ContinuePackagingStandalone - Finished processing AdditionalAssets. Total files to package: %d"), FilesToPackage.Num());
	
	// 写入响应文件并执行 UnrealPak（这部分逻辑与 ContinuePackaging 相同）
	if (FilesToPackage.Num() > 0)
	{
		// 构建响应文件内容（PakList.txt 格式）
		// UnrealPak 响应文件格式：每行是 "Cook资源路径" "挂载路径"
		//   - 第一列：Cook 输出的绝对路径
		//   - 第二列：挂载路径（相对路径），格式为 ../../../EasternEra/Content/Mods/...
		// 注意：不需要第一行的 MountPoint，每行直接是 "CookPath" "MountPath" 格式
		FString ResponseFileContent = FString::Join(FilesToPackage, TEXT("\n"));
		FFileHelper::SaveStringToFile(ResponseFileContent, *ResponseFilePath);
		
		UE_LOG(LogTemp, Log, TEXT("Created PakList.txt with %d files"), FilesToPackage.Num());
		UE_LOG(LogTemp, Log, TEXT("Note: Format is \"CookPath\" \"MountPath\", where MountPath is ../../../%s/Content/Mods/..."), *ProjectName);
		
		// 执行 UnrealPak（使用新的 SavePath）
		FString SavePathFull = FPaths::ConvertRelativePathToFull(NewSavePath);
		FPaths::NormalizeFilename(SavePathFull);
		FString ResponseFilePathFull = FPaths::ConvertRelativePathToFull(ResponseFilePath);
		FPaths::NormalizeFilename(ResponseFilePathFull);
		
		// MountPoint 已经在响应文件的第一行指定，所以不需要 -MountPoint 参数
		FString UnrealPakCommandLine = FString::Printf(
			TEXT("\"%s\" -Create=\"%s\""),
			*SavePathFull,
			*ResponseFilePathFull
		);
		
		UE_LOG(LogTemp, Log, TEXT("Executing UnrealPak: %s %s"), *UnrealPakPath, *UnrealPakCommandLine);
		
		// 创建 Pak 进度通知（独立于窗口对象）
		FNotificationInfo PakProgressInfo(LOCTEXT("PackagingMod", "Packaging mod..."));
		PakProgressInfo.bFireAndForget = false;
		PakProgressInfo.bUseSuccessFailIcons = true;
		PakProgressInfo.ExpireDuration = 0.0f;
		TSharedPtr<SNotificationItem> PakNotification = FSlateNotificationManager::Get().AddNotification(PakProgressInfo);
		
		// 在后台线程中执行 UnrealPak
		FString CapturedOutputDir = OutputDir;
		FString CapturedModInfoJsonPath = ModInfoJsonPathFull;
		FString CapturedMainLuaFilePath = MainLuaFilePathFull;
		FString CapturedIconFilePath = IconFilePathFull;
		const FString CapturedGameplayTagsSourcePath = GameplayTagsIniPathFullStandalone;
		const FString CapturedModIdForTags = ModId;
		AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [UnrealPakPath, UnrealPakCommandLine, SavePathFull, CapturedOutputDir, CapturedModInfoJsonPath, CapturedMainLuaFilePath, CapturedIconFilePath, CapturedGameplayTagsSourcePath, CapturedModIdForTags, PakNotification]() mutable
		{
			void* ReadPipe = nullptr;
			void* WritePipe = nullptr;
			FPlatformProcess::CreatePipe(ReadPipe, WritePipe);
			
			FProcHandle ProcHandle = FPlatformProcess::CreateProc(
				*UnrealPakPath,
				*UnrealPakCommandLine,
				true,
				true,
				true,
				nullptr,
				0,
				nullptr,
				WritePipe,
				ReadPipe,
				nullptr
			);
			
			if (ProcHandle.IsValid())
			{
				// 等待进程完成，同时定期读取输出并更新进度
				int32 ReturnCode = 0;
				FString AccumulatedOutput;
				FDateTime StartTime = FDateTime::Now();
				
				// 定期检查进程状态并读取输出
				while (FPlatformProcess::IsProcRunning(ProcHandle))
				{
					// 读取新的输出
					if (ReadPipe)
					{
						FString NewOutput = FPlatformProcess::ReadPipe(ReadPipe);
						if (!NewOutput.IsEmpty())
						{
							AccumulatedOutput += NewOutput;
							UE_LOG(LogTemp, Verbose, TEXT("UnrealPak output: %s"), *NewOutput);
							
							// 解析进度并更新通知
							float Progress = SPackageModWindow::ParsePakProgress(AccumulatedOutput);
							if (Progress >= 0.0f)
							{
								FText StatusText = FText::Format(LOCTEXT("PackagingProgress", "Packaging mod... {0}%"), FText::AsNumber(FMath::RoundToInt(Progress * 100.0f)));
								AsyncTask(ENamedThreads::GameThread, [PakNotification, Progress, StatusText]()
								{
									if (PakNotification.IsValid())
									{
										PakNotification->SetText(StatusText);
										if (Progress >= 0.0f && Progress <= 1.0f)
										{
											PakNotification->SetCompletionState(SNotificationItem::CS_Pending);
											PakNotification->SetExpireDuration(0.0f);
										}
									}
								});
							}
							else
							{
								// 如果无法解析进度，显示已用时间
								FTimespan Elapsed = FDateTime::Now() - StartTime;
								FText StatusText = FText::Format(LOCTEXT("PackagingTime", "Packaging mod... ({0}m {1}s)"), 
									FText::AsNumber(Elapsed.GetMinutes()), 
									FText::AsNumber(Elapsed.GetSeconds() % 60));
								AsyncTask(ENamedThreads::GameThread, [PakNotification, StatusText]()
								{
									if (PakNotification.IsValid())
									{
										PakNotification->SetText(StatusText);
										PakNotification->SetCompletionState(SNotificationItem::CS_Pending);
										PakNotification->SetExpireDuration(0.0f);
									}
								});
							}
						}
					}
					
					// 等待一小段时间再检查
					FPlatformProcess::Sleep(0.5f);
				}
				
				// 进程已完成，获取返回码
				FPlatformProcess::GetProcReturnCode(ProcHandle, &ReturnCode);
				
				// 读取剩余的输出
				FString Output = AccumulatedOutput;
				if (ReadPipe)
				{
					FString RemainingOutput = FPlatformProcess::ReadPipe(ReadPipe);
					if (!RemainingOutput.IsEmpty())
					{
						Output += RemainingOutput;
					}
				}
				
				FPlatformProcess::CloseProc(ProcHandle);
				FPlatformProcess::ClosePipe(ReadPipe, WritePipe);
				
				AsyncTask(ENamedThreads::GameThread, [ReturnCode, SavePathFull, CapturedOutputDir, CapturedModInfoJsonPath, CapturedMainLuaFilePath, CapturedIconFilePath, CapturedGameplayTagsSourcePath, CapturedModIdForTags, Output, PakNotification]()
				{
					// 更新并关闭进度通知
					if (PakNotification.IsValid())
					{
						if (ReturnCode == 0)
						{
							PakNotification->SetCompletionState(SNotificationItem::CS_Success);
							PakNotification->SetText(LOCTEXT("PackageSuccess", "Mod packaged successfully!"));
						}
						else
						{
							PakNotification->SetCompletionState(SNotificationItem::CS_Fail);
							PakNotification->SetText(LOCTEXT("PackageFailed", "Mod packaging failed!"));
						}
						PakNotification->ExpireAndFadeout();
					}
					
					if (ReturnCode == 0)
					{
						IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
						
						if (FPaths::FileExists(SavePathFull))
						{
							int64 FileSize = IFileManager::Get().FileSize(*SavePathFull);
							
							if (FileSize > 0)
							{
								// 拷贝 ModInfo.json 和 MainLuaFile 到输出文件夹
								if (FPaths::FileExists(CapturedModInfoJsonPath))
								{
									FString DestModInfoJson = CapturedOutputDir / TEXT("ModInfo.json");
									if (PlatformFile.CopyFile(*DestModInfoJson, *CapturedModInfoJsonPath))
									{
										UE_LOG(LogTemp, Log, TEXT("ContinuePackagingStandalone - Copied ModInfo.json to: %s"), *DestModInfoJson);
									}
									else
									{
										UE_LOG(LogTemp, Warning, TEXT("ContinuePackagingStandalone - Failed to copy ModInfo.json to: %s"), *DestModInfoJson);
									}
								}
								
								if (!CapturedMainLuaFilePath.IsEmpty() && FPaths::FileExists(CapturedMainLuaFilePath))
								{
									FString MainLuaFileName = FPaths::GetCleanFilename(CapturedMainLuaFilePath);
									FString DestMainLuaFile = CapturedOutputDir / MainLuaFileName;
									if (PlatformFile.CopyFile(*DestMainLuaFile, *CapturedMainLuaFilePath))
									{
										UE_LOG(LogTemp, Log, TEXT("ContinuePackagingStandalone - Copied MainLuaFile to: %s"), *DestMainLuaFile);
									}
									else
									{
										UE_LOG(LogTemp, Warning, TEXT("ContinuePackagingStandalone - Failed to copy MainLuaFile to: %s"), *DestMainLuaFile);
									}
								}
								
								// 拷贝 Icon 文件到输出文件夹
								if (!CapturedIconFilePath.IsEmpty() && FPaths::FileExists(CapturedIconFilePath))
								{
									FString IconFileName = FPaths::GetCleanFilename(CapturedIconFilePath);
									FString DestIconFile = CapturedOutputDir / IconFileName;
									if (PlatformFile.CopyFile(*DestIconFile, *CapturedIconFilePath))
									{
										UE_LOG(LogTemp, Log, TEXT("ContinuePackagingStandalone - Copied Icon to: %s"), *DestIconFile);
									}
									else
									{
										UE_LOG(LogTemp, Warning, TEXT("ContinuePackagingStandalone - Failed to copy Icon to: %s"), *DestIconFile);
									}
								}
								
								if (!CapturedGameplayTagsSourcePath.IsEmpty() && FPaths::FileExists(CapturedGameplayTagsSourcePath) && !CapturedModIdForTags.IsEmpty())
								{
									const FString DestTagsIni = CapturedOutputDir / FPaths::GetCleanFilename(CapturedGameplayTagsSourcePath);
									if (PlatformFile.CopyFile(*DestTagsIni, *CapturedGameplayTagsSourcePath))
									{
										UE_LOG(LogTemp, Log, TEXT("ContinuePackagingStandalone - Copied GameplayTags ini to: %s"), *DestTagsIni);
									}
									else
									{
										UE_LOG(LogTemp, Warning, TEXT("ContinuePackagingStandalone - Failed to copy GameplayTags ini to: %s"), *DestTagsIni);
									}
								}
							}
							
							FNotificationInfo SuccessInfo(FText::Format(LOCTEXT("PackageSuccessDetails", "Mod packaged successfully! File: {0} ({1} MB)"), 
								FText::FromString(SavePathFull),
								FText::AsNumber(FileSize / (1024 * 1024))));
							SuccessInfo.ExpireDuration = 5.0f;
							SuccessInfo.bFireAndForget = true;
							SuccessInfo.bUseSuccessFailIcons = true;
							FSlateNotificationManager::Get().AddNotification(SuccessInfo);
						}
					}
					else
					{
						FNotificationInfo ErrorInfo(LOCTEXT("PackageFailedDetails", "Mod packaging failed! Check Output Log for details."));
						ErrorInfo.ExpireDuration = 8.0f;
						ErrorInfo.bFireAndForget = true;
						FSlateNotificationManager::Get().AddNotification(ErrorInfo);
						UE_LOG(LogTemp, Error, TEXT("UnrealPak failed with return code: %d"), ReturnCode);
						if (!Output.IsEmpty())
						{
							UE_LOG(LogTemp, Error, TEXT("UnrealPak output: %s"), *Output);
						}
					}
				});
			}
			else
			{
				FPlatformProcess::ClosePipe(ReadPipe, WritePipe);
				AsyncTask(ENamedThreads::GameThread, []()
				{
					FNotificationInfo ErrorInfo(LOCTEXT("PackageStartFailed", "Failed to start UnrealPak process!"));
					ErrorInfo.ExpireDuration = 5.0f;
					ErrorInfo.bFireAndForget = true;
					FSlateNotificationManager::Get().AddNotification(ErrorInfo);
				});
			}
		});
	}
	else
	{
		FNotificationInfo WarningInfo(LOCTEXT("NoFilesToPackage", "No files to package!"));
		WarningInfo.ExpireDuration = 5.0f;
		WarningInfo.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(WarningInfo);
	}
}

#undef LOCTEXT_NAMESPACE

