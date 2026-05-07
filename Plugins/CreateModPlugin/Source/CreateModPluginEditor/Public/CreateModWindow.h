#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "ModInfoEditorData.h"

class SCreateModWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SCreateModWindow)
	{}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	// 创建 Mod
	bool CreateMod();

private:
	// UI 组件
	TSharedPtr<class IDetailsView> DetailsView;
	TSharedPtr<class SButton> CreateButton;

	// 数据
	UPROPERTY()
	TObjectPtr<UModInfoData> ModInfoData;

	// 回调函数
	FReply OnCreateButtonClicked();
	bool ValidateModInfo();

	// 辅助函数
	bool CreateModFolder(const FString& ModFolderPath);
	bool CreateModInformationAsset(const FString& AssetPath);
	bool GenerateModInfoJson(const FString& JsonPath);
	bool GenerateMainLuaFile(const FString& LuaPath);
};

