// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuffDataStruct.h"
#include "AttributeSet.h"
#include "BaseDataStruct.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBuffDataStruct() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModBuffOriginType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModBuffType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModItemQuality();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModCommonBuff();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModDataBase();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModFormatText();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_CreateModPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EModBuffType **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModBuffType;
static UEnum* EModBuffType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModBuffType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModBuffType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModBuffType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModBuffType"));
	}
	return Z_Registration_Info_UEnum_EModBuffType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModBuffType>()
{
	return EModBuffType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModBuffType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Buff\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "FixedTime.Comment", "//\xe5\x9b\xba\xe5\xae\x9a\xe6\x97\xb6\xe9\x97\xb4\n" },
		{ "FixedTime.Name", "EModBuffType::FixedTime" },
		{ "FixedTime.ToolTip", "\xe5\x9b\xba\xe5\xae\x9a\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ForEver.Comment", "//\xe6\xb0\xb8\xe4\xb9\x85\n" },
		{ "ForEver.Name", "EModBuffType::ForEver" },
		{ "ForEver.ToolTip", "\xe6\xb0\xb8\xe4\xb9\x85" },
		{ "Instant.Comment", "//\xe7\x9e\xac\xe6\x97\xb6\n" },
		{ "Instant.Name", "EModBuffType::Instant" },
		{ "Instant.ToolTip", "\xe7\x9e\xac\xe6\x97\xb6" },
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Buff\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModBuffType::ForEver", (int64)EModBuffType::ForEver },
		{ "EModBuffType::FixedTime", (int64)EModBuffType::FixedTime },
		{ "EModBuffType::Instant", (int64)EModBuffType::Instant },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModBuffType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModBuffType",
	"EModBuffType",
	Z_Construct_UEnum_CreateModPlugin_EModBuffType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModBuffType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModBuffType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModBuffType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModBuffType()
{
	if (!Z_Registration_Info_UEnum_EModBuffType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModBuffType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModBuffType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModBuffType.InnerSingleton;
}
// ********** End Enum EModBuffType ****************************************************************

// ********** Begin Enum EModBuffOriginType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModBuffOriginType;
static UEnum* EModBuffOriginType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModBuffOriginType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModBuffOriginType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModBuffOriginType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModBuffOriginType"));
	}
	return Z_Registration_Info_UEnum_EModBuffOriginType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModBuffOriginType>()
{
	return EModBuffOriginType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModBuffOriginType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Building.Comment", "//\xe5\xbb\xba\xe7\xad\x91\n" },
		{ "Building.Name", "EModBuffOriginType::Building" },
		{ "Building.ToolTip", "\xe5\xbb\xba\xe7\xad\x91" },
		{ "BuildingEffectRange.Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe8\x8c\x83\xe5\x9b\xb4\xe5\xbd\xb1\xe5\x93\x8d\n" },
		{ "BuildingEffectRange.Name", "EModBuffOriginType::BuildingEffectRange" },
		{ "BuildingEffectRange.ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe8\x8c\x83\xe5\x9b\xb4\xe5\xbd\xb1\xe5\x93\x8d" },
		{ "CombinationBuilding.Comment", "//\xe7\xbb\x84\xe5\x90\x88\xe5\xbb\xba\xe7\xad\x91\n" },
		{ "CombinationBuilding.Name", "EModBuffOriginType::CombinationBuilding" },
		{ "CombinationBuilding.ToolTip", "\xe7\xbb\x84\xe5\x90\x88\xe5\xbb\xba\xe7\xad\x91" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Buff\xe7\x9a\x84\xe6\x9d\xa5\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "HeatSource.Comment", "//\xe7\x83\xad\xe6\xba\x90\n" },
		{ "HeatSource.Name", "EModBuffOriginType::HeatSource" },
		{ "HeatSource.ToolTip", "\xe7\x83\xad\xe6\xba\x90" },
		{ "Injury.Comment", "//\xe4\xbc\xa4\xe5\x8a\xbf\n" },
		{ "Injury.Name", "EModBuffOriginType::Injury" },
		{ "Injury.ToolTip", "\xe4\xbc\xa4\xe5\x8a\xbf" },
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
		{ "NewGame.Comment", "//\xe6\x96\xb0\xe6\xb8\xb8\xe6\x88\x8f\n" },
		{ "NewGame.Name", "EModBuffOriginType::NewGame" },
		{ "NewGame.ToolTip", "\xe6\x96\xb0\xe6\xb8\xb8\xe6\x88\x8f" },
		{ "None.Name", "EModBuffOriginType::None" },
		{ "Room.Comment", "//\xe6\x88\xbf\xe9\x97\xb4\n" },
		{ "Room.Name", "EModBuffOriginType::Room" },
		{ "Room.ToolTip", "\xe6\x88\xbf\xe9\x97\xb4" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Buff\xe7\x9a\x84\xe6\x9d\xa5\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "Weather.Comment", "//\xe5\xa4\xa9\xe6\xb0\x94\n" },
		{ "Weather.Name", "EModBuffOriginType::Weather" },
		{ "Weather.ToolTip", "\xe5\xa4\xa9\xe6\xb0\x94" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModBuffOriginType::None", (int64)EModBuffOriginType::None },
		{ "EModBuffOriginType::Building", (int64)EModBuffOriginType::Building },
		{ "EModBuffOriginType::Room", (int64)EModBuffOriginType::Room },
		{ "EModBuffOriginType::CombinationBuilding", (int64)EModBuffOriginType::CombinationBuilding },
		{ "EModBuffOriginType::NewGame", (int64)EModBuffOriginType::NewGame },
		{ "EModBuffOriginType::Injury", (int64)EModBuffOriginType::Injury },
		{ "EModBuffOriginType::Weather", (int64)EModBuffOriginType::Weather },
		{ "EModBuffOriginType::HeatSource", (int64)EModBuffOriginType::HeatSource },
		{ "EModBuffOriginType::BuildingEffectRange", (int64)EModBuffOriginType::BuildingEffectRange },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModBuffOriginType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModBuffOriginType",
	"EModBuffOriginType",
	Z_Construct_UEnum_CreateModPlugin_EModBuffOriginType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModBuffOriginType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModBuffOriginType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModBuffOriginType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModBuffOriginType()
{
	if (!Z_Registration_Info_UEnum_EModBuffOriginType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModBuffOriginType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModBuffOriginType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModBuffOriginType.InnerSingleton;
}
// ********** End Enum EModBuffOriginType **********************************************************

// ********** Begin ScriptStruct FModCommonBuff ****************************************************
static_assert(std::is_polymorphic<FModCommonBuff>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModCommonBuff cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModCommonBuff;
class UScriptStruct* FModCommonBuff::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModCommonBuff.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModCommonBuff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModCommonBuff, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModCommonBuff"));
	}
	return Z_Registration_Info_UScriptStruct_FModCommonBuff.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModCommonBuff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x80\x9a\xe7\x94\xa8""BUFF\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe7\x94\xa8""BUFF" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffName_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BUFF\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BUFF\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffClassifyTag_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BUFF\xe5\x88\x86\xe7\xb1\xbbTag\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BUFF\xe5\x88\x86\xe7\xb1\xbbTag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateMastHaveTags_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BUFF\xe6\xbf\x80\xe6\xb4\xbb\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BUFF\xe6\xbf\x80\xe6\xb4\xbb\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateMastNotHaveTags_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BUFF\xe6\xbf\x80\xe6\xb4\xbb\xe4\xb8\x8d\xe8\x83\xbd\xe6\x9c\x89\xe7\x9a\x84\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BUFF\xe6\xbf\x80\xe6\xb4\xbb\xe4\xb8\x8d\xe8\x83\xbd\xe6\x9c\x89\xe7\x9a\x84\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffIcon_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BUFF\xe5\x9b\xbe\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BUFF\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShow_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BUFF\xe5\xb1\x95\xe7\xa4\xba\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BUFF\xe5\xb1\x95\xe7\xa4\xba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Describe_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BUFF\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BUFF\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatDescribe_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96\xe7\x9a\x84 BUFF\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96\xe7\x9a\x84 BUFF\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BUFF\xe7\x9a\x84\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7 \xe8\xb6\x8a\xe5\xa4\xa7\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xe8\xb6\x8a\xe9\xab\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BUFF\xe7\x9a\x84\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7 \xe8\xb6\x8a\xe5\xa4\xa7\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xe8\xb6\x8a\xe9\xab\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x93\x81\xe8\xb4\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x93\x81\xe8\xb4\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationType_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//buff\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "buff\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4 \xe7\xa7\x92\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4 \xe7\xa7\x92\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffects_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x95\x88\xe6\x9e\x9cGe\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x95\x88\xe6\x9e\x9cGe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x95\x88\xe6\x9e\x9c\xe4\xb8\xad\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xb8\xad\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagContainer_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\xba\xe8\x87\xaa\xe8\xba\xab\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84tag\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xba\xe8\x87\xaa\xe8\xba\xab\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84tag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConflictBuffID_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x86\xb2\xe7\xaa\x81\xe7\x9a\x84""buff ID\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\xb2\xe7\xaa\x81\xe7\x9a\x84""buff ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSuperpositions_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x9b\xb8\xe5\x90\x8c\xe7\x9a\x84""buff\xe5\x8f\xaf\xe5\x8f\xa0\xe5\x8a\xa0\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0 0 \xe6\x98\xaf\xe6\x97\xa0\xe9\x99\x90\xe5\x88\xb6 1 \xe9\xbb\x98\xe8\xae\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb8\xe5\x90\x8c\xe7\x9a\x84""buff\xe5\x8f\xaf\xe5\x8f\xa0\xe5\x8a\xa0\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0 0 \xe6\x98\xaf\xe6\x97\xa0\xe9\x99\x90\xe5\x88\xb6 1 \xe9\xbb\x98\xe8\xae\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginGuid_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9d\xa5\xe6\xba\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\xa5\xe6\xba\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginType_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9d\xa5\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\xa5\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffGuid_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xaf\x8f\xe4\xb8\xaa""buff\xe7\x8b\xac\xe7\xab\x8b\xe7\x9a\x84guid\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaf\x8f\xe4\xb8\xaa""buff\xe7\x8b\xac\xe7\xab\x8b\xe7\x9a\x84guid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectText_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//buff\xe5\x9c\xa8\xe6\x96\xbd\xe5\x8a\xa0GE\xe6\x97\xb6\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba \xe4\xb8\x8eGE \xe4\xb8\x80\xe4\xb8\x80\xe5\xaf\xb9\xe5\xba\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "buff\xe5\x9c\xa8\xe6\x96\xbd\xe5\x8a\xa0GE\xe6\x97\xb6\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba \xe4\xb8\x8eGE \xe4\xb8\x80\xe4\xb8\x80\xe5\xaf\xb9\xe5\xba\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActivated_MetaData[] = {
		{ "Category", "CommonBuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d""buff\xe7\x9a\x84\xe6\xbf\x80\xe6\xb4\xbb\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d""buff\xe7\x9a\x84\xe6\xbf\x80\xe6\xb4\xbb\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSave_MetaData[] = {
		{ "Category", "CommonBuff" },
		{ "ModuleRelativePath", "Public/BuffDataStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_BuffName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuffClassifyTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateMastHaveTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateMastNotHaveTags;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BuffIcon;
	static void NewProp_bShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Describe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FormatDescribe;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Quality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DurationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DurationType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_GameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffects;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attributes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagContainer;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConflictBuffID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConflictBuffID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSuperpositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginGuid;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OriginType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OriginType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuffGuid;
	static const UECodeGen_Private::FTextPropertyParams NewProp_GameplayEffectText_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectText;
	static void NewProp_bIsActivated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActivated;
	static void NewProp_bSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModCommonBuff>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_BuffName = { "BuffName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, BuffName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffName_MetaData), NewProp_BuffName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_BuffClassifyTag = { "BuffClassifyTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, BuffClassifyTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffClassifyTag_MetaData), NewProp_BuffClassifyTag_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_ActivateMastHaveTags = { "ActivateMastHaveTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, ActivateMastHaveTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateMastHaveTags_MetaData), NewProp_ActivateMastHaveTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_ActivateMastNotHaveTags = { "ActivateMastNotHaveTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, ActivateMastNotHaveTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateMastNotHaveTags_MetaData), NewProp_ActivateMastNotHaveTags_MetaData) }; // 2104890724
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_BuffIcon = { "BuffIcon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, BuffIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffIcon_MetaData), NewProp_BuffIcon_MetaData) };
void Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_bShow_SetBit(void* Obj)
{
	((FModCommonBuff*)Obj)->bShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModCommonBuff), &Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShow_MetaData), NewProp_bShow_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Describe = { "Describe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, Describe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Describe_MetaData), NewProp_Describe_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_FormatDescribe = { "FormatDescribe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, FormatDescribe), Z_Construct_UScriptStruct_FModFormatText, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatDescribe_MetaData), NewProp_FormatDescribe_MetaData) }; // 3853051553
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Quality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, Quality), Z_Construct_UEnum_CreateModPlugin_EModItemQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quality_MetaData), NewProp_Quality_MetaData) }; // 3220179462
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_DurationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_DurationType = { "DurationType", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, DurationType), Z_Construct_UEnum_CreateModPlugin_EModBuffType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationType_MetaData), NewProp_DurationType_MetaData) }; // 3389475503
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_GameplayEffects_Inner = { "GameplayEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_GameplayEffects = { "GameplayEffects", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, GameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffects_MetaData), NewProp_GameplayEffects_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Attributes_ValueProp = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Attributes_Key_KeyProp = { "Attributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 1212282043
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, Attributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 1212282043
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_GameplayTagContainer = { "GameplayTagContainer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, GameplayTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagContainer_MetaData), NewProp_GameplayTagContainer_MetaData) }; // 2104890724
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_ConflictBuffID_Inner = { "ConflictBuffID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_ConflictBuffID = { "ConflictBuffID", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, ConflictBuffID), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConflictBuffID_MetaData), NewProp_ConflictBuffID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_NumberOfSuperpositions = { "NumberOfSuperpositions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, NumberOfSuperpositions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfSuperpositions_MetaData), NewProp_NumberOfSuperpositions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_OriginGuid = { "OriginGuid", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, OriginGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginGuid_MetaData), NewProp_OriginGuid_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_OriginType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_OriginType = { "OriginType", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, OriginType), Z_Construct_UEnum_CreateModPlugin_EModBuffOriginType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginType_MetaData), NewProp_OriginType_MetaData) }; // 3608023433
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_BuffGuid = { "BuffGuid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, BuffGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffGuid_MetaData), NewProp_BuffGuid_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_GameplayEffectText_Inner = { "GameplayEffectText", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_GameplayEffectText = { "GameplayEffectText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonBuff, GameplayEffectText), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectText_MetaData), NewProp_GameplayEffectText_MetaData) };
void Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_bIsActivated_SetBit(void* Obj)
{
	((FModCommonBuff*)Obj)->bIsActivated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_bIsActivated = { "bIsActivated", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModCommonBuff), &Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_bIsActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActivated_MetaData), NewProp_bIsActivated_MetaData) };
void Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_bSave_SetBit(void* Obj)
{
	((FModCommonBuff*)Obj)->bSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModCommonBuff), &Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSave_MetaData), NewProp_bSave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModCommonBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_BuffName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_BuffClassifyTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_ActivateMastHaveTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_ActivateMastNotHaveTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_BuffIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_bShow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Describe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_FormatDescribe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Quality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_DurationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_DurationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_GameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_GameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Attributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Attributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_GameplayTagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_ConflictBuffID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_ConflictBuffID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_NumberOfSuperpositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_OriginGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_OriginType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_OriginType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_BuffGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_GameplayEffectText_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_GameplayEffectText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_bIsActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewProp_bSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCommonBuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModCommonBuff_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModCommonBuff",
	Z_Construct_UScriptStruct_FModCommonBuff_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCommonBuff_Statics::PropPointers),
	sizeof(FModCommonBuff),
	alignof(FModCommonBuff),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCommonBuff_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModCommonBuff_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModCommonBuff()
{
	if (!Z_Registration_Info_UScriptStruct_FModCommonBuff.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModCommonBuff.InnerSingleton, Z_Construct_UScriptStruct_FModCommonBuff_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModCommonBuff.InnerSingleton;
}
// ********** End ScriptStruct FModCommonBuff ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuffDataStruct_h__Script_CreateModPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModBuffType_StaticEnum, TEXT("EModBuffType"), &Z_Registration_Info_UEnum_EModBuffType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3389475503U) },
		{ EModBuffOriginType_StaticEnum, TEXT("EModBuffOriginType"), &Z_Registration_Info_UEnum_EModBuffOriginType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3608023433U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModCommonBuff::StaticStruct, Z_Construct_UScriptStruct_FModCommonBuff_Statics::NewStructOps, TEXT("ModCommonBuff"), &Z_Registration_Info_UScriptStruct_FModCommonBuff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModCommonBuff), 2539601478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuffDataStruct_h__Script_CreateModPlugin_2112118189(TEXT("/Script/CreateModPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuffDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuffDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuffDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuffDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
