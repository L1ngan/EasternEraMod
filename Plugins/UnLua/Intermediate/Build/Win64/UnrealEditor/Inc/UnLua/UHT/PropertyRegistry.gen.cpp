// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Registries/PropertyRegistry.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePropertyRegistry() {}

// ********** Begin Cross Module References ********************************************************
UNLUA_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyCollector();
UPackage* Z_Construct_UPackage__Script_UnLua();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPropertyCollector ************************************************
struct Z_Construct_UScriptStruct_FPropertyCollector_Statics
{
	struct FPropertyCollector
	{
	};

	static_assert(sizeof(FPropertyCollector) < MAX_uint16);
	static_assert(alignof(FPropertyCollector) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Registries/PropertyRegistry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyCollector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
	nullptr,
	nullptr,
	"PropertyCollector",
	nullptr,
	0,
	sizeof(FPropertyCollector),
	alignof(FPropertyCollector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyCollector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyCollector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyCollector()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyCollector_Statics::StructParams);
	}
	return ReturnStruct;
}
// ********** End ScriptStruct FPropertyCollector **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
