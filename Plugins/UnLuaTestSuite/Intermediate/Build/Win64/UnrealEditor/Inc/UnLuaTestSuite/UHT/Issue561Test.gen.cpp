// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue561Test.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue561Test() {}

// ********** Begin Cross Module References ********************************************************
UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature();
UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue561Struct();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FIssue561Event ********************************************************
struct Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue561Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnLuaTestSuite, nullptr, "Issue561Event__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIssue561Event_DelegateWrapper(const FMulticastScriptDelegate& Issue561Event)
{
	Issue561Event.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FIssue561Event **********************************************************

// ********** Begin ScriptStruct FIssue561Struct ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIssue561Struct;
class UScriptStruct* FIssue561Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIssue561Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIssue561Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue561Struct, (UObject*)Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue561Struct"));
	}
	return Z_Registration_Info_UScriptStruct_FIssue561Struct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIssue561Struct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue561Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseEvent_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue561Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue561Struct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewProp_OnMouseEvent = { "OnMouseEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIssue561Struct, OnMouseEvent), Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseEvent_MetaData), NewProp_OnMouseEvent_MetaData) }; // 1746794710
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue561Struct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewProp_OnMouseEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue561Struct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue561Struct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	nullptr,
	&NewStructOps,
	"Issue561Struct",
	Z_Construct_UScriptStruct_FIssue561Struct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue561Struct_Statics::PropPointers),
	sizeof(FIssue561Struct),
	alignof(FIssue561Struct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue561Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIssue561Struct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIssue561Struct()
{
	if (!Z_Registration_Info_UScriptStruct_FIssue561Struct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIssue561Struct.InnerSingleton, Z_Construct_UScriptStruct_FIssue561Struct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIssue561Struct.InnerSingleton;
}
// ********** End ScriptStruct FIssue561Struct *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue561Test_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIssue561Struct::StaticStruct, Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewStructOps, TEXT("Issue561Struct"), &Z_Registration_Info_UScriptStruct_FIssue561Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIssue561Struct), 3455020660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue561Test_h__Script_UnLuaTestSuite_489192832(TEXT("/Script/UnLuaTestSuite"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue561Test_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue561Test_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
