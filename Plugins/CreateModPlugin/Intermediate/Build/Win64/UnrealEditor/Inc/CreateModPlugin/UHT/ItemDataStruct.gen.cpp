// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ItemDataStruct.h"
#include "AttributeSet.h"
#include "BaseDataStruct.h"
#include "EastRimWorldAbilityTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemDataStruct() {}

// ********** Begin Cross Module References ********************************************************
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModFoodType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModGroundSoilType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModItemQuality();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModItemType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModStorageSpace();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModDataBase();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModEfficiencyByTemperature();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModFormatText();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModGroupCorrespondingAnim();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModInventoryGeneralData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModInventoryItem();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModStackModel();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer();
UPackage* Z_Construct_UPackage__Script_CreateModPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EModItemQuality ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModItemQuality;
static UEnum* EModItemQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModItemQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModItemQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModItemQuality, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModItemQuality"));
	}
	return Z_Registration_Info_UEnum_EModItemQuality.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModItemQuality>()
{
	return EModItemQuality_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModItemQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blue.Comment", "//\xe8\x93\x9d\xe8\x89\xb2\n" },
		{ "Blue.Name", "EModItemQuality::Blue" },
		{ "Blue.ToolTip", "\xe8\x93\x9d\xe8\x89\xb2" },
		{ "BlueprintType", "true" },
		{ "Colorful.Comment", "//\xe7\x82\xab\xe5\xbd\xa9\n" },
		{ "Colorful.Name", "EModItemQuality::Colorful" },
		{ "Colorful.ToolTip", "\xe7\x82\xab\xe5\xbd\xa9" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe5\x93\x81\xe8\xb4\xa8\xe6\x9e\x9a\xe4\xb8\xbe\n" },
#endif
		{ "Golden.Comment", "//\xe9\x87\x91\xe8\x89\xb2\n" },
		{ "Golden.Name", "EModItemQuality::Golden" },
		{ "Golden.ToolTip", "\xe9\x87\x91\xe8\x89\xb2" },
		{ "Green.Comment", "//\xe7\xbb\xbf\xe8\x89\xb2\n" },
		{ "Green.Name", "EModItemQuality::Green" },
		{ "Green.ToolTip", "\xe7\xbb\xbf\xe8\x89\xb2" },
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
		{ "None.Name", "EModItemQuality::None" },
		{ "Orange.Comment", "//\xe6\xa9\x99\xe8\x89\xb2\n" },
		{ "Orange.Name", "EModItemQuality::Orange" },
		{ "Orange.ToolTip", "\xe6\xa9\x99\xe8\x89\xb2" },
		{ "Purple.Comment", "//\xe7\xb4\xab\xe8\x89\xb2\n" },
		{ "Purple.Name", "EModItemQuality::Purple" },
		{ "Purple.ToolTip", "\xe7\xb4\xab\xe8\x89\xb2" },
		{ "Red.Comment", "//\xe7\xba\xa2\xe8\x89\xb2\n" },
		{ "Red.Name", "EModItemQuality::Red" },
		{ "Red.ToolTip", "\xe7\xba\xa2\xe8\x89\xb2" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x93\x81\xe8\xb4\xa8\xe6\x9e\x9a\xe4\xb8\xbe" },
#endif
		{ "White.Comment", "//\xe7\x99\xbd\xe8\x89\xb2\n" },
		{ "White.Name", "EModItemQuality::White" },
		{ "White.ToolTip", "\xe7\x99\xbd\xe8\x89\xb2" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModItemQuality::None", (int64)EModItemQuality::None },
		{ "EModItemQuality::White", (int64)EModItemQuality::White },
		{ "EModItemQuality::Green", (int64)EModItemQuality::Green },
		{ "EModItemQuality::Blue", (int64)EModItemQuality::Blue },
		{ "EModItemQuality::Purple", (int64)EModItemQuality::Purple },
		{ "EModItemQuality::Orange", (int64)EModItemQuality::Orange },
		{ "EModItemQuality::Golden", (int64)EModItemQuality::Golden },
		{ "EModItemQuality::Red", (int64)EModItemQuality::Red },
		{ "EModItemQuality::Colorful", (int64)EModItemQuality::Colorful },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModItemQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModItemQuality",
	"EModItemQuality",
	Z_Construct_UEnum_CreateModPlugin_EModItemQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModItemQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModItemQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModItemQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModItemQuality()
{
	if (!Z_Registration_Info_UEnum_EModItemQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModItemQuality.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModItemQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModItemQuality.InnerSingleton;
}
// ********** End Enum EModItemQuality *************************************************************

// ********** Begin ScriptStruct FModStackModel ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModStackModel;
class UScriptStruct* FModStackModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModStackModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModStackModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModStackModel, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModStackModel"));
	}
	return Z_Registration_Info_UScriptStruct_FModStackModel.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModStackModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xae\x9a\xe4\xb9\x89\xe5\xa0\x86\xe5\x8f\xa0\xe6\xa8\xa1\xe5\x9e\x8b\xe7\x9a\x84\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x9a\xe4\xb9\x89\xe5\xa0\x86\xe5\x8f\xa0\xe6\xa8\xa1\xe5\x9e\x8b\xe7\x9a\x84\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCapacity_MetaData[] = {
		{ "Category", "StackModel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xb0\x8f\xe5\xae\xb9\xe9\x87\x8f\xe7\x99\xbe\xe5\x88\x86\xe6\xaf\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xb0\x8f\xe5\xae\xb9\xe9\x87\x8f\xe7\x99\xbe\xe5\x88\x86\xe6\xaf\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCapacity_MetaData[] = {
		{ "Category", "StackModel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xa4\xa7\xe5\xae\xb9\xe9\x87\x8f\xe7\x99\xbe\xe5\x88\x86\xe6\xaf\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe5\xae\xb9\xe9\x87\x8f\xe7\x99\xbe\xe5\x88\x86\xe6\xaf\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackModel_MetaData[] = {
		{ "Category", "StackModel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x9c\xa8\xe5\xae\xb9\xe9\x87\x8f\xe8\x8c\x83\xe5\x9b\xb4\xe5\x86\x85\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe5\xae\xb9\xe9\x87\x8f\xe8\x8c\x83\xe5\x9b\xb4\xe5\x86\x85\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCapacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCapacity;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StackModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModStackModel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModStackModel_Statics::NewProp_MinCapacity = { "MinCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModStackModel, MinCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCapacity_MetaData), NewProp_MinCapacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModStackModel_Statics::NewProp_MaxCapacity = { "MaxCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModStackModel, MaxCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCapacity_MetaData), NewProp_MaxCapacity_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModStackModel_Statics::NewProp_StackModel = { "StackModel", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModStackModel, StackModel), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackModel_MetaData), NewProp_StackModel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModStackModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModStackModel_Statics::NewProp_MinCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModStackModel_Statics::NewProp_MaxCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModStackModel_Statics::NewProp_StackModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModStackModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModStackModel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModStackModel",
	Z_Construct_UScriptStruct_FModStackModel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModStackModel_Statics::PropPointers),
	sizeof(FModStackModel),
	alignof(FModStackModel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModStackModel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModStackModel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModStackModel()
{
	if (!Z_Registration_Info_UScriptStruct_FModStackModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModStackModel.InnerSingleton, Z_Construct_UScriptStruct_FModStackModel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModStackModel.InnerSingleton;
}
// ********** End ScriptStruct FModStackModel ******************************************************

// ********** Begin Enum EModGroundSoilType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModGroundSoilType;
static UEnum* EModGroundSoilType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModGroundSoilType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModGroundSoilType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModGroundSoilType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModGroundSoilType"));
	}
	return Z_Registration_Info_UEnum_EModGroundSoilType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModGroundSoilType>()
{
	return EModGroundSoilType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModGroundSoilType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clay.Comment", "//\xe9\xbb\x8f\xe5\x9c\x9f\n" },
		{ "Clay.Name", "EModGroundSoilType::Clay" },
		{ "Clay.ToolTip", "\xe9\xbb\x8f\xe5\x9c\x9f" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe9\x9d\xa2\xe5\x9c\x9f\xe8\xb4\xa8\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "FatSoil.Comment", "//\xe6\xb2\x83\xe5\x9c\x9f\n" },
		{ "FatSoil.Name", "EModGroundSoilType::FatSoil" },
		{ "FatSoil.ToolTip", "\xe6\xb2\x83\xe5\x9c\x9f" },
		{ "GravelSoil.Comment", "//\xe7\xa0\xbe\xe5\x9c\x9f\n" },
		{ "GravelSoil.Name", "EModGroundSoilType::GravelSoil" },
		{ "GravelSoil.ToolTip", "\xe7\xa0\xbe\xe5\x9c\x9f" },
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
		{ "None.Name", "EModGroundSoilType::None" },
		{ "SandySoil.Comment", "//\xe6\xb2\x99\xe5\x9c\x9f\n" },
		{ "SandySoil.Name", "EModGroundSoilType::SandySoil" },
		{ "SandySoil.ToolTip", "\xe6\xb2\x99\xe5\x9c\x9f" },
		{ "Silt.Comment", "//\xe6\xb3\xa5\xe6\xb2\x99\n" },
		{ "Silt.Name", "EModGroundSoilType::Silt" },
		{ "Silt.ToolTip", "\xe6\xb3\xa5\xe6\xb2\x99" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe9\x9d\xa2\xe5\x9c\x9f\xe8\xb4\xa8\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModGroundSoilType::None", (int64)EModGroundSoilType::None },
		{ "EModGroundSoilType::GravelSoil", (int64)EModGroundSoilType::GravelSoil },
		{ "EModGroundSoilType::SandySoil", (int64)EModGroundSoilType::SandySoil },
		{ "EModGroundSoilType::Clay", (int64)EModGroundSoilType::Clay },
		{ "EModGroundSoilType::Silt", (int64)EModGroundSoilType::Silt },
		{ "EModGroundSoilType::FatSoil", (int64)EModGroundSoilType::FatSoil },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModGroundSoilType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModGroundSoilType",
	"EModGroundSoilType",
	Z_Construct_UEnum_CreateModPlugin_EModGroundSoilType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModGroundSoilType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModGroundSoilType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModGroundSoilType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModGroundSoilType()
{
	if (!Z_Registration_Info_UEnum_EModGroundSoilType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModGroundSoilType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModGroundSoilType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModGroundSoilType.InnerSingleton;
}
// ********** End Enum EModGroundSoilType **********************************************************

// ********** Begin ScriptStruct FModEfficiencyByTemperature ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModEfficiencyByTemperature;
class UScriptStruct* FModEfficiencyByTemperature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModEfficiencyByTemperature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModEfficiencyByTemperature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModEfficiencyByTemperature, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModEfficiencyByTemperature"));
	}
	return Z_Registration_Info_UScriptStruct_FModEfficiencyByTemperature.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb8\xa9\xe5\xba\xa6\xe4\xb8\x8e\xe6\x95\x88\xe7\x8e\x87\xe7\x9a\x84\xe5\x85\xb3\xe8\x81\x94  0<=T<=20 E=100%  21<=T<=40 E=50%  T\xe6\x97\xa0\xe8\x8c\x83\xe5\x9b\xb4""E=0 \xe7\xad\x96\xe5\x88\x92\xe7\x9b\xb4\xe6\x8e\xa5\xe5\xa1\xab\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\xa9\xe5\xba\xa6\xe4\xb8\x8e\xe6\x95\x88\xe7\x8e\x87\xe7\x9a\x84\xe5\x85\xb3\xe8\x81\x94  0<=T<=20 E=100%  21<=T<=40 E=50%  T\xe6\x97\xa0\xe8\x8c\x83\xe5\x9b\xb4""E=0 \xe7\xad\x96\xe5\x88\x92\xe7\x9b\xb4\xe6\x8e\xa5\xe5\xa1\xab" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTemperature_MetaData[] = {
		{ "Category", "Grow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xb0\x8f\xe6\xb8\xa9\xe5\xba\xa6(\xe5\x8c\x85\xe5\x90\xab)\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xb0\x8f\xe6\xb8\xa9\xe5\xba\xa6(\xe5\x8c\x85\xe5\x90\xab)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTemperature_MetaData[] = {
		{ "Category", "Grow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe6\xb8\xa9\xe5\xba\xa6(\xe5\x8c\x85\xe5\x90\xab)\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe6\xb8\xa9\xe5\xba\xa6(\xe5\x8c\x85\xe5\x90\xab)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Efficiency_MetaData[] = {
		{ "Category", "Grow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x95\x88\xe7\x8e\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x95\x88\xe7\x8e\x87" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTemperature;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTemperature;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Efficiency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModEfficiencyByTemperature>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::NewProp_MinTemperature = { "MinTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModEfficiencyByTemperature, MinTemperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTemperature_MetaData), NewProp_MinTemperature_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::NewProp_MaxTemperature = { "MaxTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModEfficiencyByTemperature, MaxTemperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTemperature_MetaData), NewProp_MaxTemperature_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::NewProp_Efficiency = { "Efficiency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModEfficiencyByTemperature, Efficiency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Efficiency_MetaData), NewProp_Efficiency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::NewProp_MinTemperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::NewProp_MaxTemperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::NewProp_Efficiency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModEfficiencyByTemperature",
	Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::PropPointers),
	sizeof(FModEfficiencyByTemperature),
	alignof(FModEfficiencyByTemperature),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModEfficiencyByTemperature()
{
	if (!Z_Registration_Info_UScriptStruct_FModEfficiencyByTemperature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModEfficiencyByTemperature.InnerSingleton, Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModEfficiencyByTemperature.InnerSingleton;
}
// ********** End ScriptStruct FModEfficiencyByTemperature *****************************************

// ********** Begin Enum EModStorageSpace **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModStorageSpace;
static UEnum* EModStorageSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModStorageSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModStorageSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModStorageSpace, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModStorageSpace"));
	}
	return Z_Registration_Info_UEnum_EModStorageSpace.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModStorageSpace>()
{
	return EModStorageSpace_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModStorageSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "InDoor.Name", "EModStorageSpace::InDoor" },
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
		{ "None.Name", "EModStorageSpace::None" },
		{ "OutDoor.Name", "EModStorageSpace::OutDoor" },
		{ "UnderRoof.Name", "EModStorageSpace::UnderRoof" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModStorageSpace::None", (int64)EModStorageSpace::None },
		{ "EModStorageSpace::OutDoor", (int64)EModStorageSpace::OutDoor },
		{ "EModStorageSpace::UnderRoof", (int64)EModStorageSpace::UnderRoof },
		{ "EModStorageSpace::InDoor", (int64)EModStorageSpace::InDoor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModStorageSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModStorageSpace",
	"EModStorageSpace",
	Z_Construct_UEnum_CreateModPlugin_EModStorageSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModStorageSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModStorageSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModStorageSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModStorageSpace()
{
	if (!Z_Registration_Info_UEnum_EModStorageSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModStorageSpace.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModStorageSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModStorageSpace.InnerSingleton;
}
// ********** End Enum EModStorageSpace ************************************************************

// ********** Begin ScriptStruct FModGroupCorrespondingAnim ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModGroupCorrespondingAnim;
class UScriptStruct* FModGroupCorrespondingAnim::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModGroupCorrespondingAnim.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModGroupCorrespondingAnim.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModGroupCorrespondingAnim, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModGroupCorrespondingAnim"));
	}
	return Z_Registration_Info_UScriptStruct_FModGroupCorrespondingAnim.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimGroup_MetaData[] = {
		{ "Category", "ModGroupCorrespondingAnim" },
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AnimGroup_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AnimGroup_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AnimGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModGroupCorrespondingAnim>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::NewProp_AnimGroup_ValueProp = { "AnimGroup", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::NewProp_AnimGroup_Key_KeyProp = { "AnimGroup_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::NewProp_AnimGroup = { "AnimGroup", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGroupCorrespondingAnim, AnimGroup), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimGroup_MetaData), NewProp_AnimGroup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::NewProp_AnimGroup_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::NewProp_AnimGroup_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::NewProp_AnimGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModGroupCorrespondingAnim",
	Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::PropPointers),
	sizeof(FModGroupCorrespondingAnim),
	alignof(FModGroupCorrespondingAnim),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModGroupCorrespondingAnim()
{
	if (!Z_Registration_Info_UScriptStruct_FModGroupCorrespondingAnim.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModGroupCorrespondingAnim.InnerSingleton, Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModGroupCorrespondingAnim.InnerSingleton;
}
// ********** End ScriptStruct FModGroupCorrespondingAnim ******************************************

// ********** Begin ScriptStruct FModInventoryGeneralData ******************************************
static_assert(std::is_polymorphic<FModInventoryGeneralData>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModInventoryGeneralData cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModInventoryGeneralData;
class UScriptStruct* FModInventoryGeneralData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModInventoryGeneralData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModInventoryGeneralData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModInventoryGeneralData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModInventoryGeneralData"));
	}
	return Z_Registration_Info_UScriptStruct_FModInventoryGeneralData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe6\x80\xbb\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe6\x80\xbb\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemUseTime_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8\xe7\x89\xa9\xe5\x93\x81\xe5\xa2\x9e\xe5\x8a\xa0\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4 \xe7\xa7\x92 \xe7\x9b\xae\xe5\x89\x8d \xe9\xa3\x9f\xe7\x94\xa8\xe6\x97\xb6\xe7\x94\x9f\xe6\x95\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe7\x89\xa9\xe5\x93\x81\xe5\xa2\x9e\xe5\x8a\xa0\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4 \xe7\xa7\x92 \xe7\x9b\xae\xe5\x89\x8d \xe9\xa3\x9f\xe7\x94\xa8\xe6\x97\xb6\xe7\x94\x9f\xe6\x95\x88" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxItemDurability_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x80\x90\xe4\xb9\x85\xe5\xba\xa6 \xe4\xb8\xba-1\xe6\x97\xb6\xe6\xb2\xa1\xe6\x9c\x89\xe8\x80\x90\xe4\xb9\x85\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x80\x90\xe4\xb9\x85\xe5\xba\xa6 \xe4\xb8\xba-1\xe6\x97\xb6\xe6\xb2\xa1\xe6\x9c\x89\xe8\x80\x90\xe4\xb9\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWeight_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe9\x87\x8d\xe9\x87\x8f\xef\xbc\x88\xe5\x8d\x95\xe4\xbd\x8dKG\xef\xbc\x8c\xe6\x94\xaf\xe6\x8c\x81\xe5\xb0\x8f\xe6\x95\xb0\xe7\x82\xb9\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe9\x87\x8d\xe9\x87\x8f\xef\xbc\x88\xe5\x8d\x95\xe4\xbd\x8dKG\xef\xbc\x8c\xe6\x94\xaf\xe6\x8c\x81\xe5\xb0\x8f\xe6\x95\xb0\xe7\x82\xb9\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotToItemID_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbf\x9d\xe8\xb4\xa8\xe6\x9c\x9f\xe8\xbf\x87\xe5\x90\x8e\xef\xbc\x88\xe8\x85\x90\xe7\x83\x82\xef\xbc\x89\xe7\x9a\x84\xe4\xba\xa7\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\x9d\xe8\xb4\xa8\xe6\x9c\x9f\xe8\xbf\x87\xe5\x90\x8e\xef\xbc\x88\xe8\x85\x90\xe7\x83\x82\xef\xbc\x89\xe7\x9a\x84\xe4\xba\xa7\xe7\x89\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StorageSpaceDecayRate_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe5\x9c\xa8\xe5\x90\x84\xe7\xa7\x8d\xe5\xad\x98\xe5\x82\xa8\xe7\xa9\xba\xe9\x97\xb4\xe4\xb8\x8b\xe7\x9a\x84\xe4\xbf\x9d\xe8\xb4\xa8\xe6\x9c\x9f\xe8\xa1\xb0\xe5\x87\x8f\xe7\x8e\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x9c\xa8\xe5\x90\x84\xe7\xa7\x8d\xe5\xad\x98\xe5\x82\xa8\xe7\xa9\xba\xe9\x97\xb4\xe4\xb8\x8b\xe7\x9a\x84\xe4\xbf\x9d\xe8\xb4\xa8\xe6\x9c\x9f\xe8\xa1\xb0\xe5\x87\x8f\xe7\x8e\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemShelfLife_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe4\xbf\x9d\xe8\xb4\xa8\xe6\x9c\x9f\xef\xbc\x88\xe6\xb8\xb8\xe6\x88\x8f\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x8c\xe7\xa7\x92\xef\xbc\x89 -1\xe4\xb8\xba\xe6\xb2\xa1\xe6\x9c\x89\xe4\xbf\x9d\xe8\xb4\xa8\xe6\x9c\x9f\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe4\xbf\x9d\xe8\xb4\xa8\xe6\x9c\x9f\xef\xbc\x88\xe6\xb8\xb8\xe6\x88\x8f\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x8c\xe7\xa7\x92\xef\xbc\x89 -1\xe4\xb8\xba\xe6\xb2\xa1\xe6\x9c\x89\xe4\xbf\x9d\xe8\xb4\xa8\xe6\x9c\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RateOfDecay_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x89\x80\xe5\xa4\x84\xe7\x9a\x84\xe5\x9c\xb0\xe9\x9d\xa2\xe5\xbd\xb1\xe5\x93\x8d\xe4\xbf\x9d\xe8\xb4\xa8\xe6\x9c\x9f\xe7\x9a\x84\xe8\xa1\xb0\xe5\x87\x8f\xe6\x95\x88\xe7\x8e\x87 \n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x80\xe5\xa4\x84\xe7\x9a\x84\xe5\x9c\xb0\xe9\x9d\xa2\xe5\xbd\xb1\xe5\x93\x8d\xe4\xbf\x9d\xe8\xb4\xa8\xe6\x9c\x9f\xe7\x9a\x84\xe8\xa1\xb0\xe5\x87\x8f\xe6\x95\x88\xe7\x8e\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureThreshold_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb8\xa9\xe5\xba\xa6\xe5\xbd\xb1\xe5\x93\x8d\xe7\x9a\x84\xe7\x9b\xb8\xe5\x85\xb3\xe6\x95\x88\xe7\x8e\x87(\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe4\xbf\x9d\xe8\xb4\xa8\xe6\x9c\x9f\xef\xbc\x8c\xe6\xa4\x8d\xe7\x89\xa9\xe7\x9a\x84\xe7\x94\x9f\xe6\x88\x90\xe6\x95\x88\xe7\x8e\x87\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\xa9\xe5\xba\xa6\xe5\xbd\xb1\xe5\x93\x8d\xe7\x9a\x84\xe7\x9b\xb8\xe5\x85\xb3\xe6\x95\x88\xe7\x8e\x87(\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe4\xbf\x9d\xe8\xb4\xa8\xe6\x9c\x9f\xef\xbc\x8c\xe6\xa4\x8d\xe7\x89\xa9\xe7\x9a\x84\xe7\x94\x9f\xe6\x88\x90\xe6\x95\x88\xe7\x8e\x87\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawMaterial_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe5\x8e\x9f\xe6\x9d\x90\xe6\x96\x99\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe5\x8e\x9f\xe6\x9d\x90\xe6\x96\x99" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeedHight_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe9\xab\x98\xe5\xba\xa6 0 \xe4\xb8\xba\xe6\xb2\xa1\xe6\x9c\x89\xe9\xab\x98\xe5\xba\xa6\xe9\x99\x90\xe5\x88\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe9\xab\x98\xe5\xba\xa6 0 \xe4\xb8\xba\xe6\xb2\xa1\xe6\x9c\x89\xe9\xab\x98\xe5\xba\xa6\xe9\x99\x90\xe5\x88\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackModels_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\x8d\xe5\x90\x8c\xe5\xa0\x86\xe5\x8f\xa0\xe5\xae\xb9\xe9\x87\x8f\xe8\x8c\x83\xe5\x9b\xb4\xe5\x86\x85\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x8d\xe5\x90\x8c\xe5\xa0\x86\xe5\x8f\xa0\xe5\xae\xb9\xe9\x87\x8f\xe8\x8c\x83\xe5\x9b\xb4\xe5\x86\x85\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallGridCount_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe6\x94\xbe\xe7\xbd\xae\xe5\x9c\xa8\xe5\x9c\xb0\xe6\xa0\xbc\xe4\xb8\xad\xe6\x97\xb6\xe5\x8d\xa0\xe7\x94\xa8\xe7\x9a\x84\xe5\xb0\x8f\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0\xe9\x87\x8f \xe7\x9b\xae\xe5\x89\x8d\xe5\x8f\xaa\xe6\x9c\x89 1 \xe8\xb7\x9f 4 \xe6\x97\xa2 \xe5\x9b\x9b\xe5\x88\x86\xe4\xb9\x8b""1\xe6\xa0\xbc\xe5\x92\x8c \xe6\x95\xb4\xe6\xa0\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe6\x94\xbe\xe7\xbd\xae\xe5\x9c\xa8\xe5\x9c\xb0\xe6\xa0\xbc\xe4\xb8\xad\xe6\x97\xb6\xe5\x8d\xa0\xe7\x94\xa8\xe7\x9a\x84\xe5\xb0\x8f\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0\xe9\x87\x8f \xe7\x9b\xae\xe5\x89\x8d\xe5\x8f\xaa\xe6\x9c\x89 1 \xe8\xb7\x9f 4 \xe6\x97\xa2 \xe5\x9b\x9b\xe5\x88\x86\xe4\xb9\x8b""1\xe6\xa0\xbc\xe5\x92\x8c \xe6\x95\xb4\xe6\xa0\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe5\x9c\xa8UI\xe4\xb8\x8a\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe5\x9b\xbe\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x9c\xa8UI\xe4\xb8\x8a\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemPrice_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe5\x87\xba\xe5\x94\xae/\xe8\xb4\xad\xe4\xb9\xb0\xe6\x97\xb6\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe4\xbb\xb7\xe6\xa0\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x87\xba\xe5\x94\xae/\xe8\xb4\xad\xe4\xb9\xb0\xe6\x97\xb6\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe4\xbb\xb7\xe6\xa0\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeDismantled_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\xa4\xe6\x96\xad\xe7\x89\xa9\xe5\x93\x81\xe6\x98\xaf\xe5\x90\xa6\xe8\x83\xbd\xe6\x8b\x86\xe8\xa7\xa3\xef\xbc\x8c\xe6\x8b\x86\xe8\xa7\xa3\xe5\x90\x8e\xe7\xbb\x99\xe5\x87\xba\xe7\x9a\x84\xe6\x9d\x90\xe6\x96\x99\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\xa4\xe6\x96\xad\xe7\x89\xa9\xe5\x93\x81\xe6\x98\xaf\xe5\x90\xa6\xe8\x83\xbd\xe6\x8b\x86\xe8\xa7\xa3\xef\xbc\x8c\xe6\x8b\x86\xe8\xa7\xa3\xe5\x90\x8e\xe7\xbb\x99\xe5\x87\xba\xe7\x9a\x84\xe6\x9d\x90\xe6\x96\x99" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismantledMaterials_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8b\x86\xe8\xa7\xa3\xe5\x90\x8e\xe7\xbb\x99\xe4\xba\x88\xe7\x9a\x84\xe9\x81\x93\xe5\x85\xb7\xe4\xb8\x8e\xe9\x81\x93\xe5\x85\xb7\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8b\x86\xe8\xa7\xa3\xe5\x90\x8e\xe7\xbb\x99\xe4\xba\x88\xe7\x9a\x84\xe9\x81\x93\xe5\x85\xb7\xe4\xb8\x8e\xe9\x81\x93\xe5\x85\xb7\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoverValue_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\x95\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe6\x81\xa2\xe5\xa4\x8d\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x95\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe6\x81\xa2\xe5\xa4\x8d\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xa5\xe7\x89\xa9\xe5\x93\x81\xe5\x9c\xa8\xe5\x9c\xb0\xe9\x9d\xa2/\xe5\xbb\xba\xe7\xad\x91\xe5\x86\x85\xe5\x8f\xaf\xe5\xa0\x86\xe5\x8f\xa0\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5\xe7\x89\xa9\xe5\x93\x81\xe5\x9c\xa8\xe5\x9c\xb0\xe9\x9d\xa2/\xe5\xbb\xba\xe7\xad\x91\xe5\x86\x85\xe5\x8f\xaf\xe5\xa0\x86\xe5\x8f\xa0\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuality_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe5\x93\x81\xe8\xb4\xa8\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8eUI\xe6\x98\xbe\xe7\xa4\xba\xe5\x92\x8c\xe7\xad\x9b\xe9\x80\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x93\x81\xe8\xb4\xa8\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8eUI\xe6\x98\xbe\xe7\xa4\xba\xe5\x92\x8c\xe7\xad\x9b\xe9\x80\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe5\x9c\xa8UI\xe4\xb8\x8a\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe6\x96\x87\xe5\xad\x97\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x9c\xa8UI\xe4\xb8\x8a\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe6\x96\x87\xe5\xad\x97\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemModel_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84""3D\xe6\xa8\xa1\xe5\x9e\x8b \xe4\xbe\x8b\xe5\xa6\x82\xe6\x8b\xbf\xe7\x9d\x80\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84""3D\xe6\xa8\xa1\xe5\x9e\x8b \xe4\xbe\x8b\xe5\xa6\x82\xe6\x8b\xbf\xe7\x9d\x80\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundInventoryType_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatItemDescription_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96\xe5\x90\x8e\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96\xe5\x90\x8e\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemGrade_MetaData[] = {
		{ "Category", "Equipment Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe5\x93\x81\xe9\x98\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe5\x93\x81\xe9\x98\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSubstituteClass_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe6\x9b\xbf\xe8\xba\xab\xe7\xb1\xbb \xe5\x9c\xa8\xe5\xae\x9e\xe9\x99\x85\xe6\x93\x8d\xe4\xbd\x9c\xe6\x97\xb6\xe4\xbc\x9a\xe6\x9b\xbf\xe6\x8d\xa2\xe4\xb8\xba\xe6\xad\xa4""actor\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe6\x9b\xbf\xe8\xba\xab\xe7\xb1\xbb \xe5\x9c\xa8\xe5\xae\x9e\xe9\x99\x85\xe6\x93\x8d\xe4\xbd\x9c\xe6\x97\xb6\xe4\xbc\x9a\xe6\x9b\xbf\xe6\x8d\xa2\xe4\xb8\xba\xe6\xad\xa4""actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTag_MetaData[] = {
		{ "Categories", "Inventory" },
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeforeObserveInformationWidget_MetaData[] = {
		{ "Category", "Observe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x82\xe5\xaf\x9f\xe5\x89\x8d\xe7\x82\xb9\xe5\x87\xbb\xe7\x89\xa9\xe5\x93\x81\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8e\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe7\x95\x8c\xe9\x9d\xa2ID \xe5\x85\xb3\xe8\x81\x94""DT_CommonUIConfig\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x82\xe5\xaf\x9f\xe5\x89\x8d\xe7\x82\xb9\xe5\x87\xbb\xe7\x89\xa9\xe5\x93\x81\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8e\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe7\x95\x8c\xe9\x9d\xa2ID \xe5\x85\xb3\xe8\x81\x94""DT_CommonUIConfig\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InformationWidget_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x82\xb9\xe5\x87\xbb\xe7\x89\xa9\xe5\x93\x81\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8e\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe7\x95\x8c\xe9\x9d\xa2ID \xe5\x85\xb3\xe8\x81\x94""DT_CommonUIConfig\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x82\xb9\xe5\x87\xbb\xe7\x89\xa9\xe5\x93\x81\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8e\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84\xe7\x95\x8c\xe9\x9d\xa2ID \xe5\x85\xb3\xe8\x81\x94""DT_CommonUIConfig\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipInformationWidget_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x82\xac\xe6\xb5\xae\xe5\x90\x8e\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84tip\xe7\x95\x8c\xe9\x9d\xa2ID \xe5\x85\xb3\xe8\x81\x94""DT_CommonUIConfig\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x82\xac\xe6\xb5\xae\xe5\x90\x8e\xe6\x98\xbe\xe7\xa4\xba\xe7\x9a\x84tip\xe7\x95\x8c\xe9\x9d\xa2ID \xe5\x85\xb3\xe8\x81\x94""DT_CommonUIConfig\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xa8\xe4\xb8\x8e\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe4\xba\xa4\xe6\x8d\xa2\xe6\x97\xb6\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe9\x99\x84\xe5\x8a\xa0\xe7\x9a\x84\xe6\x8f\x92\xe6\xa7\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe4\xb8\x8e\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe4\xba\xa4\xe6\x8d\xa2\xe6\x97\xb6\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe9\x99\x84\xe5\x8a\xa0\xe7\x9a\x84\xe6\x8f\x92\xe6\xa7\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GOAPActions_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe6\x8b\xa5\xe6\x9c\x89\xe7\x9a\x84GOAP Action\xe7\x9a\x84ID\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe6\x8b\xa5\xe6\x9c\x89\xe7\x9a\x84GOAP Action\xe7\x9a\x84ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorAnimation_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xa8\xe4\xb8\x8e\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe4\xba\xa4\xe6\x8d\xa2\xe6\x97\xb6\xe8\xa1\x8c\xe4\xb8\xba\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb(\xe7\x9b\xae\xe5\x89\x8d\xe5\x9c\xa8\xe6\x8b\xbe\xe5\x8f\x96\xe7\x89\xa9\xe5\x93\x81\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe4\xb8\x8e\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe4\xba\xa4\xe6\x8d\xa2\xe6\x97\xb6\xe8\xa1\x8c\xe4\xb8\xba\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb(\xe7\x9b\xae\xe5\x89\x8d\xe5\x9c\xa8\xe6\x8b\xbe\xe5\x8f\x96\xe7\x89\xa9\xe5\x93\x81\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorBlendAnimation_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe6\x8b\xbe\xe5\x8f\x96\xe4\xbb\xa5\xe5\x90\x8e\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa""action\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xb7\xb7\xe5\x90\x88\xe5\x8a\xa8\xe4\xbd\x9c \xe4\xbe\x8b\xe5\xa6\x82\xe6\x8b\xbe\xe5\x8f\x96\xe5\x8e\x9f\xe6\x9c\xa8\xe5\x90\x8e\xe6\x8a\xb1\xe7\x9d\x80\xe5\x8e\x9f\xe6\x9c\xa8\xe8\xa1\x8c\xe8\xb5\xb0\xe7\x9a\x84\xe4\xb8\x8a\xe5\x8d\x8a\xe8\xba\xab\xe6\xb7\xb7\xe5\x90\x88\xe5\x8a\xa8\xe4\xbd\x9c\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe6\x8b\xbe\xe5\x8f\x96\xe4\xbb\xa5\xe5\x90\x8e\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa""action\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xb7\xb7\xe5\x90\x88\xe5\x8a\xa8\xe4\xbd\x9c \xe4\xbe\x8b\xe5\xa6\x82\xe6\x8b\xbe\xe5\x8f\x96\xe5\x8e\x9f\xe6\x9c\xa8\xe5\x90\x8e\xe6\x8a\xb1\xe7\x9d\x80\xe5\x8e\x9f\xe6\x9c\xa8\xe8\xa1\x8c\xe8\xb5\xb0\xe7\x9a\x84\xe4\xb8\x8a\xe5\x8d\x8a\xe8\xba\xab\xe6\xb7\xb7\xe5\x90\x88\xe5\x8a\xa8\xe4\xbd\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorItemMesh_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xa8\xe8\xa1\x8c\xe4\xb8\xba\xe4\xb8\xad\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe9\x85\x8d\xe7\xbd\xae\xe5\x88\x99\xe4\xbd\xbf\xe7\x94\xa8\xe9\xbb\x98\xe8\xae\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe8\xa1\x8c\xe4\xb8\xba\xe4\xb8\xad\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe9\x85\x8d\xe7\xbd\xae\xe5\x88\x99\xe4\xbd\xbf\xe7\x94\xa8\xe9\xbb\x98\xe8\xae\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSound_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe7\x9b\xb8\xe5\x85\xb3\xe7\x9a\x84\xe9\x9f\xb3\xe6\x95\x88 key \xe4\xb8\xba\xe9\x9f\xb3\xe6\x95\x88\xe7\x9a\x84\xe6\x92\xad\xe6\x94\xbetag value \xe9\x9f\xb3\xe6\x95\x88\xe7\x9a\x84id  \xe8\xaf\xbb\xe5\x8f\x96GameSoundInfo\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\x9b\xb8\xe5\x85\xb3\xe7\x9a\x84\xe9\x9f\xb3\xe6\x95\x88 key \xe4\xb8\xba\xe9\x9f\xb3\xe6\x95\x88\xe7\x9a\x84\xe6\x92\xad\xe6\x94\xbetag value \xe9\x9f\xb3\xe6\x95\x88\xe7\x9a\x84id  \xe8\xaf\xbb\xe5\x8f\x96GameSoundInfo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContainerMap_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xba\xa7\xe7\x94\x9f\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c \xe7\x9b\xae\xe5\x89\x8d \xe9\xa3\x9f\xe7\x94\xa8\xe6\x97\xb6\xe7\x94\x9f\xe6\x95\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xba\xa7\xe7\x94\x9f\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c \xe7\x9b\xae\xe5\x89\x8d \xe9\xa3\x9f\xe7\x94\xa8\xe6\x97\xb6\xe7\x94\x9f\xe6\x95\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowScore_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\x88\x90\xe9\x95\xbf\xe7\xa7\xaf\xe5\x88\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\x88\x90\xe9\x95\xbf\xe7\xa7\xaf\xe5\x88\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForMulaId_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84\xe9\x85\x8d\xe6\x96\xb9id\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84\xe9\x85\x8d\xe6\x96\xb9id" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemUseTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxItemDurability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemWeight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RotToItemID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StorageSpaceDecayRate_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StorageSpaceDecayRate_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StorageSpaceDecayRate_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StorageSpaceDecayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemShelfLife;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RateOfDecay_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RateOfDecay_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RateOfDecay_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RateOfDecay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemperatureThreshold_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TemperatureThreshold;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RawMaterial_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RawMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NeedHight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StackModels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StackModels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmallGridCount;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ItemIcon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemPrice;
	static void NewProp_bCanBeDismantled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeDismantled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DismantledMaterials_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DismantledMaterials_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DismantledMaterials;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecoverValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemQuality;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ItemModel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroundInventoryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundInventoryType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FormatItemDescription;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemGrade;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ItemSubstituteClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BeforeObserveInformationWidget;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InformationWidget;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TipInformationWidget;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SocketName_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SocketName_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GOAPActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GOAPActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BehaviorAnimation_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BehaviorAnimation_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BehaviorAnimation_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BehaviorAnimation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BehaviorBlendAnimation_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BehaviorBlendAnimation_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BehaviorBlendAnimation_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BehaviorBlendAnimation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BehaviorItemMesh_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BehaviorItemMesh_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BehaviorItemMesh_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BehaviorItemMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemSound_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSound_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ItemSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContainerMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContainerMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EffectContainerMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrowScore;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ForMulaId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModInventoryGeneralData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemUseTime = { "ItemUseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, ItemUseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemUseTime_MetaData), NewProp_ItemUseTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_MaxItemDurability = { "MaxItemDurability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, MaxItemDurability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxItemDurability_MetaData), NewProp_MaxItemDurability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemWeight = { "ItemWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, ItemWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWeight_MetaData), NewProp_ItemWeight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RotToItemID = { "RotToItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, RotToItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotToItemID_MetaData), NewProp_RotToItemID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_StorageSpaceDecayRate_ValueProp = { "StorageSpaceDecayRate", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_StorageSpaceDecayRate_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_StorageSpaceDecayRate_Key_KeyProp = { "StorageSpaceDecayRate_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModStorageSpace, METADATA_PARAMS(0, nullptr) }; // 3174844863
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_StorageSpaceDecayRate = { "StorageSpaceDecayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, StorageSpaceDecayRate), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StorageSpaceDecayRate_MetaData), NewProp_StorageSpaceDecayRate_MetaData) }; // 3174844863
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemShelfLife = { "ItemShelfLife", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, ItemShelfLife), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemShelfLife_MetaData), NewProp_ItemShelfLife_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RateOfDecay_ValueProp = { "RateOfDecay", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RateOfDecay_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RateOfDecay_Key_KeyProp = { "RateOfDecay_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModGroundSoilType, METADATA_PARAMS(0, nullptr) }; // 3708701061
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RateOfDecay = { "RateOfDecay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, RateOfDecay), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RateOfDecay_MetaData), NewProp_RateOfDecay_MetaData) }; // 3708701061
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_TemperatureThreshold_Inner = { "TemperatureThreshold", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModEfficiencyByTemperature, METADATA_PARAMS(0, nullptr) }; // 2114280912
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_TemperatureThreshold = { "TemperatureThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, TemperatureThreshold), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemperatureThreshold_MetaData), NewProp_TemperatureThreshold_MetaData) }; // 2114280912
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RawMaterial_Inner = { "RawMaterial", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RawMaterial = { "RawMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, RawMaterial), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawMaterial_MetaData), NewProp_RawMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_NeedHight = { "NeedHight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, NeedHight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeedHight_MetaData), NewProp_NeedHight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_StackModels_Inner = { "StackModels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModStackModel, METADATA_PARAMS(0, nullptr) }; // 3536238449
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_StackModels = { "StackModels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, StackModels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackModels_MetaData), NewProp_StackModels_MetaData) }; // 3536238449
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_SmallGridCount = { "SmallGridCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, SmallGridCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallGridCount_MetaData), NewProp_SmallGridCount_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIcon_MetaData), NewProp_ItemIcon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemPrice = { "ItemPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, ItemPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPrice_MetaData), NewProp_ItemPrice_MetaData) };
void Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_bCanBeDismantled_SetBit(void* Obj)
{
	((FModInventoryGeneralData*)Obj)->bCanBeDismantled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_bCanBeDismantled = { "bCanBeDismantled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModInventoryGeneralData), &Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_bCanBeDismantled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeDismantled_MetaData), NewProp_bCanBeDismantled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_DismantledMaterials_ValueProp = { "DismantledMaterials", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_DismantledMaterials_Key_KeyProp = { "DismantledMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_DismantledMaterials = { "DismantledMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, DismantledMaterials), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismantledMaterials_MetaData), NewProp_DismantledMaterials_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RecoverValue = { "RecoverValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, RecoverValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoverValue_MetaData), NewProp_RecoverValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemQuality = { "ItemQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, ItemQuality), Z_Construct_UEnum_CreateModPlugin_EModItemQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemQuality_MetaData), NewProp_ItemQuality_MetaData) }; // 3220179462
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDescription_MetaData), NewProp_ItemDescription_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemModel = { "ItemModel", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, ItemModel), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemModel_MetaData), NewProp_ItemModel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_GroundInventoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_GroundInventoryType = { "GroundInventoryType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, GroundInventoryType), Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundInventoryType_MetaData), NewProp_GroundInventoryType_MetaData) }; // 1596875282
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_FormatItemDescription = { "FormatItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, FormatItemDescription), Z_Construct_UScriptStruct_FModFormatText, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatItemDescription_MetaData), NewProp_FormatItemDescription_MetaData) }; // 3853051553
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemGrade = { "ItemGrade", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, ItemGrade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemGrade_MetaData), NewProp_ItemGrade_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemSubstituteClass = { "ItemSubstituteClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, ItemSubstituteClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSubstituteClass_MetaData), NewProp_ItemSubstituteClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTag_MetaData), NewProp_GameplayTag_MetaData) }; // 133831994
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BeforeObserveInformationWidget = { "BeforeObserveInformationWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, BeforeObserveInformationWidget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeforeObserveInformationWidget_MetaData), NewProp_BeforeObserveInformationWidget_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_InformationWidget = { "InformationWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, InformationWidget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InformationWidget_MetaData), NewProp_InformationWidget_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_TipInformationWidget = { "TipInformationWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, TipInformationWidget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipInformationWidget_MetaData), NewProp_TipInformationWidget_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_SocketName_ValueProp = { "SocketName", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_SocketName_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_SocketName_Key_KeyProp = { "SocketName_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState, METADATA_PARAMS(0, nullptr) }; // 2884534965
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, SocketName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) }; // 2884534965
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_GOAPActions_Inner = { "GOAPActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_GOAPActions = { "GOAPActions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, GOAPActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GOAPActions_MetaData), NewProp_GOAPActions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorAnimation_ValueProp = { "BehaviorAnimation", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModGroupCorrespondingAnim, METADATA_PARAMS(0, nullptr) }; // 400229825
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorAnimation_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorAnimation_Key_KeyProp = { "BehaviorAnimation_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState, METADATA_PARAMS(0, nullptr) }; // 2884534965
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorAnimation = { "BehaviorAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, BehaviorAnimation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorAnimation_MetaData), NewProp_BehaviorAnimation_MetaData) }; // 2884534965 400229825
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorBlendAnimation_ValueProp = { "BehaviorBlendAnimation", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModGroupCorrespondingAnim, METADATA_PARAMS(0, nullptr) }; // 400229825
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorBlendAnimation_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorBlendAnimation_Key_KeyProp = { "BehaviorBlendAnimation_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState, METADATA_PARAMS(0, nullptr) }; // 2884534965
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorBlendAnimation = { "BehaviorBlendAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, BehaviorBlendAnimation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorBlendAnimation_MetaData), NewProp_BehaviorBlendAnimation_MetaData) }; // 2884534965 400229825
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorItemMesh_ValueProp = { "BehaviorItemMesh", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorItemMesh_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorItemMesh_Key_KeyProp = { "BehaviorItemMesh_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModCharacterBehaviorState, METADATA_PARAMS(0, nullptr) }; // 2884534965
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorItemMesh = { "BehaviorItemMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, BehaviorItemMesh), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorItemMesh_MetaData), NewProp_BehaviorItemMesh_MetaData) }; // 2884534965
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemSound_ValueProp = { "ItemSound", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemSound_Key_KeyProp = { "ItemSound_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemSound = { "ItemSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, ItemSound), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSound_MetaData), NewProp_ItemSound_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_EffectContainerMap_ValueProp = { "EffectContainerMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer, METADATA_PARAMS(0, nullptr) }; // 2161543575
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_EffectContainerMap_Key_KeyProp = { "EffectContainerMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_EffectContainerMap = { "EffectContainerMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, EffectContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContainerMap_MetaData), NewProp_EffectContainerMap_MetaData) }; // 133831994 2161543575
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_GrowScore = { "GrowScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, GrowScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowScore_MetaData), NewProp_GrowScore_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ForMulaId = { "ForMulaId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryGeneralData, ForMulaId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForMulaId_MetaData), NewProp_ForMulaId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemUseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_MaxItemDurability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RotToItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_StorageSpaceDecayRate_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_StorageSpaceDecayRate_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_StorageSpaceDecayRate_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_StorageSpaceDecayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemShelfLife,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RateOfDecay_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RateOfDecay_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RateOfDecay_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RateOfDecay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_TemperatureThreshold_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_TemperatureThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RawMaterial_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RawMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_NeedHight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_StackModels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_StackModels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_SmallGridCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_bCanBeDismantled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_DismantledMaterials_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_DismantledMaterials_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_DismantledMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_RecoverValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_GroundInventoryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_GroundInventoryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_FormatItemDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemGrade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemSubstituteClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_GameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BeforeObserveInformationWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_InformationWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_TipInformationWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_SocketName_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_SocketName_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_SocketName_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_GOAPActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_GOAPActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorAnimation_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorAnimation_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorAnimation_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorBlendAnimation_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorBlendAnimation_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorBlendAnimation_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorBlendAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorItemMesh_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorItemMesh_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorItemMesh_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_BehaviorItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemSound_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemSound_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ItemSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_EffectContainerMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_EffectContainerMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_EffectContainerMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_GrowScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewProp_ForMulaId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModInventoryGeneralData",
	Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::PropPointers),
	sizeof(FModInventoryGeneralData),
	alignof(FModInventoryGeneralData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModInventoryGeneralData()
{
	if (!Z_Registration_Info_UScriptStruct_FModInventoryGeneralData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModInventoryGeneralData.InnerSingleton, Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModInventoryGeneralData.InnerSingleton;
}
// ********** End ScriptStruct FModInventoryGeneralData ********************************************

// ********** Begin Enum EModItemType **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModItemType;
static UEnum* EModItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModItemType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModItemType"));
	}
	return Z_Registration_Info_UEnum_EModItemType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModItemType>()
{
	return EModItemType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnimalFood.Comment", "//\xe5\x8a\xa8\xe7\x89\xa9\xe9\xa3\x9f\xe7\x89\xa9\n" },
		{ "AnimalFood.Name", "EModItemType::AnimalFood" },
		{ "AnimalFood.ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9\xe9\xa3\x9f\xe7\x89\xa9" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe5\x88\x86\xe7\xb1\xbb\xe6\x9e\x9a\xe4\xb8\xbe\n" },
#endif
		{ "Drug.Comment", "//\xe4\xb8\xb9\xe8\x8d\xaf\n" },
		{ "Drug.Name", "EModItemType::Drug" },
		{ "Drug.ToolTip", "\xe4\xb8\xb9\xe8\x8d\xaf" },
		{ "Food.Comment", "//\xe9\xa3\x9f\xe7\x89\xa9\n" },
		{ "Food.Name", "EModItemType::Food" },
		{ "Food.ToolTip", "\xe9\xa3\x9f\xe7\x89\xa9" },
		{ "Materials.Comment", "//\xe6\x9d\x90\xe6\x96\x99\n" },
		{ "Materials.Name", "EModItemType::Materials" },
		{ "Materials.ToolTip", "\xe6\x9d\x90\xe6\x96\x99" },
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
		{ "None.Name", "EModItemType::None" },
		{ "Rubbish.Comment", "// \xe5\x9e\x83\xe5\x9c\xbe\n" },
		{ "Rubbish.Name", "EModItemType::Rubbish" },
		{ "Rubbish.ToolTip", "\xe5\x9e\x83\xe5\x9c\xbe" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x88\x86\xe7\xb1\xbb\xe6\x9e\x9a\xe4\xb8\xbe" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModItemType::None", (int64)EModItemType::None },
		{ "EModItemType::Food", (int64)EModItemType::Food },
		{ "EModItemType::Materials", (int64)EModItemType::Materials },
		{ "EModItemType::Drug", (int64)EModItemType::Drug },
		{ "EModItemType::Rubbish", (int64)EModItemType::Rubbish },
		{ "EModItemType::AnimalFood", (int64)EModItemType::AnimalFood },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModItemType",
	"EModItemType",
	Z_Construct_UEnum_CreateModPlugin_EModItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModItemType()
{
	if (!Z_Registration_Info_UEnum_EModItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModItemType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModItemType.InnerSingleton;
}
// ********** End Enum EModItemType ****************************************************************

// ********** Begin Enum EModFoodType **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModFoodType;
static UEnum* EModFoodType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModFoodType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModFoodType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModFoodType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModFoodType"));
	}
	return Z_Registration_Info_UEnum_EModFoodType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModFoodType>()
{
	return EModFoodType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModFoodType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xa3\x9f\xe7\x89\xa9\xe5\x88\x86\xe7\xb1\xbb\xe6\x9e\x9a\xe4\xb8\xbe\n" },
#endif
		{ "Meat.Comment", "//\xe8\x82\x89\xe9\xa3\x9f\n" },
		{ "Meat.Name", "EModFoodType::Meat" },
		{ "Meat.ToolTip", "\xe8\x82\x89\xe9\xa3\x9f" },
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
		{ "None.Name", "EModFoodType::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xa3\x9f\xe7\x89\xa9\xe5\x88\x86\xe7\xb1\xbb\xe6\x9e\x9a\xe4\xb8\xbe" },
#endif
		{ "Vegetarian.Comment", "//\xe7\xb4\xa0\xe9\xa3\x9f\n" },
		{ "Vegetarian.Name", "EModFoodType::Vegetarian" },
		{ "Vegetarian.ToolTip", "\xe7\xb4\xa0\xe9\xa3\x9f" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModFoodType::None", (int64)EModFoodType::None },
		{ "EModFoodType::Vegetarian", (int64)EModFoodType::Vegetarian },
		{ "EModFoodType::Meat", (int64)EModFoodType::Meat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModFoodType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModFoodType",
	"EModFoodType",
	Z_Construct_UEnum_CreateModPlugin_EModFoodType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModFoodType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModFoodType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModFoodType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModFoodType()
{
	if (!Z_Registration_Info_UEnum_EModFoodType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModFoodType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModFoodType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModFoodType.InnerSingleton;
}
// ********** End Enum EModFoodType ****************************************************************

// ********** Begin ScriptStruct FModInventoryItem *************************************************
static_assert(std::is_polymorphic<FModInventoryItem>() == std::is_polymorphic<FModInventoryGeneralData>(), "USTRUCT FModInventoryItem cannot be polymorphic unless super FModInventoryGeneralData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModInventoryItem;
class UScriptStruct* FModInventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModInventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModInventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModInventoryItem, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModInventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_FModInventoryItem.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModInventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RobotID_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe4\xb8\xba\xe6\xbf\x80\xe6\xb4\xbb\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xba\xe7\x9b\xb8\xe5\x85\xb3\xe6\x97\xb6\xef\xbc\x8c\xe5\xaf\xb9\xe5\xba\x94\xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xbaID\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe4\xb8\xba\xe6\xbf\x80\xe6\xb4\xbb\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xba\xe7\x9b\xb8\xe5\x85\xb3\xe6\x97\xb6\xef\xbc\x8c\xe5\xaf\xb9\xe5\xba\x94\xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xbaID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveDrugEffect_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe8\xae\xb0\xe5\xbd\x95\xe8\xa7\x92\xe8\x89\xb2\xe5\xaf\xb9\xe8\xaf\xa5\xe8\x8d\xaf\xe5\x93\x81\xe4\xbd\xbf\xe7\x94\xa8\xe8\xbf\x87\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\xef\xbc\x88\xe5\x92\x8c\xe8\x80\x90\xe8\x8d\xaf\xe6\x80\xa7\xe6\x9c\x89\xe5\x85\xb3\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\xae\xb0\xe5\xbd\x95\xe8\xa7\x92\xe8\x89\xb2\xe5\xaf\xb9\xe8\xaf\xa5\xe8\x8d\xaf\xe5\x93\x81\xe4\xbd\xbf\xe7\x94\xa8\xe8\xbf\x87\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\xef\xbc\x88\xe5\x92\x8c\xe8\x80\x90\xe8\x8d\xaf\xe6\x80\xa7\xe6\x9c\x89\xe5\x85\xb3\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrugResistance_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x80\x90\xe8\x8d\xaf\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x80\x90\xe8\x8d\xaf\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddAttribute_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa2\x9e\xe5\x8a\xa0\xe5\xb1\x9e\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa2\x9e\xe5\x8a\xa0\xe5\xb1\x9e\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuelConversionRatio_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\xaf\xe4\xbd\x9c\xe4\xb8\xba\xe7\x87\x83\xe6\x96\x99\xe6\x97\xb6\xe7\x9a\x84\xe8\xbd\xac\xe5\x8c\x96\xe6\xaf\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe4\xbd\x9c\xe4\xb8\xba\xe7\x87\x83\xe6\x96\x99\xe6\x97\xb6\xe7\x9a\x84\xe8\xbd\xac\xe5\x8c\x96\xe6\xaf\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddBuffByID_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbd\xbf\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8e\xe4\xbc\x9a\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84""buff\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8e\xe4\xbc\x9a\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84""buff" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x94\xa8\xe4\xba\x8e\xe7\xad\x9b\xe9\x80\x89\xe5\x92\x8c\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe7\x9a\x84\xe4\xba\x92\xe5\x8a\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x94\xa8\xe4\xba\x8e\xe7\xad\x9b\xe9\x80\x89\xe5\x92\x8c\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe7\x9a\x84\xe4\xba\x92\xe5\x8a\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseDescribte_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe4\xbd\xbf\xe7\x94\xa8\xe6\x95\x88\xe6\x9e\x9c\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe4\xbd\xbf\xe7\x94\xa8\xe6\x95\x88\xe6\x9e\x9c\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoodType_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xa3\x9f\xe7\x89\xa9\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "editcondition", "ItemType == EModItemType::Food" },
		{ "ModuleRelativePath", "Public/ItemDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xa3\x9f\xe7\x89\xa9\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RobotID;
	static void NewProp_bSaveDrugEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveDrugEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrugResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AddAttribute_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddAttribute_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AddAttribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FuelConversionRatio;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AddBuffByID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AddBuffByID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UseDescribte;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FoodType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FoodType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModInventoryItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_RobotID = { "RobotID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryItem, RobotID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RobotID_MetaData), NewProp_RobotID_MetaData) };
void Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_bSaveDrugEffect_SetBit(void* Obj)
{
	((FModInventoryItem*)Obj)->bSaveDrugEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_bSaveDrugEffect = { "bSaveDrugEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModInventoryItem), &Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_bSaveDrugEffect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveDrugEffect_MetaData), NewProp_bSaveDrugEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_DrugResistance = { "DrugResistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryItem, DrugResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrugResistance_MetaData), NewProp_DrugResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_AddAttribute_ValueProp = { "AddAttribute", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_AddAttribute_Key_KeyProp = { "AddAttribute_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 1212282043
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_AddAttribute = { "AddAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryItem, AddAttribute), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddAttribute_MetaData), NewProp_AddAttribute_MetaData) }; // 1212282043
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_FuelConversionRatio = { "FuelConversionRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryItem, FuelConversionRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuelConversionRatio_MetaData), NewProp_FuelConversionRatio_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_AddBuffByID_Inner = { "AddBuffByID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_AddBuffByID = { "AddBuffByID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryItem, AddBuffByID), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddBuffByID_MetaData), NewProp_AddBuffByID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryItem, ItemType), Z_Construct_UEnum_CreateModPlugin_EModItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 2144039006
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_UseDescribte = { "UseDescribte", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryItem, UseDescribte), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseDescribte_MetaData), NewProp_UseDescribte_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_FoodType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_FoodType = { "FoodType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModInventoryItem, FoodType), Z_Construct_UEnum_CreateModPlugin_EModFoodType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoodType_MetaData), NewProp_FoodType_MetaData) }; // 3083304942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_RobotID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_bSaveDrugEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_DrugResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_AddAttribute_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_AddAttribute_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_AddAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_FuelConversionRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_AddBuffByID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_AddBuffByID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_UseDescribte,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_FoodType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewProp_FoodType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModInventoryItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModInventoryGeneralData,
	&NewStructOps,
	"ModInventoryItem",
	Z_Construct_UScriptStruct_FModInventoryItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModInventoryItem_Statics::PropPointers),
	sizeof(FModInventoryItem),
	alignof(FModInventoryItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModInventoryItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModInventoryItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModInventoryItem()
{
	if (!Z_Registration_Info_UScriptStruct_FModInventoryItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModInventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FModInventoryItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModInventoryItem.InnerSingleton;
}
// ********** End ScriptStruct FModInventoryItem ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ItemDataStruct_h__Script_CreateModPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModItemQuality_StaticEnum, TEXT("EModItemQuality"), &Z_Registration_Info_UEnum_EModItemQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3220179462U) },
		{ EModGroundSoilType_StaticEnum, TEXT("EModGroundSoilType"), &Z_Registration_Info_UEnum_EModGroundSoilType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3708701061U) },
		{ EModStorageSpace_StaticEnum, TEXT("EModStorageSpace"), &Z_Registration_Info_UEnum_EModStorageSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3174844863U) },
		{ EModItemType_StaticEnum, TEXT("EModItemType"), &Z_Registration_Info_UEnum_EModItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2144039006U) },
		{ EModFoodType_StaticEnum, TEXT("EModFoodType"), &Z_Registration_Info_UEnum_EModFoodType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3083304942U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModStackModel::StaticStruct, Z_Construct_UScriptStruct_FModStackModel_Statics::NewStructOps, TEXT("ModStackModel"), &Z_Registration_Info_UScriptStruct_FModStackModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModStackModel), 3536238449U) },
		{ FModEfficiencyByTemperature::StaticStruct, Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics::NewStructOps, TEXT("ModEfficiencyByTemperature"), &Z_Registration_Info_UScriptStruct_FModEfficiencyByTemperature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModEfficiencyByTemperature), 2114280912U) },
		{ FModGroupCorrespondingAnim::StaticStruct, Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics::NewStructOps, TEXT("ModGroupCorrespondingAnim"), &Z_Registration_Info_UScriptStruct_FModGroupCorrespondingAnim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModGroupCorrespondingAnim), 400229825U) },
		{ FModInventoryGeneralData::StaticStruct, Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics::NewStructOps, TEXT("ModInventoryGeneralData"), &Z_Registration_Info_UScriptStruct_FModInventoryGeneralData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModInventoryGeneralData), 1104927375U) },
		{ FModInventoryItem::StaticStruct, Z_Construct_UScriptStruct_FModInventoryItem_Statics::NewStructOps, TEXT("ModInventoryItem"), &Z_Registration_Info_UScriptStruct_FModInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModInventoryItem), 3957626140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ItemDataStruct_h__Script_CreateModPlugin_3207453409(TEXT("/Script/CreateModPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ItemDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ItemDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ItemDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ItemDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
