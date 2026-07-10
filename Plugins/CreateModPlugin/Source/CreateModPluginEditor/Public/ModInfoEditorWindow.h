#pragma once

#include "CoreMinimal.h"
#include "UObject/StrongObjectPtr.h"
#include "Widgets/SCompoundWidget.h"
#include "ModInfoEditorData.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"

class SModInfoEditorWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SModInfoEditorWindow)
		: _ModFolderPath(TEXT(""))
	{}
		SLATE_ARGUMENT(FString, ModFolderPath)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	// 加载现有的 ModInfo.json
	void LoadModInfoFromFile(const FString& FilePath);

	// 保存 ModInfo.json
	bool SaveModInfoToFile(const FString& FilePath);

private:
	// UI 组件
	TSharedPtr<class IDetailsView> DetailsView;
	TSharedPtr<class SButton> SaveButton;
	TSharedPtr<class SButton> LoadButton;
	TSharedPtr<class SEditableTextBox> ModFolderPathTextBox;
	TSharedPtr<class SEditableTextBox> MainLuaFileTextBox;

	// 数据（Slate 类不参与反射，UPROPERTY 不生效；用 TStrongObjectPtr 防止编辑器 GC 回收后悬空）
	TStrongObjectPtr<UModInfoData> ModInfoData;
	
	// 保存原始的 bIncludeGameplayTags 值，用于检测变化
	bool bOriginalIncludeGameplayTags = false;

	// 回调函数
	FReply OnSaveButtonClicked();
	FReply OnBrowseFolderButtonClicked();
	void OnModFolderPathChanged(const FText& NewText);

	// 辅助函数
	void TryLoadModInfo(); // 尝试加载 ModInfo.json（自动调用）
	FString GetModInfoJsonPath() const;
	bool ValidateModInfo() const;
	bool CreateGameplayTagsIni(const FString& ModId);
	bool DeleteGameplayTagsIni();
	FString GetGameplayTagsIniPath() const;
};

