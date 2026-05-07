#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"
#include "PropertyHandle.h"

class FModInfoDataCustomization : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance();

	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;

private:
	// MainLuaFile 文件选择
	FReply OnBrowseMainLuaFile();
	
	// Icon 文件选择
	FReply OnBrowseIconFile();
	
	// AdditionalAssets 数组元素文件选择
	FReply OnBrowseAdditionalAsset(TSharedPtr<IPropertyHandle> ArrayElementHandle);

	// GameplayTags ini（*.ini）
	FReply OnBrowseGameplayTagsIni();

	TSharedPtr<IPropertyHandle> MainLuaFileProperty;
	TSharedPtr<IPropertyHandle> IconProperty;
	TSharedPtr<IPropertyHandle> ModFolderPathProperty;
	TSharedPtr<IPropertyHandle> GameplayTagsIniFileProperty;
	TSharedPtr<IPropertyHandle> bIncludeGameplayTagsProperty;
	TSharedPtr<IPropertyHandle> AdditionalAssetsProperty;
};

