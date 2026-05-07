// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue634Test.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue634Test() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue634Struct();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIssue634Struct ***************************************************
static_assert(std::is_polymorphic<FIssue634Struct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FIssue634Struct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIssue634Struct;
class UScriptStruct* FIssue634Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIssue634Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIssue634Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue634Struct, (UObject*)Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue634Struct"));
	}
	return Z_Registration_Info_UScriptStruct_FIssue634Struct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIssue634Struct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue634Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffID_MetaData[] = {
		{ "Category", "Issue634Struct" },
		{ "ModuleRelativePath", "Private/Tests/Issue634Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverTime_MetaData[] = {
		{ "Category", "Issue634Struct" },
		{ "ModuleRelativePath", "Private/Tests/Issue634Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BuffID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue634Struct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_BuffID = { "BuffID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIssue634Struct, BuffID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffID_MetaData), NewProp_BuffID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_OverTime = { "OverTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIssue634Struct, OverTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverTime_MetaData), NewProp_OverTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue634Struct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_BuffID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_OverTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue634Struct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue634Struct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"Issue634Struct",
	Z_Construct_UScriptStruct_FIssue634Struct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue634Struct_Statics::PropPointers),
	sizeof(FIssue634Struct),
	alignof(FIssue634Struct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue634Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIssue634Struct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIssue634Struct()
{
	if (!Z_Registration_Info_UScriptStruct_FIssue634Struct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIssue634Struct.InnerSingleton, Z_Construct_UScriptStruct_FIssue634Struct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIssue634Struct.InnerSingleton;
}
// ********** End ScriptStruct FIssue634Struct *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue634Test_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIssue634Struct::StaticStruct, Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewStructOps, TEXT("Issue634Struct"), &Z_Registration_Info_UScriptStruct_FIssue634Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIssue634Struct), 1786777134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue634Test_h__Script_UnLuaTestSuite_24885789(TEXT("/Script/UnLuaTestSuite"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue634Test_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue634Test_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
