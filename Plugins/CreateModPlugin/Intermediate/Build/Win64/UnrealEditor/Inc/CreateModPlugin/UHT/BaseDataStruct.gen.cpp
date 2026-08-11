// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseDataStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseDataStruct() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CREATEMODPLUGIN_API UClass* Z_Construct_UClass_UModInformationAsset();
CREATEMODPLUGIN_API UClass* Z_Construct_UClass_UModInformationAsset_NoRegister();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModCharacterType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModConfigType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModDataAssetType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModTipsType();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModAsset();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModConfig();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModDataBase();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModDropItemInfo();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModDropSetConfig();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModFormatText();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModGameplayEffectContainer();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GASFRAMEWORK_API UClass* Z_Construct_UClass_UEastRimWorldTargetType_NoRegister();
UPackage* Z_Construct_UPackage__Script_CreateModPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EModConfigType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModConfigType;
static UEnum* EModConfigType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModConfigType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModConfigType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModConfigType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModConfigType"));
	}
	return Z_Registration_Info_UEnum_EModConfigType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModConfigType>()
{
	return EModConfigType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModConfigType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnimalActionAbility.Comment", "// \xe5\x8a\xa8\xe7\x89\xa9\xe8\xa1\x8c\xe4\xb8\xba\xe8\x83\xbd\xe5\x8a\x9b\n" },
		{ "AnimalActionAbility.Name", "EModConfigType::AnimalActionAbility" },
		{ "AnimalActionAbility.ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9\xe8\xa1\x8c\xe4\xb8\xba\xe8\x83\xbd\xe5\x8a\x9b" },
		{ "AnimalConfig.Comment", "//\xe5\x8a\xa8\xe7\x89\xa9\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "AnimalConfig.Name", "EModConfigType::AnimalConfig" },
		{ "AnimalConfig.ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9\xe9\x85\x8d\xe7\xbd\xae" },
		{ "BlueprintType", "true" },
		{ "BreakThroughCharacteristicInfo.Comment", "//\xe7\xaa\x81\xe7\xa0\xb4\xe5\xa4\xa9\xe8\xb5\x8b\xe7\x89\xb9\xe6\x80\xa7\n" },
		{ "BreakThroughCharacteristicInfo.Name", "EModConfigType::BreakThroughCharacteristicInfo" },
		{ "BreakThroughCharacteristicInfo.ToolTip", "\xe7\xaa\x81\xe7\xa0\xb4\xe5\xa4\xa9\xe8\xb5\x8b\xe7\x89\xb9\xe6\x80\xa7" },
		{ "BreakThroughSkill.Comment", "//\xe7\xaa\x81\xe7\xa0\xb4\xe6\x8a\x80\xe8\x83\xbd\xe6\xb1\xa0\n" },
		{ "BreakThroughSkill.Name", "EModConfigType::BreakThroughSkill" },
		{ "BreakThroughSkill.ToolTip", "\xe7\xaa\x81\xe7\xa0\xb4\xe6\x8a\x80\xe8\x83\xbd\xe6\xb1\xa0" },
		{ "BuildConfig.Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "BuildConfig.Name", "EModConfigType::BuildConfig" },
		{ "BuildConfig.ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe6\x95\xb0\xe6\x8d\xae" },
		{ "BuildingUI.Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe6\x98\xbe\xe7\xa4\xbaUI\n" },
		{ "BuildingUI.Name", "EModConfigType::BuildingUI" },
		{ "BuildingUI.ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe6\x98\xbe\xe7\xa4\xbaUI" },
		{ "BuildListCategorizeConfig.Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe5\x88\x86\xe7\xb1\xbb\n" },
		{ "BuildListCategorizeConfig.Name", "EModConfigType::BuildListCategorizeConfig" },
		{ "BuildListCategorizeConfig.ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe5\x88\x86\xe7\xb1\xbb" },
		{ "BuildTabConfig.Comment", "//\xe5\xbb\xba\xe7\xad\x91Tab\n" },
		{ "BuildTabConfig.Name", "EModConfigType::BuildTabConfig" },
		{ "BuildTabConfig.ToolTip", "\xe5\xbb\xba\xe7\xad\x91Tab" },
		{ "CharacterAnatomyProfiles.Name", "EModConfigType::CharacterAnatomyProfiles" },
		{ "CharacterAppearancePreset.Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe5\xa4\x96\xe8\xa7\x82\xe9\xa2\x84\xe5\x88\xb6\n" },
		{ "CharacterAppearancePreset.Name", "EModConfigType::CharacterAppearancePreset" },
		{ "CharacterAppearancePreset.ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xa4\x96\xe8\xa7\x82\xe9\xa2\x84\xe5\x88\xb6" },
		{ "CharacterConfig.Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\n" },
		{ "CharacterConfig.Name", "EModConfigType::CharacterConfig" },
		{ "CharacterConfig.ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mod \xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\n *///Mod\xe9\x85\x8d\xe7\xbd\xae\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "CommonBuff.Comment", "//\xe9\x80\x9a\xe7\x94\xa8""buff\n" },
		{ "CommonBuff.Name", "EModConfigType::CommonBuff" },
		{ "CommonBuff.ToolTip", "\xe9\x80\x9a\xe7\x94\xa8""buff" },
		{ "CommonUI.Comment", "//\xe9\x80\x9a\xe7\x94\xa8UI\n" },
		{ "CommonUI.Name", "EModConfigType::CommonUI" },
		{ "CommonUI.ToolTip", "\xe9\x80\x9a\xe7\x94\xa8UI" },
		{ "ConditionInfo.Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\n" },
		{ "ConditionInfo.Name", "EModConfigType::ConditionInfo" },
		{ "ConditionInfo.ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6" },
		{ "DialogueGroup.Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe7\xbb\x84\n" },
		{ "DialogueGroup.Name", "EModConfigType::DialogueGroup" },
		{ "DialogueGroup.ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe7\xbb\x84" },
		{ "DialogueInfoConfig.Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe4\xbf\xa1\xe6\x81\xaf\n" },
		{ "DialogueInfoConfig.Name", "EModConfigType::DialogueInfoConfig" },
		{ "DialogueInfoConfig.ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DialogueOptionConfig.Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe9\x80\x89\xe9\xa1\xb9\n" },
		{ "DialogueOptionConfig.Name", "EModConfigType::DialogueOptionConfig" },
		{ "DialogueOptionConfig.ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe9\x80\x89\xe9\xa1\xb9" },
		{ "DropSetConfig.Comment", "//\xe6\x8e\x89\xe8\x90\xbd\xe9\x9b\x86\n" },
		{ "DropSetConfig.Name", "EModConfigType::DropSetConfig" },
		{ "DropSetConfig.ToolTip", "\xe6\x8e\x89\xe8\x90\xbd\xe9\x9b\x86" },
		{ "EnemyAttackGenerationConfig.Comment", "//\xe6\x95\x8c\xe5\xaf\xb9\xe5\x8a\xbf\xe5\x8a\x9b\xe8\xa2\xad\xe5\x87\xbb\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "EnemyAttackGenerationConfig.Name", "EModConfigType::EnemyAttackGenerationConfig" },
		{ "EnemyAttackGenerationConfig.ToolTip", "\xe6\x95\x8c\xe5\xaf\xb9\xe5\x8a\xbf\xe5\x8a\x9b\xe8\xa2\xad\xe5\x87\xbb\xe9\x85\x8d\xe7\xbd\xae" },
		{ "EquipmentAttributes.Comment", "//\xe8\xa3\x85\xe5\xa4\x87\xe5\xb1\x9e\xe6\x80\xa7\n" },
		{ "EquipmentAttributes.Name", "EModConfigType::EquipmentAttributes" },
		{ "EquipmentAttributes.ToolTip", "\xe8\xa3\x85\xe5\xa4\x87\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "EquipmentConfig.Comment", "//\xe8\xa3\x85\xe5\xa4\x87\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "EquipmentConfig.Name", "EModConfigType::EquipmentConfig" },
		{ "EquipmentConfig.ToolTip", "\xe8\xa3\x85\xe5\xa4\x87\xe9\x85\x8d\xe7\xbd\xae" },
		{ "EquipmentQualityRange.Comment", "//\xe8\xa3\x85\xe5\xa4\x87\xe5\x93\x81\xe8\xb4\xa8\xe6\xb1\xa0\n" },
		{ "EquipmentQualityRange.Name", "EModConfigType::EquipmentQualityRange" },
		{ "EquipmentQualityRange.ToolTip", "\xe8\xa3\x85\xe5\xa4\x87\xe5\x93\x81\xe8\xb4\xa8\xe6\xb1\xa0" },
		{ "FabricateEquipmentData.Comment", "//\xe5\x88\xb6\xe9\x80\xa0\xe8\xa3\x85\xe5\xa4\x87\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "FabricateEquipmentData.Name", "EModConfigType::FabricateEquipmentData" },
		{ "FabricateEquipmentData.ToolTip", "\xe5\x88\xb6\xe9\x80\xa0\xe8\xa3\x85\xe5\xa4\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "FormulaData.Comment", "//\xe9\x85\x8d\xe6\x96\xb9\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "FormulaData.Name", "EModConfigType::FormulaData" },
		{ "FormulaData.ToolTip", "\xe9\x85\x8d\xe6\x96\xb9\xe9\x85\x8d\xe7\xbd\xae" },
		{ "GameAbility.Comment", "//\xe6\x8a\x80\xe8\x83\xbd\n" },
		{ "GameAbility.Name", "EModConfigType::GameAbility" },
		{ "GameAbility.ToolTip", "\xe6\x8a\x80\xe8\x83\xbd" },
		{ "GenerateEquipmentData.Comment", "//\xe8\xa3\x85\xe5\xa4\x87\xe7\x94\x9f\xe6\x88\x90\xe8\xa1\xa8\n" },
		{ "GenerateEquipmentData.Name", "EModConfigType::GenerateEquipmentData" },
		{ "GenerateEquipmentData.ToolTip", "\xe8\xa3\x85\xe5\xa4\x87\xe7\x94\x9f\xe6\x88\x90\xe8\xa1\xa8" },
		{ "InventoryItem.Name", "EModConfigType::InventoryItem" },
		{ "MartialArtsBook.Comment", "//\xe6\xad\xa6\xe5\xad\xa6\xe4\xb9\xa6\xe7\xb1\x8d\n" },
		{ "MartialArtsBook.Name", "EModConfigType::MartialArtsBook" },
		{ "MartialArtsBook.ToolTip", "\xe6\xad\xa6\xe5\xad\xa6\xe4\xb9\xa6\xe7\xb1\x8d" },
		{ "MartialArtsBookCategory.Comment", "//\xe6\xad\xa6\xe5\xad\xa6\xe4\xb9\xa6\xe7\xb1\x8d\xe7\xa7\x8d\xe7\xb1\xbb\n" },
		{ "MartialArtsBookCategory.Name", "EModConfigType::MartialArtsBookCategory" },
		{ "MartialArtsBookCategory.ToolTip", "\xe6\xad\xa6\xe5\xad\xa6\xe4\xb9\xa6\xe7\xb1\x8d\xe7\xa7\x8d\xe7\xb1\xbb" },
		{ "MartialArtsEntries.Comment", "//\xe6\xad\xa6\xe5\xad\xa6\xe8\xaf\x8d\xe6\x9d\xa1\n" },
		{ "MartialArtsEntries.Name", "EModConfigType::MartialArtsEntries" },
		{ "MartialArtsEntries.ToolTip", "\xe6\xad\xa6\xe5\xad\xa6\xe8\xaf\x8d\xe6\x9d\xa1" },
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
		{ "ModuleUI.Comment", "//UI\xe6\xa8\xa1\xe5\x9d\x97\n" },
		{ "ModuleUI.Name", "EModConfigType::ModuleUI" },
		{ "ModuleUI.ToolTip", "UI\xe6\xa8\xa1\xe5\x9d\x97" },
		{ "MonsterGenerationConfig.Comment", "//\xe6\x80\xaa\xe7\x89\xa9\xe7\x94\x9f\xe6\x88\x90\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "MonsterGenerationConfig.Name", "EModConfigType::MonsterGenerationConfig" },
		{ "MonsterGenerationConfig.ToolTip", "\xe6\x80\xaa\xe7\x89\xa9\xe7\x94\x9f\xe6\x88\x90\xe9\x85\x8d\xe7\xbd\xae" },
		{ "None.Name", "EModConfigType::None" },
		{ "Projectile.Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\n" },
		{ "Projectile.Name", "EModConfigType::Projectile" },
		{ "Projectile.ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9" },
		{ "RealmData.Comment", "//\xe5\xa2\x83\xe7\x95\x8c\xe4\xbf\xa1\xe6\x81\xaf\n" },
		{ "RealmData.Name", "EModConfigType::RealmData" },
		{ "RealmData.ToolTip", "\xe5\xa2\x83\xe7\x95\x8c\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "SkillEntryCondition.Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe8\xaf\x8d\xe6\x9d\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "SkillEntryCondition.Name", "EModConfigType::SkillEntryCondition" },
		{ "SkillEntryCondition.ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe8\xaf\x8d\xe6\x9d\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe9\x85\x8d\xe7\xbd\xae" },
		{ "SkillEntryConfig.Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe8\xaf\x8d\xe6\x9d\xa1\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "SkillEntryConfig.Name", "EModConfigType::SkillEntryConfig" },
		{ "SkillEntryConfig.ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe8\xaf\x8d\xe6\x9d\xa1\xe9\x85\x8d\xe7\xbd\xae" },
		{ "SkillEntryPoolConfig.Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe8\xaf\x8d\xe6\x9d\xa1\xe6\xb1\xa0\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "SkillEntryPoolConfig.Name", "EModConfigType::SkillEntryPoolConfig" },
		{ "SkillEntryPoolConfig.ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe8\xaf\x8d\xe6\x9d\xa1\xe6\xb1\xa0\xe9\x85\x8d\xe7\xbd\xae" },
		{ "TechnologyConfig.Comment", "//\xe7\xa7\x91\xe6\x8a\x80\xef\xbc\x9a\xe7\xa7\x91\xe6\x8a\x80\xe9\xa1\xb9\xe8\xaf\xa6\xe7\xbb\x86\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "TechnologyConfig.Name", "EModConfigType::TechnologyConfig" },
		{ "TechnologyConfig.ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xef\xbc\x9a\xe7\xa7\x91\xe6\x8a\x80\xe9\xa1\xb9\xe8\xaf\xa6\xe7\xbb\x86\xe9\x85\x8d\xe7\xbd\xae" },
		{ "TechUnlockItemConig.Comment", "//\xe7\xa7\x91\xe6\x8a\x80\xef\xbc\x9a\xe7\xa7\x91\xe6\x8a\x80\xe8\xa7\xa3\xe9\x94\x81\xe7\x89\xa9\xe5\x93\x81\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "TechUnlockItemConig.Name", "EModConfigType::TechUnlockItemConig" },
		{ "TechUnlockItemConig.ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xef\xbc\x9a\xe7\xa7\x91\xe6\x8a\x80\xe8\xa7\xa3\xe9\x94\x81\xe7\x89\xa9\xe5\x93\x81\xe9\x85\x8d\xe7\xbd\xae" },
		{ "ThreatPoolInfo.Comment", "//\xe5\xa8\x81\xe8\x83\x81\xe6\xb1\xa0\xe4\xbf\xa1\xe6\x81\xaf\n" },
		{ "ThreatPoolInfo.Name", "EModConfigType::ThreatPoolInfo" },
		{ "ThreatPoolInfo.ToolTip", "\xe5\xa8\x81\xe8\x83\x81\xe6\xb1\xa0\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ToolConfig.Comment", "//\xe5\xb7\xa5\xe5\x85\xb7\n" },
		{ "ToolConfig.Name", "EModConfigType::ToolConfig" },
		{ "ToolConfig.ToolTip", "\xe5\xb7\xa5\xe5\x85\xb7" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\n //Mod\xe9\x85\x8d\xe7\xbd\xae\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "WeaponConfig.Comment", "//\xe6\xad\xa6\xe5\x99\xa8\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "WeaponConfig.Name", "EModConfigType::WeaponConfig" },
		{ "WeaponConfig.ToolTip", "\xe6\xad\xa6\xe5\x99\xa8\xe9\x85\x8d\xe7\xbd\xae" },
		{ "WorldPlaceConfig.Comment", "//\xe5\x9c\xb0\xe5\x9b\xbe\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "WorldPlaceConfig.Name", "EModConfigType::WorldPlaceConfig" },
		{ "WorldPlaceConfig.ToolTip", "\xe5\x9c\xb0\xe5\x9b\xbe\xe9\x85\x8d\xe7\xbd\xae" },
		{ "WorldTaskInfo.Comment", "//\xe4\xb8\x96\xe7\x95\x8c\xe4\xbb\xbb\xe5\x8a\xa1\n" },
		{ "WorldTaskInfo.Name", "EModConfigType::WorldTaskInfo" },
		{ "WorldTaskInfo.ToolTip", "\xe4\xb8\x96\xe7\x95\x8c\xe4\xbb\xbb\xe5\x8a\xa1" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModConfigType::None", (int64)EModConfigType::None },
		{ "EModConfigType::InventoryItem", (int64)EModConfigType::InventoryItem },
		{ "EModConfigType::CharacterConfig", (int64)EModConfigType::CharacterConfig },
		{ "EModConfigType::BuildingUI", (int64)EModConfigType::BuildingUI },
		{ "EModConfigType::BuildConfig", (int64)EModConfigType::BuildConfig },
		{ "EModConfigType::WorldPlaceConfig", (int64)EModConfigType::WorldPlaceConfig },
		{ "EModConfigType::CharacterAppearancePreset", (int64)EModConfigType::CharacterAppearancePreset },
		{ "EModConfigType::CharacterAnatomyProfiles", (int64)EModConfigType::CharacterAnatomyProfiles },
		{ "EModConfigType::CommonBuff", (int64)EModConfigType::CommonBuff },
		{ "EModConfigType::WeaponConfig", (int64)EModConfigType::WeaponConfig },
		{ "EModConfigType::EquipmentConfig", (int64)EModConfigType::EquipmentConfig },
		{ "EModConfigType::FormulaData", (int64)EModConfigType::FormulaData },
		{ "EModConfigType::FabricateEquipmentData", (int64)EModConfigType::FabricateEquipmentData },
		{ "EModConfigType::EquipmentQualityRange", (int64)EModConfigType::EquipmentQualityRange },
		{ "EModConfigType::GenerateEquipmentData", (int64)EModConfigType::GenerateEquipmentData },
		{ "EModConfigType::EquipmentAttributes", (int64)EModConfigType::EquipmentAttributes },
		{ "EModConfigType::TechnologyConfig", (int64)EModConfigType::TechnologyConfig },
		{ "EModConfigType::ToolConfig", (int64)EModConfigType::ToolConfig },
		{ "EModConfigType::DropSetConfig", (int64)EModConfigType::DropSetConfig },
		{ "EModConfigType::TechUnlockItemConig", (int64)EModConfigType::TechUnlockItemConig },
		{ "EModConfigType::AnimalConfig", (int64)EModConfigType::AnimalConfig },
		{ "EModConfigType::GameAbility", (int64)EModConfigType::GameAbility },
		{ "EModConfigType::Projectile", (int64)EModConfigType::Projectile },
		{ "EModConfigType::ModuleUI", (int64)EModConfigType::ModuleUI },
		{ "EModConfigType::CommonUI", (int64)EModConfigType::CommonUI },
		{ "EModConfigType::DialogueGroup", (int64)EModConfigType::DialogueGroup },
		{ "EModConfigType::DialogueInfoConfig", (int64)EModConfigType::DialogueInfoConfig },
		{ "EModConfigType::DialogueOptionConfig", (int64)EModConfigType::DialogueOptionConfig },
		{ "EModConfigType::WorldTaskInfo", (int64)EModConfigType::WorldTaskInfo },
		{ "EModConfigType::ConditionInfo", (int64)EModConfigType::ConditionInfo },
		{ "EModConfigType::AnimalActionAbility", (int64)EModConfigType::AnimalActionAbility },
		{ "EModConfigType::EnemyAttackGenerationConfig", (int64)EModConfigType::EnemyAttackGenerationConfig },
		{ "EModConfigType::MonsterGenerationConfig", (int64)EModConfigType::MonsterGenerationConfig },
		{ "EModConfigType::ThreatPoolInfo", (int64)EModConfigType::ThreatPoolInfo },
		{ "EModConfigType::MartialArtsBook", (int64)EModConfigType::MartialArtsBook },
		{ "EModConfigType::MartialArtsBookCategory", (int64)EModConfigType::MartialArtsBookCategory },
		{ "EModConfigType::RealmData", (int64)EModConfigType::RealmData },
		{ "EModConfigType::MartialArtsEntries", (int64)EModConfigType::MartialArtsEntries },
		{ "EModConfigType::BreakThroughSkill", (int64)EModConfigType::BreakThroughSkill },
		{ "EModConfigType::BreakThroughCharacteristicInfo", (int64)EModConfigType::BreakThroughCharacteristicInfo },
		{ "EModConfigType::SkillEntryConfig", (int64)EModConfigType::SkillEntryConfig },
		{ "EModConfigType::SkillEntryPoolConfig", (int64)EModConfigType::SkillEntryPoolConfig },
		{ "EModConfigType::SkillEntryCondition", (int64)EModConfigType::SkillEntryCondition },
		{ "EModConfigType::BuildTabConfig", (int64)EModConfigType::BuildTabConfig },
		{ "EModConfigType::BuildListCategorizeConfig", (int64)EModConfigType::BuildListCategorizeConfig },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModConfigType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModConfigType",
	"EModConfigType",
	Z_Construct_UEnum_CreateModPlugin_EModConfigType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModConfigType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModConfigType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModConfigType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModConfigType()
{
	if (!Z_Registration_Info_UEnum_EModConfigType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModConfigType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModConfigType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModConfigType.InnerSingleton;
}
// ********** End Enum EModConfigType **************************************************************

// ********** Begin Enum EModDataAssetType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModDataAssetType;
static UEnum* EModDataAssetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModDataAssetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModDataAssetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModDataAssetType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModDataAssetType"));
	}
	return Z_Registration_Info_UEnum_EModDataAssetType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModDataAssetType>()
{
	return EModDataAssetType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModDataAssetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mod\xe8\xb5\x84\xe4\xba\xa7\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
		{ "NewGameConfiguration.Name", "EModDataAssetType::NewGameConfiguration" },
		{ "None.Name", "EModDataAssetType::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod\xe8\xb5\x84\xe4\xba\xa7\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModDataAssetType::None", (int64)EModDataAssetType::None },
		{ "EModDataAssetType::NewGameConfiguration", (int64)EModDataAssetType::NewGameConfiguration },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModDataAssetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModDataAssetType",
	"EModDataAssetType",
	Z_Construct_UEnum_CreateModPlugin_EModDataAssetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModDataAssetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModDataAssetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModDataAssetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModDataAssetType()
{
	if (!Z_Registration_Info_UEnum_EModDataAssetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModDataAssetType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModDataAssetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModDataAssetType.InnerSingleton;
}
// ********** End Enum EModDataAssetType ***********************************************************

// ********** Begin ScriptStruct FModConfig ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModConfig;
class UScriptStruct* FModConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModConfig, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FModConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mod\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModConfigType_MetaData[] = {
		{ "Category", "ModConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x85\x8d\xe7\xbd\xae\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x85\x8d\xe7\xbd\xae\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
		{ "Category", "ModConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x93\xe6\x9e\x84\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9e\x84\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideData_MetaData[] = {
		{ "Category", "ModConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8b\xbe\xe9\x80\x89\xe5\x90\x8eMap\xe6\x88\x96""Array\xe5\x88\x99\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xa6\x86\xe7\x9b\x96\xe5\x8e\x9f\xe6\x9d\xa5\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8b\xbe\xe9\x80\x89\xe5\x88\x99\xe5\x9c\xa8\xe5\x8e\x9f\xe6\x9c\x89\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe5\xa2\x9e\xe5\x8a\xa0\xe3\x80\x82\xe5\x85\xb6\xe4\xbb\x96\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe5\xa6\x82\xe6\x9e\x9c\xe6\x98\xaf\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe5\x88\x99\xe4\xb8\x8d\xe7\x94\x9f\xe6\x95\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8b\xbe\xe9\x80\x89\xe5\x90\x8eMap\xe6\x88\x96""Array\xe5\x88\x99\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xa6\x86\xe7\x9b\x96\xe5\x8e\x9f\xe6\x9d\xa5\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8b\xbe\xe9\x80\x89\xe5\x88\x99\xe5\x9c\xa8\xe5\x8e\x9f\xe6\x9c\x89\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe5\xa2\x9e\xe5\x8a\xa0\xe3\x80\x82\xe5\x85\xb6\xe4\xbb\x96\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe5\xa6\x82\xe6\x9e\x9c\xe6\x98\xaf\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe5\x88\x99\xe4\xb8\x8d\xe7\x94\x9f\xe6\x95\x88" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModConfigType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModConfigType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StructName;
	static void NewProp_bOverrideData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModConfig_Statics::NewProp_ModConfigType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModConfig_Statics::NewProp_ModConfigType = { "ModConfigType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModConfig, ModConfigType), Z_Construct_UEnum_CreateModPlugin_EModConfigType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModConfigType_MetaData), NewProp_ModConfigType_MetaData) }; // 3085131635
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModConfig_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModConfig, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTable_MetaData), NewProp_DataTable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModConfig_Statics::NewProp_StructName = { "StructName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModConfig, StructName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructName_MetaData), NewProp_StructName_MetaData) };
void Z_Construct_UScriptStruct_FModConfig_Statics::NewProp_bOverrideData_SetBit(void* Obj)
{
	((FModConfig*)Obj)->bOverrideData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModConfig_Statics::NewProp_bOverrideData = { "bOverrideData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModConfig), &Z_Construct_UScriptStruct_FModConfig_Statics::NewProp_bOverrideData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideData_MetaData), NewProp_bOverrideData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModConfig_Statics::NewProp_ModConfigType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModConfig_Statics::NewProp_ModConfigType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModConfig_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModConfig_Statics::NewProp_StructName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModConfig_Statics::NewProp_bOverrideData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModConfig",
	Z_Construct_UScriptStruct_FModConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModConfig_Statics::PropPointers),
	sizeof(FModConfig),
	alignof(FModConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FModConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModConfig.InnerSingleton, Z_Construct_UScriptStruct_FModConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModConfig.InnerSingleton;
}
// ********** End ScriptStruct FModConfig **********************************************************

// ********** Begin ScriptStruct FModAsset *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModAsset;
class UScriptStruct* FModAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModAsset, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModAsset"));
	}
	return Z_Registration_Info_UScriptStruct_FModAsset.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mod\xe8\xb5\x84\xe4\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod\xe8\xb5\x84\xe4\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModDataAssetType_MetaData[] = {
		{ "Category", "ModAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x85\x8d\xe7\xbd\xae\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x85\x8d\xe7\xbd\xae\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[] = {
		{ "Category", "ModAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideData_MetaData[] = {
		{ "Category", "ModAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8b\xbe\xe9\x80\x89\xe5\x90\x8eMap\xe6\x88\x96""Array\xe5\x88\x99\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xa6\x86\xe7\x9b\x96\xe5\x8e\x9f\xe6\x9d\xa5\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8b\xbe\xe9\x80\x89\xe5\x88\x99\xe5\x9c\xa8\xe5\x8e\x9f\xe6\x9c\x89\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe5\xa2\x9e\xe5\x8a\xa0\xe3\x80\x82\xe5\x85\xb6\xe4\xbb\x96\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe5\xa6\x82\xe6\x9e\x9c\xe6\x98\xaf\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe5\x88\x99\xe4\xb8\x8d\xe7\x94\x9f\xe6\x95\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8b\xbe\xe9\x80\x89\xe5\x90\x8eMap\xe6\x88\x96""Array\xe5\x88\x99\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xa6\x86\xe7\x9b\x96\xe5\x8e\x9f\xe6\x9d\xa5\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8b\xbe\xe9\x80\x89\xe5\x88\x99\xe5\x9c\xa8\xe5\x8e\x9f\xe6\x9c\x89\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe5\xa2\x9e\xe5\x8a\xa0\xe3\x80\x82\xe5\x85\xb6\xe4\xbb\x96\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe5\xa6\x82\xe6\x9e\x9c\xe6\x98\xaf\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe5\x88\x99\xe4\xb8\x8d\xe7\x94\x9f\xe6\x95\x88" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModDataAssetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModDataAssetType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DataAsset;
	static void NewProp_bOverrideData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModAsset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModAsset_Statics::NewProp_ModDataAssetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModAsset_Statics::NewProp_ModDataAssetType = { "ModDataAssetType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAsset, ModDataAssetType), Z_Construct_UEnum_CreateModPlugin_EModDataAssetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModDataAssetType_MetaData), NewProp_ModDataAssetType_MetaData) }; // 2803957064
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModAsset_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAsset, DataAsset), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsset_MetaData), NewProp_DataAsset_MetaData) };
void Z_Construct_UScriptStruct_FModAsset_Statics::NewProp_bOverrideData_SetBit(void* Obj)
{
	((FModAsset*)Obj)->bOverrideData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModAsset_Statics::NewProp_bOverrideData = { "bOverrideData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModAsset), &Z_Construct_UScriptStruct_FModAsset_Statics::NewProp_bOverrideData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideData_MetaData), NewProp_bOverrideData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAsset_Statics::NewProp_ModDataAssetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAsset_Statics::NewProp_ModDataAssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAsset_Statics::NewProp_DataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAsset_Statics::NewProp_bOverrideData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModAsset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModAsset",
	Z_Construct_UScriptStruct_FModAsset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAsset_Statics::PropPointers),
	sizeof(FModAsset),
	alignof(FModAsset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModAsset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModAsset()
{
	if (!Z_Registration_Info_UScriptStruct_FModAsset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModAsset.InnerSingleton, Z_Construct_UScriptStruct_FModAsset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModAsset.InnerSingleton;
}
// ********** End ScriptStruct FModAsset ***********************************************************

// ********** Begin Class UModInformationAsset *****************************************************
void UModInformationAsset::StaticRegisterNativesUModInformationAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModInformationAsset;
UClass* UModInformationAsset::GetPrivateStaticClass()
{
	using TClass = UModInformationAsset;
	if (!Z_Registration_Info_UClass_UModInformationAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ModInformationAsset"),
			Z_Registration_Info_UClass_UModInformationAsset.InnerSingleton,
			StaticRegisterNativesUModInformationAsset,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UModInformationAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UModInformationAsset_NoRegister()
{
	return UModInformationAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UModInformationAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseDataStruct.h" },
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTables_MetaData[] = {
		{ "Category", "ModInformationAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mod\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xae\xe9\xa1\xb9 \n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xae\xe9\xa1\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAssets_MetaData[] = {
		{ "Category", "ModInformationAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mod\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xae\xe9\xa1\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xae\xe9\xa1\xb9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataTables;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModInformationAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModInformationAsset_Statics::NewProp_DataTables_Inner = { "DataTables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModConfig, METADATA_PARAMS(0, nullptr) }; // 2437047248
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModInformationAsset_Statics::NewProp_DataTables = { "DataTables", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInformationAsset, DataTables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTables_MetaData), NewProp_DataTables_MetaData) }; // 2437047248
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModInformationAsset_Statics::NewProp_DataAssets_Inner = { "DataAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModAsset, METADATA_PARAMS(0, nullptr) }; // 3119472607
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModInformationAsset_Statics::NewProp_DataAssets = { "DataAssets", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInformationAsset, DataAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAssets_MetaData), NewProp_DataAssets_MetaData) }; // 3119472607
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModInformationAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInformationAsset_Statics::NewProp_DataTables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInformationAsset_Statics::NewProp_DataTables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInformationAsset_Statics::NewProp_DataAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInformationAsset_Statics::NewProp_DataAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModInformationAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModInformationAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModInformationAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModInformationAsset_Statics::ClassParams = {
	&UModInformationAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModInformationAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModInformationAsset_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModInformationAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UModInformationAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModInformationAsset()
{
	if (!Z_Registration_Info_UClass_UModInformationAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModInformationAsset.OuterSingleton, Z_Construct_UClass_UModInformationAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModInformationAsset.OuterSingleton;
}
UModInformationAsset::UModInformationAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModInformationAsset);
UModInformationAsset::~UModInformationAsset() {}
// ********** End Class UModInformationAsset *******************************************************

// ********** Begin ScriptStruct FModDataBase ******************************************************
static_assert(std::is_polymorphic<FModDataBase>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FModDataBase cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModDataBase;
class UScriptStruct* FModDataBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModDataBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModDataBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModDataBase, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModDataBase"));
	}
	return Z_Registration_Info_UScriptStruct_FModDataBase.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mod\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\xe5\x9f\xba\xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\xe5\x9f\xba\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateID_MetaData[] = {
		{ "Category", "ModDataBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa8\xa1\xe6\x9d\xbfid\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe5\x8e\x9f\xe8\xa1\xa8\xe4\xb8\xad\xe6\xb2\xa1\xe6\x9c\x89\xe7\x9a\x84\xe6\x9d\xa1\xe7\x9b\xae\xe6\x97\xb6\xe8\x8e\xb7\xe5\x8f\x96\xe6\xad\xa4\xe6\xa8\xa1\xe6\x9d\xbf\xe6\x9d\xa5\xe5\xa2\x9e\xe5\x8a\xa0\xe6\x96\xb0\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa8\xa1\xe6\x9d\xbfid\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe5\x8e\x9f\xe8\xa1\xa8\xe4\xb8\xad\xe6\xb2\xa1\xe6\x9c\x89\xe7\x9a\x84\xe6\x9d\xa1\xe7\x9b\xae\xe6\x97\xb6\xe8\x8e\xb7\xe5\x8f\x96\xe6\xad\xa4\xe6\xa8\xa1\xe6\x9d\xbf\xe6\x9d\xa5\xe5\xa2\x9e\xe5\x8a\xa0\xe6\x96\xb0\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "ModDataBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe6\x9d\xa1\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84id \xe5\xbf\x85\xe9\xa1\xbb\xe4\xb8\x8e\xe8\xa1\x8c\xe5\x91\xbd\xe5\x90\x8d\xe7\x9b\xb8\xe5\x90\x8c\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe6\x9d\xa1\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84id \xe5\xbf\x85\xe9\xa1\xbb\xe4\xb8\x8e\xe8\xa1\x8c\xe5\x91\xbd\xe5\x90\x8d\xe7\x9b\xb8\xe5\x90\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TemplateID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModDataBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModDataBase_Statics::NewProp_TemplateID = { "TemplateID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDataBase, TemplateID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateID_MetaData), NewProp_TemplateID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModDataBase_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDataBase, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModDataBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDataBase_Statics::NewProp_TemplateID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDataBase_Statics::NewProp_ID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDataBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModDataBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ModDataBase",
	Z_Construct_UScriptStruct_FModDataBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDataBase_Statics::PropPointers),
	sizeof(FModDataBase),
	alignof(FModDataBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDataBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModDataBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModDataBase()
{
	if (!Z_Registration_Info_UScriptStruct_FModDataBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModDataBase.InnerSingleton, Z_Construct_UScriptStruct_FModDataBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModDataBase.InnerSingleton;
}
// ********** End ScriptStruct FModDataBase ********************************************************

// ********** Begin Enum EModCharacterBehaviorState ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModCharacterBehaviorState;
static UEnum* EModCharacterBehaviorState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModCharacterBehaviorState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModCharacterBehaviorState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModCharacterBehaviorState"));
	}
	return Z_Registration_Info_UEnum_EModCharacterBehaviorState.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModCharacterBehaviorState>()
{
	return EModCharacterBehaviorState_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActiveRobot.Comment", "//\xe6\xbf\x80\xe6\xb4\xbb\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xba\n" },
		{ "ActiveRobot.Name", "EModCharacterBehaviorState::ActiveRobot" },
		{ "ActiveRobot.ToolTip", "\xe6\xbf\x80\xe6\xb4\xbb\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xba" },
		{ "Animal_Sleep.Comment", "//\xe5\x8a\xa8\xe7\x89\xa9\xe7\x9d\xa1\xe8\xa7\x89\n" },
		{ "Animal_Sleep.Name", "EModCharacterBehaviorState::Animal_Sleep" },
		{ "Animal_Sleep.ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9\xe7\x9d\xa1\xe8\xa7\x89" },
		{ "AnimalEat_Vege.Comment", "//\xe5\x8a\xa8\xe7\x89\xa9\xe5\x90\x83\xe7\xb4\xa0\xe9\xa3\x9f\n" },
		{ "AnimalEat_Vege.Name", "EModCharacterBehaviorState::AnimalEat_Vege" },
		{ "AnimalEat_Vege.ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9\xe5\x90\x83\xe7\xb4\xa0\xe9\xa3\x9f" },
		{ "Assault.Comment", "//\xe8\xbf\x9b\xe6\x94\xbb\n" },
		{ "Assault.Name", "EModCharacterBehaviorState::Assault" },
		{ "Assault.ToolTip", "\xe8\xbf\x9b\xe6\x94\xbb" },
		{ "BeTamed.Comment", "//\xe8\xa2\xab\xe9\xa9\xaf\xe6\x9c\x8d\xe4\xb8\xad\n" },
		{ "BeTamed.Name", "EModCharacterBehaviorState::BeTamed" },
		{ "BeTamed.ToolTip", "\xe8\xa2\xab\xe9\xa9\xaf\xe6\x9c\x8d\xe4\xb8\xad" },
		{ "BlueprintType", "true" },
		{ "Breakthrough.Comment", "//\xe7\xaa\x81\xe7\xa0\xb4\n" },
		{ "Breakthrough.Name", "EModCharacterBehaviorState::Breakthrough" },
		{ "Breakthrough.ToolTip", "\xe7\xaa\x81\xe7\xa0\xb4" },
		{ "Breeding.Comment", "//\xe7\xb9\x81\xe8\x82\xb2\n" },
		{ "Breeding.Name", "EModCharacterBehaviorState::Breeding" },
		{ "Breeding.ToolTip", "\xe7\xb9\x81\xe8\x82\xb2" },
		{ "BuildStruct.Comment", "//\xe6\xad\xa3\xe5\x9c\xa8\xe5\xbb\xba\xe9\x80\xa0\n" },
		{ "BuildStruct.Name", "EModCharacterBehaviorState::BuildStruct" },
		{ "BuildStruct.ToolTip", "\xe6\xad\xa3\xe5\x9c\xa8\xe5\xbb\xba\xe9\x80\xa0" },
		{ "ButcherBody.Comment", "//\xe5\xb1\xa0\xe5\xae\xb0\n" },
		{ "ButcherBody.Name", "EModCharacterBehaviorState::ButcherBody" },
		{ "ButcherBody.ToolTip", "\xe5\xb1\xa0\xe5\xae\xb0" },
		{ "ChopFirewood.Comment", "//\xe5\x8a\x88\xe6\x9f\xb4\n" },
		{ "ChopFirewood.Name", "EModCharacterBehaviorState::ChopFirewood" },
		{ "ChopFirewood.ToolTip", "\xe5\x8a\x88\xe6\x9f\xb4" },
		{ "CollectPlant.Comment", "//\xe9\x87\x87\xe9\x9b\x86\n" },
		{ "CollectPlant.Name", "EModCharacterBehaviorState::CollectPlant" },
		{ "CollectPlant.ToolTip", "\xe9\x87\x87\xe9\x9b\x86" },
		{ "CollectTheProducts.Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe4\xba\xa7\xe7\x89\xa9\n" },
		{ "CollectTheProducts.Name", "EModCharacterBehaviorState::CollectTheProducts" },
		{ "CollectTheProducts.ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xba\xa7\xe7\x89\xa9" },
		{ "Construct.Comment", "//\xe6\x90\xac\xe8\xbf\x90\xe8\xb5\x84\xe6\xba\x90\xe5\xbb\xba\xe9\x80\xa0\n" },
		{ "Construct.Name", "EModCharacterBehaviorState::Construct" },
		{ "Construct.ToolTip", "\xe6\x90\xac\xe8\xbf\x90\xe8\xb5\x84\xe6\xba\x90\xe5\xbb\xba\xe9\x80\xa0" },
		{ "CutOff.Comment", "//\xe5\x89\xb2\xe9\x99\xa4\n" },
		{ "CutOff.Name", "EModCharacterBehaviorState::CutOff" },
		{ "CutOff.ToolTip", "\xe5\x89\xb2\xe9\x99\xa4" },
		{ "Death.Comment", "//\xe6\xad\xbb\xe4\xba\xa1\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "Death.Name", "EModCharacterBehaviorState::Death" },
		{ "Death.ToolTip", "\xe6\xad\xbb\xe4\xba\xa1\xe7\x8a\xb6\xe6\x80\x81" },
		{ "DefeatedDisplay.Comment", "//\xe6\x88\x98\xe6\x96\x97\xe5\xa4\xb1\xe8\xb4\xa5\xe5\xb1\x95\xe7\xa4\xba\n" },
		{ "DefeatedDisplay.Name", "EModCharacterBehaviorState::DefeatedDisplay" },
		{ "DefeatedDisplay.ToolTip", "\xe6\x88\x98\xe6\x96\x97\xe5\xa4\xb1\xe8\xb4\xa5\xe5\xb1\x95\xe7\xa4\xba" },
		{ "DelicateMelting.Comment", "//\xe9\xab\x98\xe7\xba\xa7\xe7\x86\x94\xe7\x82\xbc\n" },
		{ "DelicateMelting.Name", "EModCharacterBehaviorState::DelicateMelting" },
		{ "DelicateMelting.ToolTip", "\xe9\xab\x98\xe7\xba\xa7\xe7\x86\x94\xe7\x82\xbc" },
		{ "DepressionIdle.Comment", "//\xe6\x8a\x91\xe9\x83\x81\xe9\x97\xb2\xe9\x80\x9b\xef\xbc\x88\xe5\xb4\xa9\xe6\xba\x83\xef\xbc\x89\n" },
		{ "DepressionIdle.Name", "EModCharacterBehaviorState::DepressionIdle" },
		{ "DepressionIdle.ToolTip", "\xe6\x8a\x91\xe9\x83\x81\xe9\x97\xb2\xe9\x80\x9b\xef\xbc\x88\xe5\xb4\xa9\xe6\xba\x83\xef\xbc\x89" },
		{ "DestoryBuilding.Comment", "//\xe6\x8b\x86\xe9\x99\xa4\xe5\xbb\xba\xe7\xad\x91\n" },
		{ "DestoryBuilding.Name", "EModCharacterBehaviorState::DestoryBuilding" },
		{ "DestoryBuilding.ToolTip", "\xe6\x8b\x86\xe9\x99\xa4\xe5\xbb\xba\xe7\xad\x91" },
		{ "Eat_Sit.Comment", "//\xe5\x9d\x90\xe7\x9d\x80\xe8\xbf\x9b\xe9\xa3\x9f\n" },
		{ "Eat_Sit.Name", "EModCharacterBehaviorState::Eat_Sit" },
		{ "Eat_Sit.ToolTip", "\xe5\x9d\x90\xe7\x9d\x80\xe8\xbf\x9b\xe9\xa3\x9f" },
		{ "Eat_Stand.Comment", "//\xe7\xab\x99\xe7\x9d\x80\xe8\xbf\x9b\xe9\xa3\x9f\n" },
		{ "Eat_Stand.Name", "EModCharacterBehaviorState::Eat_Stand" },
		{ "Eat_Stand.ToolTip", "\xe7\xab\x99\xe7\x9d\x80\xe8\xbf\x9b\xe9\xa3\x9f" },
		{ "EquipEquipment.Comment", "//\xe7\xa9\xbf\xe8\xa3\x85\xe5\xa4\x87\n" },
		{ "EquipEquipment.Name", "EModCharacterBehaviorState::EquipEquipment" },
		{ "EquipEquipment.ToolTip", "\xe7\xa9\xbf\xe8\xa3\x85\xe5\xa4\x87" },
		{ "Excavate.Comment", "//\xe9\x87\x87\xe7\x9f\xbf\n" },
		{ "Excavate.Name", "EModCharacterBehaviorState::Excavate" },
		{ "Excavate.ToolTip", "\xe9\x87\x87\xe7\x9f\xbf" },
		{ "ExchangeMartialArts.Comment", "//\xe9\xa9\xbf\xe7\xab\x99\xe5\x88\x87\xe7\xa3\x8b\n" },
		{ "ExchangeMartialArts.Name", "EModCharacterBehaviorState::ExchangeMartialArts" },
		{ "ExchangeMartialArts.ToolTip", "\xe9\xa9\xbf\xe7\xab\x99\xe5\x88\x87\xe7\xa3\x8b" },
		{ "Explore.Comment", "//\xe6\x8e\xa2\xe7\xb4\xa2\n" },
		{ "Explore.Name", "EModCharacterBehaviorState::Explore" },
		{ "Explore.ToolTip", "\xe6\x8e\xa2\xe7\xb4\xa2" },
		{ "Following.Comment", "//\xe8\xb7\x9f\xe9\x9a\x8f\xe4\xb8\xad\n" },
		{ "Following.Name", "EModCharacterBehaviorState::Following" },
		{ "Following.ToolTip", "\xe8\xb7\x9f\xe9\x9a\x8f\xe4\xb8\xad" },
		{ "ForceRetreat.Comment", "//\xe5\xbc\xba\xe5\x88\xb6\xe6\x92\xa4\xe9\x80\x80\xe5\x88\xb0\xe7\x9b\xae\xe6\xa0\x87\xe7\x82\xb9\n" },
		{ "ForceRetreat.Name", "EModCharacterBehaviorState::ForceRetreat" },
		{ "ForceRetreat.ToolTip", "\xe5\xbc\xba\xe5\x88\xb6\xe6\x92\xa4\xe9\x80\x80\xe5\x88\xb0\xe7\x9b\xae\xe6\xa0\x87\xe7\x82\xb9" },
		{ "GetItem.Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe7\x89\xa9\xe5\x93\x81\n" },
		{ "GetItem.Name", "EModCharacterBehaviorState::GetItem" },
		{ "GetItem.ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe7\x89\xa9\xe5\x93\x81" },
		{ "GrindTheMill.Comment", "//\xe6\x8e\xa8\xe7\xa3\xa8\n" },
		{ "GrindTheMill.Name", "EModCharacterBehaviorState::GrindTheMill" },
		{ "GrindTheMill.ToolTip", "\xe6\x8e\xa8\xe7\xa3\xa8" },
		{ "Happy_MasterChair.Comment", "//\xe6\x94\xbe\xe6\x9d\xbe\xe5\x9d\x90\n" },
		{ "Happy_MasterChair.Name", "EModCharacterBehaviorState::Happy_MasterChair" },
		{ "Happy_MasterChair.ToolTip", "\xe6\x94\xbe\xe6\x9d\xbe\xe5\x9d\x90" },
		{ "Havest_Wheat.Comment", "//\xe6\x94\xb6\xe5\x89\xb2\n" },
		{ "Havest_Wheat.Name", "EModCharacterBehaviorState::Havest_Wheat" },
		{ "Havest_Wheat.ToolTip", "\xe6\x94\xb6\xe5\x89\xb2" },
		{ "Hunting.Comment", "//\xe7\x8b\xa9\xe7\x8c\x8e\n" },
		{ "Hunting.Name", "EModCharacterBehaviorState::Hunting" },
		{ "Hunting.ToolTip", "\xe7\x8b\xa9\xe7\x8c\x8e" },
		{ "InAction.Comment", "//\xe6\x89\xa7\xe8\xa1\x8c\xe5\x8a\xa8\xe4\xbd\x9c\xe4\xb8\xad\n" },
		{ "InAction.Name", "EModCharacterBehaviorState::InAction" },
		{ "InAction.ToolTip", "\xe6\x89\xa7\xe8\xa1\x8c\xe5\x8a\xa8\xe4\xbd\x9c\xe4\xb8\xad" },
		{ "InBattle.Comment", "//\xe6\x88\x98\xe6\x96\x97\xe4\xb8\xad\n" },
		{ "InBattle.Name", "EModCharacterBehaviorState::InBattle" },
		{ "InBattle.ToolTip", "\xe6\x88\x98\xe6\x96\x97\xe4\xb8\xad" },
		{ "InBuildingRecovery.Comment", "//\xe5\x9c\xa8\xe7\xbb\xb4\xe4\xbf\xae\xe5\xbb\xba\xe7\xad\x91\xe6\x81\xa2\xe5\xa4\x8d\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "InBuildingRecovery.Name", "EModCharacterBehaviorState::InBuildingRecovery" },
		{ "InBuildingRecovery.ToolTip", "\xe5\x9c\xa8\xe7\xbb\xb4\xe4\xbf\xae\xe5\xbb\xba\xe7\xad\x91\xe6\x81\xa2\xe5\xa4\x8d\xe7\x8a\xb6\xe6\x80\x81" },
		{ "InControlled.Comment", "//\xe8\xa2\xab\xe6\x8e\xa7\xe5\x88\xb6\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "InControlled.Name", "EModCharacterBehaviorState::InControlled" },
		{ "InControlled.ToolTip", "\xe8\xa2\xab\xe6\x8e\xa7\xe5\x88\xb6\xe7\x8a\xb6\xe6\x80\x81" },
		{ "InRide.Comment", "//\xe9\xaa\x91\xe4\xb9\x98\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "InRide.Name", "EModCharacterBehaviorState::InRide" },
		{ "InRide.ToolTip", "\xe9\xaa\x91\xe4\xb9\x98\xe7\x8a\xb6\xe6\x80\x81" },
		{ "InStroll.Comment", "//\xe9\x97\xb2\xe9\x80\x9b\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "InStroll.Name", "EModCharacterBehaviorState::InStroll" },
		{ "InStroll.ToolTip", "\xe9\x97\xb2\xe9\x80\x9b\xe7\x8a\xb6\xe6\x80\x81" },
		{ "JoinCeremony.Comment", "//\xe5\x8f\x82\xe5\x8a\xa0\xe4\xbb\xaa\xe5\xbc\x8f\n" },
		{ "JoinCeremony.Name", "EModCharacterBehaviorState::JoinCeremony" },
		{ "JoinCeremony.ToolTip", "\xe5\x8f\x82\xe5\x8a\xa0\xe4\xbb\xaa\xe5\xbc\x8f" },
		{ "KnockDown.Comment", "//\xe8\xa2\xab\xe5\x87\xbb\xe5\x80\x92\n" },
		{ "KnockDown.Name", "EModCharacterBehaviorState::KnockDown" },
		{ "KnockDown.ToolTip", "\xe8\xa2\xab\xe5\x87\xbb\xe5\x80\x92" },
		{ "Logging.Comment", "//\xe7\xa0\x8d\xe4\xbc\x90\n" },
		{ "Logging.Name", "EModCharacterBehaviorState::Logging" },
		{ "Logging.ToolTip", "\xe7\xa0\x8d\xe4\xbc\x90" },
		{ "MakeMedicine.Comment", "//\xe5\x88\xb6\xe8\x8d\xaf\n" },
		{ "MakeMedicine.Name", "EModCharacterBehaviorState::MakeMedicine" },
		{ "MakeMedicine.ToolTip", "\xe5\x88\xb6\xe8\x8d\xaf" },
		{ "MakeWine.Comment", "//\xe9\x85\xbf\xe9\x85\x92\n" },
		{ "MakeWine.Name", "EModCharacterBehaviorState::MakeWine" },
		{ "MakeWine.ToolTip", "\xe9\x85\xbf\xe9\x85\x92" },
		{ "ManageBuildings.Comment", "//\xe7\xae\xa1\xe7\x90\x86xx\xe5\xbb\xba\xe7\xad\x91\n" },
		{ "ManageBuildings.Name", "EModCharacterBehaviorState::ManageBuildings" },
		{ "ManageBuildings.ToolTip", "\xe7\xae\xa1\xe7\x90\x86xx\xe5\xbb\xba\xe7\xad\x91" },
		{ "MedicatedBath.Comment", "//\xe8\x8d\xaf\xe6\xb5\xb4\n" },
		{ "MedicatedBath.Name", "EModCharacterBehaviorState::MedicatedBath" },
		{ "MedicatedBath.ToolTip", "\xe8\x8d\xaf\xe6\xb5\xb4" },
		{ "Meditation.Comment", "//\xe6\xb2\x90\xe5\x86\xb0\n" },
		{ "Meditation.Name", "EModCharacterBehaviorState::Meditation" },
		{ "Meditation.ToolTip", "\xe6\xb2\x90\xe5\x86\xb0" },
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
		{ "None.Comment", "//\xe6\x99\xae\xe9\x80\x9a\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "None.Name", "EModCharacterBehaviorState::None" },
		{ "None.ToolTip", "\xe6\x99\xae\xe9\x80\x9a\xe7\x8a\xb6\xe6\x80\x81" },
		{ "Observe.Comment", "//\xe8\xa7\x82\xe5\xaf\x9f\n" },
		{ "Observe.Name", "EModCharacterBehaviorState::Observe" },
		{ "Observe.ToolTip", "\xe8\xa7\x82\xe5\xaf\x9f" },
		{ "OnPatrol.Comment", "//\xe5\xb7\xa1\xe9\x80\xbb\xe4\xb8\xad\n" },
		{ "OnPatrol.Name", "EModCharacterBehaviorState::OnPatrol" },
		{ "OnPatrol.ToolTip", "\xe5\xb7\xa1\xe9\x80\xbb\xe4\xb8\xad" },
		{ "OpenFabricateWork.Comment", "//\xe5\x90\xaf\xe5\x8a\xa8\xe8\xae\xbe\xe5\xa4\x87\xe5\xb7\xa5\xe4\xbd\x9c\n" },
		{ "OpenFabricateWork.Name", "EModCharacterBehaviorState::OpenFabricateWork" },
		{ "OpenFabricateWork.ToolTip", "\xe5\x90\xaf\xe5\x8a\xa8\xe8\xae\xbe\xe5\xa4\x87\xe5\xb7\xa5\xe4\xbd\x9c" },
		{ "PhysicianCarry.Comment", "//\xe5\x8c\xbb\xe7\x96\x97\xe6\x90\xac\xe8\xbf\x90\n" },
		{ "PhysicianCarry.Name", "EModCharacterBehaviorState::PhysicianCarry" },
		{ "PhysicianCarry.ToolTip", "\xe5\x8c\xbb\xe7\x96\x97\xe6\x90\xac\xe8\xbf\x90" },
		{ "PlantCrops.Comment", "//\xe7\xa7\x8d\xe6\xa4\x8d\xe4\xbd\x9c\xe7\x89\xa9\n" },
		{ "PlantCrops.Name", "EModCharacterBehaviorState::PlantCrops" },
		{ "PlantCrops.ToolTip", "\xe7\xa7\x8d\xe6\xa4\x8d\xe4\xbd\x9c\xe7\x89\xa9" },
		{ "Practice_WoodenDummy.Comment", "//\xe7\xbb\x83\xe5\x8a\x9f\n" },
		{ "Practice_WoodenDummy.Name", "EModCharacterBehaviorState::Practice_WoodenDummy" },
		{ "Practice_WoodenDummy.ToolTip", "\xe7\xbb\x83\xe5\x8a\x9f" },
		{ "PreBattleDisplay.Comment", "//\xe6\x88\x98\xe6\x96\x97\xe5\x89\x8d\xe5\xb1\x95\xe7\xa4\xba\n" },
		{ "PreBattleDisplay.Name", "EModCharacterBehaviorState::PreBattleDisplay" },
		{ "PreBattleDisplay.ToolTip", "\xe6\x88\x98\xe6\x96\x97\xe5\x89\x8d\xe5\xb1\x95\xe7\xa4\xba" },
		{ "Quarrying.Comment", "//\xe9\x87\x87\xe7\x9f\xb3\n" },
		{ "Quarrying.Name", "EModCharacterBehaviorState::Quarrying" },
		{ "Quarrying.ToolTip", "\xe9\x87\x87\xe7\x9f\xb3" },
		{ "Read_Sit.Comment", "//\xe5\x9d\x90\xe7\x9d\x80\xe8\xaf\xbb\xe4\xb9\xa6\n" },
		{ "Read_Sit.Name", "EModCharacterBehaviorState::Read_Sit" },
		{ "Read_Sit.ToolTip", "\xe5\x9d\x90\xe7\x9d\x80\xe8\xaf\xbb\xe4\xb9\xa6" },
		{ "Reading.Comment", "//\xe8\xaf\xbb\xe4\xb9\xa6\n" },
		{ "Reading.Name", "EModCharacterBehaviorState::Reading" },
		{ "Reading.ToolTip", "\xe8\xaf\xbb\xe4\xb9\xa6" },
		{ "RecoverInspiration.Comment", "//\xe6\x84\x9f\xe6\x82\x9f\n" },
		{ "RecoverInspiration.Name", "EModCharacterBehaviorState::RecoverInspiration" },
		{ "RecoverInspiration.ToolTip", "\xe6\x84\x9f\xe6\x82\x9f" },
		{ "Recuperate_Bed.Comment", "//\xe5\x9c\xa8\xe5\xba\x8a\xe4\xb8\x8a\xe7\x96\x97\xe5\x85\xbb\n" },
		{ "Recuperate_Bed.Name", "EModCharacterBehaviorState::Recuperate_Bed" },
		{ "Recuperate_Bed.ToolTip", "\xe5\x9c\xa8\xe5\xba\x8a\xe4\xb8\x8a\xe7\x96\x97\xe5\x85\xbb" },
		{ "Recuperate_Ground.Comment", "//\xe5\x9c\xa8\xe5\x9c\xb0\xe4\xb8\x8a\xe7\x96\x97\xe5\x85\xbb\n" },
		{ "Recuperate_Ground.Name", "EModCharacterBehaviorState::Recuperate_Ground" },
		{ "Recuperate_Ground.ToolTip", "\xe5\x9c\xa8\xe5\x9c\xb0\xe4\xb8\x8a\xe7\x96\x97\xe5\x85\xbb" },
		{ "Recuperate_Mat.Comment", "//\xe5\x9c\xa8\xe5\x9c\xb0\xe9\x93\xba\xe7\x96\x97\xe5\x85\xbb\n" },
		{ "Recuperate_Mat.Name", "EModCharacterBehaviorState::Recuperate_Mat" },
		{ "Recuperate_Mat.ToolTip", "\xe5\x9c\xa8\xe5\x9c\xb0\xe9\x93\xba\xe7\x96\x97\xe5\x85\xbb" },
		{ "RefitPuppet.Comment", "//\xe6\x94\xb9\xe8\xa3\x85\xe5\x82\x80\xe5\x84\xa1\n" },
		{ "RefitPuppet.Name", "EModCharacterBehaviorState::RefitPuppet" },
		{ "RefitPuppet.ToolTip", "\xe6\x94\xb9\xe8\xa3\x85\xe5\x82\x80\xe5\x84\xa1" },
		{ "RepaiRobot.Comment", "//\xe7\xbb\xb4\xe4\xbf\xae\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\n" },
		{ "RepaiRobot.Name", "EModCharacterBehaviorState::RepaiRobot" },
		{ "RepaiRobot.ToolTip", "\xe7\xbb\xb4\xe4\xbf\xae\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba" },
		{ "Research.Comment", "//\xe7\xa0\x94\xe7\xa9\xb6\n" },
		{ "Research.Name", "EModCharacterBehaviorState::Research" },
		{ "Research.ToolTip", "\xe7\xa0\x94\xe7\xa9\xb6" },
		{ "ReturnMedicalPoint.Comment", "//\xe8\xbf\x94\xe5\x9b\x9e\xe5\x8c\xbb\xe7\x96\x97\xe7\x82\xb9\n" },
		{ "ReturnMedicalPoint.Name", "EModCharacterBehaviorState::ReturnMedicalPoint" },
		{ "ReturnMedicalPoint.ToolTip", "\xe8\xbf\x94\xe5\x9b\x9e\xe5\x8c\xbb\xe7\x96\x97\xe7\x82\xb9" },
		{ "SearchBody.Comment", "//\xe6\x90\x9c\xe5\x88\xae\xe5\xb0\xb8\xe4\xbd\x93\n" },
		{ "SearchBody.Name", "EModCharacterBehaviorState::SearchBody" },
		{ "SearchBody.ToolTip", "\xe6\x90\x9c\xe5\x88\xae\xe5\xb0\xb8\xe4\xbd\x93" },
		{ "SearchBox.Comment", "//\xe6\x90\x9c\xe5\x88\xae\n" },
		{ "SearchBox.Name", "EModCharacterBehaviorState::SearchBox" },
		{ "SearchBox.ToolTip", "\xe6\x90\x9c\xe5\x88\xae" },
		{ "SeriousInjury.Comment", "//\xe9\x87\x8d\xe4\xbc\xa4\n" },
		{ "SeriousInjury.Name", "EModCharacterBehaviorState::SeriousInjury" },
		{ "SeriousInjury.ToolTip", "\xe9\x87\x8d\xe4\xbc\xa4" },
		{ "SimpleMelting.Comment", "//\xe5\x88\x9d\xe7\xba\xa7\xe7\x86\x94\xe7\x82\xbc\n" },
		{ "SimpleMelting.Name", "EModCharacterBehaviorState::SimpleMelting" },
		{ "SimpleMelting.ToolTip", "\xe5\x88\x9d\xe7\xba\xa7\xe7\x86\x94\xe7\x82\xbc" },
		{ "Sleep_Bed.Comment", "//\xe5\x9c\xa8\xe5\xba\x8a\xe4\xb8\x8a\xe7\x9d\xa1\n" },
		{ "Sleep_Bed.Name", "EModCharacterBehaviorState::Sleep_Bed" },
		{ "Sleep_Bed.ToolTip", "\xe5\x9c\xa8\xe5\xba\x8a\xe4\xb8\x8a\xe7\x9d\xa1" },
		{ "Sleep_Ground.Comment", "//\xe5\x9c\xa8\xe5\x9c\xb0\xe4\xb8\x8a\xe7\x9d\xa1\xe8\xa7\x89\n" },
		{ "Sleep_Ground.Name", "EModCharacterBehaviorState::Sleep_Ground" },
		{ "Sleep_Ground.ToolTip", "\xe5\x9c\xa8\xe5\x9c\xb0\xe4\xb8\x8a\xe7\x9d\xa1\xe8\xa7\x89" },
		{ "Sleep_Mat.Comment", "//\xe5\x9c\xa8\xe5\x9c\xb0\xe9\x93\xba\xe7\x9d\xa1\n" },
		{ "Sleep_Mat.Name", "EModCharacterBehaviorState::Sleep_Mat" },
		{ "Sleep_Mat.ToolTip", "\xe5\x9c\xa8\xe5\x9c\xb0\xe9\x93\xba\xe7\x9d\xa1" },
		{ "SocializeChat.Comment", "//\xe7\xa4\xbe\xe4\xba\xa4\xe8\x81\x8a\xe5\xa4\xa9\n" },
		{ "SocializeChat.Name", "EModCharacterBehaviorState::SocializeChat" },
		{ "SocializeChat.ToolTip", "\xe7\xa4\xbe\xe4\xba\xa4\xe8\x81\x8a\xe5\xa4\xa9" },
		{ "SpawnBaby.Comment", "//\xe5\x8a\xa8\xe7\x89\xa9\xe7\x94\x9f\xe4\xba\xa7\xe4\xb8\xad\n" },
		{ "SpawnBaby.Name", "EModCharacterBehaviorState::SpawnBaby" },
		{ "SpawnBaby.ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9\xe7\x94\x9f\xe4\xba\xa7\xe4\xb8\xad" },
		{ "Standby.Comment", "//\xe5\xbe\x85\xe6\x9c\xba\xe6\x81\xa2\xe5\xa4\x8d\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "Standby.Name", "EModCharacterBehaviorState::Standby" },
		{ "Standby.ToolTip", "\xe5\xbe\x85\xe6\x9c\xba\xe6\x81\xa2\xe5\xa4\x8d\xe7\x8a\xb6\xe6\x80\x81" },
		{ "Stop.Comment", "//\xe5\x81\x9c\xe6\xad\xa2\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "Stop.Name", "EModCharacterBehaviorState::Stop" },
		{ "Stop.ToolTip", "\xe5\x81\x9c\xe6\xad\xa2\xe7\x8a\xb6\xe6\x80\x81" },
		{ "Taming.Comment", "//\xe9\xa9\xaf\xe6\x9c\x8d\xe4\xb8\xad\n" },
		{ "Taming.Name", "EModCharacterBehaviorState::Taming" },
		{ "Taming.ToolTip", "\xe9\xa9\xaf\xe6\x9c\x8d\xe4\xb8\xad" },
		{ "TransItem.Comment", "//\xe6\x90\xac\xe8\xbf\x90\xe7\x89\xa9\xe5\x93\x81\n" },
		{ "TransItem.Name", "EModCharacterBehaviorState::TransItem" },
		{ "TransItem.ToolTip", "\xe6\x90\xac\xe8\xbf\x90\xe7\x89\xa9\xe5\x93\x81" },
		{ "Transport.Comment", "//\xe5\xad\x98\xe5\x82\xa8\xe7\x89\xa9\xe8\xb5\x84\n" },
		{ "Transport.Name", "EModCharacterBehaviorState::Transport" },
		{ "Transport.ToolTip", "\xe5\xad\x98\xe5\x82\xa8\xe7\x89\xa9\xe8\xb5\x84" },
		{ "VictoryDisplay.Comment", "//\xe6\x88\x98\xe6\x96\x97\xe8\x83\x9c\xe5\x88\xa9\xe5\xb1\x95\xe7\xa4\xba\n" },
		{ "VictoryDisplay.Name", "EModCharacterBehaviorState::VictoryDisplay" },
		{ "VictoryDisplay.ToolTip", "\xe6\x88\x98\xe6\x96\x97\xe8\x83\x9c\xe5\x88\xa9\xe5\xb1\x95\xe7\xa4\xba" },
		{ "WaitBeTreat.Comment", "//\xe7\xad\x89\xe5\xbe\x85\xe6\xb2\xbb\xe7\x96\x97\n" },
		{ "WaitBeTreat.Name", "EModCharacterBehaviorState::WaitBeTreat" },
		{ "WaitBeTreat.ToolTip", "\xe7\xad\x89\xe5\xbe\x85\xe6\xb2\xbb\xe7\x96\x97" },
		{ "WaitingBreeding.Comment", "//\xe7\xad\x89\xe5\xbe\x85\xe7\xb9\x81\xe8\x82\xb2\n" },
		{ "WaitingBreeding.Name", "EModCharacterBehaviorState::WaitingBreeding" },
		{ "WaitingBreeding.ToolTip", "\xe7\xad\x89\xe5\xbe\x85\xe7\xb9\x81\xe8\x82\xb2" },
		{ "WaitingButcher.Comment", "//\xe7\xad\x89\xe5\xbe\x85\xe8\xa2\xab\xe5\xb1\xa0\xe5\xae\xb0\n" },
		{ "WaitingButcher.Name", "EModCharacterBehaviorState::WaitingButcher" },
		{ "WaitingButcher.ToolTip", "\xe7\xad\x89\xe5\xbe\x85\xe8\xa2\xab\xe5\xb1\xa0\xe5\xae\xb0" },
		{ "Work_Cook.Comment", "//\xe4\xb8\x8b\xe5\x8e\xa8\n" },
		{ "Work_Cook.Name", "EModCharacterBehaviorState::Work_Cook" },
		{ "Work_Cook.ToolTip", "\xe4\xb8\x8b\xe5\x8e\xa8" },
		{ "Work_CookSimple.Comment", "//\xe5\x88\xb6\xe4\xbd\x9c\xe7\xae\x80\xe9\xa4\x90\n" },
		{ "Work_CookSimple.Name", "EModCharacterBehaviorState::Work_CookSimple" },
		{ "Work_CookSimple.ToolTip", "\xe5\x88\xb6\xe4\xbd\x9c\xe7\xae\x80\xe9\xa4\x90" },
		{ "Work_Doctor.Comment", "//\xe6\xb2\xbb\xe7\x96\x97\n" },
		{ "Work_Doctor.Name", "EModCharacterBehaviorState::Work_Doctor" },
		{ "Work_Doctor.ToolTip", "\xe6\xb2\xbb\xe7\x96\x97" },
		{ "Work_Forge.Comment", "//\xe6\x89\x93\xe9\x93\x81\n" },
		{ "Work_Forge.Name", "EModCharacterBehaviorState::Work_Forge" },
		{ "Work_Forge.ToolTip", "\xe6\x89\x93\xe9\x93\x81" },
		{ "Work_Make.Comment", "//\xe6\x89\x8b\xe5\xb7\xa5\n" },
		{ "Work_Make.Name", "EModCharacterBehaviorState::Work_Make" },
		{ "Work_Make.ToolTip", "\xe6\x89\x8b\xe5\xb7\xa5" },
		{ "Work_SewingTable.Comment", "//\xe7\xbc\x9d\xe7\xba\xab\n" },
		{ "Work_SewingTable.Name", "EModCharacterBehaviorState::Work_SewingTable" },
		{ "Work_SewingTable.ToolTip", "\xe7\xbc\x9d\xe7\xba\xab" },
		{ "Work_Weaving.Comment", "//\xe7\xbb\x87\xe5\xb8\x83\n" },
		{ "Work_Weaving.Name", "EModCharacterBehaviorState::Work_Weaving" },
		{ "Work_Weaving.ToolTip", "\xe7\xbb\x87\xe5\xb8\x83" },
		{ "Write_Copy.Comment", "//\xe6\x8a\x84\xe5\xbd\x95\n" },
		{ "Write_Copy.Name", "EModCharacterBehaviorState::Write_Copy" },
		{ "Write_Copy.ToolTip", "\xe6\x8a\x84\xe5\xbd\x95" },
		{ "Write_Self.Comment", "//\xe5\x86\x99\xe4\xbd\x9c\n" },
		{ "Write_Self.Name", "EModCharacterBehaviorState::Write_Self" },
		{ "Write_Self.ToolTip", "\xe5\x86\x99\xe4\xbd\x9c" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModCharacterBehaviorState::None", (int64)EModCharacterBehaviorState::None },
		{ "EModCharacterBehaviorState::InBattle", (int64)EModCharacterBehaviorState::InBattle },
		{ "EModCharacterBehaviorState::InAction", (int64)EModCharacterBehaviorState::InAction },
		{ "EModCharacterBehaviorState::InStroll", (int64)EModCharacterBehaviorState::InStroll },
		{ "EModCharacterBehaviorState::InRide", (int64)EModCharacterBehaviorState::InRide },
		{ "EModCharacterBehaviorState::Death", (int64)EModCharacterBehaviorState::Death },
		{ "EModCharacterBehaviorState::Assault", (int64)EModCharacterBehaviorState::Assault },
		{ "EModCharacterBehaviorState::InControlled", (int64)EModCharacterBehaviorState::InControlled },
		{ "EModCharacterBehaviorState::Construct", (int64)EModCharacterBehaviorState::Construct },
		{ "EModCharacterBehaviorState::Sleep_Ground", (int64)EModCharacterBehaviorState::Sleep_Ground },
		{ "EModCharacterBehaviorState::Sleep_Bed", (int64)EModCharacterBehaviorState::Sleep_Bed },
		{ "EModCharacterBehaviorState::Sleep_Mat", (int64)EModCharacterBehaviorState::Sleep_Mat },
		{ "EModCharacterBehaviorState::Eat_Sit", (int64)EModCharacterBehaviorState::Eat_Sit },
		{ "EModCharacterBehaviorState::Eat_Stand", (int64)EModCharacterBehaviorState::Eat_Stand },
		{ "EModCharacterBehaviorState::GetItem", (int64)EModCharacterBehaviorState::GetItem },
		{ "EModCharacterBehaviorState::TransItem", (int64)EModCharacterBehaviorState::TransItem },
		{ "EModCharacterBehaviorState::Logging", (int64)EModCharacterBehaviorState::Logging },
		{ "EModCharacterBehaviorState::CutOff", (int64)EModCharacterBehaviorState::CutOff },
		{ "EModCharacterBehaviorState::Quarrying", (int64)EModCharacterBehaviorState::Quarrying },
		{ "EModCharacterBehaviorState::Excavate", (int64)EModCharacterBehaviorState::Excavate },
		{ "EModCharacterBehaviorState::SearchBox", (int64)EModCharacterBehaviorState::SearchBox },
		{ "EModCharacterBehaviorState::Transport", (int64)EModCharacterBehaviorState::Transport },
		{ "EModCharacterBehaviorState::Happy_MasterChair", (int64)EModCharacterBehaviorState::Happy_MasterChair },
		{ "EModCharacterBehaviorState::CollectPlant", (int64)EModCharacterBehaviorState::CollectPlant },
		{ "EModCharacterBehaviorState::Havest_Wheat", (int64)EModCharacterBehaviorState::Havest_Wheat },
		{ "EModCharacterBehaviorState::PlantCrops", (int64)EModCharacterBehaviorState::PlantCrops },
		{ "EModCharacterBehaviorState::Work_Weaving", (int64)EModCharacterBehaviorState::Work_Weaving },
		{ "EModCharacterBehaviorState::Work_Forge", (int64)EModCharacterBehaviorState::Work_Forge },
		{ "EModCharacterBehaviorState::Work_SewingTable", (int64)EModCharacterBehaviorState::Work_SewingTable },
		{ "EModCharacterBehaviorState::Work_CookSimple", (int64)EModCharacterBehaviorState::Work_CookSimple },
		{ "EModCharacterBehaviorState::Work_Cook", (int64)EModCharacterBehaviorState::Work_Cook },
		{ "EModCharacterBehaviorState::Research", (int64)EModCharacterBehaviorState::Research },
		{ "EModCharacterBehaviorState::Work_Make", (int64)EModCharacterBehaviorState::Work_Make },
		{ "EModCharacterBehaviorState::ChopFirewood", (int64)EModCharacterBehaviorState::ChopFirewood },
		{ "EModCharacterBehaviorState::MakeWine", (int64)EModCharacterBehaviorState::MakeWine },
		{ "EModCharacterBehaviorState::GrindTheMill", (int64)EModCharacterBehaviorState::GrindTheMill },
		{ "EModCharacterBehaviorState::MakeMedicine", (int64)EModCharacterBehaviorState::MakeMedicine },
		{ "EModCharacterBehaviorState::Animal_Sleep", (int64)EModCharacterBehaviorState::Animal_Sleep },
		{ "EModCharacterBehaviorState::AnimalEat_Vege", (int64)EModCharacterBehaviorState::AnimalEat_Vege },
		{ "EModCharacterBehaviorState::SimpleMelting", (int64)EModCharacterBehaviorState::SimpleMelting },
		{ "EModCharacterBehaviorState::DelicateMelting", (int64)EModCharacterBehaviorState::DelicateMelting },
		{ "EModCharacterBehaviorState::Practice_WoodenDummy", (int64)EModCharacterBehaviorState::Practice_WoodenDummy },
		{ "EModCharacterBehaviorState::Meditation", (int64)EModCharacterBehaviorState::Meditation },
		{ "EModCharacterBehaviorState::MedicatedBath", (int64)EModCharacterBehaviorState::MedicatedBath },
		{ "EModCharacterBehaviorState::DepressionIdle", (int64)EModCharacterBehaviorState::DepressionIdle },
		{ "EModCharacterBehaviorState::EquipEquipment", (int64)EModCharacterBehaviorState::EquipEquipment },
		{ "EModCharacterBehaviorState::Reading", (int64)EModCharacterBehaviorState::Reading },
		{ "EModCharacterBehaviorState::Read_Sit", (int64)EModCharacterBehaviorState::Read_Sit },
		{ "EModCharacterBehaviorState::Write_Copy", (int64)EModCharacterBehaviorState::Write_Copy },
		{ "EModCharacterBehaviorState::BuildStruct", (int64)EModCharacterBehaviorState::BuildStruct },
		{ "EModCharacterBehaviorState::Observe", (int64)EModCharacterBehaviorState::Observe },
		{ "EModCharacterBehaviorState::Explore", (int64)EModCharacterBehaviorState::Explore },
		{ "EModCharacterBehaviorState::Work_Doctor", (int64)EModCharacterBehaviorState::Work_Doctor },
		{ "EModCharacterBehaviorState::WaitBeTreat", (int64)EModCharacterBehaviorState::WaitBeTreat },
		{ "EModCharacterBehaviorState::SearchBody", (int64)EModCharacterBehaviorState::SearchBody },
		{ "EModCharacterBehaviorState::ButcherBody", (int64)EModCharacterBehaviorState::ButcherBody },
		{ "EModCharacterBehaviorState::Recuperate_Ground", (int64)EModCharacterBehaviorState::Recuperate_Ground },
		{ "EModCharacterBehaviorState::Recuperate_Bed", (int64)EModCharacterBehaviorState::Recuperate_Bed },
		{ "EModCharacterBehaviorState::Recuperate_Mat", (int64)EModCharacterBehaviorState::Recuperate_Mat },
		{ "EModCharacterBehaviorState::Hunting", (int64)EModCharacterBehaviorState::Hunting },
		{ "EModCharacterBehaviorState::DestoryBuilding", (int64)EModCharacterBehaviorState::DestoryBuilding },
		{ "EModCharacterBehaviorState::ManageBuildings", (int64)EModCharacterBehaviorState::ManageBuildings },
		{ "EModCharacterBehaviorState::SocializeChat", (int64)EModCharacterBehaviorState::SocializeChat },
		{ "EModCharacterBehaviorState::JoinCeremony", (int64)EModCharacterBehaviorState::JoinCeremony },
		{ "EModCharacterBehaviorState::Write_Self", (int64)EModCharacterBehaviorState::Write_Self },
		{ "EModCharacterBehaviorState::Standby", (int64)EModCharacterBehaviorState::Standby },
		{ "EModCharacterBehaviorState::InBuildingRecovery", (int64)EModCharacterBehaviorState::InBuildingRecovery },
		{ "EModCharacterBehaviorState::Stop", (int64)EModCharacterBehaviorState::Stop },
		{ "EModCharacterBehaviorState::RepaiRobot", (int64)EModCharacterBehaviorState::RepaiRobot },
		{ "EModCharacterBehaviorState::ActiveRobot", (int64)EModCharacterBehaviorState::ActiveRobot },
		{ "EModCharacterBehaviorState::RefitPuppet", (int64)EModCharacterBehaviorState::RefitPuppet },
		{ "EModCharacterBehaviorState::PhysicianCarry", (int64)EModCharacterBehaviorState::PhysicianCarry },
		{ "EModCharacterBehaviorState::ReturnMedicalPoint", (int64)EModCharacterBehaviorState::ReturnMedicalPoint },
		{ "EModCharacterBehaviorState::SeriousInjury", (int64)EModCharacterBehaviorState::SeriousInjury },
		{ "EModCharacterBehaviorState::RecoverInspiration", (int64)EModCharacterBehaviorState::RecoverInspiration },
		{ "EModCharacterBehaviorState::OpenFabricateWork", (int64)EModCharacterBehaviorState::OpenFabricateWork },
		{ "EModCharacterBehaviorState::CollectTheProducts", (int64)EModCharacterBehaviorState::CollectTheProducts },
		{ "EModCharacterBehaviorState::Taming", (int64)EModCharacterBehaviorState::Taming },
		{ "EModCharacterBehaviorState::BeTamed", (int64)EModCharacterBehaviorState::BeTamed },
		{ "EModCharacterBehaviorState::PreBattleDisplay", (int64)EModCharacterBehaviorState::PreBattleDisplay },
		{ "EModCharacterBehaviorState::OnPatrol", (int64)EModCharacterBehaviorState::OnPatrol },
		{ "EModCharacterBehaviorState::Following", (int64)EModCharacterBehaviorState::Following },
		{ "EModCharacterBehaviorState::VictoryDisplay", (int64)EModCharacterBehaviorState::VictoryDisplay },
		{ "EModCharacterBehaviorState::DefeatedDisplay", (int64)EModCharacterBehaviorState::DefeatedDisplay },
		{ "EModCharacterBehaviorState::WaitingButcher", (int64)EModCharacterBehaviorState::WaitingButcher },
		{ "EModCharacterBehaviorState::Breakthrough", (int64)EModCharacterBehaviorState::Breakthrough },
		{ "EModCharacterBehaviorState::Breeding", (int64)EModCharacterBehaviorState::Breeding },
		{ "EModCharacterBehaviorState::WaitingBreeding", (int64)EModCharacterBehaviorState::WaitingBreeding },
		{ "EModCharacterBehaviorState::SpawnBaby", (int64)EModCharacterBehaviorState::SpawnBaby },
		{ "EModCharacterBehaviorState::ExchangeMartialArts", (int64)EModCharacterBehaviorState::ExchangeMartialArts },
		{ "EModCharacterBehaviorState::KnockDown", (int64)EModCharacterBehaviorState::KnockDown },
		{ "EModCharacterBehaviorState::ForceRetreat", (int64)EModCharacterBehaviorState::ForceRetreat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModCharacterBehaviorState",
	"EModCharacterBehaviorState",
	Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState()
{
	if (!Z_Registration_Info_UEnum_EModCharacterBehaviorState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModCharacterBehaviorState.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModCharacterBehaviorState.InnerSingleton;
}
// ********** End Enum EModCharacterBehaviorState **************************************************

// ********** Begin ScriptStruct FModGameplayEffectContainer ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModGameplayEffectContainer;
class UScriptStruct* FModGameplayEffectContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModGameplayEffectContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModGameplayEffectContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModGameplayEffectContainer, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModGameplayEffectContainer"));
	}
	return Z_Registration_Info_UScriptStruct_FModGameplayEffectContainer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the way that targeting happens */" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the way that targeting happens" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectClasses_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetGameplayEffectClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModGameplayEffectContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGameplayEffectContainer, TargetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UEastRimWorldTargetType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetType_MetaData), NewProp_TargetType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGameplayEffectContainer, TargetGameplayEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGameplayEffectClasses_MetaData), NewProp_TargetGameplayEffectClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::NewProp_TargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModGameplayEffectContainer",
	Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::PropPointers),
	sizeof(FModGameplayEffectContainer),
	alignof(FModGameplayEffectContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModGameplayEffectContainer()
{
	if (!Z_Registration_Info_UScriptStruct_FModGameplayEffectContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModGameplayEffectContainer.InnerSingleton, Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModGameplayEffectContainer.InnerSingleton;
}
// ********** End ScriptStruct FModGameplayEffectContainer *****************************************

// ********** Begin ScriptStruct FModFormatText ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModFormatText;
class UScriptStruct* FModFormatText::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModFormatText.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModFormatText.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModFormatText, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModFormatText"));
	}
	return Z_Registration_Info_UScriptStruct_FModFormatText.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModFormatText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\xaf\xe6\x9b\xbf\xe6\x8d\xa2\xe6\x96\x87\xe6\x9c\xac\xe7\xbb\x93\xe6\x9e\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe6\x9b\xbf\xe6\x8d\xa2\xe6\x96\x87\xe6\x9c\xac\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextMain_MetaData[] = {
		{ "Category", "ModFormatText" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\xbb\xe6\x96\x87\xe6\x9c\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe6\x96\x87\xe6\x9c\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextParams_MetaData[] = {
		{ "Category", "ModFormatText" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9b\xbf\xe6\x8d\xa2\xe5\x8f\x98\xe9\x87\x8f\xe6\x96\x87\xe6\x9c\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xbf\xe6\x8d\xa2\xe5\x8f\x98\xe9\x87\x8f\xe6\x96\x87\xe6\x9c\xac" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TextMain;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TextParams_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextParams_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TextParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModFormatText>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModFormatText_Statics::NewProp_TextMain = { "TextMain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormatText, TextMain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextMain_MetaData), NewProp_TextMain_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModFormatText_Statics::NewProp_TextParams_ValueProp = { "TextParams", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModFormatText_Statics::NewProp_TextParams_Key_KeyProp = { "TextParams_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModFormatText_Statics::NewProp_TextParams = { "TextParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormatText, TextParams), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextParams_MetaData), NewProp_TextParams_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModFormatText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormatText_Statics::NewProp_TextMain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormatText_Statics::NewProp_TextParams_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormatText_Statics::NewProp_TextParams_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormatText_Statics::NewProp_TextParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModFormatText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModFormatText_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModFormatText",
	Z_Construct_UScriptStruct_FModFormatText_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModFormatText_Statics::PropPointers),
	sizeof(FModFormatText),
	alignof(FModFormatText),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModFormatText_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModFormatText_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModFormatText()
{
	if (!Z_Registration_Info_UScriptStruct_FModFormatText.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModFormatText.InnerSingleton, Z_Construct_UScriptStruct_FModFormatText_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModFormatText.InnerSingleton;
}
// ********** End ScriptStruct FModFormatText ******************************************************

// ********** Begin Enum EModGroundInventoryType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModGroundInventoryType;
static UEnum* EModGroundInventoryType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModGroundInventoryType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModGroundInventoryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModGroundInventoryType"));
	}
	return Z_Registration_Info_UEnum_EModGroundInventoryType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModGroundInventoryType>()
{
	return EModGroundInventoryType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Book.Comment", "//\xe4\xb9\xa6\xe7\xb1\x8d\n" },
		{ "Book.Name", "EModGroundInventoryType::Book" },
		{ "Book.ToolTip", "\xe4\xb9\xa6\xe7\xb1\x8d" },
		{ "Collect.Comment", "//\xe9\x87\x87\xe9\x9b\x86\xe7\x89\xa9\n" },
		{ "Collect.Name", "EModGroundInventoryType::Collect" },
		{ "Collect.ToolTip", "\xe9\x87\x87\xe9\x9b\x86\xe7\x89\xa9" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "Equipment.Comment", "//\xe8\xa3\x85\xe5\xa4\x87\n" },
		{ "Equipment.Name", "EModGroundInventoryType::Equipment" },
		{ "Equipment.ToolTip", "\xe8\xa3\x85\xe5\xa4\x87" },
		{ "FunctionalBuilding.Comment", "//\xe5\x8a\x9f\xe8\x83\xbd\xe5\xbb\xba\xe7\xad\x91\n" },
		{ "FunctionalBuilding.Name", "EModGroundInventoryType::FunctionalBuilding" },
		{ "FunctionalBuilding.ToolTip", "\xe5\x8a\x9f\xe8\x83\xbd\xe5\xbb\xba\xe7\xad\x91" },
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
		{ "None.Name", "EModGroundInventoryType::None" },
		{ "NormalItem.Comment", "//\xe5\xb9\xb3\xe5\xb8\xb8\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\n" },
		{ "NormalItem.Name", "EModGroundInventoryType::NormalItem" },
		{ "NormalItem.ToolTip", "\xe5\xb9\xb3\xe5\xb8\xb8\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81" },
		{ "PuppetEquipment.Comment", "//\xe5\x82\x80\xe5\x84\xa1\xe8\xa3\x85\xe5\xa4\x87\n" },
		{ "PuppetEquipment.Name", "EModGroundInventoryType::PuppetEquipment" },
		{ "PuppetEquipment.ToolTip", "\xe5\x82\x80\xe5\x84\xa1\xe8\xa3\x85\xe5\xa4\x87" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModGroundInventoryType::None", (int64)EModGroundInventoryType::None },
		{ "EModGroundInventoryType::NormalItem", (int64)EModGroundInventoryType::NormalItem },
		{ "EModGroundInventoryType::Collect", (int64)EModGroundInventoryType::Collect },
		{ "EModGroundInventoryType::FunctionalBuilding", (int64)EModGroundInventoryType::FunctionalBuilding },
		{ "EModGroundInventoryType::Equipment", (int64)EModGroundInventoryType::Equipment },
		{ "EModGroundInventoryType::PuppetEquipment", (int64)EModGroundInventoryType::PuppetEquipment },
		{ "EModGroundInventoryType::Book", (int64)EModGroundInventoryType::Book },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModGroundInventoryType",
	"EModGroundInventoryType",
	Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType()
{
	if (!Z_Registration_Info_UEnum_EModGroundInventoryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModGroundInventoryType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModGroundInventoryType.InnerSingleton;
}
// ********** End Enum EModGroundInventoryType *****************************************************

// ********** Begin ScriptStruct FModDropItemInfo **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModDropItemInfo;
class UScriptStruct* FModDropItemInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModDropItemInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModDropItemInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModDropItemInfo, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModDropItemInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FModDropItemInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModDropItemInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\x89\xe8\x90\xbd\xe7\x89\xa9\xe5\x93\x81\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\x89\xe8\x90\xbd\xe7\x89\xa9\xe5\x93\x81\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "ModDropItemInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9d\x83\xe9\x87\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\x83\xe9\x87\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[] = {
		{ "Category", "ModDropItemInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "ModDropItemInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModDropItemInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModDropItemInfo_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDropItemInfo, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModDropItemInfo_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDropItemInfo, Num), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Num_MetaData), NewProp_Num_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModDropItemInfo_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModDropItemInfo_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDropItemInfo, ItemType), Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 1596875282
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModDropItemInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropItemInfo_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropItemInfo_Statics::NewProp_Num,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropItemInfo_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropItemInfo_Statics::NewProp_ItemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDropItemInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModDropItemInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModDropItemInfo",
	Z_Construct_UScriptStruct_FModDropItemInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDropItemInfo_Statics::PropPointers),
	sizeof(FModDropItemInfo),
	alignof(FModDropItemInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDropItemInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModDropItemInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModDropItemInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FModDropItemInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModDropItemInfo.InnerSingleton, Z_Construct_UScriptStruct_FModDropItemInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModDropItemInfo.InnerSingleton;
}
// ********** End ScriptStruct FModDropItemInfo ****************************************************

// ********** Begin ScriptStruct FModDropSetConfig *************************************************
static_assert(std::is_polymorphic<FModDropSetConfig>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModDropSetConfig cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModDropSetConfig;
class UScriptStruct* FModDropSetConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModDropSetConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModDropSetConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModDropSetConfig, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModDropSetConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FModDropSetConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModDropSetConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\x89\xe8\x90\xbd\xe9\x85\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\x89\xe8\x90\xbd\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAwardNum_MetaData[] = {
		{ "Category", "ModDropSetConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x8e\x89\xe8\x90\xbd\xe6\x9c\x80\xe5\xb0\x8f\xe6\x95\xb0\xe9\x87\x8f \xe6\x97\xa2\xe9\x80\x89\xe5\x8f\x96""DropSet\xe6\x9c\x80\xe5\xb0\x91\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x8e\x89\xe8\x90\xbd\xe6\x9c\x80\xe5\xb0\x8f\xe6\x95\xb0\xe9\x87\x8f \xe6\x97\xa2\xe9\x80\x89\xe5\x8f\x96""DropSet\xe6\x9c\x80\xe5\xb0\x91\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAwardNum_MetaData[] = {
		{ "Category", "ModDropSetConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x8e\x89\xe8\x90\xbd\xe6\x9c\x80\xe5\xa4\xa7\xe6\x95\xb0\xe9\x87\x8f \xe6\x97\xa2\xe9\x80\x89\xe5\x8f\x96""DropSet\xe6\x9c\x80\xe5\xa4\x9a\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x8e\x89\xe8\x90\xbd\xe6\x9c\x80\xe5\xa4\xa7\xe6\x95\xb0\xe9\x87\x8f \xe6\x97\xa2\xe9\x80\x89\xe5\x8f\x96""DropSet\xe6\x9c\x80\xe5\xa4\x9a\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropSet_MetaData[] = {
		{ "Category", "ModDropSetConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\x89\xe8\x90\xbd\xe5\x90\x88\xe9\x9b\x86 key \xe9\x81\x93\xe5\x85\xb7ID Value \xe6\x9d\x83\xe9\x87\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\x89\xe8\x90\xbd\xe5\x90\x88\xe9\x9b\x86 key \xe9\x81\x93\xe5\x85\xb7ID Value \xe6\x9d\x83\xe9\x87\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MustDrop_MetaData[] = {
		{ "Category", "ModDropSetConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbf\x85\xe5\xae\x9a\xe9\xa2\x9d\xe5\xa4\x96\xe6\x8e\x89\xe8\x90\xbd key \xe9\x81\x93\xe5\x85\xb7ID value \xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbf\x85\xe5\xae\x9a\xe9\xa2\x9d\xe5\xa4\x96\xe6\x8e\x89\xe8\x90\xbd key \xe9\x81\x93\xe5\x85\xb7ID value \xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDuplicate_MetaData[] = {
		{ "Category", "ModDropSetConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe9\x9a\x8f\xe6\x9c\xba\xe5\xa4\x9a\xe6\xac\xa1\xe6\x97\xb6\xef\xbc\x8c\xe9\x9a\x8f\xe6\x9c\xba\xe5\x88\xb0\xe5\x90\x8e\xe4\xb8\x8d\xe5\x9c\xa8\xe5\x8f\x82\xe4\xb8\x8e\xe9\x9a\x8f\xe6\x9c\xba\xef\xbc\x88\xe5\x8e\xbb\xe9\x87\x8d\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe9\x9a\x8f\xe6\x9c\xba\xe5\xa4\x9a\xe6\xac\xa1\xe6\x97\xb6\xef\xbc\x8c\xe9\x9a\x8f\xe6\x9c\xba\xe5\x88\xb0\xe5\x90\x8e\xe4\xb8\x8d\xe5\x9c\xa8\xe5\x8f\x82\xe4\xb8\x8e\xe9\x9a\x8f\xe6\x9c\xba\xef\xbc\x88\xe5\x8e\xbb\xe9\x87\x8d\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AwardImage_MetaData[] = {
		{ "Category", "ModDropSetConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa5\x96\xe5\x8a\xb1\xe5\x9b\xbe\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa5\x96\xe5\x8a\xb1\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Describe_MetaData[] = {
		{ "Category", "ModDropSetConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa5\x96\xe5\x8a\xb1\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa5\x96\xe5\x8a\xb1\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinAwardNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAwardNum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropSet_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DropSet_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DropSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MustDrop_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MustDrop_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MustDrop;
	static void NewProp_bRemoveDuplicate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDuplicate;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AwardImage;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Describe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModDropSetConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_MinAwardNum = { "MinAwardNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDropSetConfig, MinAwardNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAwardNum_MetaData), NewProp_MinAwardNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_MaxAwardNum = { "MaxAwardNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDropSetConfig, MaxAwardNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAwardNum_MetaData), NewProp_MaxAwardNum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_DropSet_ValueProp = { "DropSet", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModDropItemInfo, METADATA_PARAMS(0, nullptr) }; // 3872789321
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_DropSet_Key_KeyProp = { "DropSet_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_DropSet = { "DropSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDropSetConfig, DropSet), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropSet_MetaData), NewProp_DropSet_MetaData) }; // 3872789321
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_MustDrop_ValueProp = { "MustDrop", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModDropItemInfo, METADATA_PARAMS(0, nullptr) }; // 3872789321
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_MustDrop_Key_KeyProp = { "MustDrop_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_MustDrop = { "MustDrop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDropSetConfig, MustDrop), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MustDrop_MetaData), NewProp_MustDrop_MetaData) }; // 3872789321
void Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_bRemoveDuplicate_SetBit(void* Obj)
{
	((FModDropSetConfig*)Obj)->bRemoveDuplicate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_bRemoveDuplicate = { "bRemoveDuplicate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModDropSetConfig), &Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_bRemoveDuplicate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveDuplicate_MetaData), NewProp_bRemoveDuplicate_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_AwardImage = { "AwardImage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDropSetConfig, AwardImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AwardImage_MetaData), NewProp_AwardImage_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_Describe = { "Describe", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDropSetConfig, Describe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Describe_MetaData), NewProp_Describe_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModDropSetConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_MinAwardNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_MaxAwardNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_DropSet_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_DropSet_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_DropSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_MustDrop_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_MustDrop_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_MustDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_bRemoveDuplicate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_AwardImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewProp_Describe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDropSetConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModDropSetConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModDropSetConfig",
	Z_Construct_UScriptStruct_FModDropSetConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDropSetConfig_Statics::PropPointers),
	sizeof(FModDropSetConfig),
	alignof(FModDropSetConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDropSetConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModDropSetConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModDropSetConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FModDropSetConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModDropSetConfig.InnerSingleton, Z_Construct_UScriptStruct_FModDropSetConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModDropSetConfig.InnerSingleton;
}
// ********** End ScriptStruct FModDropSetConfig ***************************************************

// ********** Begin Enum EModCharacterType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModCharacterType;
static UEnum* EModCharacterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModCharacterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModCharacterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModCharacterType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModCharacterType"));
	}
	return Z_Registration_Info_UEnum_EModCharacterType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModCharacterType>()
{
	return EModCharacterType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModCharacterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Animal.Comment", "//\xe5\x8a\xa8\xe7\x89\xa9\n" },
		{ "Animal.Name", "EModCharacterType::Animal" },
		{ "Animal.ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "Human.Comment", "//\xe4\xba\xba\xe7\xb1\xbb\n" },
		{ "Human.Name", "EModCharacterType::Human" },
		{ "Human.ToolTip", "\xe4\xba\xba\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
		{ "None.Name", "EModCharacterType::None" },
		{ "Robot.Comment", "//\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xba\n" },
		{ "Robot.Name", "EModCharacterType::Robot" },
		{ "Robot.ToolTip", "\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xba" },
		{ "Summons.Comment", "//\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9\n" },
		{ "Summons.Name", "EModCharacterType::Summons" },
		{ "Summons.ToolTip", "\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModCharacterType::None", (int64)EModCharacterType::None },
		{ "EModCharacterType::Human", (int64)EModCharacterType::Human },
		{ "EModCharacterType::Summons", (int64)EModCharacterType::Summons },
		{ "EModCharacterType::Animal", (int64)EModCharacterType::Animal },
		{ "EModCharacterType::Robot", (int64)EModCharacterType::Robot },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModCharacterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModCharacterType",
	"EModCharacterType",
	Z_Construct_UEnum_CreateModPlugin_EModCharacterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModCharacterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModCharacterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModCharacterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModCharacterType()
{
	if (!Z_Registration_Info_UEnum_EModCharacterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModCharacterType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModCharacterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModCharacterType.InnerSingleton;
}
// ********** End Enum EModCharacterType ***********************************************************

// ********** Begin Enum EModTipsType **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModTipsType;
static UEnum* EModTipsType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModTipsType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModTipsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModTipsType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModTipsType"));
	}
	return Z_Registration_Info_UEnum_EModTipsType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModTipsType>()
{
	return EModTipsType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModTipsType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Assault.Comment", "//\xe8\xa2\xad\xe5\x87\xbb\n" },
		{ "Assault.Name", "EModTipsType::Assault" },
		{ "Assault.ToolTip", "\xe8\xa2\xad\xe5\x87\xbb" },
		{ "BlueprintType", "true" },
		{ "BreakThrough.Comment", "//////////////////////////\xe4\xb8\x96\xe7\x95\x8c\xe5\x9c\xb0\xe5\x9b\xbe\xe6\x8f\x90\xe7\xa4\xba\xe7\xbb\x93\xe6\x9d\x9f//////////////////////////\n//\xe7\xaa\x81\xe7\xa0\xb4\xe5\xa2\x83\xe7\x95\x8c\n" },
		{ "BreakThrough.Name", "EModTipsType::BreakThrough" },
		{ "BreakThrough.ToolTip", "\xe4\xb8\x96\xe7\x95\x8c\xe5\x9c\xb0\xe5\x9b\xbe\xe6\x8f\x90\xe7\xa4\xba\xe7\xbb\x93\xe6\x9d\x9f\n\xe7\xaa\x81\xe7\xa0\xb4\xe5\xa2\x83\xe7\x95\x8c" },
		{ "BuildNeedMaterial.Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe7\xbc\xba\xe5\xa4\xb1\xe6\x9d\x90\xe6\x96\x99\n" },
		{ "BuildNeedMaterial.Name", "EModTipsType::BuildNeedMaterial" },
		{ "BuildNeedMaterial.ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe7\xbc\xba\xe5\xa4\xb1\xe6\x9d\x90\xe6\x96\x99" },
		{ "CanRecruitNPC.Comment", "//\xe5\x8f\xaf\xe6\x8b\x9b\xe5\x8b\x9fNPC\n" },
		{ "CanRecruitNPC.Name", "EModTipsType::CanRecruitNPC" },
		{ "CanRecruitNPC.ToolTip", "\xe5\x8f\xaf\xe6\x8b\x9b\xe5\x8b\x9fNPC" },
		{ "CharacterDeath.Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe6\xad\xbb\xe4\xba\xa1\n" },
		{ "CharacterDeath.Name", "EModTipsType::CharacterDeath" },
		{ "CharacterDeath.ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe6\xad\xbb\xe4\xba\xa1" },
		{ "CharacterDying.Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe6\xbf\x92\xe6\xad\xbb\xef\xbc\x88\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc\xe5\xb0\x8f\xe4\xba\x8e""50%\xef\xbc\x89\n" },
		{ "CharacterDying.Name", "EModTipsType::CharacterDying" },
		{ "CharacterDying.ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe6\xbf\x92\xe6\xad\xbb\xef\xbc\x88\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc\xe5\xb0\x8f\xe4\xba\x8e""50%\xef\xbc\x89" },
		{ "CharacterGetHurt.Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe5\x8f\x97\xe4\xbc\xa4\xef\xbc\x88\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc""50-100%\xef\xbc\x89\n" },
		{ "CharacterGetHurt.Name", "EModTipsType::CharacterGetHurt" },
		{ "CharacterGetHurt.ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe5\x8f\x97\xe4\xbc\xa4\xef\xbc\x88\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc""50-100%\xef\xbc\x89" },
		{ "CharacterIdle.Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe7\xa9\xba\xe9\x97\xb2\xe3\x80\x81\xe6\x97\xa0\xe4\xba\x8b\xe5\x8f\xaf\xe5\x81\x9a\n" },
		{ "CharacterIdle.Name", "EModTipsType::CharacterIdle" },
		{ "CharacterIdle.ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe7\xa9\xba\xe9\x97\xb2\xe3\x80\x81\xe6\x97\xa0\xe4\xba\x8b\xe5\x8f\xaf\xe5\x81\x9a" },
		{ "CharacterNeedClothes.Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe9\x9c\x80\xe8\xa6\x81\xe6\x9c\x8d\xe9\xa5\xb0\n" },
		{ "CharacterNeedClothes.Name", "EModTipsType::CharacterNeedClothes" },
		{ "CharacterNeedClothes.ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe9\x9c\x80\xe8\xa6\x81\xe6\x9c\x8d\xe9\xa5\xb0" },
		{ "CharacterNeedWeapon.Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe9\x9c\x80\xe8\xa6\x81\xe6\xad\xa6\xe5\x99\xa8\n" },
		{ "CharacterNeedWeapon.Name", "EModTipsType::CharacterNeedWeapon" },
		{ "CharacterNeedWeapon.ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe9\x9c\x80\xe8\xa6\x81\xe6\xad\xa6\xe5\x99\xa8" },
		{ "ChivalrousArrived.Comment", "//\xe6\xb1\x9f\xe6\xb9\x96\xe4\xba\xba\xe5\xa3\xab\xe5\x88\xb0\xe8\xbe\xbe\xe9\xa9\xbf\xe7\xab\x99\n" },
		{ "ChivalrousArrived.Name", "EModTipsType::ChivalrousArrived" },
		{ "ChivalrousArrived.ToolTip", "\xe6\xb1\x9f\xe6\xb9\x96\xe4\xba\xba\xe5\xa3\xab\xe5\x88\xb0\xe8\xbe\xbe\xe9\xa9\xbf\xe7\xab\x99" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8f\x90\xe7\xa4\xba\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "DeathAhead.Comment", "//\xe5\xbc\x9f\xe5\xad\x90\xe5\x8d\xb3\xe5\xb0\x86\xe6\xad\xbb\xe4\xba\xa1\n" },
		{ "DeathAhead.Name", "EModTipsType::DeathAhead" },
		{ "DeathAhead.ToolTip", "\xe5\xbc\x9f\xe5\xad\x90\xe5\x8d\xb3\xe5\xb0\x86\xe6\xad\xbb\xe4\xba\xa1" },
		{ "DepressionIdle.Comment", "//\xe5\xbc\x9f\xe5\xad\x90\xe5\xb4\xa9\xe6\xba\x83\n" },
		{ "DepressionIdle.Name", "EModTipsType::DepressionIdle" },
		{ "DepressionIdle.ToolTip", "\xe5\xbc\x9f\xe5\xad\x90\xe5\xb4\xa9\xe6\xba\x83" },
		{ "DiscipleHungry.Comment", "//\xe5\xbc\x9f\xe5\xad\x90\xe9\xa5\xa5\xe9\xa5\xbf\n" },
		{ "DiscipleHungry.Name", "EModTipsType::DiscipleHungry" },
		{ "DiscipleHungry.ToolTip", "\xe5\xbc\x9f\xe5\xad\x90\xe9\xa5\xa5\xe9\xa5\xbf" },
		{ "EarlyWarning.Comment", "//\xe9\xa2\x84\xe8\xad\xa6\n" },
		{ "EarlyWarning.Name", "EModTipsType::EarlyWarning" },
		{ "EarlyWarning.ToolTip", "\xe9\xa2\x84\xe8\xad\xa6" },
		{ "EncounterWarningOfSectWar.Comment", "//\xe9\x97\xa8\xe6\xb4\xbe\xe6\x88\x98\xe9\xa2\x84\xe8\xad\xa6\n" },
		{ "EncounterWarningOfSectWar.Name", "EModTipsType::EncounterWarningOfSectWar" },
		{ "EncounterWarningOfSectWar.ToolTip", "\xe9\x97\xa8\xe6\xb4\xbe\xe6\x88\x98\xe9\xa2\x84\xe8\xad\xa6" },
		{ "EventClose.Comment", "//\xe4\xba\x8b\xe4\xbb\xb6\xe5\x85\xb3\xe9\x97\xad\n" },
		{ "EventClose.Name", "EModTipsType::EventClose" },
		{ "EventClose.ToolTip", "\xe4\xba\x8b\xe4\xbb\xb6\xe5\x85\xb3\xe9\x97\xad" },
		{ "EventPawn.Comment", "//\xe4\xba\x8b\xe4\xbb\xb6\xe7\x94\x9f\xe6\x88\x90\n" },
		{ "EventPawn.Name", "EModTipsType::EventPawn" },
		{ "EventPawn.ToolTip", "\xe4\xba\x8b\xe4\xbb\xb6\xe7\x94\x9f\xe6\x88\x90" },
		{ "EventRebirth.Comment", "//\xe4\xba\x8b\xe4\xbb\xb6\xe9\x87\x8d\xe7\x94\x9f\n" },
		{ "EventRebirth.Name", "EModTipsType::EventRebirth" },
		{ "EventRebirth.ToolTip", "\xe4\xba\x8b\xe4\xbb\xb6\xe9\x87\x8d\xe7\x94\x9f" },
		{ "ExchangeMartialArtsFailed.Comment", "//\xe5\x88\x87\xe7\xa3\x8b\xe5\xa4\xb1\xe8\xb4\xa5\n" },
		{ "ExchangeMartialArtsFailed.Name", "EModTipsType::ExchangeMartialArtsFailed" },
		{ "ExchangeMartialArtsFailed.ToolTip", "\xe5\x88\x87\xe7\xa3\x8b\xe5\xa4\xb1\xe8\xb4\xa5" },
		{ "ExchangeMartialArtsOutStartTime.Comment", "//\xe5\x88\x87\xe7\xa3\x8b\xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xe9\x97\xb4\xe8\xb6\x85\xe6\x97\xb6\n" },
		{ "ExchangeMartialArtsOutStartTime.Name", "EModTipsType::ExchangeMartialArtsOutStartTime" },
		{ "ExchangeMartialArtsOutStartTime.ToolTip", "\xe5\x88\x87\xe7\xa3\x8b\xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xe9\x97\xb4\xe8\xb6\x85\xe6\x97\xb6" },
		{ "ExchangeMartialArtsStart.Comment", "//\xe5\x88\x87\xe7\xa3\x8b\xe5\xbc\x80\xe5\xa7\x8b\n" },
		{ "ExchangeMartialArtsStart.Name", "EModTipsType::ExchangeMartialArtsStart" },
		{ "ExchangeMartialArtsStart.ToolTip", "\xe5\x88\x87\xe7\xa3\x8b\xe5\xbc\x80\xe5\xa7\x8b" },
		{ "ExchangeMartialArtsWin.Comment", "//\xe5\x88\x87\xe7\xa3\x8b\xe8\x8e\xb7\xe8\x83\x9c\n" },
		{ "ExchangeMartialArtsWin.Name", "EModTipsType::ExchangeMartialArtsWin" },
		{ "ExchangeMartialArtsWin.ToolTip", "\xe5\x88\x87\xe7\xa3\x8b\xe8\x8e\xb7\xe8\x83\x9c" },
		{ "FindNewMaterial.Comment", "//\xe5\x8f\x91\xe7\x8e\xb0\xe6\x96\xb0\xe6\x9d\x90\xe6\x96\x99\n" },
		{ "FindNewMaterial.Name", "EModTipsType::FindNewMaterial" },
		{ "FindNewMaterial.ToolTip", "\xe5\x8f\x91\xe7\x8e\xb0\xe6\x96\xb0\xe6\x9d\x90\xe6\x96\x99" },
		{ "ForceAssault.Comment", "//\xe6\x95\x8c\xe5\xaf\xb9\xe5\x8a\xbf\xe5\x8a\x9b\xe8\xa2\xad\xe5\x87\xbb\n" },
		{ "ForceAssault.Name", "EModTipsType::ForceAssault" },
		{ "ForceAssault.ToolTip", "\xe6\x95\x8c\xe5\xaf\xb9\xe5\x8a\xbf\xe5\x8a\x9b\xe8\xa2\xad\xe5\x87\xbb" },
		{ "ForceAssaultRetreat.Comment", "//\xe6\x95\x8c\xe5\xaf\xb9\xe5\x8a\xbf\xe5\x8a\x9b\xe8\xa2\xad\xe5\x87\xbb\xe6\x92\xa4\xe9\x80\x80\n" },
		{ "ForceAssaultRetreat.Name", "EModTipsType::ForceAssaultRetreat" },
		{ "ForceAssaultRetreat.ToolTip", "\xe6\x95\x8c\xe5\xaf\xb9\xe5\x8a\xbf\xe5\x8a\x9b\xe8\xa2\xad\xe5\x87\xbb\xe6\x92\xa4\xe9\x80\x80" },
		{ "ModuleRelativePath", "Public/BaseDataStruct.h" },
		{ "NeedBed.Comment", "//\xe7\xbc\xba\xe5\xb0\x91\xe5\xba\x8a\xe4\xbd\x8d\n" },
		{ "NeedBed.Name", "EModTipsType::NeedBed" },
		{ "NeedBed.ToolTip", "\xe7\xbc\xba\xe5\xb0\x91\xe5\xba\x8a\xe4\xbd\x8d" },
		{ "NeedBedRescue.Comment", "//\xe9\x9c\x80\xe8\xa6\x81\xe7\x96\x97\xe5\x85\xbb\xe5\xba\x8a\xe6\x95\x91\xe5\x8a\xa9\n" },
		{ "NeedBedRescue.Name", "EModTipsType::NeedBedRescue" },
		{ "NeedBedRescue.ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe7\x96\x97\xe5\x85\xbb\xe5\xba\x8a\xe6\x95\x91\xe5\x8a\xa9" },
		{ "NeedInspirationBuilding.Comment", "//\xe9\x9c\x80\xe8\xa6\x81\xe6\x84\x9f\xe6\x82\x9f\xe5\xbb\xba\xe7\xad\x91\n" },
		{ "NeedInspirationBuilding.Name", "EModTipsType::NeedInspirationBuilding" },
		{ "NeedInspirationBuilding.ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe6\x84\x9f\xe6\x82\x9f\xe5\xbb\xba\xe7\xad\x91" },
		{ "None.Comment", "//\xe9\xbb\x98\xe8\xae\xa4\xe7\xa9\xba\xe5\x80\xbc\xef\xbc\x88\xe4\xb8\x8d\xe5\xa4\x84\xe7\x90\x86\xef\xbc\x89\n" },
		{ "None.Name", "EModTipsType::None" },
		{ "None.ToolTip", "\xe9\xbb\x98\xe8\xae\xa4\xe7\xa9\xba\xe5\x80\xbc\xef\xbc\x88\xe4\xb8\x8d\xe5\xa4\x84\xe7\x90\x86\xef\xbc\x89" },
		{ "NoneMaterial.Comment", "//\xe7\xbc\xba\xe5\xb0\x91\xe6\x9d\x90\xe6\x96\x99\n" },
		{ "NoneMaterial.Name", "EModTipsType::NoneMaterial" },
		{ "NoneMaterial.ToolTip", "\xe7\xbc\xba\xe5\xb0\x91\xe6\x9d\x90\xe6\x96\x99" },
		{ "NotEquipped.Comment", "//\xe6\x9c\xaa\xe8\xa3\x85\xe5\xa4\x87\n" },
		{ "NotEquipped.Name", "EModTipsType::NotEquipped" },
		{ "NotEquipped.ToolTip", "\xe6\x9c\xaa\xe8\xa3\x85\xe5\xa4\x87" },
		{ "ObserveAnimalComplete.Comment", "//\xe8\xa7\x82\xe5\xaf\x9f\xe5\x8a\xa8\xe7\x89\xa9\xe5\xae\x8c\xe6\x88\x90\n" },
		{ "ObserveAnimalComplete.Name", "EModTipsType::ObserveAnimalComplete" },
		{ "ObserveAnimalComplete.ToolTip", "\xe8\xa7\x82\xe5\xaf\x9f\xe5\x8a\xa8\xe7\x89\xa9\xe5\xae\x8c\xe6\x88\x90" },
		{ "ObservePlantComplete.Comment", "//\xe8\xa7\x82\xe5\xaf\x9f\xe6\xa4\x8d\xe7\x89\xa9\xe5\xae\x8c\xe6\x88\x90\n" },
		{ "ObservePlantComplete.Name", "EModTipsType::ObservePlantComplete" },
		{ "ObservePlantComplete.ToolTip", "\xe8\xa7\x82\xe5\xaf\x9f\xe6\xa4\x8d\xe7\x89\xa9\xe5\xae\x8c\xe6\x88\x90" },
		{ "PeddlerArrived.Comment", "//\xe5\x95\x86\xe8\xb4\xa9\xe5\x88\xb0\xe8\xbe\xbe\xe9\xa9\xbf\xe7\xab\x99\n" },
		{ "PeddlerArrived.Name", "EModTipsType::PeddlerArrived" },
		{ "PeddlerArrived.ToolTip", "\xe5\x95\x86\xe8\xb4\xa9\xe5\x88\xb0\xe8\xbe\xbe\xe9\xa9\xbf\xe7\xab\x99" },
		{ "RecentStorageTool.Comment", "//\xe8\xbf\x91\xe6\x9c\x9f\xe5\x85\xa5\xe5\xba\x93\xe7\x9a\x84\xe9\x81\x93\xe5\x85\xb7\n" },
		{ "RecentStorageTool.Name", "EModTipsType::RecentStorageTool" },
		{ "RecentStorageTool.ToolTip", "\xe8\xbf\x91\xe6\x9c\x9f\xe5\x85\xa5\xe5\xba\x93\xe7\x9a\x84\xe9\x81\x93\xe5\x85\xb7" },
		{ "RequestToJoin.Comment", "//\xe8\xaf\xb7\xe6\xb1\x82\xe5\x8a\xa0\xe5\x85\xa5\n" },
		{ "RequestToJoin.Name", "EModTipsType::RequestToJoin" },
		{ "RequestToJoin.ToolTip", "\xe8\xaf\xb7\xe6\xb1\x82\xe5\x8a\xa0\xe5\x85\xa5" },
		{ "StorageSpaceInsufficient.Comment", "//\xe8\xa7\x82\xe5\xaf\x9f\xe5\xae\x8c\xe6\x88\x90\xe4\xbb\xa5\xe5\x8f\x8a\xe6\x88\x90\xe6\x9e\x9c\n//\xe5\x82\xa8\xe5\xad\x98\xe7\xa9\xba\xe9\x97\xb4\xe4\xb8\x8d\xe8\xb6\xb3\xe3\x80\x81\xe5\x82\xa8\xe5\xa4\x87\xe7\x89\xa9\xe5\x93\x81\xe4\xb8\x8d\xe8\xb6\xb3\n" },
		{ "StorageSpaceInsufficient.Name", "EModTipsType::StorageSpaceInsufficient" },
		{ "StorageSpaceInsufficient.ToolTip", "\xe8\xa7\x82\xe5\xaf\x9f\xe5\xae\x8c\xe6\x88\x90\xe4\xbb\xa5\xe5\x8f\x8a\xe6\x88\x90\xe6\x9e\x9c\n\xe5\x82\xa8\xe5\xad\x98\xe7\xa9\xba\xe9\x97\xb4\xe4\xb8\x8d\xe8\xb6\xb3\xe3\x80\x81\xe5\x82\xa8\xe5\xa4\x87\xe7\x89\xa9\xe5\x93\x81\xe4\xb8\x8d\xe8\xb6\xb3" },
		{ "TameFaild.Comment", "//\xe9\xa9\xaf\xe6\x9c\x8d\xe5\xa4\xb1\xe8\xb4\xa5\n" },
		{ "TameFaild.Name", "EModTipsType::TameFaild" },
		{ "TameFaild.ToolTip", "\xe9\xa9\xaf\xe6\x9c\x8d\xe5\xa4\xb1\xe8\xb4\xa5" },
		{ "TameSuccessed.Comment", "//\xe9\xa9\xaf\xe6\x9c\x8d\xe6\x88\x90\xe5\x8a\x9f\n" },
		{ "TameSuccessed.Name", "EModTipsType::TameSuccessed" },
		{ "TameSuccessed.ToolTip", "\xe9\xa9\xaf\xe6\x9c\x8d\xe6\x88\x90\xe5\x8a\x9f" },
		{ "TechDevFinish.Comment", "//\xe7\xa0\x94\xe7\xa9\xb6\xe5\xae\x8c\xe6\x88\x90\xe4\xbb\xa5\xe5\x8f\x8a\xe6\x88\x90\xe6\x9e\x9c\n" },
		{ "TechDevFinish.Name", "EModTipsType::TechDevFinish" },
		{ "TechDevFinish.ToolTip", "\xe7\xa0\x94\xe7\xa9\xb6\xe5\xae\x8c\xe6\x88\x90\xe4\xbb\xa5\xe5\x8f\x8a\xe6\x88\x90\xe6\x9e\x9c" },
		{ "TechDevIdle.Comment", "//\xe7\xa7\x91\xe6\x8a\x80\xe9\x97\xb2\xe7\xbd\xae\n" },
		{ "TechDevIdle.Name", "EModTipsType::TechDevIdle" },
		{ "TechDevIdle.ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe9\x97\xb2\xe7\xbd\xae" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8f\x90\xe7\xa4\xba\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "TourCanSignup.Comment", "//\xe6\xaf\x94\xe6\xad\xa6\xe5\xa4\xa7\xe4\xbc\x9a\xe5\x8f\xaf\xe6\x8a\xa5\xe5\x90\x8d\n" },
		{ "TourCanSignup.Name", "EModTipsType::TourCanSignup" },
		{ "TourCanSignup.ToolTip", "\xe6\xaf\x94\xe6\xad\xa6\xe5\xa4\xa7\xe4\xbc\x9a\xe5\x8f\xaf\xe6\x8a\xa5\xe5\x90\x8d" },
		{ "WeatherChange.Comment", "//\xe5\xa4\xa9\xe6\xb0\x94\xe5\x8f\x98\xe6\x8d\xa2\n" },
		{ "WeatherChange.Name", "EModTipsType::WeatherChange" },
		{ "WeatherChange.ToolTip", "\xe5\xa4\xa9\xe6\xb0\x94\xe5\x8f\x98\xe6\x8d\xa2" },
		{ "WeatherDisaster.Comment", "//\xe7\x81\xbe\xe5\xae\xb3\xe5\xa4\xa9\xe6\xb0\x94\xe5\x8f\x91\xe7\x94\x9f\n" },
		{ "WeatherDisaster.Name", "EModTipsType::WeatherDisaster" },
		{ "WeatherDisaster.ToolTip", "\xe7\x81\xbe\xe5\xae\xb3\xe5\xa4\xa9\xe6\xb0\x94\xe5\x8f\x91\xe7\x94\x9f" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModTipsType::None", (int64)EModTipsType::None },
		{ "EModTipsType::EventPawn", (int64)EModTipsType::EventPawn },
		{ "EModTipsType::EventRebirth", (int64)EModTipsType::EventRebirth },
		{ "EModTipsType::EventClose", (int64)EModTipsType::EventClose },
		{ "EModTipsType::DeathAhead", (int64)EModTipsType::DeathAhead },
		{ "EModTipsType::TechDevFinish", (int64)EModTipsType::TechDevFinish },
		{ "EModTipsType::WeatherChange", (int64)EModTipsType::WeatherChange },
		{ "EModTipsType::WeatherDisaster", (int64)EModTipsType::WeatherDisaster },
		{ "EModTipsType::NeedBed", (int64)EModTipsType::NeedBed },
		{ "EModTipsType::CharacterIdle", (int64)EModTipsType::CharacterIdle },
		{ "EModTipsType::TechDevIdle", (int64)EModTipsType::TechDevIdle },
		{ "EModTipsType::CharacterDeath", (int64)EModTipsType::CharacterDeath },
		{ "EModTipsType::ObservePlantComplete", (int64)EModTipsType::ObservePlantComplete },
		{ "EModTipsType::ObserveAnimalComplete", (int64)EModTipsType::ObserveAnimalComplete },
		{ "EModTipsType::CharacterGetHurt", (int64)EModTipsType::CharacterGetHurt },
		{ "EModTipsType::CharacterDying", (int64)EModTipsType::CharacterDying },
		{ "EModTipsType::CharacterNeedWeapon", (int64)EModTipsType::CharacterNeedWeapon },
		{ "EModTipsType::BuildNeedMaterial", (int64)EModTipsType::BuildNeedMaterial },
		{ "EModTipsType::CharacterNeedClothes", (int64)EModTipsType::CharacterNeedClothes },
		{ "EModTipsType::TameSuccessed", (int64)EModTipsType::TameSuccessed },
		{ "EModTipsType::TameFaild", (int64)EModTipsType::TameFaild },
		{ "EModTipsType::NoneMaterial", (int64)EModTipsType::NoneMaterial },
		{ "EModTipsType::RecentStorageTool", (int64)EModTipsType::RecentStorageTool },
		{ "EModTipsType::StorageSpaceInsufficient", (int64)EModTipsType::StorageSpaceInsufficient },
		{ "EModTipsType::FindNewMaterial", (int64)EModTipsType::FindNewMaterial },
		{ "EModTipsType::NotEquipped", (int64)EModTipsType::NotEquipped },
		{ "EModTipsType::EarlyWarning", (int64)EModTipsType::EarlyWarning },
		{ "EModTipsType::Assault", (int64)EModTipsType::Assault },
		{ "EModTipsType::RequestToJoin", (int64)EModTipsType::RequestToJoin },
		{ "EModTipsType::EncounterWarningOfSectWar", (int64)EModTipsType::EncounterWarningOfSectWar },
		{ "EModTipsType::DiscipleHungry", (int64)EModTipsType::DiscipleHungry },
		{ "EModTipsType::DepressionIdle", (int64)EModTipsType::DepressionIdle },
		{ "EModTipsType::ChivalrousArrived", (int64)EModTipsType::ChivalrousArrived },
		{ "EModTipsType::PeddlerArrived", (int64)EModTipsType::PeddlerArrived },
		{ "EModTipsType::ForceAssault", (int64)EModTipsType::ForceAssault },
		{ "EModTipsType::ForceAssaultRetreat", (int64)EModTipsType::ForceAssaultRetreat },
		{ "EModTipsType::BreakThrough", (int64)EModTipsType::BreakThrough },
		{ "EModTipsType::TourCanSignup", (int64)EModTipsType::TourCanSignup },
		{ "EModTipsType::ExchangeMartialArtsStart", (int64)EModTipsType::ExchangeMartialArtsStart },
		{ "EModTipsType::ExchangeMartialArtsWin", (int64)EModTipsType::ExchangeMartialArtsWin },
		{ "EModTipsType::ExchangeMartialArtsFailed", (int64)EModTipsType::ExchangeMartialArtsFailed },
		{ "EModTipsType::CanRecruitNPC", (int64)EModTipsType::CanRecruitNPC },
		{ "EModTipsType::ExchangeMartialArtsOutStartTime", (int64)EModTipsType::ExchangeMartialArtsOutStartTime },
		{ "EModTipsType::NeedBedRescue", (int64)EModTipsType::NeedBedRescue },
		{ "EModTipsType::NeedInspirationBuilding", (int64)EModTipsType::NeedInspirationBuilding },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModTipsType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModTipsType",
	"EModTipsType",
	Z_Construct_UEnum_CreateModPlugin_EModTipsType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModTipsType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModTipsType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModTipsType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModTipsType()
{
	if (!Z_Registration_Info_UEnum_EModTipsType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModTipsType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModTipsType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModTipsType.InnerSingleton;
}
// ********** End Enum EModTipsType ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h__Script_CreateModPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModConfigType_StaticEnum, TEXT("EModConfigType"), &Z_Registration_Info_UEnum_EModConfigType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3085131635U) },
		{ EModDataAssetType_StaticEnum, TEXT("EModDataAssetType"), &Z_Registration_Info_UEnum_EModDataAssetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2803957064U) },
		{ EModCharacterBehaviorState_StaticEnum, TEXT("EModCharacterBehaviorState"), &Z_Registration_Info_UEnum_EModCharacterBehaviorState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2884534965U) },
		{ EModGroundInventoryType_StaticEnum, TEXT("EModGroundInventoryType"), &Z_Registration_Info_UEnum_EModGroundInventoryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1596875282U) },
		{ EModCharacterType_StaticEnum, TEXT("EModCharacterType"), &Z_Registration_Info_UEnum_EModCharacterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 901461423U) },
		{ EModTipsType_StaticEnum, TEXT("EModTipsType"), &Z_Registration_Info_UEnum_EModTipsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2254412518U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModConfig::StaticStruct, Z_Construct_UScriptStruct_FModConfig_Statics::NewStructOps, TEXT("ModConfig"), &Z_Registration_Info_UScriptStruct_FModConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModConfig), 2437047248U) },
		{ FModAsset::StaticStruct, Z_Construct_UScriptStruct_FModAsset_Statics::NewStructOps, TEXT("ModAsset"), &Z_Registration_Info_UScriptStruct_FModAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModAsset), 3119472607U) },
		{ FModDataBase::StaticStruct, Z_Construct_UScriptStruct_FModDataBase_Statics::NewStructOps, TEXT("ModDataBase"), &Z_Registration_Info_UScriptStruct_FModDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModDataBase), 1478976665U) },
		{ FModGameplayEffectContainer::StaticStruct, Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics::NewStructOps, TEXT("ModGameplayEffectContainer"), &Z_Registration_Info_UScriptStruct_FModGameplayEffectContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModGameplayEffectContainer), 3944816412U) },
		{ FModFormatText::StaticStruct, Z_Construct_UScriptStruct_FModFormatText_Statics::NewStructOps, TEXT("ModFormatText"), &Z_Registration_Info_UScriptStruct_FModFormatText, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModFormatText), 3853051553U) },
		{ FModDropItemInfo::StaticStruct, Z_Construct_UScriptStruct_FModDropItemInfo_Statics::NewStructOps, TEXT("ModDropItemInfo"), &Z_Registration_Info_UScriptStruct_FModDropItemInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModDropItemInfo), 3872789321U) },
		{ FModDropSetConfig::StaticStruct, Z_Construct_UScriptStruct_FModDropSetConfig_Statics::NewStructOps, TEXT("ModDropSetConfig"), &Z_Registration_Info_UScriptStruct_FModDropSetConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModDropSetConfig), 1679017575U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModInformationAsset, UModInformationAsset::StaticClass, TEXT("UModInformationAsset"), &Z_Registration_Info_UClass_UModInformationAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModInformationAsset), 1949611849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h__Script_CreateModPlugin_2615031210(TEXT("/Script/CreateModPlugin"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h__Script_CreateModPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h__Script_CreateModPlugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
