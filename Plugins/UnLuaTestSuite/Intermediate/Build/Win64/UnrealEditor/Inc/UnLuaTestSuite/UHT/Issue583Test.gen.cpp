// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue583Test.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue583Test() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue583Record();
UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue583Row();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIssue583Record ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIssue583Record;
class UScriptStruct* FIssue583Record::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIssue583Record.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIssue583Record.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue583Record, (UObject*)Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue583Record"));
	}
	return Z_Registration_Info_UScriptStruct_FIssue583Record.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIssue583Record_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue583Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Issue583Record" },
		{ "ModuleRelativePath", "Private/Tests/Issue583Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[] = {
		{ "Category", "Issue583Record" },
		{ "ModuleRelativePath", "Private/Tests/Issue583Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue583Record>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIssue583Record, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIssue583Record, Flag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flag_MetaData), NewProp_Flag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue583Record_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue583Record_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue583Record_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	nullptr,
	&NewStructOps,
	"Issue583Record",
	Z_Construct_UScriptStruct_FIssue583Record_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue583Record_Statics::PropPointers),
	sizeof(FIssue583Record),
	alignof(FIssue583Record),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue583Record_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIssue583Record_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIssue583Record()
{
	if (!Z_Registration_Info_UScriptStruct_FIssue583Record.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIssue583Record.InnerSingleton, Z_Construct_UScriptStruct_FIssue583Record_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIssue583Record.InnerSingleton;
}
// ********** End ScriptStruct FIssue583Record *****************************************************

// ********** Begin ScriptStruct FIssue583Row ******************************************************
static_assert(std::is_polymorphic<FIssue583Row>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FIssue583Row cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIssue583Row;
class UScriptStruct* FIssue583Row::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIssue583Row.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIssue583Row.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue583Row, (UObject*)Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue583Row"));
	}
	return Z_Registration_Info_UScriptStruct_FIssue583Row.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIssue583Row_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue583Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[] = {
		{ "Category", "Issue583Row" },
		{ "ModuleRelativePath", "Private/Tests/Issue583Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Records_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Records_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Records;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue583Row>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records_ValueProp = { "Records", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIssue583Record, METADATA_PARAMS(0, nullptr) }; // 452756266
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records_Key_KeyProp = { "Records_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIssue583Row, Records), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Records_MetaData), NewProp_Records_MetaData) }; // 452756266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue583Row_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue583Row_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue583Row_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"Issue583Row",
	Z_Construct_UScriptStruct_FIssue583Row_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue583Row_Statics::PropPointers),
	sizeof(FIssue583Row),
	alignof(FIssue583Row),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue583Row_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIssue583Row_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIssue583Row()
{
	if (!Z_Registration_Info_UScriptStruct_FIssue583Row.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIssue583Row.InnerSingleton, Z_Construct_UScriptStruct_FIssue583Row_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIssue583Row.InnerSingleton;
}
// ********** End ScriptStruct FIssue583Row ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue583Test_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIssue583Record::StaticStruct, Z_Construct_UScriptStruct_FIssue583Record_Statics::NewStructOps, TEXT("Issue583Record"), &Z_Registration_Info_UScriptStruct_FIssue583Record, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIssue583Record), 452756266U) },
		{ FIssue583Row::StaticStruct, Z_Construct_UScriptStruct_FIssue583Row_Statics::NewStructOps, TEXT("Issue583Row"), &Z_Registration_Info_UScriptStruct_FIssue583Row, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIssue583Row), 1078297847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue583Test_h__Script_UnLuaTestSuite_4159638241(TEXT("/Script/UnLuaTestSuite"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue583Test_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue583Test_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
