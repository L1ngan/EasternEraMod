// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildDataStruct.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBuildDataStruct() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModAutoTileType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModEmbeddedWallType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModEnergyType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModFiveElementType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModGenerateBuildingFaultType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModRoofPartType();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModAutoTileMeshConfigData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModBuildData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModBuildLightSourceData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModBuildListCategorizeStruct();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModBuildTabStruct();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModBuildUIData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModDataBase();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModGridPosition();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModRelativeGridPoses();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_CreateModPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FModGridPosition **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModGridPosition;
class UScriptStruct* FModGridPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModGridPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModGridPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModGridPosition, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModGridPosition"));
	}
	return Z_Registration_Info_UScriptStruct_FModGridPosition.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModGridPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87\xe4\xbd\x8d\xe7\xbd\xae\n */" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "Category", "ModGridPosition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa1\x8c\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\x8c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[] = {
		{ "Category", "ModGridPosition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x97" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Column;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModGridPosition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModGridPosition_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGridPosition, Row), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModGridPosition_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGridPosition, Column), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Column_MetaData), NewProp_Column_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModGridPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGridPosition_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGridPosition_Statics::NewProp_Column,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGridPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModGridPosition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModGridPosition",
	Z_Construct_UScriptStruct_FModGridPosition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGridPosition_Statics::PropPointers),
	sizeof(FModGridPosition),
	alignof(FModGridPosition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGridPosition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModGridPosition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModGridPosition()
{
	if (!Z_Registration_Info_UScriptStruct_FModGridPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModGridPosition.InnerSingleton, Z_Construct_UScriptStruct_FModGridPosition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModGridPosition.InnerSingleton;
}
// ********** End ScriptStruct FModGridPosition ****************************************************

// ********** Begin ScriptStruct FModRelativeGridPoses *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModRelativeGridPoses;
class UScriptStruct* FModRelativeGridPoses::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModRelativeGridPoses.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModRelativeGridPoses.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModRelativeGridPoses, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModRelativeGridPoses"));
	}
	return Z_Registration_Info_UScriptStruct_FModRelativeGridPoses.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe7\x89\xa9\xe4\xbd\x93\xe7\x9a\x84\xe7\x9b\xb8\xe5\xaf\xb9\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87\n */" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe4\xbd\x93\xe7\x9a\x84\xe7\x9b\xb8\xe5\xaf\xb9\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPoses_MetaData[] = {
		{ "Category", "ModRelativeGridPoses" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridPoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridPoses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModRelativeGridPoses>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics::NewProp_GridPoses_Inner = { "GridPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModGridPosition, METADATA_PARAMS(0, nullptr) }; // 3621619096
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics::NewProp_GridPoses = { "GridPoses", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModRelativeGridPoses, GridPoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPoses_MetaData), NewProp_GridPoses_MetaData) }; // 3621619096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics::NewProp_GridPoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics::NewProp_GridPoses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModRelativeGridPoses",
	Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics::PropPointers),
	sizeof(FModRelativeGridPoses),
	alignof(FModRelativeGridPoses),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModRelativeGridPoses()
{
	if (!Z_Registration_Info_UScriptStruct_FModRelativeGridPoses.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModRelativeGridPoses.InnerSingleton, Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModRelativeGridPoses.InnerSingleton;
}
// ********** End ScriptStruct FModRelativeGridPoses ***********************************************

// ********** Begin Enum EModFiveElementType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModFiveElementType;
static UEnum* EModFiveElementType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModFiveElementType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModFiveElementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModFiveElementType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModFiveElementType"));
	}
	return Z_Registration_Info_UEnum_EModFiveElementType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModFiveElementType>()
{
	return EModFiveElementType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModFiveElementType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xba\x94\xe8\xa1\x8c\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "Earth.Comment", "// \xe5\x9c\x9f\n" },
		{ "Earth.Name", "EModFiveElementType::Earth" },
		{ "Earth.ToolTip", "\xe5\x9c\x9f" },
		{ "Fire.Comment", "// \xe7\x81\xab\n" },
		{ "Fire.Name", "EModFiveElementType::Fire" },
		{ "Fire.ToolTip", "\xe7\x81\xab" },
		{ "Metal.Comment", "// \xe9\x87\x91\n" },
		{ "Metal.Name", "EModFiveElementType::Metal" },
		{ "Metal.ToolTip", "\xe9\x87\x91" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
		{ "None.Name", "EModFiveElementType::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\x94\xe8\xa1\x8c\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "Water.Comment", "// \xe6\xb0\xb4\n" },
		{ "Water.Name", "EModFiveElementType::Water" },
		{ "Water.ToolTip", "\xe6\xb0\xb4" },
		{ "Wood.Comment", "// \xe6\x9c\xa8\n" },
		{ "Wood.Name", "EModFiveElementType::Wood" },
		{ "Wood.ToolTip", "\xe6\x9c\xa8" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModFiveElementType::None", (int64)EModFiveElementType::None },
		{ "EModFiveElementType::Fire", (int64)EModFiveElementType::Fire },
		{ "EModFiveElementType::Metal", (int64)EModFiveElementType::Metal },
		{ "EModFiveElementType::Earth", (int64)EModFiveElementType::Earth },
		{ "EModFiveElementType::Wood", (int64)EModFiveElementType::Wood },
		{ "EModFiveElementType::Water", (int64)EModFiveElementType::Water },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModFiveElementType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModFiveElementType",
	"EModFiveElementType",
	Z_Construct_UEnum_CreateModPlugin_EModFiveElementType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModFiveElementType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModFiveElementType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModFiveElementType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModFiveElementType()
{
	if (!Z_Registration_Info_UEnum_EModFiveElementType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModFiveElementType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModFiveElementType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModFiveElementType.InnerSingleton;
}
// ********** End Enum EModFiveElementType *********************************************************

// ********** Begin Enum EModAutoTileType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModAutoTileType;
static UEnum* EModAutoTileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModAutoTileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModAutoTileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModAutoTileType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModAutoTileType"));
	}
	return Z_Registration_Info_UEnum_EModAutoTileType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModAutoTileType>()
{
	return EModAutoTileType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModAutoTileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe4\xb9\x9d\xe5\xae\xab\xe6\xa0\xbc\xe6\x9e\x9a\xe4\xb8\xbe\xe7\xb1\xbb\xe5\x9e\x8b\n */" },
#endif
		{ "Corner.Comment", "// \xe5\xa4\x96\xe6\x8b\x90\xe8\xa7\x92\n" },
		{ "Corner.Name", "EModAutoTileType::Corner" },
		{ "Corner.ToolTip", "\xe5\xa4\x96\xe6\x8b\x90\xe8\xa7\x92" },
		{ "CornerCut.Comment", "// \xe5\xa4\x96\xe6\x8b\x90\xe8\xa7\x92\xe5\x88\x87\xe8\xa7\x92\n" },
		{ "CornerCut.Name", "EModAutoTileType::CornerCut" },
		{ "CornerCut.ToolTip", "\xe5\xa4\x96\xe6\x8b\x90\xe8\xa7\x92\xe5\x88\x87\xe8\xa7\x92" },
		{ "CornerEdge.Comment", "// \xe6\x8b\x90\xe8\xa7\x92\xe8\xbe\xb9\n" },
		{ "CornerEdge.Name", "EModAutoTileType::CornerEdge" },
		{ "CornerEdge.ToolTip", "\xe6\x8b\x90\xe8\xa7\x92\xe8\xbe\xb9" },
		{ "CornerEdge_Mirror.Comment", "// \xe9\x95\x9c\xe5\x83\x8f\xe6\x8b\x90\xe8\xa7\x92\xe8\xbe\xb9\n" },
		{ "CornerEdge_Mirror.Name", "EModAutoTileType::CornerEdge_Mirror" },
		{ "CornerEdge_Mirror.ToolTip", "\xe9\x95\x9c\xe5\x83\x8f\xe6\x8b\x90\xe8\xa7\x92\xe8\xbe\xb9" },
		{ "COUNT.Comment", "// \xe5\x8d\xa0\xe4\xbd\x8d\xe7\xac\xa6\n" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EModAutoTileType::COUNT" },
		{ "COUNT.ToolTip", "\xe5\x8d\xa0\xe4\xbd\x8d\xe7\xac\xa6" },
		{ "Edge.Comment", "// \xe7\x9b\xb4\xe8\xbe\xb9\n" },
		{ "Edge.Name", "EModAutoTileType::Edge" },
		{ "Edge.ToolTip", "\xe7\x9b\xb4\xe8\xbe\xb9" },
		{ "Flat.Comment", "// \xe5\xb9\xb3\xe9\x9d\xa2\n" },
		{ "Flat.Name", "EModAutoTileType::Flat" },
		{ "Flat.ToolTip", "\xe5\xb9\xb3\xe9\x9d\xa2" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb9\x9d\xe5\xae\xab\xe6\xa0\xbc\xe6\x9e\x9a\xe4\xb8\xbe\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModAutoTileType::Flat", (int64)EModAutoTileType::Flat },
		{ "EModAutoTileType::Edge", (int64)EModAutoTileType::Edge },
		{ "EModAutoTileType::CornerEdge", (int64)EModAutoTileType::CornerEdge },
		{ "EModAutoTileType::CornerEdge_Mirror", (int64)EModAutoTileType::CornerEdge_Mirror },
		{ "EModAutoTileType::Corner", (int64)EModAutoTileType::Corner },
		{ "EModAutoTileType::CornerCut", (int64)EModAutoTileType::CornerCut },
		{ "EModAutoTileType::COUNT", (int64)EModAutoTileType::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModAutoTileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModAutoTileType",
	"EModAutoTileType",
	Z_Construct_UEnum_CreateModPlugin_EModAutoTileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModAutoTileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModAutoTileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModAutoTileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModAutoTileType()
{
	if (!Z_Registration_Info_UEnum_EModAutoTileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModAutoTileType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModAutoTileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModAutoTileType.InnerSingleton;
}
// ********** End Enum EModAutoTileType ************************************************************

// ********** Begin ScriptStruct FModAutoTileMeshConfigData ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModAutoTileMeshConfigData;
class UScriptStruct* FModAutoTileMeshConfigData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModAutoTileMeshConfigData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModAutoTileMeshConfigData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModAutoTileMeshConfigData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModAutoTileMeshConfigData"));
	}
	return Z_Registration_Info_UScriptStruct_FModAutoTileMeshConfigData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe4\xb9\x9d\xe5\xae\xab\xe6\xa0\xbc\xe6\xa8\xa1\xe5\x9e\x8b\xe9\x85\x8d\xe7\xbd\xae\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\n */" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb9\x9d\xe5\xae\xab\xe6\xa0\xbc\xe6\xa8\xa1\xe5\x9e\x8b\xe9\x85\x8d\xe7\xbd\xae\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoTileType_MetaData[] = {
		{ "Category", "ModAutoTileMeshConfigData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb9\x9d\xe5\xae\xab\xe6\xa0\xbc\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb9\x9d\xe5\xae\xab\xe6\xa0\xbc\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "ModAutoTileMeshConfigData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9d\x99\xe6\x80\x81\xe6\xa8\xa1\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9d\x99\xe6\x80\x81\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoTileType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoTileType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModAutoTileMeshConfigData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::NewProp_AutoTileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::NewProp_AutoTileType = { "AutoTileType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAutoTileMeshConfigData, AutoTileType), Z_Construct_UEnum_CreateModPlugin_EModAutoTileType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoTileType_MetaData), NewProp_AutoTileType_MetaData) }; // 2974839418
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAutoTileMeshConfigData, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::NewProp_AutoTileType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::NewProp_AutoTileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::NewProp_StaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModAutoTileMeshConfigData",
	Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::PropPointers),
	sizeof(FModAutoTileMeshConfigData),
	alignof(FModAutoTileMeshConfigData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModAutoTileMeshConfigData()
{
	if (!Z_Registration_Info_UScriptStruct_FModAutoTileMeshConfigData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModAutoTileMeshConfigData.InnerSingleton, Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModAutoTileMeshConfigData.InnerSingleton;
}
// ********** End ScriptStruct FModAutoTileMeshConfigData ******************************************

// ********** Begin Enum EModRoofPartType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModRoofPartType;
static UEnum* EModRoofPartType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModRoofPartType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModRoofPartType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModRoofPartType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModRoofPartType"));
	}
	return Z_Registration_Info_UEnum_EModRoofPartType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModRoofPartType>()
{
	return EModRoofPartType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModRoofPartType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bevel.Comment", "// \xe6\x96\x9c\xe9\x9d\xa2\n" },
		{ "Bevel.Name", "EModRoofPartType::Bevel" },
		{ "Bevel.ToolTip", "\xe6\x96\x9c\xe9\x9d\xa2" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\xb1\x8b\xe9\xa1\xb6\xe9\x83\xa8\xe4\xbd\x8d\xe7\xb1\xbb\xe5\x9e\x8b\n */" },
#endif
		{ "Corner.Comment", "// \xe8\xa7\x92\n" },
		{ "Corner.Name", "EModRoofPartType::Corner" },
		{ "Corner.ToolTip", "\xe8\xa7\x92" },
		{ "COUNT.Comment", "// \xe5\x8d\xa0\xe4\xbd\x8d\xe7\xac\xa6\n" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EModRoofPartType::COUNT" },
		{ "COUNT.ToolTip", "\xe5\x8d\xa0\xe4\xbd\x8d\xe7\xac\xa6" },
		{ "Flat.Comment", "// \xe5\xb9\xb3\xe9\x9d\xa2\n" },
		{ "Flat.Name", "EModRoofPartType::Flat" },
		{ "Flat.ToolTip", "\xe5\xb9\xb3\xe9\x9d\xa2" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
		{ "None.Comment", "// \xe9\x9d\x9e\xe5\xb1\x8b\xe9\xa1\xb6\n" },
		{ "None.Name", "EModRoofPartType::None" },
		{ "None.ToolTip", "\xe9\x9d\x9e\xe5\xb1\x8b\xe9\xa1\xb6" },
		{ "PresetRoof.Comment", "// \xe9\xa2\x84\xe8\xae\xbe\xe5\xb1\x8b\xe9\xa1\xb6(\xe7\x89\xb9\xe6\xae\x8a\xe7\xb1\xbb\xe5\x9e\x8b)\n" },
		{ "PresetRoof.Name", "EModRoofPartType::PresetRoof" },
		{ "PresetRoof.ToolTip", "\xe9\xa2\x84\xe8\xae\xbe\xe5\xb1\x8b\xe9\xa1\xb6(\xe7\x89\xb9\xe6\xae\x8a\xe7\xb1\xbb\xe5\x9e\x8b)" },
		{ "PyramidalRoof.Comment", "// \xe6\x94\x92\xe5\xb0\x96\n" },
		{ "PyramidalRoof.Name", "EModRoofPartType::PyramidalRoof" },
		{ "PyramidalRoof.ToolTip", "\xe6\x94\x92\xe5\xb0\x96" },
		{ "RidgeCorner.Comment", "// \xe8\x84\x8a\xe8\xa7\x92\n" },
		{ "RidgeCorner.Name", "EModRoofPartType::RidgeCorner" },
		{ "RidgeCorner.ToolTip", "\xe8\x84\x8a\xe8\xa7\x92" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb1\x8b\xe9\xa1\xb6\xe9\x83\xa8\xe4\xbd\x8d\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "Wall.Comment", "// \xe5\xa2\x99\n" },
		{ "Wall.Name", "EModRoofPartType::Wall" },
		{ "Wall.ToolTip", "\xe5\xa2\x99" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModRoofPartType::None", (int64)EModRoofPartType::None },
		{ "EModRoofPartType::Corner", (int64)EModRoofPartType::Corner },
		{ "EModRoofPartType::Bevel", (int64)EModRoofPartType::Bevel },
		{ "EModRoofPartType::Flat", (int64)EModRoofPartType::Flat },
		{ "EModRoofPartType::Wall", (int64)EModRoofPartType::Wall },
		{ "EModRoofPartType::RidgeCorner", (int64)EModRoofPartType::RidgeCorner },
		{ "EModRoofPartType::PyramidalRoof", (int64)EModRoofPartType::PyramidalRoof },
		{ "EModRoofPartType::PresetRoof", (int64)EModRoofPartType::PresetRoof },
		{ "EModRoofPartType::COUNT", (int64)EModRoofPartType::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModRoofPartType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModRoofPartType",
	"EModRoofPartType",
	Z_Construct_UEnum_CreateModPlugin_EModRoofPartType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModRoofPartType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModRoofPartType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModRoofPartType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModRoofPartType()
{
	if (!Z_Registration_Info_UEnum_EModRoofPartType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModRoofPartType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModRoofPartType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModRoofPartType.InnerSingleton;
}
// ********** End Enum EModRoofPartType ************************************************************

// ********** Begin Enum EModEmbeddedWallType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModEmbeddedWallType;
static UEnum* EModEmbeddedWallType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModEmbeddedWallType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModEmbeddedWallType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModEmbeddedWallType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModEmbeddedWallType"));
	}
	return Z_Registration_Info_UEnum_EModEmbeddedWallType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModEmbeddedWallType>()
{
	return EModEmbeddedWallType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModEmbeddedWallType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\xb5\x8c\xe5\x85\xa5\xe5\xbc\x8f\xe5\xa2\x99\xe4\xbd\x93\xe7\xb1\xbb\xe5\x9e\x8b\n */" },
#endif
		{ "Door.Comment", "// \xe9\x97\xa8\n" },
		{ "Door.Name", "EModEmbeddedWallType::Door" },
		{ "Door.ToolTip", "\xe9\x97\xa8" },
		{ "DoorWide.Comment", "// \xe5\xae\xbd\xe9\x97\xa8\n" },
		{ "DoorWide.Name", "EModEmbeddedWallType::DoorWide" },
		{ "DoorWide.ToolTip", "\xe5\xae\xbd\xe9\x97\xa8" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
		{ "None.Comment", "// \xe9\x9d\x9e\xe5\xb5\x8c\xe5\x85\xa5\xe5\xbc\x8f\xe5\xa2\x99\xe4\xbd\x93\n" },
		{ "None.Name", "EModEmbeddedWallType::None" },
		{ "None.ToolTip", "\xe9\x9d\x9e\xe5\xb5\x8c\xe5\x85\xa5\xe5\xbc\x8f\xe5\xa2\x99\xe4\xbd\x93" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb5\x8c\xe5\x85\xa5\xe5\xbc\x8f\xe5\xa2\x99\xe4\xbd\x93\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "Window.Comment", "// \xe7\xaa\x97\n" },
		{ "Window.Name", "EModEmbeddedWallType::Window" },
		{ "Window.ToolTip", "\xe7\xaa\x97" },
		{ "WindowWide.Comment", "// \xe5\xae\xbd\xe7\xaa\x97\n" },
		{ "WindowWide.Name", "EModEmbeddedWallType::WindowWide" },
		{ "WindowWide.ToolTip", "\xe5\xae\xbd\xe7\xaa\x97" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModEmbeddedWallType::None", (int64)EModEmbeddedWallType::None },
		{ "EModEmbeddedWallType::Door", (int64)EModEmbeddedWallType::Door },
		{ "EModEmbeddedWallType::DoorWide", (int64)EModEmbeddedWallType::DoorWide },
		{ "EModEmbeddedWallType::Window", (int64)EModEmbeddedWallType::Window },
		{ "EModEmbeddedWallType::WindowWide", (int64)EModEmbeddedWallType::WindowWide },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModEmbeddedWallType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModEmbeddedWallType",
	"EModEmbeddedWallType",
	Z_Construct_UEnum_CreateModPlugin_EModEmbeddedWallType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModEmbeddedWallType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModEmbeddedWallType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModEmbeddedWallType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModEmbeddedWallType()
{
	if (!Z_Registration_Info_UEnum_EModEmbeddedWallType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModEmbeddedWallType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModEmbeddedWallType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModEmbeddedWallType.InnerSingleton;
}
// ********** End Enum EModEmbeddedWallType ********************************************************

// ********** Begin ScriptStruct FModBuildLightSourceData ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModBuildLightSourceData;
class UScriptStruct* FModBuildLightSourceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModBuildLightSourceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModBuildLightSourceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModBuildLightSourceData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModBuildLightSourceData"));
	}
	return Z_Registration_Info_UScriptStruct_FModBuildLightSourceData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\xbb\xba\xe7\xad\x91\xe5\x85\x89\xe6\xba\x90\xe9\x85\x8d\xe7\xbd\xae\xe6\x95\xb0\xe6\x8d\xae\n */" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe5\x85\x89\xe6\xba\x90\xe9\x85\x8d\xe7\xbd\xae\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightType_MetaData[] = {
		{ "Category", "ModBuildLightSourceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x85\x89\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\x89\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntensityUnits_MetaData[] = {
		{ "Category", "ModBuildLightSourceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbc\xba\xe5\xba\xa6\xe5\x8d\x95\xe4\xbd\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\xba\xe5\xba\xa6\xe5\x8d\x95\xe4\xbd\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetPosition_MetaData[] = {
		{ "Category", "ModBuildLightSourceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x85\x89\xe6\xba\x90\xe5\x81\x8f\xe7\xa7\xbb\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\x89\xe6\xba\x90\xe5\x81\x8f\xe7\xa7\xbb\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "ModBuildLightSourceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x85\x89\xe6\xba\x90\xe6\x97\x8b\xe8\xbd\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\x89\xe6\xba\x90\xe6\x97\x8b\xe8\xbd\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "ModBuildLightSourceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x85\x89\xe6\xba\x90\xe5\xbc\xba\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\x89\xe6\xba\x90\xe5\xbc\xba\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "ModBuildLightSourceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa1\xb0\xe5\x87\x8f\xe5\x8d\x8a\xe5\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\xb0\xe5\x87\x8f\xe5\x8d\x8a\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerConeAngle_MetaData[] = {
		{ "Category", "ModBuildLightSourceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x86\x85\xe9\x94\xa5\xe4\xbd\x93\xe8\xa7\x92\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\x85\xe9\x94\xa5\xe4\xbd\x93\xe8\xa7\x92\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterConeAngle_MetaData[] = {
		{ "Category", "ModBuildLightSourceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa4\x96\xe9\x94\xa5\xe4\xbd\x93\xe8\xa7\x92\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe9\x94\xa5\xe4\xbd\x93\xe8\xa7\x92\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[] = {
		{ "Category", "ModBuildLightSourceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x85\x89\xe6\xba\x90\xe9\xa2\x9c\xe8\x89\xb2\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\x89\xe6\xba\x90\xe9\xa2\x9c\xe8\x89\xb2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "ModBuildLightSourceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x85\x89\xe7\x85\xa7\xe5\x8d\x8a\xe5\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\x89\xe7\x85\xa7\xe5\x8d\x8a\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastShadow_MetaData[] = {
		{ "Category", "ModBuildLightSourceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe6\x8a\x95\xe5\xbd\xb1\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x8a\x95\xe5\xbd\xb1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_LightType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IntensityUnits_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IntensityUnits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerConeAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterConeAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_CastShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModBuildLightSourceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_LightType = { "LightType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildLightSourceData, LightType), Z_Construct_UClass_UClass, Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightType_MetaData), NewProp_LightType_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_IntensityUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_IntensityUnits = { "IntensityUnits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildLightSourceData, IntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntensityUnits_MetaData), NewProp_IntensityUnits_MetaData) }; // 3957938466
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_OffsetPosition = { "OffsetPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildLightSourceData, OffsetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetPosition_MetaData), NewProp_OffsetPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildLightSourceData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildLightSourceData, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildLightSourceData, AttenuationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationRadius_MetaData), NewProp_AttenuationRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_InnerConeAngle = { "InnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildLightSourceData, InnerConeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerConeAngle_MetaData), NewProp_InnerConeAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_OuterConeAngle = { "OuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildLightSourceData, OuterConeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterConeAngle_MetaData), NewProp_OuterConeAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildLightSourceData, LightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightColor_MetaData), NewProp_LightColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildLightSourceData, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_CastShadow_SetBit(void* Obj)
{
	((FModBuildLightSourceData*)Obj)->CastShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_CastShadow = { "CastShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModBuildLightSourceData), &Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_CastShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastShadow_MetaData), NewProp_CastShadow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_LightType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_IntensityUnits_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_IntensityUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_OffsetPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_AttenuationRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_InnerConeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_OuterConeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_LightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewProp_CastShadow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModBuildLightSourceData",
	Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::PropPointers),
	sizeof(FModBuildLightSourceData),
	alignof(FModBuildLightSourceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModBuildLightSourceData()
{
	if (!Z_Registration_Info_UScriptStruct_FModBuildLightSourceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModBuildLightSourceData.InnerSingleton, Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModBuildLightSourceData.InnerSingleton;
}
// ********** End ScriptStruct FModBuildLightSourceData ********************************************

// ********** Begin Enum EModEnergyType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModEnergyType;
static UEnum* EModEnergyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModEnergyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModEnergyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModEnergyType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModEnergyType"));
	}
	return Z_Registration_Info_UEnum_EModEnergyType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModEnergyType>()
{
	return EModEnergyType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModEnergyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x83\xbd\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ConsumeEnergy.Comment", "//\xe8\x80\x97\xe8\x83\xbd\n" },
		{ "ConsumeEnergy.Name", "EModEnergyType::ConsumeEnergy" },
		{ "ConsumeEnergy.ToolTip", "\xe8\x80\x97\xe8\x83\xbd" },
		{ "ControlEnergy.Comment", "//\xe6\x8e\xa7\xe5\x88\xb6\xe8\x83\xbd\xe6\xba\x90\n" },
		{ "ControlEnergy.Name", "EModEnergyType::ControlEnergy" },
		{ "ControlEnergy.ToolTip", "\xe6\x8e\xa7\xe5\x88\xb6\xe8\x83\xbd\xe6\xba\x90" },
		{ "EnergyStorage.Comment", "//\xe8\x83\xbd\xe6\xba\x90\xe5\x82\xa8\xe5\xad\x98\n" },
		{ "EnergyStorage.Name", "EModEnergyType::EnergyStorage" },
		{ "EnergyStorage.ToolTip", "\xe8\x83\xbd\xe6\xba\x90\xe5\x82\xa8\xe5\xad\x98" },
		{ "GenerateEnergy.Comment", "//\xe7\x94\x9f\xe4\xba\xa7\xe8\x83\xbd\xe6\xba\x90\n" },
		{ "GenerateEnergy.Name", "EModEnergyType::GenerateEnergy" },
		{ "GenerateEnergy.ToolTip", "\xe7\x94\x9f\xe4\xba\xa7\xe8\x83\xbd\xe6\xba\x90" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
		{ "None.Comment", "//\xe8\xb7\x9f\xe8\x83\xbd\xe6\xba\x90\xe6\xb2\xa1\xe6\x9c\x89\xe5\x85\xb3\xe8\x81\x94\n" },
		{ "None.Name", "EModEnergyType::None" },
		{ "None.ToolTip", "\xe8\xb7\x9f\xe8\x83\xbd\xe6\xba\x90\xe6\xb2\xa1\xe6\x9c\x89\xe5\x85\xb3\xe8\x81\x94" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\xbd\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "TransmissionEnergy.Comment", "//\xe4\xbc\xa0\xe8\xbe\x93\xe8\x83\xbd\xe6\xba\x90\n" },
		{ "TransmissionEnergy.Name", "EModEnergyType::TransmissionEnergy" },
		{ "TransmissionEnergy.ToolTip", "\xe4\xbc\xa0\xe8\xbe\x93\xe8\x83\xbd\xe6\xba\x90" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModEnergyType::None", (int64)EModEnergyType::None },
		{ "EModEnergyType::TransmissionEnergy", (int64)EModEnergyType::TransmissionEnergy },
		{ "EModEnergyType::EnergyStorage", (int64)EModEnergyType::EnergyStorage },
		{ "EModEnergyType::ControlEnergy", (int64)EModEnergyType::ControlEnergy },
		{ "EModEnergyType::GenerateEnergy", (int64)EModEnergyType::GenerateEnergy },
		{ "EModEnergyType::ConsumeEnergy", (int64)EModEnergyType::ConsumeEnergy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModEnergyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModEnergyType",
	"EModEnergyType",
	Z_Construct_UEnum_CreateModPlugin_EModEnergyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModEnergyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModEnergyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModEnergyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModEnergyType()
{
	if (!Z_Registration_Info_UEnum_EModEnergyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModEnergyType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModEnergyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModEnergyType.InnerSingleton;
}
// ********** End Enum EModEnergyType **************************************************************

// ********** Begin Enum EModGenerateBuildingFaultType *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModGenerateBuildingFaultType;
static UEnum* EModGenerateBuildingFaultType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModGenerateBuildingFaultType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModGenerateBuildingFaultType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModGenerateBuildingFaultType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModGenerateBuildingFaultType"));
	}
	return Z_Registration_Info_UEnum_EModGenerateBuildingFaultType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModGenerateBuildingFaultType>()
{
	return EModGenerateBuildingFaultType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModGenerateBuildingFaultType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbe\x9b\xe8\x83\xbd\xe5\xbb\xba\xe7\xad\x91\xe6\x95\x85\xe9\x9a\x9c\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "DamageSelf.Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe8\x87\xaa\xe8\xba\xab\xe5\x8f\x97\xe6\x8d\x9f\xef\xbc\x8c\xe6\x89\xa3\xe9\x99\xa4\xe5\xb0\x91\xe9\x87\x8f\xe8\x80\x90\xe4\xb9\x85\n" },
		{ "DamageSelf.Name", "EModGenerateBuildingFaultType::DamageSelf" },
		{ "DamageSelf.ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe8\x87\xaa\xe8\xba\xab\xe5\x8f\x97\xe6\x8d\x9f\xef\xbc\x8c\xe6\x89\xa3\xe9\x99\xa4\xe5\xb0\x91\xe9\x87\x8f\xe8\x80\x90\xe4\xb9\x85" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
		{ "OccurBigExplosion.Comment", "//\xe5\x8f\x91\xe7\x94\x9f\xe5\xa4\xa7\xe5\x9e\x8b\xe7\x88\x86\xe7\x82\xb8\n" },
		{ "OccurBigExplosion.Name", "EModGenerateBuildingFaultType::OccurBigExplosion" },
		{ "OccurBigExplosion.ToolTip", "\xe5\x8f\x91\xe7\x94\x9f\xe5\xa4\xa7\xe5\x9e\x8b\xe7\x88\x86\xe7\x82\xb8" },
		{ "OccurGiantExplosion.Comment", "//\xe5\x8f\x91\xe7\x94\x9f\xe5\xb7\xa8\xe5\x9e\x8b\xe7\x88\x86\xe7\x82\xb8\n" },
		{ "OccurGiantExplosion.Name", "EModGenerateBuildingFaultType::OccurGiantExplosion" },
		{ "OccurGiantExplosion.ToolTip", "\xe5\x8f\x91\xe7\x94\x9f\xe5\xb7\xa8\xe5\x9e\x8b\xe7\x88\x86\xe7\x82\xb8" },
		{ "OccurMediumExplosion.Comment", "//\xe5\x8f\x91\xe7\x94\x9f\xe4\xb8\xad\xe5\x9e\x8b\xe7\x88\x86\xe7\x82\xb8\n" },
		{ "OccurMediumExplosion.Name", "EModGenerateBuildingFaultType::OccurMediumExplosion" },
		{ "OccurMediumExplosion.ToolTip", "\xe5\x8f\x91\xe7\x94\x9f\xe4\xb8\xad\xe5\x9e\x8b\xe7\x88\x86\xe7\x82\xb8" },
		{ "OccurSmallExplosion.Comment", "//\xe5\x8f\x91\xe7\x94\x9f\xe5\xb0\x8f\xe5\x9e\x8b\xe7\x88\x86\xe7\x82\xb8\n" },
		{ "OccurSmallExplosion.Name", "EModGenerateBuildingFaultType::OccurSmallExplosion" },
		{ "OccurSmallExplosion.ToolTip", "\xe5\x8f\x91\xe7\x94\x9f\xe5\xb0\x8f\xe5\x9e\x8b\xe7\x88\x86\xe7\x82\xb8" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbe\x9b\xe8\x83\xbd\xe5\xbb\xba\xe7\xad\x91\xe6\x95\x85\xe9\x9a\x9c\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModGenerateBuildingFaultType::DamageSelf", (int64)EModGenerateBuildingFaultType::DamageSelf },
		{ "EModGenerateBuildingFaultType::OccurGiantExplosion", (int64)EModGenerateBuildingFaultType::OccurGiantExplosion },
		{ "EModGenerateBuildingFaultType::OccurBigExplosion", (int64)EModGenerateBuildingFaultType::OccurBigExplosion },
		{ "EModGenerateBuildingFaultType::OccurMediumExplosion", (int64)EModGenerateBuildingFaultType::OccurMediumExplosion },
		{ "EModGenerateBuildingFaultType::OccurSmallExplosion", (int64)EModGenerateBuildingFaultType::OccurSmallExplosion },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModGenerateBuildingFaultType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModGenerateBuildingFaultType",
	"EModGenerateBuildingFaultType",
	Z_Construct_UEnum_CreateModPlugin_EModGenerateBuildingFaultType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModGenerateBuildingFaultType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModGenerateBuildingFaultType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModGenerateBuildingFaultType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModGenerateBuildingFaultType()
{
	if (!Z_Registration_Info_UEnum_EModGenerateBuildingFaultType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModGenerateBuildingFaultType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModGenerateBuildingFaultType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModGenerateBuildingFaultType.InnerSingleton;
}
// ********** End Enum EModGenerateBuildingFaultType ***********************************************

// ********** Begin ScriptStruct FModBuildData *****************************************************
static_assert(std::is_polymorphic<FModBuildData>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModBuildData cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModBuildData;
class UScriptStruct* FModBuildData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModBuildData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModBuildData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModBuildData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModBuildData"));
	}
	return Z_Registration_Info_UScriptStruct_FModBuildData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModBuildData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//mod\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mod\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa0\xe6\xa0\xbc\xe5\xad\x90\xe5\xb0\xba\xe5\xaf\xb8(Z\xe4\xb8\xba\xe5\x8d\xa0\xe9\xab\x98\xe5\xba\xa6\xe5\xb0\xba\xe5\xaf\xb8)\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa0\xe6\xa0\xbc\xe5\xad\x90\xe5\xb0\xba\xe5\xaf\xb8(Z\xe4\xb8\xba\xe5\x8d\xa0\xe9\xab\x98\xe5\xba\xa6\xe5\xb0\xba\xe5\xaf\xb8)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildResource_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbb\xba\xe9\x80\xa0\xe8\xb5\x84\xe6\xba\x90(item--\xe6\x95\xb0\xe9\x87\x8f)\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe9\x80\xa0\xe8\xb5\x84\xe6\xba\x90(item--\xe6\x95\xb0\xe9\x87\x8f)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Workload_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbb\xba\xe9\x80\xa0\xe5\xb7\xa5\xe4\xbd\x9c\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe9\x80\xa0\xe5\xb7\xa5\xe4\xbd\x9c\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestoryWorkload_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8b\x86\xe9\x99\xa4\xe5\xb7\xa5\xe4\xbd\x9c\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8b\x86\xe9\x99\xa4\xe5\xb7\xa5\xe4\xbd\x9c\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestoryReturnPrecent_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8b\x86\xe9\x99\xa4\xe8\xbf\x94\xe8\xbf\x98\xe5\xbb\xba\xe9\x80\xa0\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe7\x99\xbe\xe5\x88\x86\xe6\xaf\x94(0~1)\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8b\x86\xe9\x99\xa4\xe8\xbf\x94\xe8\xbf\x98\xe5\xbb\xba\xe9\x80\xa0\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe7\x99\xbe\xe5\x88\x86\xe6\xaf\x94(0~1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillLevel_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9c\x80\xe6\xb1\x82\xe5\xbb\xba\xe9\x80\xa0\xe6\x8a\x80\xe8\x83\xbd\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9c\x80\xe6\xb1\x82\xe5\xbb\xba\xe9\x80\xa0\xe6\x8a\x80\xe8\x83\xbd\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerNum_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8b\xa5\xe6\x9c\x89\xe8\x80\x85\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8b\xa5\xe6\x9c\x89\xe8\x80\x85\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntranceGridPoses_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbb\xba\xe7\xad\x91\xe5\x85\xa5\xe5\x8f\xa3\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87(\xe7\x9b\xb8\xe5\xaf\xb9\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87)\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe5\x85\xa5\xe5\x8f\xa3\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87(\xe7\x9b\xb8\xe5\xaf\xb9\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Durability_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x80\x90\xe4\xb9\x85\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x80\x90\xe4\xb9\x85\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Aesthetic_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xbe\x8e\xe8\xa7\x82\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbe\x8e\xe8\xa7\x82\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiveElementScore_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xba\x94\xe8\xa1\x8c\xe5\xb1\x9e\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\x94\xe8\xa1\x8c\xe5\xb1\x9e\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x98\xb2\xe5\xbe\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x98\xb2\xe5\xbe\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCoefficient_MetaData[] = {
		{ "Category", "Base" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9d\x90\xe8\xb4\xa8\xe7\xb3\xbb\xe6\x95\xb0 \xe8\xae\xa1\xe7\xae\x97\xe5\x85\xac\xe5\xbc\x8f\xe4\xb8\xba\xef\xbc\x88\xe6\x94\xbb\xe5\x87\xbb - \xe9\x98\xb2\xe5\xbe\xa1 \xef\xbc\x89 * \xef\xbc\x88""1 - \xe6\x9d\x90\xe8\xb4\xa8\xe7\xb3\xbb\xe6\x95\xb0\xef\xbc\x89\xe5\xbd\x93\xe7\xb3\xbb\xe6\x95\xb0\xe4\xb8\xba""1\xe6\x97\xb6 \xe6\x97\xa0\xe6\xb3\x95\xe8\xa2\xab\xe6\x94\xbb\xe5\x87\xbb \n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\x90\xe8\xb4\xa8\xe7\xb3\xbb\xe6\x95\xb0 \xe8\xae\xa1\xe7\xae\x97\xe5\x85\xac\xe5\xbc\x8f\xe4\xb8\xba\xef\xbc\x88\xe6\x94\xbb\xe5\x87\xbb - \xe9\x98\xb2\xe5\xbe\xa1 \xef\xbc\x89 * \xef\xbc\x88""1 - \xe6\x9d\x90\xe8\xb4\xa8\xe7\xb3\xbb\xe6\x95\xb0\xef\xbc\x89\xe5\xbd\x93\xe7\xb3\xbb\xe6\x95\xb0\xe4\xb8\xba""1\xe6\x97\xb6 \xe6\x97\xa0\xe6\xb3\x95\xe8\xa2\xab\xe6\x94\xbb\xe5\x87\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTeamBuffIDs_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x8e\xa9\xe5\xae\xb6\xe6\x96\xb9\xe7\x9a\x84\xe7\xbe\xa4""BUff \xe5\x85\xb3\xe8\x81\x94""Buff\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6\xe6\x96\xb9\xe7\x9a\x84\xe7\xbe\xa4""BUff \xe5\x85\xb3\xe8\x81\x94""Buff\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoTileMeshes_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb9\x9d\xe5\xae\xab\xe6\xa0\xbc\xe6\xa8\xa1\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb9\x9d\xe5\xae\xab\xe6\xa0\xbc\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x99\xae\xe9\x80\x9a\xe5\xbb\xba\xe7\xad\x91\xe6\xa8\xa1\xe5\x9e\x8b(\xe6\x9c\x89\xe5\xa4\x9a\xe4\xb8\xaa\xe5\x88\x99\xe9\x9a\x8f\xe6\x9c\xba\xe9\x80\x89\xe6\x8b\xa9)\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x99\xae\xe9\x80\x9a\xe5\xbb\xba\xe7\xad\x91\xe6\xa8\xa1\xe5\x9e\x8b(\xe6\x9c\x89\xe5\xa4\x9a\xe4\xb8\xaa\xe5\x88\x99\xe9\x9a\x8f\xe6\x9c\xba\xe9\x80\x89\xe6\x8b\xa9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoofMeshes_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb1\x8b\xe9\xa1\xb6\xe6\xaf\x8f\xe4\xb8\xaa\xe9\x83\xa8\xe4\xbd\x8d\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb1\x8b\xe9\xa1\xb6\xe6\xaf\x8f\xe4\xb8\xaa\xe9\x83\xa8\xe4\xbd\x8d\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PillarForWall_MetaData[] = {
		{ "Category", "Wall" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa2\x99\xe4\xbd\x93\xe6\x8e\xa5\xe7\xbc\x9d\xe6\x9f\xb1(\xe5\xa2\x99\xe4\xb8\x93\xe7\x94\xa8)\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa2\x99\xe4\xbd\x93\xe6\x8e\xa5\xe7\xbc\x9d\xe6\x9f\xb1(\xe5\xa2\x99\xe4\xb8\x93\xe7\x94\xa8)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallWithHole_MetaData[] = {
		{ "Category", "Wall" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb8\xa6\xe6\xb4\x9e\xe7\x9a\x84\xe5\xa2\x99\xe6\xa8\xa1\xe5\x9e\x8b(\xe5\xa2\x99\xe4\xb8\x93\xe7\x94\xa8)\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb8\xa6\xe6\xb4\x9e\xe7\x9a\x84\xe5\xa2\x99\xe6\xa8\xa1\xe5\x9e\x8b(\xe5\xa2\x99\xe4\xb8\x93\xe7\x94\xa8)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[] = {
		{ "Category", "Parameter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xa2\x9d\xe5\xa4\x96\xe5\x8f\x98\xe9\x87\x8f(\xe5\x80\xbc: \xe8\xaf\xb4\xe6\x98\x8e\xe6\x96\x87\xe6\x9c\xac) \xe4\xbb\x93\xe5\xba\x93\xef\xbc\x9a\xe7\xac\xac\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8f\x82\xe6\x95\xb0 \xe5\x88\x9d\xe5\xa7\x8b\xe9\xab\x98\xe5\xba\xa6 \xe7\xac\xac\xe4\xba\x8c\xe4\xb8\xaa\xe5\x8f\x82\xe6\x95\xb0 \xe6\xaf\x8f\xe5\xb1\x82\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94\xe9\xab\x98\xe5\xba\xa6 \xe7\xac\xac\xe4\xb8\x89\xe4\xb8\xaa\xe5\x8f\x82\xe6\x95\xb0 \xe6\x80\xbb\xe5\x85\xb1\xe5\xb1\x82\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xa2\x9d\xe5\xa4\x96\xe5\x8f\x98\xe9\x87\x8f(\xe5\x80\xbc: \xe8\xaf\xb4\xe6\x98\x8e\xe6\x96\x87\xe6\x9c\xac) \xe4\xbb\x93\xe5\xba\x93\xef\xbc\x9a\xe7\xac\xac\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8f\x82\xe6\x95\xb0 \xe5\x88\x9d\xe5\xa7\x8b\xe9\xab\x98\xe5\xba\xa6 \xe7\xac\xac\xe4\xba\x8c\xe4\xb8\xaa\xe5\x8f\x82\xe6\x95\xb0 \xe6\xaf\x8f\xe5\xb1\x82\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94\xe9\xab\x98\xe5\xba\xa6 \xe7\xac\xac\xe4\xb8\x89\xe4\xb8\xaa\xe5\x8f\x82\xe6\x95\xb0 \xe6\x80\xbb\xe5\x85\xb1\xe5\xb1\x82\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterActionDefine_MetaData[] = {
		{ "Category", "SmartObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe5\xa4\x87\xe4\xba\xa4\xe4\xba\x92\xe5\xae\x9a\xe4\xb9\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe5\xa4\x87\xe4\xba\xa4\xe4\xba\x92\xe5\xae\x9a\xe4\xb9\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkeletalMesh_MetaData[] = {
		{ "Category", "SmartObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "SmartObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\n" },
#endif
		{ "EditCondition", "bUseSkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "Category", "SmartObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xae\xbe\xe6\x96\xbd\xe4\xba\xa4\xe4\xba\x92\xe5\x8a\xa8\xe7\x94\xbb\n" },
#endif
		{ "EditCondition", "bUseSkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe6\x96\xbd\xe4\xba\xa4\xe4\xba\x92\xe5\x8a\xa8\xe7\x94\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightParams_MetaData[] = {
		{ "Category", "Light" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x81\xaf\xe5\x85\xb7\xe7\x9b\xb8\xe5\x85\xb3\xe9\x85\x8d\xe7\xbd\xae\xe5\x8f\x82\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x81\xaf\xe5\x85\xb7\xe7\x9b\xb8\xe5\x85\xb3\xe9\x85\x8d\xe7\xbd\xae\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarehouseShowItemMesh_MetaData[] = {
		{ "Category", "Warehouse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\x93\xe5\xba\x93\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe5\xad\x98\xe6\x94\xbe\xe7\x89\xa9\xe6\xa8\xa1\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x93\xe5\xba\x93\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe5\xad\x98\xe6\x94\xbe\xe7\x89\xa9\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanNotPlaceItemTag_MetaData[] = {
		{ "Category", "Warehouse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\x93\xe5\xba\x93\xe7\xa6\x81\xe6\xad\xa2\xe6\x94\xbe\xe7\xbd\xae\xe7\x89\xa9\xe5\x93\x81\xe5\x88\x86\xe7\xb1\xbb\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x93\xe5\xba\x93\xe7\xa6\x81\xe6\xad\xa2\xe6\x94\xbe\xe7\xbd\xae\xe7\x89\xa9\xe5\x93\x81\xe5\x88\x86\xe7\xb1\xbb\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWarehouseTemperature_MetaData[] = {
		{ "Category", "Warehouse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe4\xbb\x93\xe5\xba\x93\xe6\xb8\xa9\xe5\xba\xa6\xef\xbc\x88WarehouseTemperature\xef\xbc\x89\xe5\xbd\xb1\xe5\x93\x8d\xe5\xad\x98\xe6\x94\xbe\xe7\x89\xa9\xe7\x9a\x84\xe6\xb8\xa9\xe5\xba\xa6\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe4\xbb\x93\xe5\xba\x93\xe6\xb8\xa9\xe5\xba\xa6\xef\xbc\x88WarehouseTemperature\xef\xbc\x89\xe5\xbd\xb1\xe5\x93\x8d\xe5\xad\x98\xe6\x94\xbe\xe7\x89\xa9\xe7\x9a\x84\xe6\xb8\xa9\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarehouseTemperature_MetaData[] = {
		{ "Category", "Warehouse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\x93\xe5\xba\x93\xe7\x9a\x84\xe6\xb8\xa9\xe5\xba\xa6(\xe4\xbf\xae\xe6\x94\xb9\xe5\xad\x98\xe6\x94\xbe\xe7\x89\xa9\xe7\x9a\x84\xe6\xb8\xa9\xe5\xba\xa6\xe4\xb8\xba\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc)\n" },
#endif
		{ "Editcondition", "bUseWarehouseTemperature" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x93\xe5\xba\x93\xe7\x9a\x84\xe6\xb8\xa9\xe5\xba\xa6(\xe4\xbf\xae\xe6\x94\xb9\xe5\xad\x98\xe6\x94\xbe\xe7\x89\xa9\xe7\x9a\x84\xe6\xb8\xa9\xe5\xba\xa6\xe4\xb8\xba\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsHeatSource_MetaData[] = {
		{ "Category", "HeatSource" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeatSourceTemperatureEffect_MetaData[] = {
		{ "Category", "HeatSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x83\xad\xe6\xba\x90\xe5\xbd\xb1\xe5\x93\x8d\xe5\x80\xbc\n" },
#endif
		{ "editcondition", "IsHeatSource" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x83\xad\xe6\xba\x90\xe5\xbd\xb1\xe5\x93\x8d\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsLightSource_MetaData[] = {
		{ "Category", "LightSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x85\x89\xe6\xba\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x85\x89\xe6\xba\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightSourceTemperatureEffect_MetaData[] = {
		{ "Category", "LightSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x85\x89\xe6\xba\x90\xe5\xbd\xb1\xe5\x93\x8d\xe5\x80\xbc\n" },
#endif
		{ "editcondition", "IsLightSource" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\x89\xe6\xba\x90\xe5\xbd\xb1\xe5\x93\x8d\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HaveEffectSize_MetaData[] = {
		{ "Category", "EffectSize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe5\xbd\xb1\xe5\x93\x8d\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe5\xbd\xb1\xe5\x93\x8d\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingEffectSize_MetaData[] = {
		{ "Category", "EffectSize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\xb1\xe5\x93\x8d\xe8\x8c\x83\xe5\x9b\xb4(\xe5\x9f\xba\xe4\xba\x8e\xe5\xbb\xba\xe7\xad\x91\xe5\xb0\xba\xe5\xaf\xb8\xe7\x9a\x84\xe5\x8a\xa0\xe5\x80\xbc)(X\xe8\xa1\x8c\xef\xbc\x8cY\xe5\x88\x97\xef\xbc\x8cZ\xe9\xab\x98)\n" },
#endif
		{ "editcondition", "HaveEffectSize" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\xb1\xe5\x93\x8d\xe8\x8c\x83\xe5\x9b\xb4(\xe5\x9f\xba\xe4\xba\x8e\xe5\xbb\xba\xe7\xad\x91\xe5\xb0\xba\xe5\xaf\xb8\xe7\x9a\x84\xe5\x8a\xa0\xe5\x80\xbc)(X\xe8\xa1\x8c\xef\xbc\x8cY\xe5\x88\x97\xef\xbc\x8cZ\xe9\xab\x98)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingEffectSizeOffset_MetaData[] = {
		{ "Category", "EffectSize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\xb1\xe5\x93\x8d\xe8\x8c\x83\xe5\x9b\xb4\xe5\x81\x8f\xe7\xa7\xbb\n" },
#endif
		{ "editcondition", "HaveEffectSize" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\xb1\xe5\x93\x8d\xe8\x8c\x83\xe5\x9b\xb4\xe5\x81\x8f\xe7\xa7\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingEffectTags_MetaData[] = {
		{ "Category", "EffectSize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xa8\xe5\xbd\xb1\xe5\x93\x8d\xe8\x8c\x83\xe5\x9b\xb4\xe5\x86\x85\xe4\xb8\xba\xe8\xa7\x92\xe8\x89\xb2\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84tag\n" },
#endif
		{ "editcondition", "HaveEffectSize" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe5\xbd\xb1\xe5\x93\x8d\xe8\x8c\x83\xe5\x9b\xb4\xe5\x86\x85\xe4\xb8\xba\xe8\xa7\x92\xe8\x89\xb2\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84tag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingEffectBuffIDs_MetaData[] = {
		{ "Category", "EffectSize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xa8\xe5\xbd\xb1\xe5\x93\x8d\xe8\x8c\x83\xe5\x9b\xb4\xe5\x86\x85\xe4\xb8\xba\xe8\xa7\x92\xe8\x89\xb2\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84""buff\n" },
#endif
		{ "editcondition", "HaveEffectSize" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe5\xbd\xb1\xe5\x93\x8d\xe8\x8c\x83\xe5\x9b\xb4\xe5\x86\x85\xe4\xb8\xba\xe8\xa7\x92\xe8\x89\xb2\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84""buff" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveEffectRangeBuffIDs_MetaData[] = {
		{ "Category", "EffectSize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa6\xbb\xe5\xbc\x80\xe5\xbd\xb1\xe5\x93\x8d\xe8\x8c\x83\xe5\x9b\xb4\xe4\xb8\xba\xe8\xa7\x92\xe8\x89\xb2\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84""buff\n" },
#endif
		{ "editcondition", "HaveEffectSize" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa6\xbb\xe5\xbc\x80\xe5\xbd\xb1\xe5\x93\x8d\xe8\x8c\x83\xe5\x9b\xb4\xe4\xb8\xba\xe8\xa7\x92\xe8\x89\xb2\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84""buff" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedFuel_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe9\x9c\x80\xe8\xa6\x81\xe6\xb6\x88\xe8\x80\x97\xe7\x87\x83\xe6\x96\x99\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe9\x9c\x80\xe8\xa6\x81\xe6\xb6\x88\xe8\x80\x97\xe7\x87\x83\xe6\x96\x99\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalFuel_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe6\x80\xbb\xe7\x87\x83\xe6\x96\x99\n" },
#endif
		{ "EditCondition", "bNeedFuel" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe6\x80\xbb\xe7\x87\x83\xe6\x96\x99" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneTimeExpendFuel_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe6\xaf\x8f\xe6\xac\xa1\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe7\x87\x83\xe6\x96\x99\n" },
#endif
		{ "EditCondition", "bNeedFuel" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe6\xaf\x8f\xe6\xac\xa1\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe7\x87\x83\xe6\x96\x99" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpendFuelInterval_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe6\xb6\x88\xe8\x80\x97\xe7\x87\x83\xe6\x96\x99\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe9\x97\xb4\xe9\x9a\x94\n" },
#endif
		{ "EditCondition", "bNeedFuel" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe6\xb6\x88\xe8\x80\x97\xe7\x87\x83\xe6\x96\x99\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe9\x97\xb4\xe9\x9a\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectableFuelTag_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe7\x9a\x84\xe7\x87\x83\xe6\x96\x99ID\n" },
#endif
		{ "EditCondition", "bNeedFuel" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe7\x9a\x84\xe7\x87\x83\xe6\x96\x99ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnergyType_MetaData[] = {
		{ "Category", "Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x83\xbd\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\xbd\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RolePerceptionlength_MetaData[] = {
		{ "Category", "Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe6\x84\x9f\xe7\x9f\xa5\xe6\x8e\xa7\xe5\x88\xb6\xe6\x96\xb9\xe5\xbc\x8f\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4\xe9\x95\xbf\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe6\x84\x9f\xe7\x9f\xa5\xe6\x8e\xa7\xe5\x88\xb6\xe6\x96\xb9\xe5\xbc\x8f\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4\xe9\x95\xbf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RolePerceptionwidth_MetaData[] = {
		{ "Category", "Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe6\x84\x9f\xe7\x9f\xa5\xe6\x8e\xa7\xe5\x88\xb6\xe6\x96\xb9\xe5\xbc\x8f\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4\xe5\xae\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe6\x84\x9f\xe7\x9f\xa5\xe6\x8e\xa7\xe5\x88\xb6\xe6\x96\xb9\xe5\xbc\x8f\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4\xe5\xae\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateBuildingFaultInfo_MetaData[] = {
		{ "Category", "Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbe\x9b\xe8\x83\xbd\xe5\xbb\xba\xe7\xad\x91\xe6\x95\x85\xe9\x9a\x9c\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x8f\x8a\xe5\x85\xb6\xe6\x9d\x83\xe9\x87\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbe\x9b\xe8\x83\xbd\xe5\xbb\xba\xe7\xad\x91\xe6\x95\x85\xe9\x9a\x9c\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x8f\x8a\xe5\x85\xb6\xe6\x9d\x83\xe9\x87\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConsumeEnergyValue_MetaData[] = {
		{ "Category", "Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x83\xbd\xe6\xba\x90\xe6\xb6\x88\xe8\x80\x97\xe5\x8d\x95\xe4\xbd\x8d\xe6\x97\xb6\xe9\x97\xb4\xe6\x9c\x80\xe5\xa4\xa7\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe8\x83\xbd\xe6\xba\x90\n" },
#endif
		{ "Editcondition", "EnergyType == EModEnergyType::ConsumeEnergy" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\xbd\xe6\xba\x90\xe6\xb6\x88\xe8\x80\x97\xe5\x8d\x95\xe4\xbd\x8d\xe6\x97\xb6\xe9\x97\xb4\xe6\x9c\x80\xe5\xa4\xa7\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe8\x83\xbd\xe6\xba\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialEffectHeight_MetaData[] = {
		{ "Category", "Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbf\x9e\xe7\xba\xbf\xe7\x89\xb9\xe6\x95\x88\xe9\xab\x98\xe5\xba\xa6\n" },
#endif
		{ "Editcondition", "EnergyType != EModEnergyType::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9e\xe7\xba\xbf\xe7\x89\xb9\xe6\x95\x88\xe9\xab\x98\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenBuildingWidgetID_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\x93\xe5\xbc\x80\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe4\xb8\xbb\xe7\x95\x8c\xe9\x9d\xa2ID\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x93\xe5\xbc\x80\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe4\xb8\xbb\xe7\x95\x8c\xe9\x9d\xa2ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemPrice_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe4\xbb\xb7\xe5\x80\xbc(\xe5\xae\x9e\xe9\x99\x85\xe8\xb4\xa2\xe5\xaf\x8c\xe7\x82\xb9\xe6\x95\xb0)\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe4\xbb\xb7\xe5\x80\xbc(\xe5\xae\x9e\xe9\x99\x85\xe8\xb4\xa2\xe5\xaf\x8c\xe7\x82\xb9\xe6\x95\xb0)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildResource_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuildResource_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BuildResource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Workload;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DestoryWorkload;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestoryReturnPrecent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkillLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OwnerNum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntranceGridPoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EntranceGridPoses;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Durability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Aesthetic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FiveElementScore_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FiveElementScore_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FiveElementScore_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FiveElementScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Defense;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaterialCoefficient;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerTeamBuffIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerTeamBuffIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoTileMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoTileMeshes;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshes;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RoofMeshes_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoofMeshes_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RoofMeshes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RoofMeshes;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PillarForWall;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WallWithHole_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WallWithHole_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WallWithHole_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WallWithHole;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Parameter_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Parameter_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Parameter;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InterActionDefine;
	static void NewProp_bUseSkeletalMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletalMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightParams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LightParams;
	static void NewProp_bWarehouseShowItemMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarehouseShowItemMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanNotPlaceItemTag;
	static void NewProp_bUseWarehouseTemperature_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWarehouseTemperature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WarehouseTemperature;
	static void NewProp_IsHeatSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHeatSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeatSourceTemperatureEffect;
	static void NewProp_IsLightSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLightSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LightSourceTemperatureEffect;
	static void NewProp_HaveEffectSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveEffectSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingEffectSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingEffectSizeOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingEffectTags;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuildingEffectBuffIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BuildingEffectBuffIDs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeaveEffectRangeBuffIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeaveEffectRangeBuffIDs;
	static void NewProp_bNeedFuel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedFuel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalFuel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OneTimeExpendFuel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpendFuelInterval;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectableFuelTag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectableFuelTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnergyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnergyType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RolePerceptionlength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RolePerceptionwidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GenerateBuildingFaultInfo_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerateBuildingFaultInfo_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerateBuildingFaultInfo_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GenerateBuildingFaultInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConsumeEnergyValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpecialEffectHeight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OpenBuildingWidgetID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemPrice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModBuildData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildResource_ValueProp = { "BuildResource", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildResource_Key_KeyProp = { "BuildResource_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildResource = { "BuildResource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, BuildResource), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildResource_MetaData), NewProp_BuildResource_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Workload = { "Workload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, Workload), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Workload_MetaData), NewProp_Workload_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_DestoryWorkload = { "DestoryWorkload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, DestoryWorkload), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestoryWorkload_MetaData), NewProp_DestoryWorkload_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_DestoryReturnPrecent = { "DestoryReturnPrecent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, DestoryReturnPrecent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestoryReturnPrecent_MetaData), NewProp_DestoryReturnPrecent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_SkillLevel = { "SkillLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, SkillLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillLevel_MetaData), NewProp_SkillLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_OwnerNum = { "OwnerNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, OwnerNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerNum_MetaData), NewProp_OwnerNum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_EntranceGridPoses_Inner = { "EntranceGridPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModRelativeGridPoses, METADATA_PARAMS(0, nullptr) }; // 2846983654
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_EntranceGridPoses = { "EntranceGridPoses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, EntranceGridPoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntranceGridPoses_MetaData), NewProp_EntranceGridPoses_MetaData) }; // 2846983654
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, Durability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Durability_MetaData), NewProp_Durability_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Aesthetic = { "Aesthetic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, Aesthetic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Aesthetic_MetaData), NewProp_Aesthetic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_FiveElementScore_ValueProp = { "FiveElementScore", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_FiveElementScore_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_FiveElementScore_Key_KeyProp = { "FiveElementScore_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModFiveElementType, METADATA_PARAMS(0, nullptr) }; // 1855349066
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_FiveElementScore = { "FiveElementScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, FiveElementScore), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiveElementScore_MetaData), NewProp_FiveElementScore_MetaData) }; // 1855349066
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Defense = { "Defense", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, Defense), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Defense_MetaData), NewProp_Defense_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_MaterialCoefficient = { "MaterialCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, MaterialCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialCoefficient_MetaData), NewProp_MaterialCoefficient_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_PlayerTeamBuffIDs_Inner = { "PlayerTeamBuffIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_PlayerTeamBuffIDs = { "PlayerTeamBuffIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, PlayerTeamBuffIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerTeamBuffIDs_MetaData), NewProp_PlayerTeamBuffIDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_AutoTileMeshes_Inner = { "AutoTileMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModAutoTileMeshConfigData, METADATA_PARAMS(0, nullptr) }; // 2147357633
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_AutoTileMeshes = { "AutoTileMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, AutoTileMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoTileMeshes_MetaData), NewProp_AutoTileMeshes_MetaData) }; // 2147357633
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_StaticMeshes_Inner = { "StaticMeshes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, StaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshes_MetaData), NewProp_StaticMeshes_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_RoofMeshes_ValueProp = { "RoofMeshes", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_RoofMeshes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_RoofMeshes_Key_KeyProp = { "RoofMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModRoofPartType, METADATA_PARAMS(0, nullptr) }; // 3054908556
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_RoofMeshes = { "RoofMeshes", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, RoofMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoofMeshes_MetaData), NewProp_RoofMeshes_MetaData) }; // 3054908556
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_PillarForWall = { "PillarForWall", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, PillarForWall), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PillarForWall_MetaData), NewProp_PillarForWall_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_WallWithHole_ValueProp = { "WallWithHole", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_WallWithHole_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_WallWithHole_Key_KeyProp = { "WallWithHole_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModEmbeddedWallType, METADATA_PARAMS(0, nullptr) }; // 3393154829
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_WallWithHole = { "WallWithHole", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, WallWithHole), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallWithHole_MetaData), NewProp_WallWithHole_MetaData) }; // 3393154829
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Parameter_ValueProp = { "Parameter", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Parameter_Key_KeyProp = { "Parameter_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, Parameter), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter_MetaData), NewProp_Parameter_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_InterActionDefine = { "InterActionDefine", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, InterActionDefine), Z_Construct_UClass_USmartObjectDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterActionDefine_MetaData), NewProp_InterActionDefine_MetaData) };
void Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bUseSkeletalMesh_SetBit(void* Obj)
{
	((FModBuildData*)Obj)->bUseSkeletalMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bUseSkeletalMesh = { "bUseSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModBuildData), &Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bUseSkeletalMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSkeletalMesh_MetaData), NewProp_bUseSkeletalMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, AnimInstance), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_LightParams_Inner = { "LightParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModBuildLightSourceData, METADATA_PARAMS(0, nullptr) }; // 819370749
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_LightParams = { "LightParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, LightParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightParams_MetaData), NewProp_LightParams_MetaData) }; // 819370749
void Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bWarehouseShowItemMesh_SetBit(void* Obj)
{
	((FModBuildData*)Obj)->bWarehouseShowItemMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bWarehouseShowItemMesh = { "bWarehouseShowItemMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModBuildData), &Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bWarehouseShowItemMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarehouseShowItemMesh_MetaData), NewProp_bWarehouseShowItemMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_CanNotPlaceItemTag = { "CanNotPlaceItemTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, CanNotPlaceItemTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanNotPlaceItemTag_MetaData), NewProp_CanNotPlaceItemTag_MetaData) }; // 2104890724
void Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bUseWarehouseTemperature_SetBit(void* Obj)
{
	((FModBuildData*)Obj)->bUseWarehouseTemperature = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bUseWarehouseTemperature = { "bUseWarehouseTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModBuildData), &Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bUseWarehouseTemperature_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWarehouseTemperature_MetaData), NewProp_bUseWarehouseTemperature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_WarehouseTemperature = { "WarehouseTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, WarehouseTemperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarehouseTemperature_MetaData), NewProp_WarehouseTemperature_MetaData) };
void Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_IsHeatSource_SetBit(void* Obj)
{
	((FModBuildData*)Obj)->IsHeatSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_IsHeatSource = { "IsHeatSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModBuildData), &Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_IsHeatSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsHeatSource_MetaData), NewProp_IsHeatSource_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_HeatSourceTemperatureEffect = { "HeatSourceTemperatureEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, HeatSourceTemperatureEffect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeatSourceTemperatureEffect_MetaData), NewProp_HeatSourceTemperatureEffect_MetaData) };
void Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_IsLightSource_SetBit(void* Obj)
{
	((FModBuildData*)Obj)->IsLightSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_IsLightSource = { "IsLightSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModBuildData), &Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_IsLightSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsLightSource_MetaData), NewProp_IsLightSource_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_LightSourceTemperatureEffect = { "LightSourceTemperatureEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, LightSourceTemperatureEffect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightSourceTemperatureEffect_MetaData), NewProp_LightSourceTemperatureEffect_MetaData) };
void Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_HaveEffectSize_SetBit(void* Obj)
{
	((FModBuildData*)Obj)->HaveEffectSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_HaveEffectSize = { "HaveEffectSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModBuildData), &Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_HaveEffectSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HaveEffectSize_MetaData), NewProp_HaveEffectSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildingEffectSize = { "BuildingEffectSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, BuildingEffectSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingEffectSize_MetaData), NewProp_BuildingEffectSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildingEffectSizeOffset = { "BuildingEffectSizeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, BuildingEffectSizeOffset), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingEffectSizeOffset_MetaData), NewProp_BuildingEffectSizeOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildingEffectTags = { "BuildingEffectTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, BuildingEffectTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingEffectTags_MetaData), NewProp_BuildingEffectTags_MetaData) }; // 2104890724
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildingEffectBuffIDs_Inner = { "BuildingEffectBuffIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildingEffectBuffIDs = { "BuildingEffectBuffIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, BuildingEffectBuffIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingEffectBuffIDs_MetaData), NewProp_BuildingEffectBuffIDs_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_LeaveEffectRangeBuffIDs_Inner = { "LeaveEffectRangeBuffIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_LeaveEffectRangeBuffIDs = { "LeaveEffectRangeBuffIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, LeaveEffectRangeBuffIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveEffectRangeBuffIDs_MetaData), NewProp_LeaveEffectRangeBuffIDs_MetaData) };
void Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bNeedFuel_SetBit(void* Obj)
{
	((FModBuildData*)Obj)->bNeedFuel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bNeedFuel = { "bNeedFuel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModBuildData), &Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bNeedFuel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedFuel_MetaData), NewProp_bNeedFuel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_TotalFuel = { "TotalFuel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, TotalFuel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalFuel_MetaData), NewProp_TotalFuel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_OneTimeExpendFuel = { "OneTimeExpendFuel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, OneTimeExpendFuel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneTimeExpendFuel_MetaData), NewProp_OneTimeExpendFuel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_ExpendFuelInterval = { "ExpendFuelInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, ExpendFuelInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpendFuelInterval_MetaData), NewProp_ExpendFuelInterval_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_SelectableFuelTag_Inner = { "SelectableFuelTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_SelectableFuelTag = { "SelectableFuelTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, SelectableFuelTag), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectableFuelTag_MetaData), NewProp_SelectableFuelTag_MetaData) }; // 133831994
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_EnergyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_EnergyType = { "EnergyType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, EnergyType), Z_Construct_UEnum_CreateModPlugin_EModEnergyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnergyType_MetaData), NewProp_EnergyType_MetaData) }; // 1597481980
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_RolePerceptionlength = { "RolePerceptionlength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, RolePerceptionlength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RolePerceptionlength_MetaData), NewProp_RolePerceptionlength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_RolePerceptionwidth = { "RolePerceptionwidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, RolePerceptionwidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RolePerceptionwidth_MetaData), NewProp_RolePerceptionwidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_GenerateBuildingFaultInfo_ValueProp = { "GenerateBuildingFaultInfo", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_GenerateBuildingFaultInfo_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_GenerateBuildingFaultInfo_Key_KeyProp = { "GenerateBuildingFaultInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModGenerateBuildingFaultType, METADATA_PARAMS(0, nullptr) }; // 1478486993
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_GenerateBuildingFaultInfo = { "GenerateBuildingFaultInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, GenerateBuildingFaultInfo), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateBuildingFaultInfo_MetaData), NewProp_GenerateBuildingFaultInfo_MetaData) }; // 1478486993
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_MaxConsumeEnergyValue = { "MaxConsumeEnergyValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, MaxConsumeEnergyValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConsumeEnergyValue_MetaData), NewProp_MaxConsumeEnergyValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_SpecialEffectHeight = { "SpecialEffectHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, SpecialEffectHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialEffectHeight_MetaData), NewProp_SpecialEffectHeight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_OpenBuildingWidgetID = { "OpenBuildingWidgetID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, OpenBuildingWidgetID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenBuildingWidgetID_MetaData), NewProp_OpenBuildingWidgetID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_ItemPrice = { "ItemPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildData, ItemPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPrice_MetaData), NewProp_ItemPrice_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModBuildData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildResource_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildResource_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildResource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Workload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_DestoryWorkload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_DestoryReturnPrecent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_SkillLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_OwnerNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_EntranceGridPoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_EntranceGridPoses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Durability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Aesthetic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_FiveElementScore_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_FiveElementScore_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_FiveElementScore_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_FiveElementScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Defense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_MaterialCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_PlayerTeamBuffIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_PlayerTeamBuffIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_AutoTileMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_AutoTileMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_StaticMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_StaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_RoofMeshes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_RoofMeshes_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_RoofMeshes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_RoofMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_PillarForWall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_WallWithHole_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_WallWithHole_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_WallWithHole_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_WallWithHole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Parameter_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Parameter_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_InterActionDefine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bUseSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_AnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_LightParams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_LightParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bWarehouseShowItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_CanNotPlaceItemTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bUseWarehouseTemperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_WarehouseTemperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_IsHeatSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_HeatSourceTemperatureEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_IsLightSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_LightSourceTemperatureEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_HaveEffectSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildingEffectSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildingEffectSizeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildingEffectTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildingEffectBuffIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_BuildingEffectBuffIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_LeaveEffectRangeBuffIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_LeaveEffectRangeBuffIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_bNeedFuel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_TotalFuel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_OneTimeExpendFuel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_ExpendFuelInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_SelectableFuelTag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_SelectableFuelTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_EnergyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_EnergyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_RolePerceptionlength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_RolePerceptionwidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_GenerateBuildingFaultInfo_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_GenerateBuildingFaultInfo_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_GenerateBuildingFaultInfo_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_GenerateBuildingFaultInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_MaxConsumeEnergyValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_SpecialEffectHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_OpenBuildingWidgetID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildData_Statics::NewProp_ItemPrice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModBuildData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModBuildData",
	Z_Construct_UScriptStruct_FModBuildData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildData_Statics::PropPointers),
	sizeof(FModBuildData),
	alignof(FModBuildData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModBuildData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModBuildData()
{
	if (!Z_Registration_Info_UScriptStruct_FModBuildData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModBuildData.InnerSingleton, Z_Construct_UScriptStruct_FModBuildData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModBuildData.InnerSingleton;
}
// ********** End ScriptStruct FModBuildData *******************************************************

// ********** Begin ScriptStruct FModBuildUIData ***************************************************
static_assert(std::is_polymorphic<FModBuildUIData>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModBuildUIData cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModBuildUIData;
class UScriptStruct* FModBuildUIData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModBuildUIData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModBuildUIData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModBuildUIData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModBuildUIData"));
	}
	return Z_Registration_Info_UScriptStruct_FModBuildUIData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModBuildUIData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//mod\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9UI\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mod\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "ModBuildUIData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbb\xba\xe9\x80\xa0\xe7\xb1\xbb\xe5\x88\xab(\xe5\xaf\xb9\xe5\xba\x94""BuildTabConfig\xe8\xa1\xa8\xe8\xa1\x8c\xe5\x90\x8d)\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe9\x80\xa0\xe7\xb1\xbb\xe5\x88\xab(\xe5\xaf\xb9\xe5\xba\x94""BuildTabConfig\xe8\xa1\xa8\xe8\xa1\x8c\xe5\x90\x8d)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "ModBuildUIData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x88\xe7\x95\x8c\xe9\x9d\xa2\xe6\x98\xbe\xe7\xa4\xba\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x88\xe7\x95\x8c\xe9\x9d\xa2\xe6\x98\xbe\xe7\xa4\xba\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "ModBuildUIData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UI\xe5\x9b\xbe\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[] = {
		{ "Category", "ModBuildUIData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Desc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModBuildUIData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModBuildUIData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildUIData, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModBuildUIData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildUIData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModBuildUIData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildUIData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModBuildUIData_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildUIData, Desc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Desc_MetaData), NewProp_Desc_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModBuildUIData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildUIData_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildUIData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildUIData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildUIData_Statics::NewProp_Desc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildUIData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModBuildUIData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModBuildUIData",
	Z_Construct_UScriptStruct_FModBuildUIData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildUIData_Statics::PropPointers),
	sizeof(FModBuildUIData),
	alignof(FModBuildUIData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildUIData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModBuildUIData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModBuildUIData()
{
	if (!Z_Registration_Info_UScriptStruct_FModBuildUIData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModBuildUIData.InnerSingleton, Z_Construct_UScriptStruct_FModBuildUIData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModBuildUIData.InnerSingleton;
}
// ********** End ScriptStruct FModBuildUIData *****************************************************

// ********** Begin ScriptStruct FModBuildTabStruct ************************************************
static_assert(std::is_polymorphic<FModBuildTabStruct>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModBuildTabStruct cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModBuildTabStruct;
class UScriptStruct* FModBuildTabStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModBuildTabStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModBuildTabStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModBuildTabStruct, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModBuildTabStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FModBuildTabStruct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModBuildTabStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//mod\xe5\xbb\xba\xe7\xad\x91Tab\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mod\xe5\xbb\xba\xe7\xad\x91Tab" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[] = {
		{ "Category", "ModBuildTabStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Tab\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tab\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sort_MetaData[] = {
		{ "Category", "ModBuildTabStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\x92\xe5\xba\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\x92\xe5\xba\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "ModBuildTabStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe5\x88\x86\xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe5\x88\x86\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TabName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Sort;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModBuildTabStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildTabStruct, TabName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabName_MetaData), NewProp_TabName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::NewProp_Sort = { "Sort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildTabStruct, Sort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sort_MetaData), NewProp_Sort_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildTabStruct, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::NewProp_TabName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::NewProp_Sort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::NewProp_Category,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModBuildTabStruct",
	Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::PropPointers),
	sizeof(FModBuildTabStruct),
	alignof(FModBuildTabStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModBuildTabStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModBuildTabStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModBuildTabStruct.InnerSingleton, Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModBuildTabStruct.InnerSingleton;
}
// ********** End ScriptStruct FModBuildTabStruct **************************************************

// ********** Begin ScriptStruct FModBuildListCategorizeStruct *************************************
static_assert(std::is_polymorphic<FModBuildListCategorizeStruct>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModBuildListCategorizeStruct cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModBuildListCategorizeStruct;
class UScriptStruct* FModBuildListCategorizeStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModBuildListCategorizeStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModBuildListCategorizeStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModBuildListCategorizeStruct, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModBuildListCategorizeStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FModBuildListCategorizeStruct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//mod\xe5\xbb\xba\xe7\xad\x91\xe5\x88\x86\xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mod\xe5\xbb\xba\xe7\xad\x91\xe5\x88\x86\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "ModBuildListCategorizeStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sort_MetaData[] = {
		{ "Category", "ModBuildListCategorizeStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\x92\xe5\xba\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\x92\xe5\xba\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "ModBuildListCategorizeStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9b\xbe\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/BuildDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Sort;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModBuildListCategorizeStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildListCategorizeStruct, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::NewProp_Sort = { "Sort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildListCategorizeStruct, Sort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sort_MetaData), NewProp_Sort_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::NewProp_Icon_Inner = { "Icon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBuildListCategorizeStruct, Icon), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::NewProp_Sort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::NewProp_Icon_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModBuildListCategorizeStruct",
	Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::PropPointers),
	sizeof(FModBuildListCategorizeStruct),
	alignof(FModBuildListCategorizeStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModBuildListCategorizeStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModBuildListCategorizeStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModBuildListCategorizeStruct.InnerSingleton, Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModBuildListCategorizeStruct.InnerSingleton;
}
// ********** End ScriptStruct FModBuildListCategorizeStruct ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuildDataStruct_h__Script_CreateModPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModFiveElementType_StaticEnum, TEXT("EModFiveElementType"), &Z_Registration_Info_UEnum_EModFiveElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1855349066U) },
		{ EModAutoTileType_StaticEnum, TEXT("EModAutoTileType"), &Z_Registration_Info_UEnum_EModAutoTileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2974839418U) },
		{ EModRoofPartType_StaticEnum, TEXT("EModRoofPartType"), &Z_Registration_Info_UEnum_EModRoofPartType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3054908556U) },
		{ EModEmbeddedWallType_StaticEnum, TEXT("EModEmbeddedWallType"), &Z_Registration_Info_UEnum_EModEmbeddedWallType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3393154829U) },
		{ EModEnergyType_StaticEnum, TEXT("EModEnergyType"), &Z_Registration_Info_UEnum_EModEnergyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1597481980U) },
		{ EModGenerateBuildingFaultType_StaticEnum, TEXT("EModGenerateBuildingFaultType"), &Z_Registration_Info_UEnum_EModGenerateBuildingFaultType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1478486993U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModGridPosition::StaticStruct, Z_Construct_UScriptStruct_FModGridPosition_Statics::NewStructOps, TEXT("ModGridPosition"), &Z_Registration_Info_UScriptStruct_FModGridPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModGridPosition), 3621619096U) },
		{ FModRelativeGridPoses::StaticStruct, Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics::NewStructOps, TEXT("ModRelativeGridPoses"), &Z_Registration_Info_UScriptStruct_FModRelativeGridPoses, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModRelativeGridPoses), 2846983654U) },
		{ FModAutoTileMeshConfigData::StaticStruct, Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics::NewStructOps, TEXT("ModAutoTileMeshConfigData"), &Z_Registration_Info_UScriptStruct_FModAutoTileMeshConfigData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModAutoTileMeshConfigData), 2147357633U) },
		{ FModBuildLightSourceData::StaticStruct, Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics::NewStructOps, TEXT("ModBuildLightSourceData"), &Z_Registration_Info_UScriptStruct_FModBuildLightSourceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModBuildLightSourceData), 819370749U) },
		{ FModBuildData::StaticStruct, Z_Construct_UScriptStruct_FModBuildData_Statics::NewStructOps, TEXT("ModBuildData"), &Z_Registration_Info_UScriptStruct_FModBuildData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModBuildData), 3222946982U) },
		{ FModBuildUIData::StaticStruct, Z_Construct_UScriptStruct_FModBuildUIData_Statics::NewStructOps, TEXT("ModBuildUIData"), &Z_Registration_Info_UScriptStruct_FModBuildUIData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModBuildUIData), 3233701449U) },
		{ FModBuildTabStruct::StaticStruct, Z_Construct_UScriptStruct_FModBuildTabStruct_Statics::NewStructOps, TEXT("ModBuildTabStruct"), &Z_Registration_Info_UScriptStruct_FModBuildTabStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModBuildTabStruct), 4062650917U) },
		{ FModBuildListCategorizeStruct::StaticStruct, Z_Construct_UScriptStruct_FModBuildListCategorizeStruct_Statics::NewStructOps, TEXT("ModBuildListCategorizeStruct"), &Z_Registration_Info_UScriptStruct_FModBuildListCategorizeStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModBuildListCategorizeStruct), 808960885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuildDataStruct_h__Script_CreateModPlugin_85027502(TEXT("/Script/CreateModPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuildDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuildDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuildDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuildDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
