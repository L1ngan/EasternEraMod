#include "ModInfoDataCustomization.h"
#include "ModInfoEditorData.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "DetailWidgetRow.h"
#include "IDetailPropertyRow.h"
#include "IDetailChildrenBuilder.h"
#include "PropertyCustomizationHelpers.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "DesktopPlatformModule.h"
#include "IDesktopPlatform.h"
#include "Framework/Application/SlateApplication.h"
#include "Misc/Paths.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "PropertyHandle.h"

#define LOCTEXT_NAMESPACE "ModInfoDataCustomization"

TSharedRef<IDetailCustomization> FModInfoDataCustomization::MakeInstance()
{
	return MakeShareable(new FModInfoDataCustomization);
}

void FModInfoDataCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	// 获取属性句柄
	MainLuaFileProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UModInfoData, MainLuaFile));
	IconProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UModInfoData, Icon));
	ModFolderPathProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UModInfoData, ModFolderPath));
	AdditionalAssetsProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UModInfoData, AdditionalAssets));
	GameplayTagsIniFileProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UModInfoData, GameplayTagsIniFile));
	bIncludeGameplayTagsProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UModInfoData, bIncludeGameplayTags));
	if (GameplayTagsIniFileProperty.IsValid())
	{
		DetailBuilder.HideProperty(GameplayTagsIniFileProperty);
	}

	// Steam Workshop 发布 ID 仅由流程写入 ModInfo.json，不在创建/查看窗口中展示
	DetailBuilder.HideProperty(GET_MEMBER_NAME_CHECKED(UModInfoData, PublishedFileId));

	// 为 Icon 添加自定义文件选择器
	IDetailCategoryBuilder& BasicCategory = DetailBuilder.EditCategory("Basic");
	
	IDetailPropertyRow& IconRow = BasicCategory.AddProperty(IconProperty);
	IconRow.CustomWidget()
	.NameContent()
	[
		IconProperty->CreatePropertyNameWidget()
	]
	.ValueContent()
	.MaxDesiredWidth(0.0f)
	[
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.FillWidth(1.0f)
		[
			SNew(SEditableTextBox)
			.Text_Lambda([this]()
			{
				FString Value;
				if (IconProperty.IsValid())
				{
					IconProperty->GetValue(Value);
				}
				return FText::FromString(Value);
			})
			.OnTextCommitted_Lambda([this](const FText& NewText, ETextCommit::Type CommitType)
			{
				if (IconProperty.IsValid())
				{
					IconProperty->SetValue(NewText.ToString());
				}
			})
		]
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(5, 0, 0, 0)
		[
			SNew(SButton)
			.Text(LOCTEXT("BrowseIconButton", "Browse..."))
			.OnClicked(this, &FModInfoDataCustomization::OnBrowseIconFile)
		]
	];

	// 为 MainLuaFile 添加自定义文件选择器
	IDetailCategoryBuilder& FilesCategory = DetailBuilder.EditCategory("Files");
	
	IDetailPropertyRow& MainLuaFileRow = FilesCategory.AddProperty(MainLuaFileProperty);
	MainLuaFileRow.CustomWidget()
	.NameContent()
	[
		MainLuaFileProperty->CreatePropertyNameWidget()
	]
	.ValueContent()
	.MaxDesiredWidth(0.0f)
	[
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.FillWidth(1.0f)
		[
			SNew(SEditableTextBox)
			.Text_Lambda([this]()
			{
				FString Value;
				if (MainLuaFileProperty.IsValid())
				{
					MainLuaFileProperty->GetValue(Value);
				}
				return FText::FromString(Value);
			})
			.OnTextCommitted_Lambda([this](const FText& NewText, ETextCommit::Type CommitType)
			{
				if (MainLuaFileProperty.IsValid())
				{
					MainLuaFileProperty->SetValue(NewText.ToString());
				}
			})
		]
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(5, 0, 0, 0)
		[
			SNew(SButton)
			.Text(LOCTEXT("BrowseLuaFileButton", "Browse..."))
			.OnClicked(this, &FModInfoDataCustomization::OnBrowseMainLuaFile)
		]
	];
	
	// GameplayTags ini（*.ini）
	IDetailCategoryBuilder& SettingsCategory = DetailBuilder.EditCategory(TEXT("Settings"));
	if (GameplayTagsIniFileProperty.IsValid())
	{
		IDetailPropertyRow& GameplayTagsRow = SettingsCategory.AddProperty(GameplayTagsIniFileProperty);
		GameplayTagsRow.CustomWidget()
		.NameContent()
		[
			GameplayTagsIniFileProperty->CreatePropertyNameWidget()
		]
		.ValueContent()
		.MaxDesiredWidth(0.0f)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.FillWidth(1.0f)
			[
				SNew(SEditableTextBox)
				.IsEnabled_Lambda([this]()
				{
					bool bInclude = false;
					if (bIncludeGameplayTagsProperty.IsValid() && bIncludeGameplayTagsProperty->GetValue(bInclude) == FPropertyAccess::Success)
					{
						return bInclude;
					}
					return false;
				})
				.Text_Lambda([this]()
				{
					FString Value;
					if (GameplayTagsIniFileProperty.IsValid())
					{
						GameplayTagsIniFileProperty->GetValue(Value);
					}
					return FText::FromString(Value);
				})
				.OnTextCommitted_Lambda([this](const FText& NewText, ETextCommit::Type CommitType)
				{
					if (GameplayTagsIniFileProperty.IsValid())
					{
						GameplayTagsIniFileProperty->SetValue(NewText.ToString());
					}
				})
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(5, 0, 0, 0)
			[
				SNew(SButton)
				.Text(LOCTEXT("BrowseTagsIniButton", "Browse..."))
				.OnClicked(this, &FModInfoDataCustomization::OnBrowseGameplayTagsIni)
			]
		];
	}
	
	// 为 AdditionalAssets 数组添加自定义文件选择器
	IDetailCategoryBuilder& PackagingCategory = DetailBuilder.EditCategory("Packaging");
	
	if (AdditionalAssetsProperty.IsValid())
	{
		// 使用 FDetailArrayBuilder 来自定义数组显示
		TSharedRef<FDetailArrayBuilder> AdditionalAssetsBuilder = MakeShareable(new FDetailArrayBuilder(AdditionalAssetsProperty.ToSharedRef()));
		AdditionalAssetsBuilder->OnGenerateArrayElementWidget(
			FOnGenerateArrayElementWidget::CreateLambda([this](TSharedRef<IPropertyHandle> ElementProperty, int32 ElementIndex, IDetailChildrenBuilder& ChildrenBuilder)
			{
				IDetailPropertyRow& ElementRow = ChildrenBuilder.AddProperty(ElementProperty);
				ElementRow.CustomWidget()
				.NameContent()
				[
					ElementProperty->CreatePropertyNameWidget()
				]
				.ValueContent()
				.MaxDesiredWidth(0.0f)
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.FillWidth(1.0f)
					[
						SNew(SEditableTextBox)
						.Text_Lambda([ElementProperty]()
						{
							FString Value;
							ElementProperty->GetValue(Value);
							return FText::FromString(Value);
						})
						.OnTextCommitted_Lambda([ElementProperty](const FText& NewText, ETextCommit::Type CommitType)
						{
							ElementProperty->SetValue(NewText.ToString());
						})
					]
					+ SHorizontalBox::Slot()
					.AutoWidth()
					.Padding(5, 0, 0, 0)
					[
						SNew(SButton)
						.Text(LOCTEXT("BrowseAssetButton", "Browse..."))
						.OnClicked_Lambda([this, ElementProperty]()
						{
							return OnBrowseAdditionalAsset(ElementProperty);
						})
					]
				];
			})
		);
		
		// 将数组构建器添加到分类中
		PackagingCategory.AddCustomBuilder(AdditionalAssetsBuilder);
	}
}

FReply FModInfoDataCustomization::OnBrowseMainLuaFile()
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	if (!DesktopPlatform)
	{
		return FReply::Handled();
	}

	// 获取 Mod 文件夹路径
	FString ModFolderPath;
	if (ModFolderPathProperty.IsValid())
	{
		ModFolderPathProperty->GetValue(ModFolderPath);
	}

	// 构建默认路径（Mod 文件夹）
	FString DefaultPath = FPaths::ProjectContentDir();
	if (!ModFolderPath.IsEmpty())
	{
		DefaultPath = FPaths::ProjectContentDir() / ModFolderPath;
		FPaths::NormalizeDirectoryName(DefaultPath);
	}

	// 打开文件选择对话框
	TArray<FString> OutFiles;
	const FString Title = LOCTEXT("SelectLuaFile", "Select Lua File").ToString();
	const FString FileTypes = TEXT("Lua Files (*.lua)|*.lua|All Files (*.*)|*.*");

	bool bFileSelected = DesktopPlatform->OpenFileDialog(
		FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
		Title,
		DefaultPath,
		TEXT(""),
		FileTypes,
		EFileDialogFlags::None,
		OutFiles
	);

	if (bFileSelected && OutFiles.Num() > 0)
	{
		FString SelectedFile = OutFiles[0];
		FPaths::NormalizeFilename(SelectedFile);
		
		// 转换为相对于 Mod 文件夹的路径（不包含 Mod 文件夹名称）
		FString RelativePath;
		if (!ModFolderPath.IsEmpty())
		{
			FString ModFullPath = FPaths::ProjectContentDir() / ModFolderPath;
			FPaths::NormalizeDirectoryName(ModFullPath);
			FPaths::NormalizeFilename(SelectedFile);
			
			// 检查文件是否在 Mod 文件夹内
			if (SelectedFile.StartsWith(ModFullPath))
			{
				// 获取 Mod 文件夹内的相对路径（去掉 Mod 文件夹路径）
				RelativePath = SelectedFile.Mid(ModFullPath.Len() + 1);
				RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
				
				// 移除开头的斜杠（如果有）
				if (RelativePath.StartsWith(TEXT("/")))
				{
					RelativePath = RelativePath.Mid(1);
				}
			}
			else
			{
				// 文件不在 Mod 文件夹内，尝试使用 MakePathRelativeTo
				FString TempPath = SelectedFile;
				if (FPaths::MakePathRelativeTo(TempPath, *ModFullPath))
				{
					RelativePath = TempPath;
					RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
					
					// 移除开头的斜杠（如果有）
					if (RelativePath.StartsWith(TEXT("/")))
					{
						RelativePath = RelativePath.Mid(1);
					}
				}
				else
				{
					// 无法转换为相对路径，使用文件名
					RelativePath = FPaths::GetCleanFilename(SelectedFile);
				}
			}
		}
		else
		{
			// 没有 Mod 文件夹路径，使用文件名
			RelativePath = FPaths::GetCleanFilename(SelectedFile);
		}

		// 设置属性值
		if (MainLuaFileProperty.IsValid())
		{
			MainLuaFileProperty->SetValue(RelativePath);
		}
	}

	return FReply::Handled();
}

FReply FModInfoDataCustomization::OnBrowseIconFile()
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	if (!DesktopPlatform)
	{
		return FReply::Handled();
	}

	// 获取 Mod 文件夹路径
	FString ModFolderPath;
	if (ModFolderPathProperty.IsValid())
	{
		ModFolderPathProperty->GetValue(ModFolderPath);
	}

	// 构建默认路径（Mod 文件夹）
	FString DefaultPath = FPaths::ProjectContentDir();
	if (!ModFolderPath.IsEmpty())
	{
		DefaultPath = FPaths::ProjectContentDir() / ModFolderPath;
		FPaths::NormalizeDirectoryName(DefaultPath);
	}

	// 打开文件选择对话框
	TArray<FString> OutFiles;
	const FString Title = LOCTEXT("SelectIconFile", "Select Icon File").ToString();
	const FString FileTypes = TEXT("Image Files (*.png;*.jpg;*.jpeg;*.bmp;*.tga;*.exr)|*.png;*.jpg;*.jpeg;*.bmp;*.tga;*.exr|PNG Files (*.png)|*.png|JPEG Files (*.jpg;*.jpeg)|*.jpg;*.jpeg|All Files (*.*)|*.*");

	bool bFileSelected = DesktopPlatform->OpenFileDialog(
		FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
		Title,
		DefaultPath,
		TEXT(""),
		FileTypes,
		EFileDialogFlags::None,
		OutFiles
	);

	if (bFileSelected && OutFiles.Num() > 0)
	{
		FString SelectedFile = OutFiles[0];
		FPaths::NormalizeFilename(SelectedFile);
		
		// 转换为 UE 资源路径格式（/Game/...）
		FString ResourcePath;
		
		// 检查是否在 Content 目录下
		FString ContentDir = FPaths::ProjectContentDir();
		FPaths::NormalizeDirectoryName(ContentDir);
		
		if (SelectedFile.StartsWith(ContentDir))
		{
			// 在 Content 目录下：/Game/ 后保留相对路径与扩展名，便于 ModInfo.json 与打包解析真实文件
			FString RelativePath = SelectedFile.Mid(ContentDir.Len() + 1);
			RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
			ResourcePath = FString::Printf(TEXT("/Game/%s"), *RelativePath);
		}
		else
		{
			// 不在 Content 目录下，尝试转换为相对于 Mod 文件夹的路径（保留扩展名）
			if (!ModFolderPath.IsEmpty())
			{
				FString ModFullPath = FPaths::ProjectContentDir() / ModFolderPath;
				FPaths::NormalizeDirectoryName(ModFullPath);
				
				if (SelectedFile.StartsWith(ModFullPath))
				{
					FString RelativeInMod = SelectedFile.Mid(ModFullPath.Len() + 1);
					RelativeInMod.ReplaceCharInline(TEXT('\\'), TEXT('/'));
					FString ModFolderForward = ModFolderPath;
					ModFolderForward.ReplaceCharInline(TEXT('\\'), TEXT('/'));
					ResourcePath = FString::Printf(TEXT("/Game/%s/%s"), *ModFolderForward, *RelativeInMod);
				}
				else
				{
					ResourcePath = SelectedFile;
				}
			}
			else
			{
				ResourcePath = SelectedFile;
			}
		}

		// 设置属性值
		if (IconProperty.IsValid())
		{
			IconProperty->SetValue(ResourcePath);
		}
	}

	return FReply::Handled();
}

FReply FModInfoDataCustomization::OnBrowseGameplayTagsIni()
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	if (!DesktopPlatform)
	{
		return FReply::Handled();
	}

	FString ModFolderPath;
	if (ModFolderPathProperty.IsValid())
	{
		ModFolderPathProperty->GetValue(ModFolderPath);
	}

	FString DefaultPath = FPaths::ProjectContentDir();
	if (!ModFolderPath.IsEmpty())
	{
		DefaultPath = FPaths::ProjectContentDir() / ModFolderPath;
		FPaths::NormalizeDirectoryName(DefaultPath);
	}

	TArray<FString> OutFiles;
	const FString Title = LOCTEXT("SelectTagsIni", "Select GameplayTags INI").ToString();
	const FString FileTypes = TEXT("INI Files (*.ini)|*.ini|All Files (*.*)|*.*");

	const bool bFileSelected = DesktopPlatform->OpenFileDialog(
		FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
		Title,
		DefaultPath,
		TEXT(""),
		FileTypes,
		EFileDialogFlags::None,
		OutFiles
	);

	if (bFileSelected && OutFiles.Num() > 0)
	{
		FString SelectedFile = OutFiles[0];
		FPaths::NormalizeFilename(SelectedFile);

		FString RelativePath;
		if (!ModFolderPath.IsEmpty())
		{
			FString ModFullPath = FPaths::ProjectContentDir() / ModFolderPath;
			FPaths::NormalizeDirectoryName(ModFullPath);
			if (SelectedFile.StartsWith(ModFullPath))
			{
				RelativePath = SelectedFile.Mid(ModFullPath.Len() + 1);
				RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
				if (RelativePath.StartsWith(TEXT("/")))
				{
					RelativePath = RelativePath.Mid(1);
				}
			}
			else
			{
				FString TempPath = SelectedFile;
				if (FPaths::MakePathRelativeTo(TempPath, *ModFullPath))
				{
					RelativePath = TempPath;
					RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
					if (RelativePath.StartsWith(TEXT("/")))
					{
						RelativePath = RelativePath.Mid(1);
					}
				}
				else
				{
					RelativePath = SelectedFile;
				}
			}
		}
		else
		{
			RelativePath = SelectedFile;
		}

		if (GameplayTagsIniFileProperty.IsValid())
		{
			GameplayTagsIniFileProperty->SetValue(RelativePath);
		}
	}

	return FReply::Handled();
}

FReply FModInfoDataCustomization::OnBrowseAdditionalAsset(TSharedPtr<IPropertyHandle> ArrayElementHandle)
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	if (!DesktopPlatform || !ArrayElementHandle.IsValid())
	{
		return FReply::Handled();
	}

	// 构建默认路径（Content 目录）
	FString DefaultPath = FPaths::ProjectContentDir();
	FPaths::NormalizeDirectoryName(DefaultPath);

	// 打开文件选择对话框
	TArray<FString> OutFiles;
	const FString Title = LOCTEXT("SelectAdditionalAsset", "Select Additional Asset").ToString();
	const FString FileTypes = TEXT("Asset Files (*.uasset;*.umap)|*.uasset;*.umap|All Files (*.*)|*.*");

	bool bFileSelected = DesktopPlatform->OpenFileDialog(
		FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
		Title,
		DefaultPath,
		TEXT(""),
		FileTypes,
		EFileDialogFlags::None,
		OutFiles
	);

	if (bFileSelected && OutFiles.Num() > 0)
	{
		FString SelectedFile = OutFiles[0];
		FPaths::NormalizeFilename(SelectedFile);
		
		// 转换为相对于 Content 目录的路径
		FString ContentDir = FPaths::ProjectContentDir();
		FPaths::NormalizeDirectoryName(ContentDir);
		
		FString RelativePath;
		if (SelectedFile.StartsWith(ContentDir))
		{
			// 在 Content 目录下，获取相对路径
			RelativePath = SelectedFile.Mid(ContentDir.Len() + 1);
			RelativePath.ReplaceCharInline(TEXT('\\'), TEXT('/'));
			
			// 移除开头的斜杠（如果有）
			if (RelativePath.StartsWith(TEXT("/")))
			{
				RelativePath = RelativePath.Mid(1);
			}
		}
		else
		{
			// 不在 Content 目录下，使用完整路径（但这不是推荐的做法）
			RelativePath = SelectedFile;
			UE_LOG(LogTemp, Warning, TEXT("Selected file is not in Content directory: %s"), *SelectedFile);
		}

		// 设置属性值
		if (ArrayElementHandle.IsValid())
		{
			ArrayElementHandle->SetValue(RelativePath);
		}
	}

	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE

