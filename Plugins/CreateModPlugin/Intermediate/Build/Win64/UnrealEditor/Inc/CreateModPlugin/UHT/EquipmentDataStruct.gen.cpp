// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentDataStruct.h"
#include "AbilityEnum.h"
#include "AttributeSet.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEquipmentDataStruct() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModCommonButtonType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModEquipmentType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModCharacterApparel();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModCharacterEquipment();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModCharacterTool();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModCharacterWeapon();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModDataBase();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModEquipmentAttribute();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModEquipmentQualityRange();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModFabricateEquipmentData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModFormulaData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModGenerateEquipmentData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModInventoryGeneralData();
ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FFormatText();
UPackage* Z_Construct_UPackage__Script_CreateModPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EModEquipmentType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModEquipmentType;
static UEnum* EModEquipmentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModEquipmentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModEquipmentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModEquipmentType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModEquipmentType"));
	}
	return Z_Registration_Info_UEnum_EModEquipmentType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModEquipmentType>()
{
	return EModEquipmentType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModEquipmentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Armor.Comment", "//\xe9\x98\xb2\xe5\x85\xb7,\n" },
		{ "Armor.Name", "EModEquipmentType::Armor" },
		{ "Armor.ToolTip", "\xe9\x98\xb2\xe5\x85\xb7," },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
		{ "None.Name", "EModEquipmentType::None" },
		{ "Tool.Comment", "//\xe5\xb7\xa5\xe5\x85\xb7\n" },
		{ "Tool.Name", "EModEquipmentType::Tool" },
		{ "Tool.ToolTip", "\xe5\xb7\xa5\xe5\x85\xb7" },
		{ "Weapon.Comment", "//\xe6\xad\xa6\xe5\x99\xa8\n" },
		{ "Weapon.Name", "EModEquipmentType::Weapon" },
		{ "Weapon.ToolTip", "\xe6\xad\xa6\xe5\x99\xa8" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModEquipmentType::None", (int64)EModEquipmentType::None },
		{ "EModEquipmentType::Weapon", (int64)EModEquipmentType::Weapon },
		{ "EModEquipmentType::Armor", (int64)EModEquipmentType::Armor },
		{ "EModEquipmentType::Tool", (int64)EModEquipmentType::Tool },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModEquipmentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModEquipmentType",
	"EModEquipmentType",
	Z_Construct_UEnum_CreateModPlugin_EModEquipmentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModEquipmentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModEquipmentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModEquipmentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModEquipmentType()
{
	if (!Z_Registration_Info_UEnum_EModEquipmentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModEquipmentType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModEquipmentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModEquipmentType.InnerSingleton;
}
// ********** End Enum EModEquipmentType ***********************************************************

// ********** Begin ScriptStruct FModCharacterEquipment ********************************************
static_assert(std::is_polymorphic<FModCharacterEquipment>() == std::is_polymorphic<FModInventoryGeneralData>(), "USTRUCT FModCharacterEquipment cannot be polymorphic unless super FModInventoryGeneralData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModCharacterEquipment;
class UScriptStruct* FModCharacterEquipment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModCharacterEquipment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModCharacterEquipment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModCharacterEquipment, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModCharacterEquipment"));
	}
	return Z_Registration_Info_UScriptStruct_FModCharacterEquipment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModCharacterEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe8\xa3\x85\xe5\xa4\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe8\xa3\x85\xe5\xa4\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentType_MetaData[] = {
		{ "Category", "Equipment Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainAttributes_MetaData[] = {
		{ "Category", "Equipment Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84\xe4\xb8\xbb\xe5\xb1\x9e\xe6\x80\xa7(EquipmentAttribute\xe8\xa1\xa8\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84\xe4\xb8\xbb\xe5\xb1\x9e\xe6\x80\xa7(EquipmentAttribute\xe8\xa1\xa8\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubAttributes_MetaData[] = {
		{ "Category", "Equipment Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84\xe6\xac\xa1\xe5\xb1\x9e\xe6\x80\xa7(EquipmentAttribute\xe8\xa1\xa8\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84\xe6\xac\xa1\xe5\xb1\x9e\xe6\x80\xa7(EquipmentAttribute\xe8\xa1\xa8\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentAbility_MetaData[] = {
		{ "Category", "Equipment Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe8\xa3\x85\xe5\xa4\x87\xe8\x87\xaa\xe5\xb8\xa6\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe8\xa3\x85\xe5\xa4\x87\xe8\x87\xaa\xe5\xb8\xa6\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefitDurability_MetaData[] = {
		{ "Category", "Puppet Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x82\x80\xe5\x84\xa1\xe6\x94\xb9\xe8\xa3\x85\xe8\x80\x90\xe4\xb9\x85\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x82\x80\xe5\x84\xa1\xe6\x94\xb9\xe8\xa3\x85\xe8\x80\x90\xe4\xb9\x85\xe5\xba\xa6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MainAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MainAttributes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubAttributes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EquipmentAbility_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentAbility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefitDurability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModCharacterEquipment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_EquipmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_EquipmentType = { "EquipmentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterEquipment, EquipmentType), Z_Construct_UEnum_CreateModPlugin_EModEquipmentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentType_MetaData), NewProp_EquipmentType_MetaData) }; // 117580300
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_MainAttributes_Inner = { "MainAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_MainAttributes = { "MainAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterEquipment, MainAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainAttributes_MetaData), NewProp_MainAttributes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_SubAttributes_Inner = { "SubAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_SubAttributes = { "SubAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterEquipment, SubAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubAttributes_MetaData), NewProp_SubAttributes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_EquipmentAbility_Inner = { "EquipmentAbility", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_EquipmentAbility = { "EquipmentAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterEquipment, EquipmentAbility), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentAbility_MetaData), NewProp_EquipmentAbility_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_RefitDurability = { "RefitDurability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterEquipment, RefitDurability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefitDurability_MetaData), NewProp_RefitDurability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_EquipmentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_EquipmentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_MainAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_MainAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_SubAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_SubAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_EquipmentAbility_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_EquipmentAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewProp_RefitDurability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModInventoryGeneralData,
	&NewStructOps,
	"ModCharacterEquipment",
	Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::PropPointers),
	sizeof(FModCharacterEquipment),
	alignof(FModCharacterEquipment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModCharacterEquipment()
{
	if (!Z_Registration_Info_UScriptStruct_FModCharacterEquipment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModCharacterEquipment.InnerSingleton, Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModCharacterEquipment.InnerSingleton;
}
// ********** End ScriptStruct FModCharacterEquipment **********************************************

// ********** Begin ScriptStruct FModCharacterTool *************************************************
static_assert(std::is_polymorphic<FModCharacterTool>() == std::is_polymorphic<FModCharacterEquipment>(), "USTRUCT FModCharacterTool cannot be polymorphic unless super FModCharacterEquipment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModCharacterTool;
class UScriptStruct* FModCharacterTool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModCharacterTool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModCharacterTool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModCharacterTool, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModCharacterTool"));
	}
	return Z_Registration_Info_UScriptStruct_FModCharacterTool.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModCharacterTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectLossDurability_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x87\x87\xe9\x9b\x86\xe6\x8e\x89\xe8\x80\x90\xe4\xb9\x85\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x87\x87\xe9\x9b\x86\xe6\x8e\x89\xe8\x80\x90\xe4\xb9\x85" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollectLossDurability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModCharacterTool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModCharacterTool_Statics::NewProp_CollectLossDurability = { "CollectLossDurability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterTool, CollectLossDurability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectLossDurability_MetaData), NewProp_CollectLossDurability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModCharacterTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterTool_Statics::NewProp_CollectLossDurability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModCharacterTool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModCharacterEquipment,
	&NewStructOps,
	"ModCharacterTool",
	Z_Construct_UScriptStruct_FModCharacterTool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterTool_Statics::PropPointers),
	sizeof(FModCharacterTool),
	alignof(FModCharacterTool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterTool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModCharacterTool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModCharacterTool()
{
	if (!Z_Registration_Info_UScriptStruct_FModCharacterTool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModCharacterTool.InnerSingleton, Z_Construct_UScriptStruct_FModCharacterTool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModCharacterTool.InnerSingleton;
}
// ********** End ScriptStruct FModCharacterTool ***************************************************

// ********** Begin ScriptStruct FModCharacterWeapon ***********************************************
static_assert(std::is_polymorphic<FModCharacterWeapon>() == std::is_polymorphic<FModCharacterEquipment>(), "USTRUCT FModCharacterWeapon cannot be polymorphic unless super FModCharacterEquipment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModCharacterWeapon;
class UScriptStruct* FModCharacterWeapon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModCharacterWeapon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModCharacterWeapon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModCharacterWeapon, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModCharacterWeapon"));
	}
	return Z_Registration_Info_UScriptStruct_FModCharacterWeapon.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModCharacterWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe6\xad\xa6\xe5\x99\xa8\xe7\xbb\x93\xe6\x9e\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe6\xad\xa6\xe5\x99\xa8\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa6\xe5\x99\xa8\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa6\xe5\x99\xa8\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipWeaponAbility_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa3\x85\xe5\xa4\x87\xe6\xad\xa4\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa3\x85\xe5\xa4\x87\xe6\xad\xa4\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DemountWeaponAbility_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8d\xb8\xe8\xbd\xbd\xe6\xad\xa4\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xb8\xe8\xbd\xbd\xe6\xad\xa4\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandParentSocket_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\x8b\xe6\x8c\x81\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe6\x8f\x92\xe6\xa7\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x8b\xe6\x8c\x81\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe6\x8f\x92\xe6\xa7\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryParentSocket_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x90\xba\xe5\xb8\xa6\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe6\x8f\x92\xe6\xa7\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x90\xba\xe5\xb8\xa6\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe6\x8f\x92\xe6\xa7\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponStaticMesh_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInjuryType_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbc\xa4\xe5\xae\xb3\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbc\xa4\xe5\xae\xb3\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSecondaryWeapon_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe7\xac\xac\xe4\xba\x8c\xe4\xb8\xaa\xe6\xad\xa6\xe5\x99\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe7\xac\xac\xe4\xba\x8c\xe4\xb8\xaa\xe6\xad\xa6\xe5\x99\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryHandParentSocket_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xac\xac\xe4\xba\x8c\xe6\x89\x8b\xe6\x8c\x81\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe6\x8f\x92\xe6\xa7\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xac\xac\xe4\xba\x8c\xe6\x89\x8b\xe6\x8c\x81\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe6\x8f\x92\xe6\xa7\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryCarryParentSocket_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xac\xac\xe4\xba\x8c\xe6\x90\xba\xe5\xb8\xa6\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe6\x8f\x92\xe6\xa7\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xac\xac\xe4\xba\x8c\xe6\x90\xba\xe5\xb8\xa6\xe6\xad\xa6\xe5\x99\xa8\xe7\x9a\x84\xe6\x8f\x92\xe6\xa7\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeaponStaticMesh_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xac\xac\xe4\xba\x8c\xe6\xad\xa6\xe5\x99\xa8\xe6\xa8\xa1\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xac\xac\xe4\xba\x8c\xe6\xad\xa6\xe5\x99\xa8\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BattleBlendSpace_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa6\xe5\x99\xa8\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xb7\xb7\xe5\x90\x88\xe7\xa9\xba\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa6\xe5\x99\xa8\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xb7\xb7\xe5\x90\x88\xe7\xa9\xba\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackLossDurability_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbd\xbf\xe7\x94\xa8\xe6\x8a\x80\xe8\x83\xbd\xe6\x97\xb6\xe5\x87\x8f\xe5\xb0\x91\xe7\x9a\x84\xe6\xad\xa6\xe5\x99\xa8\xe8\x80\x90\xe4\xb9\x85\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe6\x8a\x80\xe8\x83\xbd\xe6\x97\xb6\xe5\x87\x8f\xe5\xb0\x91\xe7\x9a\x84\xe6\xad\xa6\xe5\x99\xa8\xe8\x80\x90\xe4\xb9\x85" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EquipWeaponAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DemountWeaponAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HandParentSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CarryParentSocket;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WeaponStaticMesh;
	static const UECodeGen_Private::FTextPropertyParams NewProp_WeaponInjuryType;
	static void NewProp_bSecondaryWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecondaryWeapon;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SecondaryHandParentSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SecondaryCarryParentSocket;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SecondaryWeaponStaticMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BattleBlendSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackLossDurability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModCharacterWeapon>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterWeapon, WeaponType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponType_MetaData), NewProp_WeaponType_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_EquipWeaponAbility = { "EquipWeaponAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterWeapon, EquipWeaponAbility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipWeaponAbility_MetaData), NewProp_EquipWeaponAbility_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_DemountWeaponAbility = { "DemountWeaponAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterWeapon, DemountWeaponAbility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DemountWeaponAbility_MetaData), NewProp_DemountWeaponAbility_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_HandParentSocket = { "HandParentSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterWeapon, HandParentSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandParentSocket_MetaData), NewProp_HandParentSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_CarryParentSocket = { "CarryParentSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterWeapon, CarryParentSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryParentSocket_MetaData), NewProp_CarryParentSocket_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_WeaponStaticMesh = { "WeaponStaticMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterWeapon, WeaponStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponStaticMesh_MetaData), NewProp_WeaponStaticMesh_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_WeaponInjuryType = { "WeaponInjuryType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterWeapon, WeaponInjuryType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponInjuryType_MetaData), NewProp_WeaponInjuryType_MetaData) };
void Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_bSecondaryWeapon_SetBit(void* Obj)
{
	((FModCharacterWeapon*)Obj)->bSecondaryWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_bSecondaryWeapon = { "bSecondaryWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModCharacterWeapon), &Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_bSecondaryWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSecondaryWeapon_MetaData), NewProp_bSecondaryWeapon_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_SecondaryHandParentSocket = { "SecondaryHandParentSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterWeapon, SecondaryHandParentSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryHandParentSocket_MetaData), NewProp_SecondaryHandParentSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_SecondaryCarryParentSocket = { "SecondaryCarryParentSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterWeapon, SecondaryCarryParentSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryCarryParentSocket_MetaData), NewProp_SecondaryCarryParentSocket_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_SecondaryWeaponStaticMesh = { "SecondaryWeaponStaticMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterWeapon, SecondaryWeaponStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryWeaponStaticMesh_MetaData), NewProp_SecondaryWeaponStaticMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_BattleBlendSpace = { "BattleBlendSpace", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterWeapon, BattleBlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BattleBlendSpace_MetaData), NewProp_BattleBlendSpace_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_AttackLossDurability = { "AttackLossDurability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterWeapon, AttackLossDurability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackLossDurability_MetaData), NewProp_AttackLossDurability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_WeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_EquipWeaponAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_DemountWeaponAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_HandParentSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_CarryParentSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_WeaponStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_WeaponInjuryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_bSecondaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_SecondaryHandParentSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_SecondaryCarryParentSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_SecondaryWeaponStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_BattleBlendSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewProp_AttackLossDurability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModCharacterEquipment,
	&NewStructOps,
	"ModCharacterWeapon",
	Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::PropPointers),
	sizeof(FModCharacterWeapon),
	alignof(FModCharacterWeapon),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModCharacterWeapon()
{
	if (!Z_Registration_Info_UScriptStruct_FModCharacterWeapon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModCharacterWeapon.InnerSingleton, Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModCharacterWeapon.InnerSingleton;
}
// ********** End ScriptStruct FModCharacterWeapon *************************************************

// ********** Begin ScriptStruct FModCharacterApparel **********************************************
static_assert(std::is_polymorphic<FModCharacterApparel>() == std::is_polymorphic<FModCharacterEquipment>(), "USTRUCT FModCharacterApparel cannot be polymorphic unless super FModCharacterEquipment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModCharacterApparel;
class UScriptStruct* FModCharacterApparel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModCharacterApparel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModCharacterApparel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModCharacterApparel, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModCharacterApparel"));
	}
	return Z_Registration_Info_UScriptStruct_FModCharacterApparel.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModCharacterApparel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe9\x98\xb2\xe5\x85\xb7\xe7\xbb\x93\xe6\x9e\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe9\x98\xb2\xe5\x85\xb7\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorType_MetaData[] = {
		{ "Category", "Apparel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x98\xb2\xe5\x85\xb7\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x98\xb2\xe5\x85\xb7\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApparelMaleDataAsset_MetaData[] = {
		{ "Category", "Apparel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\xb7\xe5\xa4\x96\xe8\xa7\x82\xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xe5\xbc\x95\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xb7\xe5\xa4\x96\xe8\xa7\x82\xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xe5\xbc\x95\xe7\x94\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApparelFemaleDataAsset_MetaData[] = {
		{ "Category", "Apparel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa5\xb3\xe5\xa4\x96\xe8\xa7\x82\xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xe5\xbc\x95\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa5\xb3\xe5\xa4\x96\xe8\xa7\x82\xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xe5\xbc\x95\xe7\x94\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialVariantsIndex_MetaData[] = {
		{ "Category", "Apparel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xe9\x87\x8c\xe5\xa4\x96\xe8\xa7\x82\xe6\x9d\x90\xe8\xb4\xa8\xe7\x9a\x84\xe7\xb4\xa2\xe5\xbc\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xe9\x87\x8c\xe5\xa4\x96\xe8\xa7\x82\xe6\x9d\x90\xe8\xb4\xa8\xe7\x9a\x84\xe7\xb4\xa2\xe5\xbc\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialColor_MetaData[] = {
		{ "Category", "Apparel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa4\x96\xe8\xa7\x82\xe6\x9d\x90\xe8\xb4\xa8\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe8\xa7\x82\xe6\x9d\x90\xe8\xb4\xa8\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeAttakedLossDurability_MetaData[] = {
		{ "Category", "Apparel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa2\xab\xe6\x94\xbb\xe5\x87\xbb\xe6\x97\xb6\xe5\x87\x8f\xe5\xb0\x91\xe7\x9a\x84\xe8\x80\x90\xe4\xb9\x85\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa2\xab\xe6\x94\xbb\xe5\x87\xbb\xe6\x97\xb6\xe5\x87\x8f\xe5\xb0\x91\xe7\x9a\x84\xe8\x80\x90\xe4\xb9\x85\xe5\xba\xa6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArmorType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ApparelMaleDataAsset;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ApparelFemaleDataAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialVariantsIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialColor_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialColor_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeAttakedLossDurability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModCharacterApparel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_ArmorType = { "ArmorType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterApparel, ArmorType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorType_MetaData), NewProp_ArmorType_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_ApparelMaleDataAsset = { "ApparelMaleDataAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterApparel, ApparelMaleDataAsset), Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApparelMaleDataAsset_MetaData), NewProp_ApparelMaleDataAsset_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_ApparelFemaleDataAsset = { "ApparelFemaleDataAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterApparel, ApparelFemaleDataAsset), Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApparelFemaleDataAsset_MetaData), NewProp_ApparelFemaleDataAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_MaterialVariantsIndex = { "MaterialVariantsIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterApparel, MaterialVariantsIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialVariantsIndex_MetaData), NewProp_MaterialVariantsIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_MaterialColor_ValueProp = { "MaterialColor", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_MaterialColor_Key_KeyProp = { "MaterialColor_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_MaterialColor = { "MaterialColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterApparel, MaterialColor), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialColor_MetaData), NewProp_MaterialColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_BeAttakedLossDurability = { "BeAttakedLossDurability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterApparel, BeAttakedLossDurability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeAttakedLossDurability_MetaData), NewProp_BeAttakedLossDurability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModCharacterApparel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_ArmorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_ApparelMaleDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_ApparelFemaleDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_MaterialVariantsIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_MaterialColor_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_MaterialColor_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_MaterialColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewProp_BeAttakedLossDurability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterApparel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModCharacterApparel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModCharacterEquipment,
	&NewStructOps,
	"ModCharacterApparel",
	Z_Construct_UScriptStruct_FModCharacterApparel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterApparel_Statics::PropPointers),
	sizeof(FModCharacterApparel),
	alignof(FModCharacterApparel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterApparel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModCharacterApparel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModCharacterApparel()
{
	if (!Z_Registration_Info_UScriptStruct_FModCharacterApparel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModCharacterApparel.InnerSingleton, Z_Construct_UScriptStruct_FModCharacterApparel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModCharacterApparel.InnerSingleton;
}
// ********** End ScriptStruct FModCharacterApparel ************************************************

// ********** Begin Enum EModCommonButtonType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModCommonButtonType;
static UEnum* EModCommonButtonType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModCommonButtonType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModCommonButtonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModCommonButtonType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModCommonButtonType"));
	}
	return Z_Registration_Info_UEnum_EModCommonButtonType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModCommonButtonType>()
{
	return EModCommonButtonType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModCommonButtonType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActivateMachine.Name", "EModCommonButtonType::ActivateMachine" },
		{ "ActivateMachine.ToolTip", "\xe6\xbf\x80\xe6\xb4\xbb\xe6\x9c\xba\xe5\x85\xb3" },
		{ "AddPuppet.Name", "EModCommonButtonType::AddPuppet" },
		{ "AddPuppet.ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x82\x80\xe5\x84\xa1" },
		{ "AddResource.Name", "EModCommonButtonType::AddResource" },
		{ "AddResource.ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x9d\x90\xe6\x96\x99\xe6\x8c\x89\xe9\x92\xae" },
		{ "AllotmentOwner.Name", "EModCommonButtonType::AllotmentOwner" },
		{ "AllotmentOwner.ToolTip", "\xe5\x88\x86\xe9\x85\x8d\xe6\x8b\xa5\xe6\x9c\x89\xe8\x80\x85" },
		{ "AllSelect.Name", "EModCommonButtonType::AllSelect" },
		{ "AllSelect.ToolTip", "\xe5\x85\xa8\xe9\x80\x89" },
		{ "ApplyCeremony.Name", "EModCommonButtonType::ApplyCeremony" },
		{ "ApplyCeremony.ToolTip", "\xe7\x94\xb3\xe8\xaf\xb7\xe4\xbb\xaa\xe5\xbc\x8f" },
		{ "AssignAnimals.Name", "EModCommonButtonType::AssignAnimals" },
		{ "AssignAnimals.ToolTip", "\xe5\x88\x86\xe9\x85\x8d\xe5\x8a\xa8\xe7\x89\xa9" },
		{ "BackButton.Name", "EModCommonButtonType::BackButton" },
		{ "BackButton.ToolTip", "\xe8\xbf\x94\xe5\x9b\x9e\xe6\x8c\x89\xe9\x92\xae" },
		{ "BatchAllSelect.Name", "EModCommonButtonType::BatchAllSelect" },
		{ "BatchAllSelect.ToolTip", "\xe6\x89\xb9\xe9\x87\x8f\xe5\x85\xa8\xe9\x80\x89" },
		{ "BatchCancelAllSelect.Name", "EModCommonButtonType::BatchCancelAllSelect" },
		{ "BatchCancelAllSelect.ToolTip", "\xe6\x89\xb9\xe9\x87\x8f\xe5\x8f\x96\xe6\xb6\x88\xe5\x85\xa8\xe9\x80\x89" },
		{ "BeControlled.Name", "EModCommonButtonType::BeControlled" },
		{ "BeControlled.ToolTip", "\xe8\xa2\xab\xe6\x8e\xa7\xe5\x88\xb6" },
		{ "BlueprintType", "true" },
		{ "Brewing.Name", "EModCommonButtonType::Brewing" },
		{ "Brewing.ToolTip", "\xe9\x85\xbf\xe9\x85\x92" },
		{ "BuildingAutoAddFuel.Name", "EModCommonButtonType::BuildingAutoAddFuel" },
		{ "BuildingAutoAddFuel.ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x87\x83\xe6\x96\x99" },
		{ "ButcherBody.Name", "EModCommonButtonType::ButcherBody" },
		{ "ButcherBody.ToolTip", "\xe5\xb1\xa0\xe5\xae\xb0" },
		{ "ButcherTamedAnimal.Name", "EModCommonButtonType::ButcherTamedAnimal" },
		{ "ButcherTamedAnimal.ToolTip", "\xe5\xb1\xa0\xe5\xae\xb0" },
		{ "CancelAllSelect.Name", "EModCommonButtonType::CancelAllSelect" },
		{ "CancelAllSelect.ToolTip", "\xe5\x8f\x96\xe6\xb6\x88\xe5\x85\xa8\xe9\x80\x89" },
		{ "CancelBuild.Name", "EModCommonButtonType::CancelBuild" },
		{ "CancelBuild.ToolTip", "\xe5\x8f\x96\xe6\xb6\x88\xe5\xbb\xba\xe9\x80\xa0" },
		{ "CancelChoose.Name", "EModCommonButtonType::CancelChoose" },
		{ "CancelChoose.ToolTip", "\xe5\x8f\x96\xe6\xb6\x88\xe9\x80\x89\xe6\x8b\xa9\xe6\x8c\x89\xe9\x92\xae" },
		{ "CancelOrder.Name", "EModCommonButtonType::CancelOrder" },
		{ "CancelOrder.ToolTip", "\xe5\x8f\x96\xe6\xb6\x88\xe5\x91\xbd\xe4\xbb\xa4" },
		{ "CatchAndHunt.Name", "EModCommonButtonType::CatchAndHunt" },
		{ "CatchAndHunt.ToolTip", "\xe6\x8d\x95\xe7\x8c\x8e" },
		{ "ChangePlant.Name", "EModCommonButtonType::ChangePlant" },
		{ "ChangePlant.ToolTip", "\xe5\x8f\x98\xe6\x9b\xb4\xe4\xbd\x9c\xe7\x89\xa9" },
		{ "ChangeRobotState.Name", "EModCommonButtonType::ChangeRobotState" },
		{ "ChangeRobotState.ToolTip", "\xe6\x94\xb9\xe5\x8f\x98\xe6\x9c\xba\xe5\x85\xb3\xe8\xa7\x92\xe8\x89\xb2\xe8\xbf\x90\xe8\xa1\x8c\xe7\x8a\xb6\xe6\x80\x81" },
		{ "ChangeRobotWork.Name", "EModCommonButtonType::ChangeRobotWork" },
		{ "ChangeRobotWork.ToolTip", "\xe5\x88\x87\xe6\x8d\xa2\xe6\x9c\xba\xe5\x85\xb3\xe8\xa7\x92\xe8\x89\xb2\xe5\xb7\xa5\xe4\xbd\x9c\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ChooseConsumeBuildings.Name", "EModCommonButtonType::ChooseConsumeBuildings" },
		{ "ChooseConsumeBuildings.ToolTip", "\xe9\x80\x89\xe6\x8b\xa9\xe8\x83\xbd\xe9\x87\x8f\xe7\xbd\x91\xe4\xb8\xad\xe6\x89\x80\xe6\x9c\x89\xe8\x80\x97\xe8\x83\xbd\xe5\xbb\xba\xe7\xad\x91" },
		{ "ChooseControlBuildings.Name", "EModCommonButtonType::ChooseControlBuildings" },
		{ "ChooseControlBuildings.ToolTip", "\xe9\x80\x89\xe6\x8b\xa9\xe8\x83\xbd\xe9\x87\x8f\xe7\xbd\x91\xe4\xb8\xad\xe6\x89\x80\xe6\x9c\x89\xe6\x8e\xa7\xe5\x88\xb6\xe5\xbb\xba\xe7\xad\x91" },
		{ "ChooseGenerateEnergyBuildings.Name", "EModCommonButtonType::ChooseGenerateEnergyBuildings" },
		{ "ChooseGenerateEnergyBuildings.ToolTip", "\xe9\x80\x89\xe6\x8b\xa9\xe8\x83\xbd\xe9\x87\x8f\xe7\xbd\x91\xe4\xb8\xad\xe6\x89\x80\xe6\x9c\x89\xe4\xba\xa7\xe8\x83\xbd\xe5\xbb\xba\xe7\xad\x91" },
		{ "ChoppingWood.Name", "EModCommonButtonType::ChoppingWood" },
		{ "ChoppingWood.ToolTip", "\xe5\x8a\x88\xe6\x9f\xb4" },
		{ "CloseFacility.Name", "EModCommonButtonType::CloseFacility" },
		{ "CloseFacility.ToolTip", "\xe5\x85\xb3\xe9\x97\xad\xe8\xae\xbe\xe5\xa4\x87\xe6\x8c\x89\xe9\x92\xae" },
		{ "ConfirmAddPuppet.Name", "EModCommonButtonType::ConfirmAddPuppet" },
		{ "ConfirmAddPuppet.ToolTip", "\xe7\xa1\xae\xe8\xae\xa4\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x82\x80\xe5\x84\xa1" },
		{ "ConfirmButton.Name", "EModCommonButtonType::ConfirmButton" },
		{ "ConfirmButton.ToolTip", "\xe7\xa1\xae\xe5\xae\x9a\xe6\x8c\x89\xe9\x92\xae" },
		{ "CookExquisiteFood.Name", "EModCommonButtonType::CookExquisiteFood" },
		{ "CookExquisiteFood.ToolTip", "\xe7\x83\xb9\xe9\xa5\xaa\xe7\xb2\xbe\xe8\x87\xb4\xe9\xa3\x9f\xe7\x89\xa9" },
		{ "CookHomemadeFood.Name", "EModCommonButtonType::CookHomemadeFood" },
		{ "CookHomemadeFood.ToolTip", "\xe7\x83\xb9\xe9\xa5\xaa\xe5\xae\xb6\xe5\xb8\xb8\xe9\xa3\x9f\xe7\x89\xa9" },
		{ "CookSimpleFood.Name", "EModCommonButtonType::CookSimpleFood" },
		{ "CookSimpleFood.ToolTip", "\xe7\x83\xb9\xe9\xa5\xaa\xe7\xae\x80\xe6\x98\x93\xe9\xa3\x9f\xe7\x89\xa9" },
		{ "CopyLimit.Name", "EModCommonButtonType::CopyLimit" },
		{ "CopyLimit.ToolTip", "\xe5\xa4\x8d\xe5\x88\xb6\xe9\x99\x90\xe5\x88\xb6" },
		{ "CopyList.Name", "EModCommonButtonType::CopyList" },
		{ "CopyList.ToolTip", "\xe5\xa4\x8d\xe5\x88\xb6\xe5\x88\x97\xe8\xa1\xa8" },
		{ "CopySetting.Name", "EModCommonButtonType::CopySetting" },
		{ "CopySetting.ToolTip", "\xe5\xa4\x8d\xe5\x88\xb6" },
		{ "CutOff.Name", "EModCommonButtonType::CutOff" },
		{ "CutOff.ToolTip", "\xe5\x89\xb2\xe9\x99\xa4" },
		{ "DestoryBuilding.Name", "EModCommonButtonType::DestoryBuilding" },
		{ "DestoryBuilding.ToolTip", "\xe6\x8b\x86\xe9\x99\xa4\xe5\xbb\xba\xe7\xad\x91" },
		{ "DestroyResources.Name", "EModCommonButtonType::DestroyResources" },
		{ "DestroyResources.ToolTip", "\xe6\x91\xa7\xe6\xaf\x81\xe8\xb5\x84\xe6\xba\x90" },
		{ "Dialogue.Name", "EModCommonButtonType::Dialogue" },
		{ "Dialogue.ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d" },
		{ "Digging.Name", "EModCommonButtonType::Digging" },
		{ "Digging.ToolTip", "\xe6\x8c\x96\xe6\x8e\x98" },
		{ "Disassemble.Name", "EModCommonButtonType::Disassemble" },
		{ "Disassemble.ToolTip", "\xe6\x8b\x86\xe8\xa7\xa3" },
		{ "Enter.Name", "EModCommonButtonType::Enter" },
		{ "Enter.ToolTip", "\xe8\xbf\x9b\xe5\x85\xa5" },
		{ "Exchange.Name", "EModCommonButtonType::Exchange" },
		{ "Exchange.ToolTip", "\xe4\xba\xa4\xe6\xb5\x81" },
		{ "ExecutePrisoner.Name", "EModCommonButtonType::ExecutePrisoner" },
		{ "ExecutePrisoner.ToolTip", "\xe5\xa4\x84\xe5\x86\xb3\xe5\x9b\x9a\xe7\x8a\xaf" },
		{ "ExpandFarmland.Name", "EModCommonButtonType::ExpandFarmland" },
		{ "ExpandFarmland.ToolTip", "\xe6\x89\xa9\xe5\xb1\x95\xe5\x86\x9c\xe7\x94\xb0" },
		{ "Explore.Name", "EModCommonButtonType::Explore" },
		{ "Explore.ToolTip", "\xe6\x90\x9c\xe5\x88\xae" },
		{ "Extinguish.Name", "EModCommonButtonType::Extinguish" },
		{ "Extinguish.ToolTip", "\xe7\x86\x84\xe7\x81\xad" },
		{ "Fell.Name", "EModCommonButtonType::Fell" },
		{ "Fell.ToolTip", "\xe7\xa0\x8d\xe4\xbc\x90" },
		{ "GetOutOfTheJam.Name", "EModCommonButtonType::GetOutOfTheJam" },
		{ "GetOutOfTheJam.ToolTip", "\xe8\x84\xb1\xe7\xa6\xbb\xe5\x8d\xa1\xe6\xad\xbb" },
		{ "GiveUp.Name", "EModCommonButtonType::GiveUp" },
		{ "GiveUp.ToolTip", "\xe6\x94\xbe\xe5\xbc\x83" },
		{ "Grinding.Name", "EModCommonButtonType::Grinding" },
		{ "Grinding.ToolTip", "\xe7\xa3\xa8\xe9\x9d\xa2" },
		{ "Handcrafting.Name", "EModCommonButtonType::Handcrafting" },
		{ "Handcrafting.ToolTip", "\xe6\x89\x8b\xe5\xb7\xa5\xe5\x88\xb6\xe4\xbd\x9c" },
		{ "Harvest.Name", "EModCommonButtonType::Harvest" },
		{ "Harvest.ToolTip", "\xe6\x94\xb6\xe5\x89\xb2" },
		{ "HarvestFarmland.Name", "EModCommonButtonType::HarvestFarmland" },
		{ "HarvestFarmland.ToolTip", "\xe6\x94\xb6\xe5\x89\xb2\xe5\x86\x9c\xe7\x94\xb0" },
		{ "HuntTogether.Name", "EModCommonButtonType::HuntTogether" },
		{ "HuntTogether.ToolTip", "\xe5\x85\xb1\xe5\x90\x8c\xe6\x8d\x95\xe7\x8c\x8e" },
		{ "ImmediatelyExecute.Name", "EModCommonButtonType::ImmediatelyExecute" },
		{ "ImmediatelyExecute.ToolTip", "\xe7\xab\x8b\xe5\x8d\xb3\xe6\x89\xa7\xe8\xa1\x8c" },
		{ "Imprison.Name", "EModCommonButtonType::Imprison" },
		{ "Imprison.ToolTip", "\xe5\x85\xb3\xe6\x8a\xbc" },
		{ "ImprisonBack.Name", "EModCommonButtonType::ImprisonBack" },
		{ "ImprisonBack.ToolTip", "\xe5\x85\xb3\xe6\x8a\xbc\xe5\x9b\x9a\xe7\x8a\xaf\xe5\x9b\x9e\xe7\x9b\x91\xe7\x8b\xb1" },
		{ "KeepClear.Name", "EModCommonButtonType::KeepClear" },
		{ "KeepClear.ToolTip", "\xe4\xbf\x9d\xe6\x8c\x81\xe6\xb8\x85\xe7\xa9\xba" },
		{ "Kill.Name", "EModCommonButtonType::Kill" },
		{ "Kill.ToolTip", "\xe5\x87\xbb\xe6\x9d\x80" },
		{ "Letter.Name", "EModCommonButtonType::Letter" },
		{ "Letter.ToolTip", "\xe4\xbf\xa1\xe7\xac\xba" },
		{ "MakeMenu.Name", "EModCommonButtonType::MakeMenu" },
		{ "MakeMenu.ToolTip", "\xe5\x88\xb6\xe9\x80\xa0\xe8\x8f\x9c\xe5\x8d\x95" },
		{ "MakeTea.Name", "EModCommonButtonType::MakeTea" },
		{ "MakeTea.ToolTip", "\xe7\x85\xae\xe8\x8c\xb6" },
		{ "MakeWeapons.Name", "EModCommonButtonType::MakeWeapons" },
		{ "MakeWeapons.ToolTip", "\xe5\x88\xb6\xe4\xbd\x9c\xe6\xad\xa6\xe5\x99\xa8" },
		{ "Mining.Name", "EModCommonButtonType::Mining" },
		{ "Mining.ToolTip", "\xe5\xbc\x80\xe9\x87\x87" },
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
		{ "MoveBuilding.Name", "EModCommonButtonType::MoveBuilding" },
		{ "MoveBuilding.ToolTip", "\xe7\xa7\xbb\xe5\x8a\xa8\xe5\xbb\xba\xe7\xad\x91" },
		{ "None.Name", "EModCommonButtonType::None" },
		{ "Observe.Name", "EModCommonButtonType::Observe" },
		{ "Observe.ToolTip", "\xe8\xa7\x82\xe5\xaf\x9f" },
		{ "OpenBackPack.Name", "EModCommonButtonType::OpenBackPack" },
		{ "OpenBackPack.ToolTip", "\xe6\x89\x93\xe5\xbc\x80\xe8\x83\x8c\xe5\x8c\x85" },
		{ "OpenFacility.Name", "EModCommonButtonType::OpenFacility" },
		{ "OpenFacility.TolllTip", "\xe5\xbc\x80\xe5\x90\xaf\xe8\xae\xbe\xe5\xa4\x87\xe6\x8c\x89\xe9\x92\xae" },
		{ "OpenTreasureList.Name", "EModCommonButtonType::OpenTreasureList" },
		{ "OpenTreasureList.ToolTip", "\xe6\x89\x93\xe5\xbc\x80\xe7\x8f\x8d\xe5\xae\x9d\xe9\x98\x81" },
		{ "PasteLimit.Name", "EModCommonButtonType::PasteLimit" },
		{ "PasteLimit.ToolTip", "\xe7\xb2\x98\xe8\xb4\xb4\xe9\x99\x90\xe5\x88\xb6" },
		{ "PasteList.Name", "EModCommonButtonType::PasteList" },
		{ "PasteList.ToolTip", "\xe7\xb2\x98\xe8\xb4\xb4\xe5\x88\x97\xe8\xa1\xa8" },
		{ "PasteSetting.Name", "EModCommonButtonType::PasteSetting" },
		{ "PasteSetting.ToolTip", "\xe7\xb2\x98\xe8\xb4\xb4" },
		{ "Pharmaceuticals.Name", "EModCommonButtonType::Pharmaceuticals" },
		{ "Pharmaceuticals.ToolTip", "\xe5\x88\xb6\xe8\x8d\xaf" },
		{ "Pick.Name", "EModCommonButtonType::Pick" },
		{ "Pick.ToolTip", "\xe9\x87\x87\xe6\x91\x98" },
		{ "PracticeMartialArts.Name", "EModCommonButtonType::PracticeMartialArts" },
		{ "PracticeMartialArts.ToolTip", "\xe4\xbf\xae\xe7\x82\xbc\xe6\xad\xa6\xe5\xad\xa6" },
		{ "ProhibitionUse.Name", "EModCommonButtonType::ProhibitionUse" },
		{ "ProhibitionUse.ToolTip", "\xe7\xa6\x81\xe6\xad\xa2\xe5\x8f\x96\xe5\x87\xba" },
		{ "ProhibitPlanting.Name", "EModCommonButtonType::ProhibitPlanting" },
		{ "ProhibitPlanting.ToolTip", "\xe7\xa6\x81\xe6\xad\xa2\xe7\xa7\x8d\xe6\xa4\x8d" },
		{ "ProhibitTreatSelf.Name", "EModCommonButtonType::ProhibitTreatSelf" },
		{ "ProhibitTreatSelf.ToolTip", "\xe7\xa6\x81\xe6\xad\xa2\xe8\x87\xaa\xe6\x88\x91\xe6\xb2\xbb\xe7\x96\x97" },
		{ "ProhibitUsage.Name", "EModCommonButtonType::ProhibitUsage" },
		{ "ProhibitUsage.ToolTip", "\xe7\xa6\x81\xe6\xad\xa2\xe4\xbd\xbf\xe7\x94\xa8" },
		{ "ReadBook.Name", "EModCommonButtonType::ReadBook" },
		{ "ReadBook.ToolTip", "\xe9\x98\x85\xe8\xaf\xbb\xe4\xb9\xa6\xe7\xb1\x8d" },
		{ "RebuildBuilding.Name", "EModCommonButtonType::RebuildBuilding" },
		{ "RebuildBuilding.ToolTip", "\xe9\x87\x8d\xe5\xbb\xba\xe5\xbb\xba\xe7\xad\x91" },
		{ "RecruitPrisoner.Name", "EModCommonButtonType::RecruitPrisoner" },
		{ "RecruitPrisoner.ToolTip", "\xe6\x8b\x9b\xe5\x8b\x9f\xe5\x9b\x9a\xe7\x8a\xaf" },
		{ "ReduceFarmland.Name", "EModCommonButtonType::ReduceFarmland" },
		{ "ReduceFarmland.ToolTip", "\xe7\xbc\xa9\xe5\xb0\x8f\xe5\x86\x9c\xe7\x94\xb0" },
		{ "Refining.Name", "EModCommonButtonType::Refining" },
		{ "Refining.ToolTip", "\xe7\xb2\xbe\xe7\x82\xbc" },
		{ "ReleasePrisoner.Name", "EModCommonButtonType::ReleasePrisoner" },
		{ "ReleasePrisoner.ToolTip", "\xe9\x87\x8a\xe6\x94\xbe\xe5\x9b\x9a\xe7\x8a\xaf" },
		{ "RemoveFarmland.Name", "EModCommonButtonType::RemoveFarmland" },
		{ "RemoveFarmland.ToolTip", "\xe7\xa7\xbb\xe9\x99\xa4\xe5\x86\x9c\xe7\x94\xb0" },
		{ "ReplicateBuild.Name", "EModCommonButtonType::ReplicateBuild" },
		{ "ReplicateBuild.ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe5\xa4\x8d\xe5\x88\xb6" },
		{ "ResearchTechnology.Name", "EModCommonButtonType::ResearchTechnology" },
		{ "ResearchTechnology.ToolTip", "\xe7\xa0\x94\xe7\xa9\xb6\xe7\xa7\x91\xe6\x8a\x80" },
		{ "RobotChoosePatrolPoint.Name", "EModCommonButtonType::RobotChoosePatrolPoint" },
		{ "RobotChoosePatrolPoint.Tool", "\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x80\x89\xe6\x8b\xa9\xe5\xb7\xa1\xe9\x80\xbb\xe7\x82\xb9" },
		{ "SearchBody.Name", "EModCommonButtonType::SearchBody" },
		{ "SearchBody.toolTip", "\xe6\x90\x9c\xe5\x88\xae" },
		{ "SetBuildEnergySwitch.Name", "EModCommonButtonType::SetBuildEnergySwitch" },
		{ "SetBuildEnergySwitch.ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe5\x8c\x96\xe6\x8e\xa7\xe4\xbb\xb6\xe8\xae\xbe\xe7\xbd\xae\xe8\x83\xbd\xe9\x87\x8f\xe5\x82\xa8\xe9\x87\x8f\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "SetBuildPipelineGroup.Name", "EModCommonButtonType::SetBuildPipelineGroup" },
		{ "SetBuildPipelineGroup.ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe8\xae\xbe\xe5\xa4\x87\xe7\xae\xa1\xe9\x81\x93\xe5\x88\x86\xe9\x85\x8d" },
		{ "SetBuildTemperatureSwitch.Name", "EModCommonButtonType::SetBuildTemperatureSwitch" },
		{ "SetBuildTemperatureSwitch.TooleTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe5\x8c\x96\xe6\x8e\xa7\xe4\xbb\xb6\xe8\xae\xbe\xe7\xbd\xae\xe6\xb8\xa9\xe5\xba\xa6\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "SetBuildTimedSwitch.Name", "EModCommonButtonType::SetBuildTimedSwitch" },
		{ "SetBuildTimedSwitch.ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe5\x8c\x96\xe6\x8e\xa7\xe4\xbb\xb6\xe8\xae\xbe\xe7\xbd\xae\xe5\xae\x9a\xe6\x97\xb6\xe5\xbc\x80\xe5\x85\xb3" },
		{ "SetBuildWhenClosedControlPipelineGroup.Name", "EModCommonButtonType::SetBuildWhenClosedControlPipelineGroup" },
		{ "SetBuildWhenClosedControlPipelineGroup.ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\x85\xb3\xe9\x97\xad\xe6\x97\xb6\xe6\x8e\xa7\xe5\x88\xb6\xe7\x9a\x84\xe7\xae\xa1\xe9\x81\x93\xe5\x88\x86\xe7\xbb\x84" },
		{ "SetBuildWhenOpenedControlPipelineGroup.Name", "EModCommonButtonType::SetBuildWhenOpenedControlPipelineGroup" },
		{ "SetBuildWhenOpenedControlPipelineGroup.ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xe6\x8e\xa7\xe5\x88\xb6\xe7\x9a\x84\xe7\xae\xa1\xe9\x81\x93\xe5\x88\x86\xe7\xbb\x84" },
		{ "SetRobotProtectTarget.Name", "EModCommonButtonType::SetRobotProtectTarget" },
		{ "SetRobotProtectTarget.Tool", "\xe8\xae\xbe\xe7\xbd\xae\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe4\xbf\x9d\xe6\x8a\xa4\xe5\xaf\xb9\xe8\xb1\xa1" },
		{ "SettleIn.Name", "EModCommonButtonType::SettleIn" },
		{ "SettleIn.ToolTip", "\xe5\x85\xa5\xe9\xa9\xbb" },
		{ "SewBracers.Name", "EModCommonButtonType::SewBracers" },
		{ "SewBracers.ToolTip", "\xe7\xbc\x9d\xe5\x88\xb6\xe8\x85\x95\xe7\x94\xb2" },
		{ "SewHat.Name", "EModCommonButtonType::SewHat" },
		{ "SewHat.ToolTip", "\xe7\xbc\x9d\xe5\x88\xb6\xe5\xb8\xbd\xe5\xad\x90" },
		{ "SewPants.Name", "EModCommonButtonType::SewPants" },
		{ "SewPants.ToolTip", "\xe7\xbc\x9d\xe5\x88\xb6\xe8\xa3\xa4\xe5\xad\x90" },
		{ "SewShirt.Name", "EModCommonButtonType::SewShirt" },
		{ "SewShirt.ToolTip", "\xe7\xbc\x9d\xe5\x88\xb6\xe4\xb8\x8a\xe8\xa1\xa3" },
		{ "SewShoes.Name", "EModCommonButtonType::SewShoes" },
		{ "SewShoes.ToolTip", "\xe7\xbc\x9d\xe5\x88\xb6\xe9\x9e\x8b\xe5\xad\x90" },
		{ "Smelting.Name", "EModCommonButtonType::Smelting" },
		{ "Smelting.ToolTip", "\xe7\x86\x94\xe7\x82\xbc" },
		{ "SwitchRoomType.Name", "EModCommonButtonType::SwitchRoomType" },
		{ "SwitchRoomType.ToolTip", "\xe5\x88\x87\xe6\x8d\xa2\xe6\x88\xbf\xe9\x97\xb4\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "Tame.Name", "EModCommonButtonType::Tame" },
		{ "Tame.ToolTip", "\xe9\xa9\xaf\xe6\x9c\x8d\xe5\x8a\xa8\xe7\x89\xa9" },
		{ "ToEatFood.Name", "EModCommonButtonType::ToEatFood" },
		{ "ToEatFood.ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe8\xa7\x92\xe8\x89\xb2\xe5\x8e\xbb\xe5\x90\x83\xe6\x8c\x87\xe5\xae\x9a\xe9\xa3\x9f\xe7\x89\xa9" },
		{ "TorturePrisoner.Name", "EModCommonButtonType::TorturePrisoner" },
		{ "TorturePrisoner.ToolTip", "\xe6\x8b\xb7\xe6\x89\x93\xe5\x9b\x9a\xe7\x8a\xaf" },
		{ "Trade.Name", "EModCommonButtonType::Trade" },
		{ "Trade.ToolTip", "\xe4\xba\xa4\xe6\x98\x93" },
		{ "Travel.Name", "EModCommonButtonType::Travel" },
		{ "Travel.ToolTip", "\xe6\xb8\xb8\xe5\x8e\x86" },
		{ "WaitingButcher.Name", "EModCommonButtonType::WaitingButcher" },
		{ "WaitingButcher.ToolTip", "\xe7\xad\x89\xe5\xbe\x85\xe8\xa2\xab\xe5\xb1\xa0\xe5\xae\xb0" },
		{ "Weaving.Name", "EModCommonButtonType::Weaving" },
		{ "Weaving.ToolTip", "\xe7\xbb\x87\xe5\xb8\x83" },
		{ "WorldPlaceAttack.Name", "EModCommonButtonType::WorldPlaceAttack" },
		{ "WorldPlaceAttack.ToolTip", "\xe8\xbf\x9b\xe6\x94\xbb" },
		{ "WorldPlaceExploration.Name", "EModCommonButtonType::WorldPlaceExploration" },
		{ "WorldPlaceExploration.ToolTip", "\xe5\x9c\xb0\xe7\x82\xb9\xe6\x8e\xa2\xe7\xb4\xa2" },
		{ "WorldPlaceManagement.Name", "EModCommonButtonType::WorldPlaceManagement" },
		{ "WorldPlaceManagement.ToolTip", "\xe7\xae\xa1\xe7\x90\x86" },
		{ "WriteCopy.Name", "EModCommonButtonType::WriteCopy" },
		{ "WriteCopy.ToolTip", "\xe6\x8a\x84\xe5\xbd\x95" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModCommonButtonType::None", (int64)EModCommonButtonType::None },
		{ "EModCommonButtonType::AddResource", (int64)EModCommonButtonType::AddResource },
		{ "EModCommonButtonType::CloseFacility", (int64)EModCommonButtonType::CloseFacility },
		{ "EModCommonButtonType::OpenFacility", (int64)EModCommonButtonType::OpenFacility },
		{ "EModCommonButtonType::CopyList", (int64)EModCommonButtonType::CopyList },
		{ "EModCommonButtonType::MakeMenu", (int64)EModCommonButtonType::MakeMenu },
		{ "EModCommonButtonType::PasteList", (int64)EModCommonButtonType::PasteList },
		{ "EModCommonButtonType::AllotmentOwner", (int64)EModCommonButtonType::AllotmentOwner },
		{ "EModCommonButtonType::Fell", (int64)EModCommonButtonType::Fell },
		{ "EModCommonButtonType::CutOff", (int64)EModCommonButtonType::CutOff },
		{ "EModCommonButtonType::Harvest", (int64)EModCommonButtonType::Harvest },
		{ "EModCommonButtonType::Pick", (int64)EModCommonButtonType::Pick },
		{ "EModCommonButtonType::Explore", (int64)EModCommonButtonType::Explore },
		{ "EModCommonButtonType::MoveBuilding", (int64)EModCommonButtonType::MoveBuilding },
		{ "EModCommonButtonType::DestoryBuilding", (int64)EModCommonButtonType::DestoryBuilding },
		{ "EModCommonButtonType::RebuildBuilding", (int64)EModCommonButtonType::RebuildBuilding },
		{ "EModCommonButtonType::CancelBuild", (int64)EModCommonButtonType::CancelBuild },
		{ "EModCommonButtonType::KeepClear", (int64)EModCommonButtonType::KeepClear },
		{ "EModCommonButtonType::AllSelect", (int64)EModCommonButtonType::AllSelect },
		{ "EModCommonButtonType::CancelAllSelect", (int64)EModCommonButtonType::CancelAllSelect },
		{ "EModCommonButtonType::CopyLimit", (int64)EModCommonButtonType::CopyLimit },
		{ "EModCommonButtonType::PasteLimit", (int64)EModCommonButtonType::PasteLimit },
		{ "EModCommonButtonType::BackButton", (int64)EModCommonButtonType::BackButton },
		{ "EModCommonButtonType::CancelChoose", (int64)EModCommonButtonType::CancelChoose },
		{ "EModCommonButtonType::ConfirmButton", (int64)EModCommonButtonType::ConfirmButton },
		{ "EModCommonButtonType::Digging", (int64)EModCommonButtonType::Digging },
		{ "EModCommonButtonType::CatchAndHunt", (int64)EModCommonButtonType::CatchAndHunt },
		{ "EModCommonButtonType::HuntTogether", (int64)EModCommonButtonType::HuntTogether },
		{ "EModCommonButtonType::ButcherBody", (int64)EModCommonButtonType::ButcherBody },
		{ "EModCommonButtonType::SearchBody", (int64)EModCommonButtonType::SearchBody },
		{ "EModCommonButtonType::ProhibitUsage", (int64)EModCommonButtonType::ProhibitUsage },
		{ "EModCommonButtonType::Disassemble", (int64)EModCommonButtonType::Disassemble },
		{ "EModCommonButtonType::Extinguish", (int64)EModCommonButtonType::Extinguish },
		{ "EModCommonButtonType::Mining", (int64)EModCommonButtonType::Mining },
		{ "EModCommonButtonType::CookSimpleFood", (int64)EModCommonButtonType::CookSimpleFood },
		{ "EModCommonButtonType::CookHomemadeFood", (int64)EModCommonButtonType::CookHomemadeFood },
		{ "EModCommonButtonType::CookExquisiteFood", (int64)EModCommonButtonType::CookExquisiteFood },
		{ "EModCommonButtonType::ChoppingWood", (int64)EModCommonButtonType::ChoppingWood },
		{ "EModCommonButtonType::Grinding", (int64)EModCommonButtonType::Grinding },
		{ "EModCommonButtonType::Brewing", (int64)EModCommonButtonType::Brewing },
		{ "EModCommonButtonType::Smelting", (int64)EModCommonButtonType::Smelting },
		{ "EModCommonButtonType::Refining", (int64)EModCommonButtonType::Refining },
		{ "EModCommonButtonType::MakeWeapons", (int64)EModCommonButtonType::MakeWeapons },
		{ "EModCommonButtonType::Handcrafting", (int64)EModCommonButtonType::Handcrafting },
		{ "EModCommonButtonType::SewHat", (int64)EModCommonButtonType::SewHat },
		{ "EModCommonButtonType::SewBracers", (int64)EModCommonButtonType::SewBracers },
		{ "EModCommonButtonType::SewShirt", (int64)EModCommonButtonType::SewShirt },
		{ "EModCommonButtonType::SewPants", (int64)EModCommonButtonType::SewPants },
		{ "EModCommonButtonType::SewShoes", (int64)EModCommonButtonType::SewShoes },
		{ "EModCommonButtonType::ResearchTechnology", (int64)EModCommonButtonType::ResearchTechnology },
		{ "EModCommonButtonType::Pharmaceuticals", (int64)EModCommonButtonType::Pharmaceuticals },
		{ "EModCommonButtonType::Weaving", (int64)EModCommonButtonType::Weaving },
		{ "EModCommonButtonType::AssignAnimals", (int64)EModCommonButtonType::AssignAnimals },
		{ "EModCommonButtonType::ProhibitPlanting", (int64)EModCommonButtonType::ProhibitPlanting },
		{ "EModCommonButtonType::CancelOrder", (int64)EModCommonButtonType::CancelOrder },
		{ "EModCommonButtonType::ReadBook", (int64)EModCommonButtonType::ReadBook },
		{ "EModCommonButtonType::ExpandFarmland", (int64)EModCommonButtonType::ExpandFarmland },
		{ "EModCommonButtonType::ReduceFarmland", (int64)EModCommonButtonType::ReduceFarmland },
		{ "EModCommonButtonType::RemoveFarmland", (int64)EModCommonButtonType::RemoveFarmland },
		{ "EModCommonButtonType::ChangePlant", (int64)EModCommonButtonType::ChangePlant },
		{ "EModCommonButtonType::HarvestFarmland", (int64)EModCommonButtonType::HarvestFarmland },
		{ "EModCommonButtonType::PracticeMartialArts", (int64)EModCommonButtonType::PracticeMartialArts },
		{ "EModCommonButtonType::Observe", (int64)EModCommonButtonType::Observe },
		{ "EModCommonButtonType::MakeTea", (int64)EModCommonButtonType::MakeTea },
		{ "EModCommonButtonType::ProhibitTreatSelf", (int64)EModCommonButtonType::ProhibitTreatSelf },
		{ "EModCommonButtonType::BeControlled", (int64)EModCommonButtonType::BeControlled },
		{ "EModCommonButtonType::BuildingAutoAddFuel", (int64)EModCommonButtonType::BuildingAutoAddFuel },
		{ "EModCommonButtonType::SwitchRoomType", (int64)EModCommonButtonType::SwitchRoomType },
		{ "EModCommonButtonType::SetBuildTimedSwitch", (int64)EModCommonButtonType::SetBuildTimedSwitch },
		{ "EModCommonButtonType::SetBuildTemperatureSwitch", (int64)EModCommonButtonType::SetBuildTemperatureSwitch },
		{ "EModCommonButtonType::SetBuildEnergySwitch", (int64)EModCommonButtonType::SetBuildEnergySwitch },
		{ "EModCommonButtonType::SetBuildPipelineGroup", (int64)EModCommonButtonType::SetBuildPipelineGroup },
		{ "EModCommonButtonType::SetBuildWhenOpenedControlPipelineGroup", (int64)EModCommonButtonType::SetBuildWhenOpenedControlPipelineGroup },
		{ "EModCommonButtonType::SetBuildWhenClosedControlPipelineGroup", (int64)EModCommonButtonType::SetBuildWhenClosedControlPipelineGroup },
		{ "EModCommonButtonType::ChooseConsumeBuildings", (int64)EModCommonButtonType::ChooseConsumeBuildings },
		{ "EModCommonButtonType::ChooseGenerateEnergyBuildings", (int64)EModCommonButtonType::ChooseGenerateEnergyBuildings },
		{ "EModCommonButtonType::ChooseControlBuildings", (int64)EModCommonButtonType::ChooseControlBuildings },
		{ "EModCommonButtonType::ActivateMachine", (int64)EModCommonButtonType::ActivateMachine },
		{ "EModCommonButtonType::ChangeRobotWork", (int64)EModCommonButtonType::ChangeRobotWork },
		{ "EModCommonButtonType::ChangeRobotState", (int64)EModCommonButtonType::ChangeRobotState },
		{ "EModCommonButtonType::WriteCopy", (int64)EModCommonButtonType::WriteCopy },
		{ "EModCommonButtonType::RobotChoosePatrolPoint", (int64)EModCommonButtonType::RobotChoosePatrolPoint },
		{ "EModCommonButtonType::SetRobotProtectTarget", (int64)EModCommonButtonType::SetRobotProtectTarget },
		{ "EModCommonButtonType::ApplyCeremony", (int64)EModCommonButtonType::ApplyCeremony },
		{ "EModCommonButtonType::ToEatFood", (int64)EModCommonButtonType::ToEatFood },
		{ "EModCommonButtonType::Exchange", (int64)EModCommonButtonType::Exchange },
		{ "EModCommonButtonType::Travel", (int64)EModCommonButtonType::Travel },
		{ "EModCommonButtonType::SettleIn", (int64)EModCommonButtonType::SettleIn },
		{ "EModCommonButtonType::Enter", (int64)EModCommonButtonType::Enter },
		{ "EModCommonButtonType::GiveUp", (int64)EModCommonButtonType::GiveUp },
		{ "EModCommonButtonType::WorldPlaceExploration", (int64)EModCommonButtonType::WorldPlaceExploration },
		{ "EModCommonButtonType::WorldPlaceManagement", (int64)EModCommonButtonType::WorldPlaceManagement },
		{ "EModCommonButtonType::WorldPlaceAttack", (int64)EModCommonButtonType::WorldPlaceAttack },
		{ "EModCommonButtonType::AddPuppet", (int64)EModCommonButtonType::AddPuppet },
		{ "EModCommonButtonType::ConfirmAddPuppet", (int64)EModCommonButtonType::ConfirmAddPuppet },
		{ "EModCommonButtonType::GetOutOfTheJam", (int64)EModCommonButtonType::GetOutOfTheJam },
		{ "EModCommonButtonType::Tame", (int64)EModCommonButtonType::Tame },
		{ "EModCommonButtonType::Letter", (int64)EModCommonButtonType::Letter },
		{ "EModCommonButtonType::ButcherTamedAnimal", (int64)EModCommonButtonType::ButcherTamedAnimal },
		{ "EModCommonButtonType::WaitingButcher", (int64)EModCommonButtonType::WaitingButcher },
		{ "EModCommonButtonType::Dialogue", (int64)EModCommonButtonType::Dialogue },
		{ "EModCommonButtonType::Trade", (int64)EModCommonButtonType::Trade },
		{ "EModCommonButtonType::ImmediatelyExecute", (int64)EModCommonButtonType::ImmediatelyExecute },
		{ "EModCommonButtonType::Kill", (int64)EModCommonButtonType::Kill },
		{ "EModCommonButtonType::Imprison", (int64)EModCommonButtonType::Imprison },
		{ "EModCommonButtonType::ReleasePrisoner", (int64)EModCommonButtonType::ReleasePrisoner },
		{ "EModCommonButtonType::ExecutePrisoner", (int64)EModCommonButtonType::ExecutePrisoner },
		{ "EModCommonButtonType::TorturePrisoner", (int64)EModCommonButtonType::TorturePrisoner },
		{ "EModCommonButtonType::RecruitPrisoner", (int64)EModCommonButtonType::RecruitPrisoner },
		{ "EModCommonButtonType::ImprisonBack", (int64)EModCommonButtonType::ImprisonBack },
		{ "EModCommonButtonType::OpenTreasureList", (int64)EModCommonButtonType::OpenTreasureList },
		{ "EModCommonButtonType::ProhibitionUse", (int64)EModCommonButtonType::ProhibitionUse },
		{ "EModCommonButtonType::OpenBackPack", (int64)EModCommonButtonType::OpenBackPack },
		{ "EModCommonButtonType::CopySetting", (int64)EModCommonButtonType::CopySetting },
		{ "EModCommonButtonType::PasteSetting", (int64)EModCommonButtonType::PasteSetting },
		{ "EModCommonButtonType::ReplicateBuild", (int64)EModCommonButtonType::ReplicateBuild },
		{ "EModCommonButtonType::DestroyResources", (int64)EModCommonButtonType::DestroyResources },
		{ "EModCommonButtonType::BatchAllSelect", (int64)EModCommonButtonType::BatchAllSelect },
		{ "EModCommonButtonType::BatchCancelAllSelect", (int64)EModCommonButtonType::BatchCancelAllSelect },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModCommonButtonType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModCommonButtonType",
	"EModCommonButtonType",
	Z_Construct_UEnum_CreateModPlugin_EModCommonButtonType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModCommonButtonType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModCommonButtonType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModCommonButtonType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModCommonButtonType()
{
	if (!Z_Registration_Info_UEnum_EModCommonButtonType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModCommonButtonType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModCommonButtonType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModCommonButtonType.InnerSingleton;
}
// ********** End Enum EModCommonButtonType ********************************************************

// ********** Begin ScriptStruct FModFormulaData ***************************************************
static_assert(std::is_polymorphic<FModFormulaData>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModFormulaData cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModFormulaData;
class UScriptStruct* FModFormulaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModFormulaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModFormulaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModFormulaData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModFormulaData"));
	}
	return Z_Registration_Info_UScriptStruct_FModFormulaData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModFormulaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe9\x85\x8d\xe6\x96\xb9\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe9\x85\x8d\xe6\x96\xb9\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x85\x8d\xe6\x96\xb9\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x85\x8d\xe6\x96\xb9\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionID_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94GOAP Action\xe7\x9a\x84ID\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94GOAP Action\xe7\x9a\x84ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartActionID_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa6\x82\xe6\x9e\x9c\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe6\x98\xaf\xe8\x87\xaa\xe5\x8a\xa8\xe5\x88\xb6\xe9\x80\xa0 \xe5\xbc\x80\xe5\xa7\x8b""action\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe6\x98\xaf\xe8\x87\xaa\xe5\x8a\xa8\xe5\x88\xb6\xe9\x80\xa0 \xe5\xbc\x80\xe5\xa7\x8b""action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalID_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94GOAP\xe7\x9b\xae\xe6\xa0\x87\xe7\x9a\x84ID\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94GOAP\xe7\x9b\xae\xe6\xa0\x87\xe7\x9a\x84ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormulaIcon_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x85\x8d\xe6\x96\xb9\xe5\x9c\xa8UI\xe4\xb8\x8a\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe5\x9b\xbe\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x85\x8d\xe6\x96\xb9\xe5\x9c\xa8UI\xe4\xb8\x8a\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatDescription_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96\xe5\x90\x8e\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96\xe5\x90\x8e\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredAttributes_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumingTime_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x80\x97\xe6\x97\xb6\xef\xbc\x88\xe7\x95\x8c\xe9\x9d\xa2\xe6\x98\xbe\xe7\xa4\xba\xe4\xbd\xbf\xe7\x94\xa8\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\x82\xe4\xb8\x8e\xe5\xae\x9e\xe9\x99\x85\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x80\x97\xe6\x97\xb6\xef\xbc\x88\xe7\x95\x8c\xe9\x9d\xa2\xe6\x98\xbe\xe7\xa4\xba\xe4\xbd\xbf\xe7\x94\xa8\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\x82\xe4\xb8\x8e\xe5\xae\x9e\xe9\x99\x85\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NecessityConsumingResource_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbf\x85\xe9\xa1\xbb\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbf\x85\xe9\xa1\xbb\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectableResourceNumber_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x80\xbb\xe5\x85\xb1\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe5\x8f\xaf\xe9\x80\x89\xe8\xb5\x84\xe6\xba\x90\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x80\xbb\xe5\x85\xb1\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe5\x8f\xaf\xe9\x80\x89\xe8\xb5\x84\xe6\xba\x90\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectableResourceTag_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\xaf\xe9\x80\x89\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe9\x80\x89\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectableTypeNumber_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\x9a\xe5\x8f\xaf\xe9\x80\x89\xe6\x8b\xa9\xe7\x9a\x84\xe7\xa7\x8d\xe7\xb1\xbb\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\x9a\xe5\x8f\xaf\xe9\x80\x89\xe6\x8b\xa9\xe7\x9a\x84\xe7\xa7\x8d\xe7\xb1\xbb\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputResourceType_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xba\xa7\xe5\x87\xba\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\xa7\xe5\x87\xba\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputItemID_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xba\xa7\xe5\x87\xba\xe7\x9a\x84ID\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\xa7\xe5\x87\xba\xe7\x9a\x84ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputItemNumber_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xba\xa7\xe5\x87\xba\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\xa7\xe5\x87\xba\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddToMakerAttributes_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\xb6\xe9\x80\xa0\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe7\xbb\x99\xe5\x88\xb6\xe9\x80\xa0\xe8\x80\x85\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7 \xe8\x8e\xb7\xe5\xbe\x97\xe7\x9a\x84\xe7\xbb\x8f\xe9\xaa\x8c\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\xb6\xe9\x80\xa0\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe7\xbb\x99\xe5\x88\xb6\xe9\x80\xa0\xe8\x80\x85\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7 \xe8\x8e\xb7\xe5\xbe\x97\xe7\x9a\x84\xe7\xbb\x8f\xe9\xaa\x8c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedPeople_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe4\xba\xba\xe6\x8f\x90\xe4\xbe\x9b\xe5\xb7\xa5\xe4\xbd\x9c\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe4\xba\xba\xe6\x8f\x90\xe4\xbe\x9b\xe5\xb7\xa5\xe4\xbd\x9c\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredWorkload_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe5\xb7\xa5\xe4\xbd\x9c\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe5\xb7\xa5\xe4\xbd\x9c\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTag_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xba\xa7\xe5\x87\xba\xe7\x89\xa9\xe5\x93\x81\xe6\x89\x80\xe5\xb1\x9e\xe7\x9a\x84\xe5\x88\x86\xe7\xbb\x84\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\xa3\x80\xe6\x9f\xa5\xe5\xba\x93\xe5\xad\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\xa7\xe5\x87\xba\xe7\x89\xa9\xe5\x93\x81\xe6\x89\x80\xe5\xb1\x9e\xe7\x9a\x84\xe5\x88\x86\xe7\xbb\x84\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\xa3\x80\xe6\x9f\xa5\xe5\xba\x93\xe5\xad\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingID_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9ID\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonButtonType_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe4\xb8\x8a\xe4\xb8\xaa\xe6\x8c\x89\xe9\x92\xae\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe4\xb8\x8a\xe4\xb8\xaa\xe6\x8c\x89\xe9\x92\xae\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\xa3\xe9\x94\x81\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe5\xa4\xa7\xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe5\xa4\xa7\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanUnlockByItem_MetaData[] = {
		{ "Category", "ModFormulaData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe9\x80\x9a\xe8\xbf\x87\xe8\x8e\xb7\xe5\x8f\x96\xe7\x89\xa9\xe5\x93\x81\xe8\xa7\xa3\xe9\x94\x81\xe9\x85\x8d\xe6\x96\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe9\x80\x9a\xe8\xbf\x87\xe8\x8e\xb7\xe5\x8f\x96\xe7\x89\xa9\xe5\x93\x81\xe8\xa7\xa3\xe9\x94\x81\xe9\x85\x8d\xe6\x96\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockItemTags_MetaData[] = {
		{ "Category", "ModFormulaData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\xa3\xe9\x94\x81\xe5\xbf\x85\xe9\xa1\xbb\xe8\xa6\x81\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84TAG\xef\xbc\x88\xe6\xbb\xa1\xe8\xb6\xb3\xe4\xbb\xbb\xe6\x84\x8f\xe4\xb8\x80\xef\xbc\x8c\xe5\xb0\xb1\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xa7\xa3\xe9\x94\x81\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe5\xbf\x85\xe9\xa1\xbb\xe8\xa6\x81\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84TAG\xef\xbc\x88\xe6\xbb\xa1\xe8\xb6\xb3\xe4\xbb\xbb\xe6\x84\x8f\xe4\xb8\x80\xef\xbc\x8c\xe5\xb0\xb1\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xa7\xa3\xe9\x94\x81\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockItemDesc_MetaData[] = {
		{ "Category", "ModFormulaData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\xa3\xe9\x94\x81\xe5\xbf\x85\xe9\xa1\xbb\xe8\xa6\x81\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe6\x8f\x8f\xe8\xbf\xb0\xe5\x86\x85\xe5\xae\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe5\xbf\x85\xe9\xa1\xbb\xe8\xa6\x81\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe6\x8f\x8f\xe8\xbf\xb0\xe5\x86\x85\xe5\xae\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatUnlockItemDesc_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96\xe7\x9a\x84\xe8\xa7\xa3\xe9\x94\x81\xe5\xbf\x85\xe9\xa1\xbb\xe8\xa6\x81\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe6\x8f\x8f\xe8\xbf\xb0\xe5\x86\x85\xe5\xae\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96\xe7\x9a\x84\xe8\xa7\xa3\xe9\x94\x81\xe5\xbf\x85\xe9\xa1\xbb\xe8\xa6\x81\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe6\x8f\x8f\xe8\xbf\xb0\xe5\x86\x85\xe5\xae\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnLock_MetaData[] = {
		{ "Category", "ModFormulaData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x85\x8d\xe6\x96\xb9\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbd\xbf\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x85\x8d\xe6\x96\xb9\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbd\xbf\xe7\x94\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Comment\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Comment" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartActionID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GoalID;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FormulaIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FormatDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredAttributes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredAttributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RequiredAttributes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConsumingTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NecessityConsumingResource_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NecessityConsumingResource_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NecessityConsumingResource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectableResourceNumber;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectableResourceTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectableTypeNumber;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputResourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputResourceType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputItemNumber;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AddToMakerAttributes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddToMakerAttributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AddToMakerAttributes;
	static void NewProp_bNeedPeople_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedPeople;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredWorkload;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuildingID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommonButtonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CommonButtonType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static void NewProp_CanUnlockByItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanUnlockByItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnlockItemTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockItemTags;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UnlockItemDesc;
	static const UECodeGen_Private::FTextPropertyParams NewProp_FormatUnlockItemDesc;
	static void NewProp_bIsUnLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnLock;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModFormulaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_ActionID = { "ActionID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, ActionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionID_MetaData), NewProp_ActionID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_StartActionID = { "StartActionID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, StartActionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartActionID_MetaData), NewProp_StartActionID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_GoalID = { "GoalID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, GoalID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalID_MetaData), NewProp_GoalID_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_FormulaIcon = { "FormulaIcon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, FormulaIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormulaIcon_MetaData), NewProp_FormulaIcon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_FormatDescription = { "FormatDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, FormatDescription), Z_Construct_UScriptStruct_FFormatText, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatDescription_MetaData), NewProp_FormatDescription_MetaData) }; // 2654823324
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_RequiredAttributes_ValueProp = { "RequiredAttributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_RequiredAttributes_Key_KeyProp = { "RequiredAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 1212282043
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_RequiredAttributes = { "RequiredAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, RequiredAttributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredAttributes_MetaData), NewProp_RequiredAttributes_MetaData) }; // 1212282043
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_ConsumingTime = { "ConsumingTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, ConsumingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumingTime_MetaData), NewProp_ConsumingTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_NecessityConsumingResource_ValueProp = { "NecessityConsumingResource", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_NecessityConsumingResource_Key_KeyProp = { "NecessityConsumingResource_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_NecessityConsumingResource = { "NecessityConsumingResource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, NecessityConsumingResource), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NecessityConsumingResource_MetaData), NewProp_NecessityConsumingResource_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_SelectableResourceNumber = { "SelectableResourceNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, SelectableResourceNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectableResourceNumber_MetaData), NewProp_SelectableResourceNumber_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_SelectableResourceTag = { "SelectableResourceTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, SelectableResourceTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectableResourceTag_MetaData), NewProp_SelectableResourceTag_MetaData) }; // 133831994
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_SelectableTypeNumber = { "SelectableTypeNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, SelectableTypeNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectableTypeNumber_MetaData), NewProp_SelectableTypeNumber_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_OutputResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_OutputResourceType = { "OutputResourceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, OutputResourceType), Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputResourceType_MetaData), NewProp_OutputResourceType_MetaData) }; // 1596875282
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_OutputItemID = { "OutputItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, OutputItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputItemID_MetaData), NewProp_OutputItemID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_OutputItemNumber = { "OutputItemNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, OutputItemNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputItemNumber_MetaData), NewProp_OutputItemNumber_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_AddToMakerAttributes_ValueProp = { "AddToMakerAttributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_AddToMakerAttributes_Key_KeyProp = { "AddToMakerAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 1212282043
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_AddToMakerAttributes = { "AddToMakerAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, AddToMakerAttributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddToMakerAttributes_MetaData), NewProp_AddToMakerAttributes_MetaData) }; // 1212282043
void Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_bNeedPeople_SetBit(void* Obj)
{
	((FModFormulaData*)Obj)->bNeedPeople = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_bNeedPeople = { "bNeedPeople", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModFormulaData), &Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_bNeedPeople_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedPeople_MetaData), NewProp_bNeedPeople_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_RequiredWorkload = { "RequiredWorkload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, RequiredWorkload), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredWorkload_MetaData), NewProp_RequiredWorkload_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTag_MetaData), NewProp_GameplayTag_MetaData) }; // 133831994
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_BuildingID = { "BuildingID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, BuildingID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingID_MetaData), NewProp_BuildingID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_CommonButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_CommonButtonType = { "CommonButtonType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, CommonButtonType), Z_Construct_UEnum_CreateModPlugin_EModCommonButtonType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonButtonType_MetaData), NewProp_CommonButtonType_MetaData) }; // 524401916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 2104890724
void Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_CanUnlockByItem_SetBit(void* Obj)
{
	((FModFormulaData*)Obj)->CanUnlockByItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_CanUnlockByItem = { "CanUnlockByItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModFormulaData), &Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_CanUnlockByItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanUnlockByItem_MetaData), NewProp_CanUnlockByItem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_UnlockItemTags_Inner = { "UnlockItemTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_UnlockItemTags = { "UnlockItemTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, UnlockItemTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockItemTags_MetaData), NewProp_UnlockItemTags_MetaData) }; // 133831994
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_UnlockItemDesc = { "UnlockItemDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, UnlockItemDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockItemDesc_MetaData), NewProp_UnlockItemDesc_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_FormatUnlockItemDesc = { "FormatUnlockItemDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, FormatUnlockItemDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatUnlockItemDesc_MetaData), NewProp_FormatUnlockItemDesc_MetaData) };
void Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_bIsUnLock_SetBit(void* Obj)
{
	((FModFormulaData*)Obj)->bIsUnLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_bIsUnLock = { "bIsUnLock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModFormulaData), &Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_bIsUnLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUnLock_MetaData), NewProp_bIsUnLock_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFormulaData, Comment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comment_MetaData), NewProp_Comment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModFormulaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_ActionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_StartActionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_GoalID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_FormulaIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_FormatDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_RequiredAttributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_RequiredAttributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_RequiredAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_ConsumingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_NecessityConsumingResource_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_NecessityConsumingResource_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_NecessityConsumingResource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_SelectableResourceNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_SelectableResourceTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_SelectableTypeNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_OutputResourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_OutputResourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_OutputItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_OutputItemNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_AddToMakerAttributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_AddToMakerAttributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_AddToMakerAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_bNeedPeople,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_RequiredWorkload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_GameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_BuildingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_CommonButtonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_CommonButtonType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_CanUnlockByItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_UnlockItemTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_UnlockItemTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_UnlockItemDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_FormatUnlockItemDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_bIsUnLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFormulaData_Statics::NewProp_Comment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModFormulaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModFormulaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModFormulaData",
	Z_Construct_UScriptStruct_FModFormulaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModFormulaData_Statics::PropPointers),
	sizeof(FModFormulaData),
	alignof(FModFormulaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModFormulaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModFormulaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModFormulaData()
{
	if (!Z_Registration_Info_UScriptStruct_FModFormulaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModFormulaData.InnerSingleton, Z_Construct_UScriptStruct_FModFormulaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModFormulaData.InnerSingleton;
}
// ********** End ScriptStruct FModFormulaData *****************************************************

// ********** Begin ScriptStruct FModFabricateEquipmentData ****************************************
static_assert(std::is_polymorphic<FModFabricateEquipmentData>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModFabricateEquipmentData cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModFabricateEquipmentData;
class UScriptStruct* FModFabricateEquipmentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModFabricateEquipmentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModFabricateEquipmentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModFabricateEquipmentData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModFabricateEquipmentData"));
	}
	return Z_Registration_Info_UScriptStruct_FModFabricateEquipmentData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe5\x88\xb6\xe9\x80\xa0\xe8\xa3\x85\xe5\xa4\x87\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe5\x88\xb6\xe9\x80\xa0\xe8\xa3\x85\xe5\xa4\x87\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentRandomPools_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe8\xa3\x85\xe5\xa4\x87\xe9\x9a\x8f\xe6\x9c\xba\xe6\xb1\xa0\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe8\xa3\x85\xe5\xa4\x87\xe9\x9a\x8f\xe6\x9c\xba\xe6\xb1\xa0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Comment\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Comment" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EquipmentRandomPools_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentRandomPools;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModFabricateEquipmentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::NewProp_EquipmentRandomPools_Inner = { "EquipmentRandomPools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::NewProp_EquipmentRandomPools = { "EquipmentRandomPools", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFabricateEquipmentData, EquipmentRandomPools), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentRandomPools_MetaData), NewProp_EquipmentRandomPools_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModFabricateEquipmentData, Comment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comment_MetaData), NewProp_Comment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::NewProp_EquipmentRandomPools_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::NewProp_EquipmentRandomPools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::NewProp_Comment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModFabricateEquipmentData",
	Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::PropPointers),
	sizeof(FModFabricateEquipmentData),
	alignof(FModFabricateEquipmentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModFabricateEquipmentData()
{
	if (!Z_Registration_Info_UScriptStruct_FModFabricateEquipmentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModFabricateEquipmentData.InnerSingleton, Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModFabricateEquipmentData.InnerSingleton;
}
// ********** End ScriptStruct FModFabricateEquipmentData ******************************************

// ********** Begin ScriptStruct FModEquipmentQualityRange *****************************************
static_assert(std::is_polymorphic<FModEquipmentQualityRange>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModEquipmentQualityRange cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModEquipmentQualityRange;
class UScriptStruct* FModEquipmentQualityRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModEquipmentQualityRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModEquipmentQualityRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModEquipmentQualityRange, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModEquipmentQualityRange"));
	}
	return Z_Registration_Info_UScriptStruct_FModEquipmentQualityRange.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe8\xa3\x85\xe5\xa4\x87\xe5\x93\x81\xe8\xb4\xa8\xe5\x8c\xba\xe9\x97\xb4\xe7\xbb\x93\xe6\x9e\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe8\xa3\x85\xe5\xa4\x87\xe5\x93\x81\xe8\xb4\xa8\xe5\x8c\xba\xe9\x97\xb4\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinQualityValue_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xb0\x8f\xe5\x93\x81\xe8\xb4\xa8\xe5\x80\xbc \xe9\x83\xbd\xe6\x98\xaf\xe5\x8c\x85\xe5\x90\xab\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xb0\x8f\xe5\x93\x81\xe8\xb4\xa8\xe5\x80\xbc \xe9\x83\xbd\xe6\x98\xaf\xe5\x8c\x85\xe5\x90\xab" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxQualityValue_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe5\x93\x81\xe8\xb4\xa8\xe5\x80\xbc \xe5\x8c\x85\xe5\x90\xab\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe5\x93\x81\xe8\xb4\xa8\xe5\x80\xbc \xe5\x8c\x85\xe5\x90\xab" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubAttributesNumber_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x89\xaf\xe5\xb1\x9e\xe6\x80\xa7\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x89\xaf\xe5\xb1\x9e\xe6\x80\xa7\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityNumber_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe5\x8c\xba\xe9\x97\xb4\xe5\xb1\x9e\xe4\xba\x8e\xe4\xbb\x80\xe4\xb9\x88\xe5\x93\x81\xe8\xb4\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe5\x8c\xba\xe9\x97\xb4\xe5\xb1\x9e\xe4\xba\x8e\xe4\xbb\x80\xe4\xb9\x88\xe5\x93\x81\xe8\xb4\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateEquipmentID_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84ID\xef\xbc\x88\xe5\x85\xb3\xe8\x81\x94""DT_GenerateEquipmentData\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84ID\xef\xbc\x88\xe5\x85\xb3\xe8\x81\x94""DT_GenerateEquipmentData\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Comment\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Comment" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinQualityValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxQualityValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubAttributesNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityNumber;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Quality;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GenerateEquipmentID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GenerateEquipmentID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModEquipmentQualityRange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_MinQualityValue = { "MinQualityValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModEquipmentQualityRange, MinQualityValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinQualityValue_MetaData), NewProp_MinQualityValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_MaxQualityValue = { "MaxQualityValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModEquipmentQualityRange, MaxQualityValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxQualityValue_MetaData), NewProp_MaxQualityValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_SubAttributesNumber = { "SubAttributesNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModEquipmentQualityRange, SubAttributesNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubAttributesNumber_MetaData), NewProp_SubAttributesNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_AbilityNumber = { "AbilityNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModEquipmentQualityRange, AbilityNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityNumber_MetaData), NewProp_AbilityNumber_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModEquipmentQualityRange, Quality), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quality_MetaData), NewProp_Quality_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_GenerateEquipmentID_Inner = { "GenerateEquipmentID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_GenerateEquipmentID = { "GenerateEquipmentID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModEquipmentQualityRange, GenerateEquipmentID), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateEquipmentID_MetaData), NewProp_GenerateEquipmentID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModEquipmentQualityRange, Comment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comment_MetaData), NewProp_Comment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_MinQualityValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_MaxQualityValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_SubAttributesNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_AbilityNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_GenerateEquipmentID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_GenerateEquipmentID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewProp_Comment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModEquipmentQualityRange",
	Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::PropPointers),
	sizeof(FModEquipmentQualityRange),
	alignof(FModEquipmentQualityRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModEquipmentQualityRange()
{
	if (!Z_Registration_Info_UScriptStruct_FModEquipmentQualityRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModEquipmentQualityRange.InnerSingleton, Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModEquipmentQualityRange.InnerSingleton;
}
// ********** End ScriptStruct FModEquipmentQualityRange *******************************************

// ********** Begin ScriptStruct FModGenerateEquipmentData *****************************************
static_assert(std::is_polymorphic<FModGenerateEquipmentData>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModGenerateEquipmentData cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModGenerateEquipmentData;
class UScriptStruct* FModGenerateEquipmentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModGenerateEquipmentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModGenerateEquipmentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModGenerateEquipmentData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModGenerateEquipmentData"));
	}
	return Z_Registration_Info_UScriptStruct_FModGenerateEquipmentData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe7\x94\x9f\xe6\x88\x90\xe8\xa3\x85\xe5\xa4\x87\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe7\x94\x9f\xe6\x88\x90\xe8\xa3\x85\xe5\xa4\x87\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentType_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe6\xb1\xa0\xe5\xad\x90\xe4\xba\xa7\xe5\x87\xba\xe7\x9a\x84\xe8\xa3\x85\xe5\xa4\x87\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe6\xb1\xa0\xe5\xad\x90\xe4\xba\xa7\xe5\x87\xba\xe7\x9a\x84\xe8\xa3\x85\xe5\xa4\x87\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentName_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa3\x85\xe5\xa4\x87\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa3\x85\xe5\xa4\x87\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentID_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe8\xa3\x85\xe5\xa4\x87ID\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe8\xa3\x85\xe5\xa4\x87ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainAttributes_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84\xe4\xb8\xbb\xe5\xb1\x9e\xe6\x80\xa7(EquipmentAttribute\xe8\xa1\xa8\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84\xe4\xb8\xbb\xe5\xb1\x9e\xe6\x80\xa7(EquipmentAttribute\xe8\xa1\xa8\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubAttributes_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84\xe6\xac\xa1\xe5\xb1\x9e\xe6\x80\xa7(EquipmentAttribute\xe8\xa1\xa8\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe8\xa3\x85\xe5\xa4\x87\xe7\x9a\x84\xe6\xac\xa1\xe5\xb1\x9e\xe6\x80\xa7(EquipmentAttribute\xe8\xa1\xa8\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentAbility_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe8\xa3\x85\xe5\xa4\x87\xe8\x87\xaa\xe5\xb8\xa6\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe8\xa3\x85\xe5\xa4\x87\xe8\x87\xaa\xe5\xb8\xa6\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Comment\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Comment" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_EquipmentName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EquipmentID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MainAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MainAttributes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubAttributes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EquipmentAbility_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentAbility;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModGenerateEquipmentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_EquipmentType = { "EquipmentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerateEquipmentData, EquipmentType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentType_MetaData), NewProp_EquipmentType_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_EquipmentName = { "EquipmentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerateEquipmentData, EquipmentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentName_MetaData), NewProp_EquipmentName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_EquipmentID = { "EquipmentID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerateEquipmentData, EquipmentID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentID_MetaData), NewProp_EquipmentID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_MainAttributes_Inner = { "MainAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_MainAttributes = { "MainAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerateEquipmentData, MainAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainAttributes_MetaData), NewProp_MainAttributes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_SubAttributes_Inner = { "SubAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_SubAttributes = { "SubAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerateEquipmentData, SubAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubAttributes_MetaData), NewProp_SubAttributes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_EquipmentAbility_Inner = { "EquipmentAbility", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_EquipmentAbility = { "EquipmentAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerateEquipmentData, EquipmentAbility), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentAbility_MetaData), NewProp_EquipmentAbility_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerateEquipmentData, Comment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comment_MetaData), NewProp_Comment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_EquipmentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_EquipmentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_EquipmentID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_MainAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_MainAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_SubAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_SubAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_EquipmentAbility_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_EquipmentAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewProp_Comment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModGenerateEquipmentData",
	Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::PropPointers),
	sizeof(FModGenerateEquipmentData),
	alignof(FModGenerateEquipmentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModGenerateEquipmentData()
{
	if (!Z_Registration_Info_UScriptStruct_FModGenerateEquipmentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModGenerateEquipmentData.InnerSingleton, Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModGenerateEquipmentData.InnerSingleton;
}
// ********** End ScriptStruct FModGenerateEquipmentData *******************************************

// ********** Begin ScriptStruct FModEquipmentAttribute ********************************************
static_assert(std::is_polymorphic<FModEquipmentAttribute>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModEquipmentAttribute cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModEquipmentAttribute;
class UScriptStruct* FModEquipmentAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModEquipmentAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModEquipmentAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModEquipmentAttribute, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModEquipmentAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_FModEquipmentAttribute.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe8\xa3\x85\xe5\xa4\x87\xe5\xb1\x9e\xe6\x80\xa7\xe7\xbb\x93\xe6\x9e\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe8\xa3\x85\xe5\xa4\x87\xe5\xb1\x9e\xe6\x80\xa7\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfo_MetaData[] = {
		{ "Category", "Equipment Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb1\x9e\xe6\x80\xa7\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb1\x9e\xe6\x80\xa7\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "Category", "Equipment Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb1\x9e\xe6\x80\xa7\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb1\x9e\xe6\x80\xa7\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Comment\n" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Comment" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInfo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModEquipmentAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModEquipmentAttribute, AttributeInfo), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeInfo_MetaData), NewProp_AttributeInfo_MetaData) }; // 4101738896
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModEquipmentAttribute, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModEquipmentAttribute, Comment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comment_MetaData), NewProp_Comment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::NewProp_AttributeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::NewProp_Comment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModEquipmentAttribute",
	Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::PropPointers),
	sizeof(FModEquipmentAttribute),
	alignof(FModEquipmentAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModEquipmentAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_FModEquipmentAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModEquipmentAttribute.InnerSingleton, Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModEquipmentAttribute.InnerSingleton;
}
// ********** End ScriptStruct FModEquipmentAttribute **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h__Script_CreateModPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModEquipmentType_StaticEnum, TEXT("EModEquipmentType"), &Z_Registration_Info_UEnum_EModEquipmentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 117580300U) },
		{ EModCommonButtonType_StaticEnum, TEXT("EModCommonButtonType"), &Z_Registration_Info_UEnum_EModCommonButtonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 524401916U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModCharacterEquipment::StaticStruct, Z_Construct_UScriptStruct_FModCharacterEquipment_Statics::NewStructOps, TEXT("ModCharacterEquipment"), &Z_Registration_Info_UScriptStruct_FModCharacterEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModCharacterEquipment), 1394911581U) },
		{ FModCharacterTool::StaticStruct, Z_Construct_UScriptStruct_FModCharacterTool_Statics::NewStructOps, TEXT("ModCharacterTool"), &Z_Registration_Info_UScriptStruct_FModCharacterTool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModCharacterTool), 2067953259U) },
		{ FModCharacterWeapon::StaticStruct, Z_Construct_UScriptStruct_FModCharacterWeapon_Statics::NewStructOps, TEXT("ModCharacterWeapon"), &Z_Registration_Info_UScriptStruct_FModCharacterWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModCharacterWeapon), 3102583944U) },
		{ FModCharacterApparel::StaticStruct, Z_Construct_UScriptStruct_FModCharacterApparel_Statics::NewStructOps, TEXT("ModCharacterApparel"), &Z_Registration_Info_UScriptStruct_FModCharacterApparel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModCharacterApparel), 2468924746U) },
		{ FModFormulaData::StaticStruct, Z_Construct_UScriptStruct_FModFormulaData_Statics::NewStructOps, TEXT("ModFormulaData"), &Z_Registration_Info_UScriptStruct_FModFormulaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModFormulaData), 1040603145U) },
		{ FModFabricateEquipmentData::StaticStruct, Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics::NewStructOps, TEXT("ModFabricateEquipmentData"), &Z_Registration_Info_UScriptStruct_FModFabricateEquipmentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModFabricateEquipmentData), 2459947513U) },
		{ FModEquipmentQualityRange::StaticStruct, Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics::NewStructOps, TEXT("ModEquipmentQualityRange"), &Z_Registration_Info_UScriptStruct_FModEquipmentQualityRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModEquipmentQualityRange), 3856978064U) },
		{ FModGenerateEquipmentData::StaticStruct, Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics::NewStructOps, TEXT("ModGenerateEquipmentData"), &Z_Registration_Info_UScriptStruct_FModGenerateEquipmentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModGenerateEquipmentData), 2738162801U) },
		{ FModEquipmentAttribute::StaticStruct, Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics::NewStructOps, TEXT("ModEquipmentAttribute"), &Z_Registration_Info_UScriptStruct_FModEquipmentAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModEquipmentAttribute), 2897225595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h__Script_CreateModPlugin_391559619(TEXT("/Script/CreateModPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
