#include "ModInfoEditorWindow.h"
#include "ModInfoEditorData.h"
#include "ModConfigExporter.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "SlateBasics.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "EditorStyleSet.h"
#include "UObject/ConstructorHelpers.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/MessageDialog.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonReader.h"
#include "DesktopPlatformModule.h"
#include "IDesktopPlatform.h"
#include "Framework/Application/SlateApplication.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"

#define LOCTEXT_NAMESPACE "ModInfoEditor"

void SModInfoEditorWindow::Construct(const FArguments& InArgs)
{
	// 创建 ModInfoData 对象
	ModInfoData = TStrongObjectPtr<UModInfoData>(NewObject<UModInfoData>(GetTransientPackage()));
	ModInfoData->ModFolderPath = InArgs._ModFolderPath;

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
	// PublishedFileId 仅由上传流程写入 ModInfo.json，不在本窗口中显示
	DetailsView->SetIsPropertyVisibleDelegate(
		FIsPropertyVisible::CreateLambda([](const FPropertyAndParent& PropertyAndParent) -> bool
		{
			if (PropertyAndParent.Property.GetFName() == GET_MEMBER_NAME_CHECKED(UModInfoData, PublishedFileId))
			{
				return false;
			}
			return true;
		})
	);
	DetailsView->SetObject(ModInfoData.Get());

	// 如果提供了文件夹路径，尝试加载现有的 ModInfo.json
	if (!ModInfoData->ModFolderPath.IsEmpty())
	{
		TryLoadModInfo();
	}
	else
	{
		// 如果没有路径，禁用属性编辑和保存按钮
		DetailsView->SetEnabled(false);
		if (SaveButton.IsValid())
		{
			SaveButton->SetEnabled(false);
		}
	}

	ChildSlot
	[
		SNew(SScrollBox)
		+ SScrollBox::Slot()
		.Padding(10)
		[
			SNew(SVerticalBox)
			
			// 标题
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 10)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("WindowTitle", "Mod Info Editor"))
				.TextStyle(FEditorStyle::Get(), "ContentBrowser.TopBar.Font")
			]

			// Mod 文件夹路径选择
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 10)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				[
					SAssignNew(ModFolderPathTextBox, SEditableTextBox)
					.Text(FText::FromString(ModInfoData->ModFolderPath))
					.HintText(LOCTEXT("ModFolderHint", "Mod folder path (e.g., Content/Mods/MyMod)"))
					.OnTextChanged(this, &SModInfoEditorWindow::OnModFolderPathChanged)
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.Padding(5, 0, 0, 0)
				[
					SNew(SButton)
					.Text(LOCTEXT("BrowseButton", "Browse..."))
					.OnClicked(this, &SModInfoEditorWindow::OnBrowseFolderButtonClicked)
				]
			]

			// 属性详情视图
			+ SVerticalBox::Slot()
			.FillHeight(1.0f)
			[
				DetailsView.ToSharedRef()
			]

			// 按钮栏（只显示 Save 按钮，Load 已自动执行）
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 10, 0, 0)
			.HAlign(HAlign_Right)
			[
				SAssignNew(SaveButton, SButton)
				.Text(LOCTEXT("SaveButton", "Save"))
				.OnClicked(this, &SModInfoEditorWindow::OnSaveButtonClicked)
				.IsEnabled_Lambda([this]()
				{
					// 检查路径是否有效
					if (!ModInfoData || ModInfoData->ModFolderPath.IsEmpty())
					{
						return false;
					}
					
					// 验证路径必须是 Mods 下的直接子文件夹
					FString ContentDir = FPaths::ProjectContentDir();
					FPaths::NormalizeDirectoryName(ContentDir);
					
					// 确保 ContentDir 是绝对路径（FPaths::ProjectContentDir() 在不同环境下可能返回相对或绝对路径）
					if (FPaths::IsRelative(ContentDir))
					{
						ContentDir = FPaths::ConvertRelativePathToFull(ContentDir);
						FPaths::NormalizeDirectoryName(ContentDir);
					}
					
					FString ProcessedPath = ModInfoData->ModFolderPath;
					if (ProcessedPath.StartsWith(TEXT("Content/")) || ProcessedPath.StartsWith(TEXT("Content\\")))
					{
						ProcessedPath = ProcessedPath.Mid(8);
					}
					
					FString ModsDir = ContentDir / TEXT("Mods");
					FPaths::NormalizeDirectoryName(ModsDir);
					
					FString FullModPath = ContentDir / ProcessedPath;
					FPaths::NormalizeDirectoryName(FullModPath);
					
					FString ModsDirWithSlash = ModsDir;
					if (!ModsDirWithSlash.EndsWith(TEXT("/")) && !ModsDirWithSlash.EndsWith(TEXT("\\")))
					{
						ModsDirWithSlash += TEXT("/");
					}
					
					FString NormalizedFullModPath = FullModPath;
					if (!NormalizedFullModPath.EndsWith(TEXT("/")) && !NormalizedFullModPath.EndsWith(TEXT("\\")))
					{
						NormalizedFullModPath += TEXT("/");
					}
					
					if (!NormalizedFullModPath.StartsWith(ModsDirWithSlash))
					{
						return false;
					}
					
					FString RelativeToMods = NormalizedFullModPath.Mid(ModsDirWithSlash.Len());
					if (RelativeToMods.EndsWith(TEXT("/")) || RelativeToMods.EndsWith(TEXT("\\")))
					{
						RelativeToMods = RelativeToMods.Left(RelativeToMods.Len() - 1);
					}
					
					if (RelativeToMods.IsEmpty() || RelativeToMods.Contains(TEXT("/")) || RelativeToMods.Contains(TEXT("\\")))
					{
						return false;
					}
					
					// 路径有效，检查 DetailsView 是否启用
					return DetailsView.IsValid() && DetailsView->IsEnabled();
				})
			]
		]
	];
}

void SModInfoEditorWindow::LoadModInfoFromFile(const FString& FilePath)
{
	FString JsonContent;
	if (!FFileHelper::LoadFileToString(JsonContent, *FilePath))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load ModInfo.json from: %s"), *FilePath);
		return;
	}

	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonContent);

	if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to parse ModInfo.json"));
		return;
	}

	// 解析 JSON 数据
	if (JsonObject->HasField(TEXT("ModId")))
	{
		ModInfoData->ModId = JsonObject->GetStringField(TEXT("ModId"));
	}
	if (JsonObject->HasField(TEXT("ModName")))
	{
		ModInfoData->ModName = JsonObject->GetStringField(TEXT("ModName"));
	}
	if (JsonObject->HasField(TEXT("Version")))
	{
		ModInfoData->Version = JsonObject->GetStringField(TEXT("Version"));
	}
	if (JsonObject->HasField(TEXT("Author")))
	{
		ModInfoData->Author = JsonObject->GetStringField(TEXT("Author"));
	}
	if (JsonObject->HasField(TEXT("Description")))
	{
		ModInfoData->Description = JsonObject->GetStringField(TEXT("Description"));
	}
	if (JsonObject->HasField(TEXT("Icon")))
	{
		ModInfoData->Icon = JsonObject->GetStringField(TEXT("Icon"));
	}
	if (JsonObject->HasField(TEXT("MainLuaFile")))
	{
		FString MainLuaFileValue = JsonObject->GetStringField(TEXT("MainLuaFile"));
		
		// 如果 MainLuaFile 包含 mod 文件夹路径，转换为相对于 mod 文件夹的路径
		if (!MainLuaFileValue.IsEmpty() && !ModInfoData->ModFolderPath.IsEmpty())
		{
			FString ContentDir = FPaths::ProjectContentDir();
			FPaths::NormalizeDirectoryName(ContentDir);
			// 确保 ContentDir 是绝对路径
			if (FPaths::IsRelative(ContentDir))
			{
				ContentDir = FPaths::ConvertRelativePathToFull(ContentDir);
				FPaths::NormalizeDirectoryName(ContentDir);
			}
			
			FString ModFullPath = ContentDir / ModInfoData->ModFolderPath;
			FPaths::NormalizeDirectoryName(ModFullPath);
			
			FString FullLuaPath;
			// 如果是绝对路径
			if (FPaths::IsRelative(MainLuaFileValue) == false)
			{
				FPaths::NormalizeFilename(MainLuaFileValue);
				// 如果文件在 mod 文件夹下，转换为相对路径
				if (MainLuaFileValue.StartsWith(ModFullPath))
				{
					FString RelativeToMod = MainLuaFileValue.Mid(ModFullPath.Len() + 1);
					RelativeToMod.ReplaceCharInline(TEXT('\\'), TEXT('/'));
					MainLuaFileValue = RelativeToMod;
				}
			}
			// 如果是相对路径，检查是否包含 mod 文件夹路径
			else
			{
				// 检查是否以 Mods/ 开头（可能包含 mod 文件夹路径）
				if (MainLuaFileValue.StartsWith(TEXT("Mods/")) || MainLuaFileValue.StartsWith(TEXT("Mods\\")))
				{
					// 提取 mod 文件夹名称
					FString ModFolderName = ModInfoData->ModFolderPath;
					if (ModFolderName.StartsWith(TEXT("Mods/")) || ModFolderName.StartsWith(TEXT("Mods\\")))
					{
						ModFolderName = ModFolderName.Mid(5); // 移除 "Mods/"
					}
					
					// 检查路径是否以 Mods/{ModFolderName}/ 开头
					FString ExpectedPrefix = FString::Printf(TEXT("Mods/%s/"), *ModFolderName);
					FString ExpectedPrefixBackslash = FString::Printf(TEXT("Mods\\%s\\"), *ModFolderName);
					
					if (MainLuaFileValue.StartsWith(ExpectedPrefix))
					{
						MainLuaFileValue = MainLuaFileValue.Mid(ExpectedPrefix.Len());
					}
					else if (MainLuaFileValue.StartsWith(ExpectedPrefixBackslash))
					{
						MainLuaFileValue = MainLuaFileValue.Mid(ExpectedPrefixBackslash.Len());
					}
					// 或者直接以 mod 文件夹名称开头
					else if (MainLuaFileValue.StartsWith(ModFolderName + TEXT("/")) || MainLuaFileValue.StartsWith(ModFolderName + TEXT("\\")))
					{
						MainLuaFileValue = MainLuaFileValue.Mid(ModFolderName.Len() + 1);
					}
				}
				// 检查是否直接以 mod 文件夹名称开头（不包含 Mods/）
				else
				{
					FString ModFolderName = ModInfoData->ModFolderPath;
					if (ModFolderName.StartsWith(TEXT("Mods/")) || ModFolderName.StartsWith(TEXT("Mods\\")))
					{
						ModFolderName = ModFolderName.Mid(5); // 移除 "Mods/"
					}
					
					if (MainLuaFileValue.StartsWith(ModFolderName + TEXT("/")) || MainLuaFileValue.StartsWith(ModFolderName + TEXT("\\")))
					{
						MainLuaFileValue = MainLuaFileValue.Mid(ModFolderName.Len() + 1);
					}
				}
			}
		}
		
		ModInfoData->MainLuaFile = MainLuaFileValue;
	}
	if (JsonObject->HasField(TEXT("ModInformationAssetPath")))
	{
		FString AssetPathString = JsonObject->GetStringField(TEXT("ModInformationAssetPath"));
		if (!AssetPathString.IsEmpty())
		{
			ModInfoData->ModInformationAssetPath = FSoftObjectPath(AssetPathString);
		}
	}
	if (JsonObject->HasField(TEXT("NewGameLoad")))
	{
		ModInfoData->bNewGameLoad = JsonObject->GetBoolField(TEXT("NewGameLoad"));
	}
	if (JsonObject->HasField(TEXT("MinGameVersion")))
	{
		ModInfoData->MinGameVersion = JsonObject->GetStringField(TEXT("MinGameVersion"));
	}
	if (JsonObject->HasField(TEXT("PublishedFileId")))
	{
		ModInfoData->PublishedFileId = JsonObject->GetStringField(TEXT("PublishedFileId"));
	}
	else
	{
		ModInfoData->PublishedFileId.Empty();
	}
	if (JsonObject->HasField(TEXT("IncludeGameplayTags")))
	{
		ModInfoData->bIncludeGameplayTags = JsonObject->GetBoolField(TEXT("IncludeGameplayTags"));
		// 保存原始值
		bOriginalIncludeGameplayTags = ModInfoData->bIncludeGameplayTags;
	}
	else
	{
		// 如果字段不存在，默认为 false
		ModInfoData->bIncludeGameplayTags = false;
		bOriginalIncludeGameplayTags = false;
	}

	if (JsonObject->HasField(TEXT("GameplayTagsIniFile")))
	{
		ModInfoData->GameplayTagsIniFile = JsonObject->GetStringField(TEXT("GameplayTagsIniFile"));
	}
	else if (ModInfoData->bIncludeGameplayTags && !ModInfoData->ModFolderPath.IsEmpty() && !ModInfoData->ModId.IsEmpty())
	{
		// 旧版 Mod：{ModId}.ini 或 {ModId}GameplayTags.ini
		FString ContentDirL = FPaths::ProjectContentDir();
		FPaths::NormalizeDirectoryName(ContentDirL);
		if (FPaths::IsRelative(ContentDirL))
		{
			ContentDirL = FPaths::ConvertRelativePathToFull(ContentDirL);
			FPaths::NormalizeDirectoryName(ContentDirL);
		}
		FString NewStyleIni = FPaths::ConvertRelativePathToFull(
			ContentDirL / ModInfoData->ModFolderPath / UModInfoData::MakeGameplayTagsIniFileName(ModInfoData->ModId));
		FPaths::NormalizeFilename(NewStyleIni);
		FString OldStyleIni = FPaths::ConvertRelativePathToFull(
			ContentDirL / ModInfoData->ModFolderPath / (ModInfoData->ModId + TEXT(".ini")));
		FPaths::NormalizeFilename(OldStyleIni);
		if (FPaths::FileExists(NewStyleIni))
		{
			ModInfoData->GameplayTagsIniFile = UModInfoData::MakeGameplayTagsIniFileName(ModInfoData->ModId);
		}
		else if (FPaths::FileExists(OldStyleIni))
		{
			ModInfoData->GameplayTagsIniFile = ModInfoData->ModId + TEXT(".ini");
		}
	}
	else
	{
		ModInfoData->GameplayTagsIniFile.Empty();
	}

	// 解析额外资产列表
	ModInfoData->AdditionalAssets.Empty();
	if (JsonObject->HasTypedField<EJson::Array>(TEXT("AdditionalAssets")))
	{
		const TArray<TSharedPtr<FJsonValue>>* AdditionalAssetsArray;
		if (JsonObject->TryGetArrayField(TEXT("AdditionalAssets"), AdditionalAssetsArray))
		{
			for (const TSharedPtr<FJsonValue>& Value : *AdditionalAssetsArray)
			{
				if (Value.IsValid() && Value->Type == EJson::String)
				{
					ModInfoData->AdditionalAssets.Add(Value->AsString());
				}
			}
		}
	}

	// 解析依赖列表
	ModInfoData->Dependencies.Empty();
	if (JsonObject->HasTypedField<EJson::Array>(TEXT("Dependencies")))
	{
		const TArray<TSharedPtr<FJsonValue>>* DepArray;
		if (JsonObject->TryGetArrayField(TEXT("Dependencies"), DepArray))
		{
			for (const TSharedPtr<FJsonValue>& DepValue : *DepArray)
			{
				TSharedPtr<FJsonObject> DepObj = DepValue->AsObject();
				if (DepObj.IsValid())
				{
					FModDependencyData Dependency;
					if (DepObj->HasField(TEXT("ModId")))
					{
						Dependency.ModId = DepObj->GetStringField(TEXT("ModId"));
					}
					if (DepObj->HasField(TEXT("MinVersion")))
					{
						Dependency.MinVersion = DepObj->GetStringField(TEXT("MinVersion"));
					}
					if (DepObj->HasField(TEXT("Required")))
					{
						Dependency.bRequired = DepObj->GetBoolField(TEXT("Required"));
					}
					ModInfoData->Dependencies.Add(Dependency);
				}
			}
		}
	}

	// 刷新详情视图
	DetailsView->SetObject(ModInfoData.Get(), true);
}

bool SModInfoEditorWindow::SaveModInfoToFile(const FString& FilePath)
{
	if (!ValidateModInfo())
	{
		return false;
	}

	// 在已有 ModInfo.json 上合并写入，保留 DataTableConfigs / DataAssetConfigs / ModToolVersion 等
	TSharedPtr<FJsonObject> JsonObject;
	FString ExistingJsonContent;
	if (FFileHelper::LoadFileToString(ExistingJsonContent, *FilePath))
	{
		const TSharedRef<TJsonReader<>> ExistingReader = TJsonReaderFactory<>::Create(ExistingJsonContent);
		TSharedPtr<FJsonObject> ExistingObject;
		if (FJsonSerializer::Deserialize(ExistingReader, ExistingObject) && ExistingObject.IsValid())
		{
			JsonObject = ExistingObject;
		}
	}
	if (!JsonObject.IsValid())
	{
		JsonObject = MakeShareable(new FJsonObject);
	}

	JsonObject->SetStringField(TEXT("ModId"), ModInfoData->ModId);
	JsonObject->SetStringField(TEXT("ModName"), ModInfoData->ModName);
	JsonObject->SetStringField(TEXT("Version"), ModInfoData->Version);
	JsonObject->SetStringField(TEXT("Author"), ModInfoData->Author);
	JsonObject->SetStringField(TEXT("Description"), ModInfoData->Description);
	
	// 处理 Icon 路径：如果不在 mod 文件夹下，则拷贝到 mod 文件夹，然后保存相对路径
	FString IconPath = ModInfoData->Icon;
	if (!IconPath.IsEmpty())
	{
		FString ContentDir = FPaths::ProjectContentDir();
		FPaths::NormalizeDirectoryName(ContentDir);
		// 确保 ContentDir 是绝对路径
		if (FPaths::IsRelative(ContentDir))
		{
			ContentDir = FPaths::ConvertRelativePathToFull(ContentDir);
			FPaths::NormalizeDirectoryName(ContentDir);
		}
		
		FString ModFullPath = ContentDir / ModInfoData->ModFolderPath;
		FPaths::NormalizeDirectoryName(ModFullPath);
		
		FString IconSourcePath = IconPath;
		FString IconFileName;
		bool bNeedCopy = false;
		
		// 如果是 UE 资源路径（/Game/...），转换为实际文件路径
		if (IconSourcePath.StartsWith(TEXT("/Game/")))
		{
			FString RelativePath = IconSourcePath.Mid(6); // 移除 "/Game/"
			RelativePath.ReplaceCharInline(TEXT('/'), TEXT('\\'));
			
			FString FullIconPath = ContentDir / RelativePath;
			FPaths::NormalizeFilename(FullIconPath);
			
			bool bFoundFile = false;
			// 路径已含扩展名时直接使用（与 Browse 保留后缀一致）
			if (FPaths::FileExists(FullIconPath))
			{
				IconSourcePath = FullIconPath;
				IconFileName = FPaths::GetCleanFilename(RelativePath);
				bFoundFile = true;
				if (!FullIconPath.StartsWith(ModFullPath))
				{
					bNeedCopy = true;
				}
			}
			
			// 无扩展名（旧数据 /Game/.../icon）时按常见后缀探测
			if (!bFoundFile)
			{
				TArray<FString> ImageExtensions = { TEXT(".png"), TEXT(".jpg"), TEXT(".jpeg"), TEXT(".bmp"), TEXT(".tga"), TEXT(".exr") };
				for (const FString& Ext : ImageExtensions)
				{
					FString TestPath = FullIconPath + Ext;
					if (FPaths::FileExists(TestPath))
					{
						IconSourcePath = TestPath;
						IconFileName = FPaths::GetCleanFilename(RelativePath) + Ext;
						bFoundFile = true;
						if (!TestPath.StartsWith(ModFullPath))
						{
							bNeedCopy = true;
						}
						break;
					}
				}
			}
			
			if (bFoundFile && !bNeedCopy && IconSourcePath.StartsWith(ModFullPath))
			{
				FString RelativeToMod = IconSourcePath.Mid(ModFullPath.Len() + 1);
				RelativeToMod.ReplaceCharInline(TEXT('\\'), TEXT('/'));
				IconPath = RelativeToMod;
				ModInfoData->Icon = RelativeToMod;
			}
			else if (!bFoundFile)
			{
				UE_LOG(LogTemp, Warning, TEXT("Icon file not found for path: %s"), *IconPath);
				IconPath = FPaths::GetCleanFilename(RelativePath);
			}
		}
		// 如果是绝对路径
		else if (FPaths::IsRelative(IconSourcePath) == false)
		{
			FPaths::NormalizeFilename(IconSourcePath);
			IconFileName = FPaths::GetCleanFilename(IconSourcePath);
			
			// 检查是否在 mod 文件夹下
			if (!IconSourcePath.StartsWith(ModFullPath))
			{
				bNeedCopy = true;
			}
		}
		// 如果是相对路径（可能是 "icon.png" 或旧数据无后缀的 "Test"）
		else
		{
			FString FullIconPath = ModFullPath / IconSourcePath;
			FPaths::NormalizeFilename(FullIconPath);
			
			bool bFoundUnderMod = false;
			if (FullIconPath.StartsWith(ModFullPath) && FPaths::FileExists(FullIconPath))
			{
				bFoundUnderMod = true;
			}
			else if (FullIconPath.StartsWith(ModFullPath) && FPaths::GetExtension(IconSourcePath).IsEmpty())
			{
				static const TArray<FString> ImageExtensionsRel = {
					TEXT(".png"), TEXT(".jpg"), TEXT(".jpeg"), TEXT(".bmp"), TEXT(".tga"), TEXT(".exr")
				};
				for (const FString& Ext : ImageExtensionsRel)
				{
					const FString TryPath = FullIconPath + Ext;
					if (FPaths::FileExists(TryPath))
					{
						FullIconPath = TryPath;
						bFoundUnderMod = true;
						break;
					}
				}
			}
			
			if (bFoundUnderMod)
			{
				FString RelativeToMod = FullIconPath.Mid(ModFullPath.Len() + 1);
				RelativeToMod.ReplaceCharInline(TEXT('\\'), TEXT('/'));
				IconPath = RelativeToMod;
				ModInfoData->Icon = RelativeToMod;
			}
			else
			{
				// 不在 mod 文件夹下（或仍未解析到文件），尝试查找源文件
				if (FPaths::FileExists(IconSourcePath))
				{
					IconFileName = FPaths::GetCleanFilename(IconSourcePath);
					bNeedCopy = true;
				}
				else
				{
					FString TestPath = ContentDir / IconSourcePath;
					FPaths::NormalizeFilename(TestPath);
					if (FPaths::FileExists(TestPath))
					{
						IconSourcePath = TestPath;
						IconFileName = FPaths::GetCleanFilename(IconSourcePath);
						if (!TestPath.StartsWith(ModFullPath))
						{
							bNeedCopy = true;
						}
					}
					else if (FPaths::GetExtension(IconSourcePath).IsEmpty())
					{
						static const TArray<FString> ImageExtensionsRel = {
							TEXT(".png"), TEXT(".jpg"), TEXT(".jpeg"), TEXT(".bmp"), TEXT(".tga"), TEXT(".exr")
						};
						bool bFoundAlt = false;
						for (const FString& Ext : ImageExtensionsRel)
						{
							const FString TryPath = TestPath + Ext;
							if (FPaths::FileExists(TryPath))
							{
								IconSourcePath = TryPath;
								IconFileName = FPaths::GetCleanFilename(IconSourcePath);
								if (!TryPath.StartsWith(ModFullPath))
								{
									bNeedCopy = true;
								}
								bFoundAlt = true;
								break;
							}
						}
						if (!bFoundAlt)
						{
							IconPath = FPaths::GetCleanFilename(IconSourcePath);
						}
					}
					else
					{
						IconPath = FPaths::GetCleanFilename(IconSourcePath);
					}
				}
			}
		}
		
		// 如果需要拷贝且源文件存在
		if (bNeedCopy && FPaths::FileExists(IconSourcePath) && !IconFileName.IsEmpty())
		{
			FString IconDestPath = ModFullPath / IconFileName;
			
			// 使用 IPlatformFile 拷贝文件
			IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
			if (PlatformFile.CopyFile(*IconDestPath, *IconSourcePath))
			{
				// 更新 Icon 路径为相对于 mod 文件夹的相对路径（只保存文件名）
				IconPath = IconFileName;
				// 同时更新 ModInfoData->Icon，这样 UI 中显示的就是正确的路径
				ModInfoData->Icon = IconFileName;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Failed to copy icon file from %s to %s"), *IconSourcePath, *IconDestPath);
				// 拷贝失败，使用文件名
				IconPath = IconFileName;
				ModInfoData->Icon = IconFileName;
			}
		}
		// 如果文件已经在 mod 文件夹下，确保路径是相对路径
		else if (!bNeedCopy && !IconPath.IsEmpty())
		{
			// 如果 IconPath 还是绝对路径，转换为相对路径
			if (FPaths::IsRelative(IconPath) == false)
			{
				if (IconPath.StartsWith(ModFullPath))
				{
					FString RelativeToMod = IconPath.Mid(ModFullPath.Len() + 1);
					RelativeToMod.ReplaceCharInline(TEXT('\\'), TEXT('/'));
					IconPath = RelativeToMod;
					// 更新 ModInfoData->Icon
					ModInfoData->Icon = RelativeToMod;
				}
				else
				{
					IconPath = FPaths::GetCleanFilename(IconPath);
					ModInfoData->Icon = IconPath;
				}
			}
			else
			{
				// 如果已经是相对路径，确保 ModInfoData->Icon 也是相对路径
				ModInfoData->Icon = IconPath;
			}
		}
		else if (IconPath.IsEmpty())
		{
			// 如果 IconPath 为空，清空 ModInfoData->Icon
			ModInfoData->Icon = TEXT("");
		}
	}
	JsonObject->SetStringField(TEXT("Icon"), IconPath);
	
		// 处理 MainLuaFile 路径：确保保存的是相对于 mod 文件夹的相对路径
		FString MainLuaFilePath = ModInfoData->MainLuaFile;
		if (!MainLuaFilePath.IsEmpty() && !ModInfoData->ModFolderPath.IsEmpty())
		{
			FString ContentDir = FPaths::ProjectContentDir();
			FPaths::NormalizeDirectoryName(ContentDir);
			// 确保 ContentDir 是绝对路径
			if (FPaths::IsRelative(ContentDir))
			{
				ContentDir = FPaths::ConvertRelativePathToFull(ContentDir);
				FPaths::NormalizeDirectoryName(ContentDir);
			}
			
			FString ModFullPath = ContentDir / ModInfoData->ModFolderPath;
			FPaths::NormalizeDirectoryName(ModFullPath);
		
		// 如果是绝对路径，检查是否在 mod 文件夹下
		if (FPaths::IsRelative(MainLuaFilePath) == false)
		{
			FPaths::NormalizeFilename(MainLuaFilePath);
			// 如果文件在 mod 文件夹下，转换为相对路径
			if (MainLuaFilePath.StartsWith(ModFullPath))
			{
				FString RelativeToMod = MainLuaFilePath.Mid(ModFullPath.Len() + 1);
				RelativeToMod.ReplaceCharInline(TEXT('\\'), TEXT('/'));
				MainLuaFilePath = RelativeToMod;
				// 更新 ModInfoData->MainLuaFile
				ModInfoData->MainLuaFile = RelativeToMod;
			}
			else
			{
				// 不在 mod 文件夹下，只保留文件名
				MainLuaFilePath = FPaths::GetCleanFilename(MainLuaFilePath);
				ModInfoData->MainLuaFile = MainLuaFilePath;
			}
		}
		// 如果是相对路径，检查是否包含 mod 文件夹路径
		else
		{
			FString ModFolderName = ModInfoData->ModFolderPath;
			if (ModFolderName.StartsWith(TEXT("Mods/")) || ModFolderName.StartsWith(TEXT("Mods\\")))
			{
				ModFolderName = ModFolderName.Mid(5); // 移除 "Mods/"
			}
			
			// 检查是否以 Mods/{ModFolderName}/ 开头
			FString ExpectedPrefix = FString::Printf(TEXT("Mods/%s/"), *ModFolderName);
			FString ExpectedPrefixBackslash = FString::Printf(TEXT("Mods\\%s\\"), *ModFolderName);
			
			if (MainLuaFilePath.StartsWith(ExpectedPrefix))
			{
				MainLuaFilePath = MainLuaFilePath.Mid(ExpectedPrefix.Len());
				ModInfoData->MainLuaFile = MainLuaFilePath;
			}
			else if (MainLuaFilePath.StartsWith(ExpectedPrefixBackslash))
			{
				MainLuaFilePath = MainLuaFilePath.Mid(ExpectedPrefixBackslash.Len());
				ModInfoData->MainLuaFile = MainLuaFilePath;
			}
			// 或者直接以 mod 文件夹名称开头
			else if (MainLuaFilePath.StartsWith(ModFolderName + TEXT("/")) || MainLuaFilePath.StartsWith(ModFolderName + TEXT("\\")))
			{
				MainLuaFilePath = MainLuaFilePath.Mid(ModFolderName.Len() + 1);
				ModInfoData->MainLuaFile = MainLuaFilePath;
			}
			// 如果路径已经是在 mod 文件夹下的相对路径，确保格式正确（使用正斜杠）
			else
			{
				// 检查是否是有效的相对路径（不包含 .. 或绝对路径特征）
				MainLuaFilePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
				// 确保没有开头的斜杠
				if (MainLuaFilePath.StartsWith(TEXT("/")))
				{
					MainLuaFilePath = MainLuaFilePath.Mid(1);
				}
				ModInfoData->MainLuaFile = MainLuaFilePath;
			}
		}
	}
	else if (!MainLuaFilePath.IsEmpty())
	{
		// 如果没有 ModFolderPath，但 MainLuaFilePath 不为空，确保格式正确
		MainLuaFilePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
		if (MainLuaFilePath.StartsWith(TEXT("/")))
		{
			MainLuaFilePath = MainLuaFilePath.Mid(1);
		}
		ModInfoData->MainLuaFile = MainLuaFilePath;
	}
	
	// 最终确保保存的是相对路径（不包含 mod 文件夹路径）
	JsonObject->SetStringField(TEXT("MainLuaFile"), MainLuaFilePath);
	JsonObject->SetStringField(TEXT("ModInformationAssetPath"), ModInfoData->ModInformationAssetPath.ToString());
	JsonObject->SetBoolField(TEXT("NewGameLoad"), ModInfoData->bNewGameLoad);
	JsonObject->SetStringField(TEXT("MinGameVersion"), ModInfoData->MinGameVersion);
	
	// GameplayTags：规范为 Mod 根目录下 {ModId}GameplayTags.ini
	if (ModInfoData->bIncludeGameplayTags && !ModInfoData->ModFolderPath.IsEmpty() && !ModInfoData->ModId.IsEmpty())
	{
		FString ContentDirGT = FPaths::ProjectContentDir();
		FPaths::NormalizeDirectoryName(ContentDirGT);
		if (FPaths::IsRelative(ContentDirGT))
		{
			ContentDirGT = FPaths::ConvertRelativePathToFull(ContentDirGT);
			FPaths::NormalizeDirectoryName(ContentDirGT);
		}
		const FString ModFullPathGT = FPaths::ConvertRelativePathToFull(ContentDirGT / ModInfoData->ModFolderPath);
		FString SourceFullGT;
		if (!ModInfoData->GameplayTagsIniFile.IsEmpty())
		{
			if (FPaths::IsRelative(ModInfoData->GameplayTagsIniFile))
			{
				SourceFullGT = FPaths::ConvertRelativePathToFull(ModFullPathGT / ModInfoData->GameplayTagsIniFile);
			}
			else
			{
				SourceFullGT = FPaths::ConvertRelativePathToFull(ModInfoData->GameplayTagsIniFile);
			}
			FPaths::NormalizeFilename(SourceFullGT);
		}
		const FString StandardNameGT = UModInfoData::MakeGameplayTagsIniFileName(ModInfoData->ModId);
		FString DestInModGT = FPaths::ConvertRelativePathToFull(ModFullPathGT / StandardNameGT);
		FPaths::NormalizeFilename(DestInModGT);
		if (!SourceFullGT.IsEmpty() && FPaths::FileExists(SourceFullGT) && !FPaths::IsSamePath(SourceFullGT, DestInModGT))
		{
			IPlatformFile& PFGT = FPlatformFileManager::Get().GetPlatformFile();
			if (PFGT.CopyFile(*DestInModGT, *SourceFullGT))
			{
				UE_LOG(LogTemp, Log, TEXT("GameplayTags ini copied to: %s"), *DestInModGT);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Failed to copy GameplayTags ini to: %s"), *DestInModGT);
			}
		}
		ModInfoData->GameplayTagsIniFile = StandardNameGT;
	}
	else
	{
		ModInfoData->GameplayTagsIniFile.Empty();
	}
	JsonObject->SetStringField(TEXT("GameplayTagsIniFile"), ModInfoData->GameplayTagsIniFile);
	JsonObject->SetBoolField(TEXT("IncludeGameplayTags"), ModInfoData->bIncludeGameplayTags);

	// 添加额外资产数组
	TArray<TSharedPtr<FJsonValue>> AdditionalAssetsArray;
	for (const FString& AssetPath : ModInfoData->AdditionalAssets)
	{
		AdditionalAssetsArray.Add(MakeShareable(new FJsonValueString(AssetPath)));
	}
	JsonObject->SetArrayField(TEXT("AdditionalAssets"), AdditionalAssetsArray);

	// 添加依赖数组
	TArray<TSharedPtr<FJsonValue>> DepArray;
	for (const FModDependencyData& Dep : ModInfoData->Dependencies)
	{
		TSharedPtr<FJsonObject> DepObj = MakeShareable(new FJsonObject);
		DepObj->SetStringField(TEXT("ModId"), Dep.ModId);
		if (!Dep.MinVersion.IsEmpty())
		{
			DepObj->SetStringField(TEXT("MinVersion"), Dep.MinVersion);
		}
		DepObj->SetBoolField(TEXT("Required"), Dep.bRequired);
		DepArray.Add(MakeShareable(new FJsonValueObject(DepObj)));
	}
	JsonObject->SetArrayField(TEXT("Dependencies"), DepArray);

	// 保留已存在的 Steam 发布 ID（由上传流程写入，本窗口不编辑）
	if (!ModInfoData->PublishedFileId.IsEmpty())
	{
		JsonObject->SetStringField(TEXT("PublishedFileId"), ModInfoData->PublishedFileId);
	}

	if (!ModInfoData->ModFolderPath.IsEmpty())
	{
		FString ContentDirRestore = FPaths::ProjectContentDir();
		FPaths::NormalizeDirectoryName(ContentDirRestore);
		if (FPaths::IsRelative(ContentDirRestore))
		{
			ContentDirRestore = FPaths::ConvertRelativePathToFull(ContentDirRestore);
			FPaths::NormalizeDirectoryName(ContentDirRestore);
		}
		const FString ModFullPathRestore = FPaths::ConvertRelativePathToFull(ContentDirRestore / ModInfoData->ModFolderPath);
		FModConfigExporter::RestoreConfigMetadataFromDiskIfMissing(ModFullPathRestore, JsonObject);
	}

	// 序列化为 JSON 字符串
	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString, 0);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	// 确保目录存在
	FString Directory = FPaths::GetPath(FilePath);
	if (!FPaths::DirectoryExists(Directory))
	{
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		PlatformFile.CreateDirectoryTree(*Directory);
	}

	// 保存文件
	if (FFileHelper::SaveStringToFile(OutputString, *FilePath))
	{
		UE_LOG(LogTemp, Log, TEXT("ModInfo.json saved successfully to: %s"), *FilePath);
		return true;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to save ModInfo.json to: %s"), *FilePath);
		return false;
	}
}

FReply SModInfoEditorWindow::OnSaveButtonClicked()
{
	// 检查是否选择了路径
	if (ModInfoData->ModFolderPath.IsEmpty())
	{
		FNotificationInfo Info(LOCTEXT("NoModPath", "Please select a Mod folder path first!"));
		Info.ExpireDuration = 3.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		return FReply::Handled();
	}

	FString JsonPath = GetModInfoJsonPath();
	if (JsonPath.IsEmpty())
	{
		FNotificationInfo Info(LOCTEXT("InvalidModPath", "Invalid Mod folder path!"));
		Info.ExpireDuration = 3.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		return FReply::Handled();
	}

	// 检查 bIncludeGameplayTags 的变化
	bool bCurrentIncludeGameplayTags = ModInfoData->bIncludeGameplayTags;
	
	// 如果从 true 变为 false，提示删除配置
	if (bOriginalIncludeGameplayTags && !bCurrentIncludeGameplayTags)
	{
		const FString TagsIniFileName = UModInfoData::MakeGameplayTagsIniFileName(ModInfoData->ModId);
		EAppReturnType::Type Result = FMessageDialog::Open(
			EAppMsgType::YesNo,
			FText::Format(LOCTEXT("DeleteGameplayTagsConfirm", "Unchecking 'Include Gameplay Tags' will delete the {0} file. Do you want to continue?"), FText::FromString(TagsIniFileName))
		);
		
		if (Result == EAppReturnType::No)
		{
			// 用户取消，恢复原始值
			ModInfoData->bIncludeGameplayTags = bOriginalIncludeGameplayTags;
			if (DetailsView.IsValid())
			{
				DetailsView->ForceRefresh();
			}
			return FReply::Handled();
		}
	}

	if (SaveModInfoToFile(JsonPath))
	{
		// 处理 GameplayTags.ini 的创建或删除
		if (bOriginalIncludeGameplayTags && !bCurrentIncludeGameplayTags)
		{
			// 从 true 变为 false，删除配置文件
			const FString TagsIniFileName = UModInfoData::MakeGameplayTagsIniFileName(ModInfoData->ModId);
			if (DeleteGameplayTagsIni())
			{
				UE_LOG(LogTemp, Log, TEXT("%s deleted successfully"), *TagsIniFileName);
				// 提示需要重启编辑器
				FNotificationInfo Info(FText::Format(LOCTEXT("TagsIniDeleted", "{0} deleted. Please restart the project for the changes to take effect."), FText::FromString(TagsIniFileName)));
				Info.bUseLargeFont = true;
				Info.ExpireDuration = 10.0f;
				Info.Image = FAppStyle::Get().GetBrush(TEXT("Icons.Warning"));
				Info.bFireAndForget = true;
				FSlateNotificationManager::Get().AddNotification(Info);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Failed to delete %s"), *TagsIniFileName);
			}
		}
		// 已勾选时请在详情中选择 *.ini 文件；不再自动生成
		
		// 更新原始值
		bOriginalIncludeGameplayTags = bCurrentIncludeGameplayTags;
		
		// 刷新 DetailsView 以显示更新后的 Icon 路径
		if (DetailsView.IsValid())
		{
			DetailsView->ForceRefresh();
		}
		
		// 显示成功消息
		FNotificationInfo Info(LOCTEXT("SaveSuccess", "ModInfo.json saved successfully!"));
		Info.ExpireDuration = 3.0f;
		Info.bFireAndForget = true;
		Info.bUseSuccessFailIcons = true;
		FSlateNotificationManager::Get().AddNotification(Info);
	}
	else
	{
		FNotificationInfo Info(LOCTEXT("SaveFailed", "Failed to save ModInfo.json!"));
		Info.ExpireDuration = 3.0f;
		Info.bFireAndForget = true;
		Info.bUseSuccessFailIcons = true;
		FSlateNotificationManager::Get().AddNotification(Info);
	}

	return FReply::Handled();
}

void SModInfoEditorWindow::TryLoadModInfo()
{
	if (!ModInfoData || ModInfoData->ModFolderPath.IsEmpty())
	{
		// 路径为空，禁用属性编辑和保存按钮并提示
		DetailsView->SetEnabled(false);
		if (SaveButton.IsValid())
		{
			SaveButton->SetEnabled(false);
		}
		FNotificationInfo Info(LOCTEXT("NoModPath", "Please select a Mod folder path"));
		Info.ExpireDuration = 3.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		return;
	}

	// 验证路径必须是 Mods 下的直接子文件夹（不能是更深层级）
	FString ContentDir = FPaths::ProjectContentDir();
	FPaths::NormalizeDirectoryName(ContentDir);
	
	// 确保 ContentDir 是绝对路径（FPaths::ProjectContentDir() 在不同环境下可能返回相对或绝对路径）
	if (FPaths::IsRelative(ContentDir))
	{
		ContentDir = FPaths::ConvertRelativePathToFull(ContentDir);
		FPaths::NormalizeDirectoryName(ContentDir);
	}
	
	// 处理路径：如果包含 "Content/" 前缀，移除它
	FString ProcessedPath = ModInfoData->ModFolderPath;
	if (ProcessedPath.StartsWith(TEXT("Content/")) || ProcessedPath.StartsWith(TEXT("Content\\")))
	{
		ProcessedPath = ProcessedPath.Mid(8); // 移除 "Content/" 前缀
		ModInfoData->ModFolderPath = ProcessedPath; // 更新为处理后的路径
	}
	
	FString ModsDir = ContentDir / TEXT("Mods");
	FPaths::NormalizeDirectoryName(ModsDir);
	
	// 获取 Mod 文件夹的完整路径
	FString FullModPath = ContentDir / ProcessedPath;
	FPaths::NormalizeDirectoryName(FullModPath);
	
	// 确保 ModsDir 以路径分隔符结尾，便于比较
	FString ModsDirWithSlash = ModsDir;
	if (!ModsDirWithSlash.EndsWith(TEXT("/")) && !ModsDirWithSlash.EndsWith(TEXT("\\")))
	{
		ModsDirWithSlash += TEXT("/");
	}
	
	// 确保 FullModPath 以路径分隔符结尾，便于比较
	FString NormalizedFullModPath = FullModPath;
	if (!NormalizedFullModPath.EndsWith(TEXT("/")) && !NormalizedFullModPath.EndsWith(TEXT("\\")))
	{
		NormalizedFullModPath += TEXT("/");
	}
	
	// 检查路径是否在 Mods 目录下
	if (!NormalizedFullModPath.StartsWith(ModsDirWithSlash))
	{
		// 路径不在 Mods 目录下，禁用属性编辑和保存按钮并提示
		DetailsView->SetEnabled(false);
		if (SaveButton.IsValid())
		{
			SaveButton->SetEnabled(false);
		}
		FNotificationInfo Info(LOCTEXT("InvalidModPath", "Path must be a direct subfolder of Content/Mods directory!"));
		Info.ExpireDuration = 3.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		return;
	}
	
	// 获取相对于 Mods 目录的路径
	FString RelativeToMods = NormalizedFullModPath.Mid(ModsDirWithSlash.Len());
	// 移除结尾的路径分隔符
	if (RelativeToMods.EndsWith(TEXT("/")) || RelativeToMods.EndsWith(TEXT("\\")))
	{
		RelativeToMods = RelativeToMods.Left(RelativeToMods.Len() - 1);
	}
	
	// 检查是否是直接子文件夹（路径中不能包含路径分隔符，且不能为空）
	if (RelativeToMods.IsEmpty())
	{
		// 路径就是 Mods 目录本身，不允许
		DetailsView->SetEnabled(false);
		if (SaveButton.IsValid())
		{
			SaveButton->SetEnabled(false);
		}
		FNotificationInfo Info(LOCTEXT("InvalidModPathRoot", "Cannot select Mods directory itself. Please select a subfolder!"));
		Info.ExpireDuration = 3.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		return;
	}
	
	if (RelativeToMods.Contains(TEXT("/")) || RelativeToMods.Contains(TEXT("\\")))
	{
		// 路径层级太深，禁用属性编辑和保存按钮并提示
		DetailsView->SetEnabled(false);
		if (SaveButton.IsValid())
		{
			SaveButton->SetEnabled(false);
		}
		FNotificationInfo Info(LOCTEXT("InvalidModPathDepth", "Path must be a direct subfolder of Content/Mods directory, not a deeper level!"));
		Info.ExpireDuration = 3.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
		return;
	}

	// 路径验证通过，尝试加载 JSON
	FString JsonPath = GetModInfoJsonPath();
	if (FPaths::FileExists(JsonPath))
	{
		LoadModInfoFromFile(JsonPath);
		// 加载成功后启用属性编辑和保存按钮
		DetailsView->SetEnabled(true);
		if (SaveButton.IsValid())
		{
			SaveButton->SetEnabled(true);
		}
		FNotificationInfo Info(LOCTEXT("LoadSuccess", "ModInfo.json loaded successfully!"));
		Info.ExpireDuration = 2.0f;
		Info.bFireAndForget = true;
		Info.bUseSuccessFailIcons = true;
		FSlateNotificationManager::Get().AddNotification(Info);
	}
	else
	{
		// JSON 文件不存在，但路径有效，允许创建新的配置
		// 初始化原始值为 false（新创建的 mod 默认不包含 GameplayTags）
		bOriginalIncludeGameplayTags = false;
		ModInfoData->bIncludeGameplayTags = false;
		ModInfoData->GameplayTagsIniFile.Empty();
		
		DetailsView->SetEnabled(true);
		if (SaveButton.IsValid())
		{
			SaveButton->SetEnabled(true);
		}
		FNotificationInfo Info(LOCTEXT("NoJsonFile", "ModInfo.json not found. You can create a new mod configuration."));
		Info.ExpireDuration = 3.0f;
		Info.bFireAndForget = true;
		FSlateNotificationManager::Get().AddNotification(Info);
	}
}

FReply SModInfoEditorWindow::OnBrowseFolderButtonClicked()
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	if (DesktopPlatform)
	{
		FString FolderPath;
		const FString Title = TEXT("Select Mod Folder");
		
		// 获取 Mods 目录路径，确保是绝对路径
		FString DefaultPath = FPaths::ProjectContentDir() / TEXT("Mods");
		FPaths::NormalizeDirectoryName(DefaultPath);
		if (FPaths::IsRelative(DefaultPath))
		{
			DefaultPath = FPaths::ConvertRelativePathToFull(DefaultPath);
			FPaths::NormalizeDirectoryName(DefaultPath);
		}
		
		const bool bFolderSelected = DesktopPlatform->OpenDirectoryDialog(
			FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
			Title,
			DefaultPath,
			FolderPath
		);

		if (bFolderSelected)
		{
			// 验证路径必须是 Mods 下的直接子文件夹（不能是更深层级）
			FString ContentDir = FPaths::ProjectContentDir();
			FPaths::NormalizeDirectoryName(ContentDir);
			
			// 确保 ContentDir 是绝对路径（FPaths::ProjectContentDir() 在不同环境下可能返回相对或绝对路径）
			if (FPaths::IsRelative(ContentDir))
			{
				ContentDir = FPaths::ConvertRelativePathToFull(ContentDir);
				FPaths::NormalizeDirectoryName(ContentDir);
			}
			
			// 确保 FolderPath 是绝对路径（虽然 OpenDirectoryDialog 通常返回绝对路径，但为了保险起见也处理）
			FPaths::NormalizeDirectoryName(FolderPath);
			if (FPaths::IsRelative(FolderPath))
			{
				FolderPath = FPaths::ConvertRelativePathToFull(FolderPath);
				FPaths::NormalizeDirectoryName(FolderPath);
			}
			
			FString ModsDir = ContentDir / TEXT("Mods");
			FPaths::NormalizeDirectoryName(ModsDir);
			
			// 确保 ModsDir 以路径分隔符结尾，便于比较
			if (!ModsDir.EndsWith(TEXT("/")) && !ModsDir.EndsWith(TEXT("\\")))
			{
				ModsDir += TEXT("/");
			}
			
			// 检查选择的文件夹是否在 Mods 目录下
			FString NormalizedFolderPath = FolderPath;
			if (!NormalizedFolderPath.EndsWith(TEXT("/")) && !NormalizedFolderPath.EndsWith(TEXT("\\")))
			{
				NormalizedFolderPath += TEXT("/");
			}
			
			if (!NormalizedFolderPath.StartsWith(ModsDir))
			{
				FNotificationInfo Info(LOCTEXT("InvalidModPath", "Selected folder must be a direct subfolder of Content/Mods directory!"));
				Info.ExpireDuration = 3.0f;
				Info.bFireAndForget = true;
				FSlateNotificationManager::Get().AddNotification(Info);
				return FReply::Handled();
			}
			
			// 获取相对于 Mods 目录的路径
			FString RelativeToMods = NormalizedFolderPath.Mid(ModsDir.Len());
			// 移除结尾的路径分隔符
			if (RelativeToMods.EndsWith(TEXT("/")) || RelativeToMods.EndsWith(TEXT("\\")))
			{
				RelativeToMods = RelativeToMods.Left(RelativeToMods.Len() - 1);
			}
			
			// 检查是否是直接子文件夹（路径中不能包含路径分隔符，且不能为空）
			if (RelativeToMods.IsEmpty())
			{
				// 路径就是 Mods 目录本身，不允许
				FNotificationInfo Info(LOCTEXT("InvalidModPathRoot", "Cannot select Mods directory itself. Please select a subfolder!"));
				Info.ExpireDuration = 3.0f;
				Info.bFireAndForget = true;
				FSlateNotificationManager::Get().AddNotification(Info);
				return FReply::Handled();
			}
			
			if (RelativeToMods.Contains(TEXT("/")) || RelativeToMods.Contains(TEXT("\\")))
			{
				FNotificationInfo Info(LOCTEXT("InvalidModPathDepth", "Selected folder must be a direct subfolder of Content/Mods directory, not a deeper level!"));
				Info.ExpireDuration = 3.0f;
				Info.bFireAndForget = true;
				FSlateNotificationManager::Get().AddNotification(Info);
				return FReply::Handled();
			}
			
			// 转换为相对于 Content 目录的路径
			FString RelativePath = FolderPath;
			FPaths::MakePathRelativeTo(RelativePath, *ContentDir);
			ModInfoData->ModFolderPath = RelativePath;
			if (ModFolderPathTextBox.IsValid())
			{
				ModFolderPathTextBox->SetText(FText::FromString(ModInfoData->ModFolderPath));
			}
			
			// 自动尝试加载 JSON 文件
			TryLoadModInfo();
		}
	}

	return FReply::Handled();
}

void SModInfoEditorWindow::OnModFolderPathChanged(const FText& NewText)
{
	FString NewPath = NewText.ToString();
	
	// 验证路径必须是 Mods 下的直接子文件夹（不能是更深层级）
	if (!NewPath.IsEmpty())
	{
		FString ContentDir = FPaths::ProjectContentDir();
		FPaths::NormalizeDirectoryName(ContentDir);
		
		// 确保 ContentDir 是绝对路径（FPaths::ProjectContentDir() 在不同环境下可能返回相对或绝对路径）
		if (FPaths::IsRelative(ContentDir))
		{
			ContentDir = FPaths::ConvertRelativePathToFull(ContentDir);
			FPaths::NormalizeDirectoryName(ContentDir);
		}
		
		// 处理路径：如果包含 "Content/" 前缀，移除它
		FString ProcessedPath = NewPath;
		if (ProcessedPath.StartsWith(TEXT("Content/")) || ProcessedPath.StartsWith(TEXT("Content\\")))
		{
			ProcessedPath = ProcessedPath.Mid(8); // 移除 "Content/" 前缀
		}
		
		FString FullPath = ContentDir / ProcessedPath;
		FPaths::NormalizeDirectoryName(FullPath);
		
		FString ModsDir = ContentDir / TEXT("Mods");
		FPaths::NormalizeDirectoryName(ModsDir);
		
		// 确保 ModsDir 以路径分隔符结尾，便于比较
		FString ModsDirWithSlash = ModsDir;
		if (!ModsDirWithSlash.EndsWith(TEXT("/")) && !ModsDirWithSlash.EndsWith(TEXT("\\")))
		{
			ModsDirWithSlash += TEXT("/");
		}
		
		// 确保 FullPath 以路径分隔符结尾，便于比较
		FString NormalizedFullPath = FullPath;
		if (!NormalizedFullPath.EndsWith(TEXT("/")) && !NormalizedFullPath.EndsWith(TEXT("\\")))
		{
			NormalizedFullPath += TEXT("/");
		}
		
		// 检查路径是否在 Mods 目录下
		if (!NormalizedFullPath.StartsWith(ModsDirWithSlash))
		{
			FNotificationInfo Info(LOCTEXT("InvalidModPath", "Path must be a direct subfolder of Content/Mods directory!"));
			Info.ExpireDuration = 3.0f;
			Info.bFireAndForget = true;
			FSlateNotificationManager::Get().AddNotification(Info);
			DetailsView->SetEnabled(false);
			if (SaveButton.IsValid())
			{
				SaveButton->SetEnabled(false);
			}
			return;
		}
		
		// 获取相对于 Mods 目录的路径
		FString RelativeToMods = NormalizedFullPath.Mid(ModsDirWithSlash.Len());
		// 移除结尾的路径分隔符
		if (RelativeToMods.EndsWith(TEXT("/")) || RelativeToMods.EndsWith(TEXT("\\")))
		{
			RelativeToMods = RelativeToMods.Left(RelativeToMods.Len() - 1);
		}
		
		// 检查是否是直接子文件夹（路径中不能包含路径分隔符，且不能为空）
		if (RelativeToMods.IsEmpty())
		{
			// 路径就是 Mods 目录本身，不允许
			FNotificationInfo Info(LOCTEXT("InvalidModPathRoot", "Cannot select Mods directory itself. Please select a subfolder!"));
			Info.ExpireDuration = 3.0f;
			Info.bFireAndForget = true;
			FSlateNotificationManager::Get().AddNotification(Info);
			DetailsView->SetEnabled(false);
			if (SaveButton.IsValid())
			{
				SaveButton->SetEnabled(false);
			}
			return;
		}
		
		if (RelativeToMods.Contains(TEXT("/")) || RelativeToMods.Contains(TEXT("\\")))
		{
			FNotificationInfo Info(LOCTEXT("InvalidModPathDepth", "Path must be a direct subfolder of Content/Mods directory, not a deeper level!"));
			Info.ExpireDuration = 3.0f;
			Info.bFireAndForget = true;
			FSlateNotificationManager::Get().AddNotification(Info);
			DetailsView->SetEnabled(false);
			if (SaveButton.IsValid())
			{
				SaveButton->SetEnabled(false);
			}
			return;
		}
		
		// 保存处理后的路径（相对于 Content 目录，不包含 Content/ 前缀）
		ModInfoData->ModFolderPath = ProcessedPath;
	}
	
	ModInfoData->ModFolderPath = NewPath;
	
	// 路径改变后自动尝试加载 JSON 文件
	if (!ModInfoData->ModFolderPath.IsEmpty())
	{
		TryLoadModInfo();
	}
	else
	{
		// 如果路径为空，禁用属性编辑和保存按钮
		DetailsView->SetEnabled(false);
		if (SaveButton.IsValid())
		{
			SaveButton->SetEnabled(false);
		}
	}
}

FString SModInfoEditorWindow::GetModInfoJsonPath() const
{
	if (!ModInfoData || ModInfoData->ModFolderPath.IsEmpty())
	{
		return TEXT("");
	}

	FString ContentDir = FPaths::ProjectContentDir();
	FPaths::NormalizeDirectoryName(ContentDir);
	// 确保 ContentDir 是绝对路径
	if (FPaths::IsRelative(ContentDir))
	{
		ContentDir = FPaths::ConvertRelativePathToFull(ContentDir);
		FPaths::NormalizeDirectoryName(ContentDir);
	}
	
	FString FullPath = ContentDir / ModInfoData->ModFolderPath / TEXT("ModInfo.json");
	FPaths::NormalizeFilename(FullPath);
	return FullPath;
}

bool SModInfoEditorWindow::ValidateModInfo() const
{
	if (!ModInfoData)
	{
		UE_LOG(LogTemp, Warning, TEXT("ModInfoData is null"));
		return false;
	}

	if (ModInfoData->ModId.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("ModId cannot be empty"));
		return false;
	}

	if (ModInfoData->ModName.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("ModName cannot be empty"));
		return false;
	}

	if (ModInfoData->ModFolderPath.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("Mod folder path cannot be empty"));
		return false;
	}

	if (ModInfoData->bIncludeGameplayTags)
	{
		if (ModInfoData->GameplayTagsIniFile.IsEmpty())
		{
			UE_LOG(LogTemp, Warning, TEXT("IncludeGameplayTags is enabled but GameplayTags ini path is empty"));
			return false;
		}
		FString ContentDirV = FPaths::ProjectContentDir();
		FPaths::NormalizeDirectoryName(ContentDirV);
		if (FPaths::IsRelative(ContentDirV))
		{
			ContentDirV = FPaths::ConvertRelativePathToFull(ContentDirV);
			FPaths::NormalizeDirectoryName(ContentDirV);
		}
		const FString ModFullPathV = FPaths::ConvertRelativePathToFull(ContentDirV / ModInfoData->ModFolderPath);
		FString TagsResolved;
		if (FPaths::IsRelative(ModInfoData->GameplayTagsIniFile))
		{
			TagsResolved = FPaths::ConvertRelativePathToFull(ModFullPathV / ModInfoData->GameplayTagsIniFile);
		}
		else
		{
			TagsResolved = FPaths::ConvertRelativePathToFull(ModInfoData->GameplayTagsIniFile);
		}
		FPaths::NormalizeFilename(TagsResolved);
		if (!FPaths::FileExists(TagsResolved))
		{
			UE_LOG(LogTemp, Warning, TEXT("GameplayTags ini not found: %s"), *TagsResolved);
			return false;
		}
	}

	return true;
}

bool SModInfoEditorWindow::CreateGameplayTagsIni(const FString& ModId)
{
	FString IniPath = GetGameplayTagsIniPath();
	if (IniPath.IsEmpty())
	{
		return false;
	}
	
	FString IniContent;
	
	// 添加文件头注释
	IniContent += TEXT("; ============================================\n");
	IniContent += TEXT("; GameplayTags Configuration\n");
	IniContent += TEXT("; Mod ID: ") + ModId + TEXT("\n");
	IniContent += TEXT("; ============================================\n");
	IniContent += TEXT("\n");
	
	// 添加 GameplayTagsList 部分（无预置 Tag，由用户在 GameplayTags 管理器或本文件中自行添加）
	IniContent += TEXT("[/Script/GameplayTags.GameplayTagsList]\n");
	IniContent += TEXT("\n");
	
	return FFileHelper::SaveStringToFile(IniContent, *IniPath);
}

bool SModInfoEditorWindow::DeleteGameplayTagsIni()
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString IniPath = GetGameplayTagsIniPath();
	if (!IniPath.IsEmpty() && FPaths::FileExists(IniPath))
	{
		PlatformFile.DeleteFile(*IniPath);
	}
	// 同时清理旧版 {ModId}.ini
	if (ModInfoData && !ModInfoData->ModFolderPath.IsEmpty() && !ModInfoData->ModId.IsEmpty())
	{
		FString ContentDir = FPaths::ProjectContentDir();
		FPaths::NormalizeDirectoryName(ContentDir);
		if (FPaths::IsRelative(ContentDir))
		{
			ContentDir = FPaths::ConvertRelativePathToFull(ContentDir);
			FPaths::NormalizeDirectoryName(ContentDir);
		}
		FString OldIni = FPaths::ConvertRelativePathToFull(
			ContentDir / ModInfoData->ModFolderPath / (ModInfoData->ModId + TEXT(".ini")));
		FPaths::NormalizeFilename(OldIni);
		if (FPaths::FileExists(OldIni))
		{
			PlatformFile.DeleteFile(*OldIni);
		}
	}
	return true;
}

FString SModInfoEditorWindow::GetGameplayTagsIniPath() const
{
	if (!ModInfoData || ModInfoData->ModFolderPath.IsEmpty() || ModInfoData->ModId.IsEmpty())
	{
		return TEXT("");
	}

	FString ContentDir = FPaths::ProjectContentDir();
	FPaths::NormalizeDirectoryName(ContentDir);
	// 确保 ContentDir 是绝对路径
	if (FPaths::IsRelative(ContentDir))
	{
		ContentDir = FPaths::ConvertRelativePathToFull(ContentDir);
		FPaths::NormalizeDirectoryName(ContentDir);
	}
	
	// 使用 {ModId}GameplayTags.ini
	FString FileName = UModInfoData::MakeGameplayTagsIniFileName(ModInfoData->ModId);
	FString FullPath = ContentDir / ModInfoData->ModFolderPath / FileName;
	FPaths::NormalizeFilename(FullPath);
	return FullPath;
}

#undef LOCTEXT_NAMESPACE

