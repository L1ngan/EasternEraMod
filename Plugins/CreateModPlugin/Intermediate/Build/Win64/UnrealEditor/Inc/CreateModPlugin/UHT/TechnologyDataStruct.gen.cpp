// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TechnologyDataStruct.h"
#include "BaseDataStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTechnologyDataStruct() {}

// ********** Begin Cross Module References ********************************************************
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModTechCategory();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModTechLevel();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModTechPointType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModTechUnlockItemType();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModDataBase();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModFormatText();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModTechnologyConfigStruct();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_CreateModPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EModTechUnlockItemType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModTechUnlockItemType;
static UEnum* EModTechUnlockItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModTechUnlockItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModTechUnlockItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModTechUnlockItemType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModTechUnlockItemType"));
	}
	return Z_Registration_Info_UEnum_EModTechUnlockItemType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModTechUnlockItemType>()
{
	return EModTechUnlockItemType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModTechUnlockItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Building.Comment", "//\xe8\xa7\xa3\xe9\x94\x81\xe5\xbb\xba\xe7\xad\x91\n" },
		{ "Building.Name", "EModTechUnlockItemType::Building" },
		{ "Building.ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe5\xbb\xba\xe7\xad\x91" },
		{ "BuildingMaterial.Comment", "//\xe8\xa7\xa3\xe9\x94\x81\xe5\xbb\xba\xe7\xad\x91\xe6\x9d\x90\xe6\x96\x99,\n" },
		{ "BuildingMaterial.Name", "EModTechUnlockItemType::BuildingMaterial" },
		{ "BuildingMaterial.ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe5\xbb\xba\xe7\xad\x91\xe6\x9d\x90\xe6\x96\x99," },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\x91\xe6\x8a\x80\xe8\xa7\xa3\xe9\x94\x81\xe5\x86\x85\xe5\xae\xb9\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "Dogface.Comment", "//\xe8\xa7\xa3\xe9\x94\x81\xe5\xb0\x8f\xe5\x85\xb5\n" },
		{ "Dogface.Name", "EModTechUnlockItemType::Dogface" },
		{ "Dogface.ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe5\xb0\x8f\xe5\x85\xb5" },
		{ "ForceApparel.Comment", "//\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe9\x97\xa8\xe6\xb4\xbe\xe6\x9c\x8d\xe9\xa5\xb0\n" },
		{ "ForceApparel.Name", "EModTechUnlockItemType::ForceApparel" },
		{ "ForceApparel.ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe9\x97\xa8\xe6\xb4\xbe\xe6\x9c\x8d\xe9\xa5\xb0" },
		{ "Function.Comment", "//\xe8\xa7\xa3\xe9\x94\x81\xe5\x8a\x9f\xe8\x83\xbd\n" },
		{ "Function.Name", "EModTechUnlockItemType::Function" },
		{ "Function.ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe5\x8a\x9f\xe8\x83\xbd" },
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
		{ "Plant.Comment", "//\xe8\xa7\xa3\xe9\x94\x81\xe7\xa7\x8d\xe6\xa4\x8d\xe7\x89\xa9\n" },
		{ "Plant.Name", "EModTechUnlockItemType::Plant" },
		{ "Plant.ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe7\xa7\x8d\xe6\xa4\x8d\xe7\x89\xa9" },
		{ "PlayerTeamBuff.Comment", "//\xe8\xa7\xa3\xe9\x94\x81PlayerBuff(\xe5\xaf\xb9\xe7\x8e\xa9\xe5\xae\xb6\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe8\xa7\x92\xe8\x89\xb2\xe7\x94\x9f\xe6\x95\x88\xe7\x9a\x84""Buff)\n" },
		{ "PlayerTeamBuff.Name", "EModTechUnlockItemType::PlayerTeamBuff" },
		{ "PlayerTeamBuff.ToolTip", "\xe8\xa7\xa3\xe9\x94\x81PlayerBuff(\xe5\xaf\xb9\xe7\x8e\xa9\xe5\xae\xb6\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe8\xa7\x92\xe8\x89\xb2\xe7\x94\x9f\xe6\x95\x88\xe7\x9a\x84""Buff)" },
		{ "Recipe.Comment", "//\xe8\xa7\xa3\xe9\x94\x81\xe9\x85\x8d\xe6\x96\xb9\n" },
		{ "Recipe.Name", "EModTechUnlockItemType::Recipe" },
		{ "Recipe.ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe9\x85\x8d\xe6\x96\xb9" },
		{ "StrategicAbility.Comment", "//\xe8\xa7\xa3\xe9\x94\x81\xe6\x88\x98\xe7\x95\xa5\xe6\x8a\x80\xe8\x83\xbd\n" },
		{ "StrategicAbility.Name", "EModTechUnlockItemType::StrategicAbility" },
		{ "StrategicAbility.ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe6\x88\x98\xe7\x95\xa5\xe6\x8a\x80\xe8\x83\xbd" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe8\xa7\xa3\xe9\x94\x81\xe5\x86\x85\xe5\xae\xb9\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "TowerDefense.Comment", "//\xe8\xa7\xa3\xe9\x94\x81\xe9\x98\xb2\xe5\xbe\xa1\xe5\xa1\x94\n" },
		{ "TowerDefense.Name", "EModTechUnlockItemType::TowerDefense" },
		{ "TowerDefense.ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe9\x98\xb2\xe5\xbe\xa1\xe5\xa1\x94" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModTechUnlockItemType::Building", (int64)EModTechUnlockItemType::Building },
		{ "EModTechUnlockItemType::BuildingMaterial", (int64)EModTechUnlockItemType::BuildingMaterial },
		{ "EModTechUnlockItemType::Recipe", (int64)EModTechUnlockItemType::Recipe },
		{ "EModTechUnlockItemType::Plant", (int64)EModTechUnlockItemType::Plant },
		{ "EModTechUnlockItemType::Function", (int64)EModTechUnlockItemType::Function },
		{ "EModTechUnlockItemType::PlayerTeamBuff", (int64)EModTechUnlockItemType::PlayerTeamBuff },
		{ "EModTechUnlockItemType::Dogface", (int64)EModTechUnlockItemType::Dogface },
		{ "EModTechUnlockItemType::StrategicAbility", (int64)EModTechUnlockItemType::StrategicAbility },
		{ "EModTechUnlockItemType::TowerDefense", (int64)EModTechUnlockItemType::TowerDefense },
		{ "EModTechUnlockItemType::ForceApparel", (int64)EModTechUnlockItemType::ForceApparel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModTechUnlockItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModTechUnlockItemType",
	"EModTechUnlockItemType",
	Z_Construct_UEnum_CreateModPlugin_EModTechUnlockItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModTechUnlockItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModTechUnlockItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModTechUnlockItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModTechUnlockItemType()
{
	if (!Z_Registration_Info_UEnum_EModTechUnlockItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModTechUnlockItemType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModTechUnlockItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModTechUnlockItemType.InnerSingleton;
}
// ********** End Enum EModTechUnlockItemType ******************************************************

// ********** Begin Enum EModTechCategory **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModTechCategory;
static UEnum* EModTechCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModTechCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModTechCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModTechCategory, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModTechCategory"));
	}
	return Z_Registration_Info_UEnum_EModTechCategory.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModTechCategory>()
{
	return EModTechCategory_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModTechCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clothing.Comment", "//\xe6\x9c\x8d\xe8\xa3\x85\n" },
		{ "Clothing.Name", "EModTechCategory::Clothing" },
		{ "Clothing.ToolTip", "\xe6\x9c\x8d\xe8\xa3\x85" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\x91\xe6\x8a\x80\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "Decoration.Comment", "//\xe8\xa3\x85\xe9\xa5\xb0\n" },
		{ "Decoration.Name", "EModTechCategory::Decoration" },
		{ "Decoration.ToolTip", "\xe8\xa3\x85\xe9\xa5\xb0" },
		{ "Develop.Comment", "//\xe5\x8f\x91\xe5\xb1\x95\n" },
		{ "Develop.Name", "EModTechCategory::Develop" },
		{ "Develop.ToolTip", "\xe5\x8f\x91\xe5\xb1\x95" },
		{ "Food.Comment", "//\xe9\xa3\x9f\xe7\x89\xa9\n" },
		{ "Food.Name", "EModTechCategory::Food" },
		{ "Food.ToolTip", "\xe9\xa3\x9f\xe7\x89\xa9" },
		{ "Industrial.Comment", "//\xe5\xb7\xa5\xe4\xb8\x9a,\n" },
		{ "Industrial.Name", "EModTechCategory::Industrial" },
		{ "Industrial.ToolTip", "\xe5\xb7\xa5\xe4\xb8\x9a," },
		{ "Medical.Comment", "//\xe5\x8c\xbb\xe7\x96\x97\n" },
		{ "Medical.Name", "EModTechCategory::Medical" },
		{ "Medical.ToolTip", "\xe5\x8c\xbb\xe7\x96\x97" },
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
		{ "Practice.Comment", "//\xe4\xbf\xae\xe7\x82\xbc\n" },
		{ "Practice.Name", "EModTechCategory::Practice" },
		{ "Practice.ToolTip", "\xe4\xbf\xae\xe7\x82\xbc" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModTechCategory::Food", (int64)EModTechCategory::Food },
		{ "EModTechCategory::Industrial", (int64)EModTechCategory::Industrial },
		{ "EModTechCategory::Develop", (int64)EModTechCategory::Develop },
		{ "EModTechCategory::Medical", (int64)EModTechCategory::Medical },
		{ "EModTechCategory::Clothing", (int64)EModTechCategory::Clothing },
		{ "EModTechCategory::Decoration", (int64)EModTechCategory::Decoration },
		{ "EModTechCategory::Practice", (int64)EModTechCategory::Practice },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModTechCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModTechCategory",
	"EModTechCategory",
	Z_Construct_UEnum_CreateModPlugin_EModTechCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModTechCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModTechCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModTechCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModTechCategory()
{
	if (!Z_Registration_Info_UEnum_EModTechCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModTechCategory.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModTechCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModTechCategory.InnerSingleton;
}
// ********** End Enum EModTechCategory ************************************************************

// ********** Begin Enum EModTechLevel *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModTechLevel;
static UEnum* EModTechLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModTechLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModTechLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModTechLevel, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModTechLevel"));
	}
	return Z_Registration_Info_UEnum_EModTechLevel.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModTechLevel>()
{
	return EModTechLevel_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModTechLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Advanced.Comment", "//\xe9\xab\x98\xe7\xba\xa7\n" },
		{ "Advanced.Name", "EModTechLevel::Advanced" },
		{ "Advanced.ToolTip", "\xe9\xab\x98\xe7\xba\xa7" },
		{ "Beginner.Comment", "//\xe5\x88\x9d\xe7\xba\xa7\n" },
		{ "Beginner.Name", "EModTechLevel::Beginner" },
		{ "Beginner.ToolTip", "\xe5\x88\x9d\xe7\xba\xa7" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\x91\xe6\x8a\x80\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "Intermediate.Comment", "//\xe4\xb8\xad\xe7\xba\xa7\n" },
		{ "Intermediate.Name", "EModTechLevel::Intermediate" },
		{ "Intermediate.ToolTip", "\xe4\xb8\xad\xe7\xba\xa7" },
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModTechLevel::Beginner", (int64)EModTechLevel::Beginner },
		{ "EModTechLevel::Intermediate", (int64)EModTechLevel::Intermediate },
		{ "EModTechLevel::Advanced", (int64)EModTechLevel::Advanced },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModTechLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModTechLevel",
	"EModTechLevel",
	Z_Construct_UEnum_CreateModPlugin_EModTechLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModTechLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModTechLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModTechLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModTechLevel()
{
	if (!Z_Registration_Info_UEnum_EModTechLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModTechLevel.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModTechLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModTechLevel.InnerSingleton;
}
// ********** End Enum EModTechLevel ***************************************************************

// ********** Begin Enum EModTechPointType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModTechPointType;
static UEnum* EModTechPointType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModTechPointType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModTechPointType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModTechPointType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModTechPointType"));
	}
	return Z_Registration_Info_UEnum_EModTechPointType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModTechPointType>()
{
	return EModTechPointType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModTechPointType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdvTechPoint.Comment", "//\xe9\xab\x98\xe7\xba\xa7\xe7\xa7\x91\xe6\x8a\x80\xe7\x82\xb9\xe6\x95\xb0\n" },
		{ "AdvTechPoint.Name", "EModTechPointType::AdvTechPoint" },
		{ "AdvTechPoint.ToolTip", "\xe9\xab\x98\xe7\xba\xa7\xe7\xa7\x91\xe6\x8a\x80\xe7\x82\xb9\xe6\x95\xb0" },
		{ "BasTechPoint.Comment", "//\xe5\x88\x9d\xe7\xba\xa7\xe7\xa7\x91\xe6\x8a\x80\xe7\x82\xb9\xe6\x95\xb0\n" },
		{ "BasTechPoint.Name", "EModTechPointType::BasTechPoint" },
		{ "BasTechPoint.ToolTip", "\xe5\x88\x9d\xe7\xba\xa7\xe7\xa7\x91\xe6\x8a\x80\xe7\x82\xb9\xe6\x95\xb0" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\x91\xe6\x8a\x80\xe7\x82\xb9\xe6\x95\xb0\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "MidTechPoint.Comment", "//\xe4\xb8\xad\xe7\xba\xa7\xe7\xa7\x91\xe6\x8a\x80\xe7\x82\xb9\xe6\x95\xb0,\n" },
		{ "MidTechPoint.Name", "EModTechPointType::MidTechPoint" },
		{ "MidTechPoint.ToolTip", "\xe4\xb8\xad\xe7\xba\xa7\xe7\xa7\x91\xe6\x8a\x80\xe7\x82\xb9\xe6\x95\xb0," },
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe7\x82\xb9\xe6\x95\xb0\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModTechPointType::BasTechPoint", (int64)EModTechPointType::BasTechPoint },
		{ "EModTechPointType::MidTechPoint", (int64)EModTechPointType::MidTechPoint },
		{ "EModTechPointType::AdvTechPoint", (int64)EModTechPointType::AdvTechPoint },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModTechPointType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModTechPointType",
	"EModTechPointType",
	Z_Construct_UEnum_CreateModPlugin_EModTechPointType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModTechPointType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModTechPointType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModTechPointType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModTechPointType()
{
	if (!Z_Registration_Info_UEnum_EModTechPointType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModTechPointType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModTechPointType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModTechPointType.InnerSingleton;
}
// ********** End Enum EModTechPointType ***********************************************************

// ********** Begin ScriptStruct FModTechUnlockItemConigStruct *************************************
static_assert(std::is_polymorphic<FModTechUnlockItemConigStruct>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModTechUnlockItemConigStruct cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModTechUnlockItemConigStruct;
class UScriptStruct* FModTechUnlockItemConigStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModTechUnlockItemConigStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModTechUnlockItemConigStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModTechUnlockItemConigStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FModTechUnlockItemConigStruct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\x91\xe6\x8a\x80\xe8\xa7\xa3\xe9\x94\x81\xe7\x89\xa9\xe5\x93\x81\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe8\xa7\xa3\xe9\x94\x81\xe7\x89\xa9\xe5\x93\x81\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xbe\xe7\xa4\xba\xe7\x89\xa9\xe5\x93\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xbe\xe7\xa4\xba\xe7\x89\xa9\xe5\x93\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatItemDesc_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8f\x8f\xe8\xbf\xb0(\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96)\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8f\x8f\xe8\xbf\xb0(\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe5\x9b\xbe\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockType_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\xa3\xe9\x94\x81\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockItemsIds_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\xa3\xe9\x94\x81\xe7\x89\xa9\xe5\x93\x81Ids\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe7\x89\xa9\xe5\x93\x81Ids" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockItemsNums_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\xa3\xe9\x94\x81\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe9\x87\x8f(he )\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe9\x87\x8f(he )" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FormatItemDesc;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UnlockType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UnlockType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnlockItemsIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockItemsIds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnlockItemsNums_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockItemsNums;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModTechUnlockItemConigStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechUnlockItemConigStruct, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_FormatItemDesc = { "FormatItemDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechUnlockItemConigStruct, FormatItemDesc), Z_Construct_UScriptStruct_FModFormatText, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatItemDesc_MetaData), NewProp_FormatItemDesc_MetaData) }; // 3853051553
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechUnlockItemConigStruct, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_UnlockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_UnlockType = { "UnlockType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechUnlockItemConigStruct, UnlockType), Z_Construct_UEnum_CreateModPlugin_EModTechUnlockItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockType_MetaData), NewProp_UnlockType_MetaData) }; // 1477145340
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_UnlockItemsIds_Inner = { "UnlockItemsIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_UnlockItemsIds = { "UnlockItemsIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechUnlockItemConigStruct, UnlockItemsIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockItemsIds_MetaData), NewProp_UnlockItemsIds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_UnlockItemsNums_Inner = { "UnlockItemsNums", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_UnlockItemsNums = { "UnlockItemsNums", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechUnlockItemConigStruct, UnlockItemsNums), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockItemsNums_MetaData), NewProp_UnlockItemsNums_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_FormatItemDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_UnlockType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_UnlockType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_UnlockItemsIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_UnlockItemsIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_UnlockItemsNums_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewProp_UnlockItemsNums,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModTechUnlockItemConigStruct",
	Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::PropPointers),
	sizeof(FModTechUnlockItemConigStruct),
	alignof(FModTechUnlockItemConigStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModTechUnlockItemConigStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModTechUnlockItemConigStruct.InnerSingleton, Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModTechUnlockItemConigStruct.InnerSingleton;
}
// ********** End ScriptStruct FModTechUnlockItemConigStruct ***************************************

// ********** Begin ScriptStruct FModTechnologyConfigStruct ****************************************
static_assert(std::is_polymorphic<FModTechnologyConfigStruct>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModTechnologyConfigStruct cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModTechnologyConfigStruct;
class UScriptStruct* FModTechnologyConfigStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModTechnologyConfigStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModTechnologyConfigStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModTechnologyConfigStruct, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModTechnologyConfigStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FModTechnologyConfigStruct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\x91\xe6\x8a\x80\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TechName_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\x91\xe6\x8a\x80\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI\xe4\xb8\x8a\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe5\x9b\xbe\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI\xe4\xb8\x8a\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\x91\xe6\x8a\x80\xe5\x88\x86\xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe5\x88\x86\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DifficultyLevel_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\x91\xe6\x8a\x80\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevTechIds_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x89\x8d\xe7\xbd\xae\xe7\xa7\x91\xe6\x8a\x80ID\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x89\x8d\xe7\xbd\xae\xe7\xa7\x91\xe6\x8a\x80ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockItemIds_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\xa3\xe9\x94\x81\xe7\x89\xa9\xe5\x93\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe7\x89\xa9\xe5\x93\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeedTechPoints_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe7\xa7\x91\xe6\x8a\x80\xe7\x82\xb9\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe7\xa7\x91\xe6\x8a\x80\xe7\x82\xb9\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeedResources_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa0\x94\xe7\xa9\xb6\xe9\x9c\x80\xe8\xa6\x81\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa0\x94\xe7\xa9\xb6\xe9\x9c\x80\xe8\xa6\x81\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeedForceLevel_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe5\x8a\xbf\xe5\x8a\x9b\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe5\x8a\xbf\xe5\x8a\x9b\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIX_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\x91\xe6\x8a\x80\xe5\x85\x83\xe7\xb4\xa0\xe5\x9c\xa8UI\xe4\xb8\x8a\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xaeX\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe5\x85\x83\xe7\xb4\xa0\xe5\x9c\xa8UI\xe4\xb8\x8a\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xaeX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIY_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\x91\xe6\x8a\x80\xe5\x85\x83\xe7\xb4\xa0\xe5\x9c\xa8UI\xe4\xb8\x8a\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xaeY\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe5\x85\x83\xe7\xb4\xa0\xe5\x9c\xa8UI\xe4\xb8\x8a\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xaeY" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TechDesc_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\x91\xe6\x8a\x80\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbf\xb0\xe6\x96\x87\xe5\xad\x97\xef\xbc\x88\xe9\x80\x90\xe6\xb8\x90\xe5\x81\x9c\xe7\x94\xa8\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbf\xb0\xe6\x96\x87\xe5\xad\x97\xef\xbc\x88\xe9\x80\x90\xe6\xb8\x90\xe5\x81\x9c\xe7\x94\xa8\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatItemTechDesc_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\x91\xe6\x8a\x80\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbf\xb0\xe6\x96\x87\xe5\xad\x97(\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96)\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbf\xb0\xe6\x96\x87\xe5\xad\x97(\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\x91\xe6\x8a\x80\xe7\x9a\x84\xe6\x98\xaf\xe5\x90\xa6\xe5\xbc\x80\xe6\x94\xbe\xe5\x8f\xaf\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/TechnologyDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\x91\xe6\x8a\x80\xe7\x9a\x84\xe6\x98\xaf\xe5\x90\xa6\xe5\xbc\x80\xe6\x94\xbe\xe5\x8f\xaf\xe7\x94\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TechName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DifficultyLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DifficultyLevel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PrevTechIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrevTechIds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnlockItemIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockItemIds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NeedTechPoints_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NeedTechPoints_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NeedTechPoints_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NeedTechPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NeedResources_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NeedResources_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NeedResources;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NeedForceLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UIX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UIY;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TechDesc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FormatItemTechDesc;
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModTechnologyConfigStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_TechName = { "TechName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechnologyConfigStruct, TechName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TechName_MetaData), NewProp_TechName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechnologyConfigStruct, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechnologyConfigStruct, Category), Z_Construct_UEnum_CreateModPlugin_EModTechCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 2158225582
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_DifficultyLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_DifficultyLevel = { "DifficultyLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechnologyConfigStruct, DifficultyLevel), Z_Construct_UEnum_CreateModPlugin_EModTechLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DifficultyLevel_MetaData), NewProp_DifficultyLevel_MetaData) }; // 278949742
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_PrevTechIds_Inner = { "PrevTechIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_PrevTechIds = { "PrevTechIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechnologyConfigStruct, PrevTechIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevTechIds_MetaData), NewProp_PrevTechIds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_UnlockItemIds_Inner = { "UnlockItemIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_UnlockItemIds = { "UnlockItemIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechnologyConfigStruct, UnlockItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockItemIds_MetaData), NewProp_UnlockItemIds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedTechPoints_ValueProp = { "NeedTechPoints", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedTechPoints_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedTechPoints_Key_KeyProp = { "NeedTechPoints_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModTechPointType, METADATA_PARAMS(0, nullptr) }; // 1067038117
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedTechPoints = { "NeedTechPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechnologyConfigStruct, NeedTechPoints), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeedTechPoints_MetaData), NewProp_NeedTechPoints_MetaData) }; // 1067038117
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedResources_ValueProp = { "NeedResources", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedResources_Key_KeyProp = { "NeedResources_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedResources = { "NeedResources", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechnologyConfigStruct, NeedResources), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeedResources_MetaData), NewProp_NeedResources_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedForceLevel = { "NeedForceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechnologyConfigStruct, NeedForceLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeedForceLevel_MetaData), NewProp_NeedForceLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_UIX = { "UIX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechnologyConfigStruct, UIX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIX_MetaData), NewProp_UIX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_UIY = { "UIY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechnologyConfigStruct, UIY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIY_MetaData), NewProp_UIY_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_TechDesc = { "TechDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechnologyConfigStruct, TechDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TechDesc_MetaData), NewProp_TechDesc_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_FormatItemTechDesc = { "FormatItemTechDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTechnologyConfigStruct, FormatItemTechDesc), Z_Construct_UScriptStruct_FModFormatText, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatItemTechDesc_MetaData), NewProp_FormatItemTechDesc_MetaData) }; // 3853051553
void Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((FModTechnologyConfigStruct*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModTechnologyConfigStruct), &Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enable_MetaData), NewProp_Enable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_TechName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_DifficultyLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_DifficultyLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_PrevTechIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_PrevTechIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_UnlockItemIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_UnlockItemIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedTechPoints_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedTechPoints_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedTechPoints_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedTechPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedResources_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedResources_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedResources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_NeedForceLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_UIX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_UIY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_TechDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_FormatItemTechDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewProp_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModTechnologyConfigStruct",
	Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::PropPointers),
	sizeof(FModTechnologyConfigStruct),
	alignof(FModTechnologyConfigStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModTechnologyConfigStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModTechnologyConfigStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModTechnologyConfigStruct.InnerSingleton, Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModTechnologyConfigStruct.InnerSingleton;
}
// ********** End ScriptStruct FModTechnologyConfigStruct ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_TechnologyDataStruct_h__Script_CreateModPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModTechUnlockItemType_StaticEnum, TEXT("EModTechUnlockItemType"), &Z_Registration_Info_UEnum_EModTechUnlockItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1477145340U) },
		{ EModTechCategory_StaticEnum, TEXT("EModTechCategory"), &Z_Registration_Info_UEnum_EModTechCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2158225582U) },
		{ EModTechLevel_StaticEnum, TEXT("EModTechLevel"), &Z_Registration_Info_UEnum_EModTechLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 278949742U) },
		{ EModTechPointType_StaticEnum, TEXT("EModTechPointType"), &Z_Registration_Info_UEnum_EModTechPointType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1067038117U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModTechUnlockItemConigStruct::StaticStruct, Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics::NewStructOps, TEXT("ModTechUnlockItemConigStruct"), &Z_Registration_Info_UScriptStruct_FModTechUnlockItemConigStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModTechUnlockItemConigStruct), 4212895362U) },
		{ FModTechnologyConfigStruct::StaticStruct, Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics::NewStructOps, TEXT("ModTechnologyConfigStruct"), &Z_Registration_Info_UScriptStruct_FModTechnologyConfigStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModTechnologyConfigStruct), 4234222890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_TechnologyDataStruct_h__Script_CreateModPlugin_1109269081(TEXT("/Script/CreateModPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_TechnologyDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_TechnologyDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_TechnologyDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_TechnologyDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
