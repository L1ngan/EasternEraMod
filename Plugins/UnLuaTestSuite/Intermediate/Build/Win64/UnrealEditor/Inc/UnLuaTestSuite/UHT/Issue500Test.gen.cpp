// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue500Test.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue500Test() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UObjectForIssue500();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UObjectForIssue500_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UObjectForIssue500 Function Test *****************************************
struct ObjectForIssue500_eventTest_Parms
{
	FString ReturnValue;
};
static FName NAME_UObjectForIssue500_Test = FName(TEXT("Test"));
FString UObjectForIssue500::Test()
{
	ObjectForIssue500_eventTest_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_UObjectForIssue500_Test);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UObjectForIssue500_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue500Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UObjectForIssue500_Test_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectForIssue500_eventTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectForIssue500_Test_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectForIssue500_Test_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectForIssue500_Test_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectForIssue500_Test_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectForIssue500, nullptr, "Test", Z_Construct_UFunction_UObjectForIssue500_Test_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectForIssue500_Test_Statics::PropPointers), sizeof(ObjectForIssue500_eventTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectForIssue500_Test_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectForIssue500_Test_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ObjectForIssue500_eventTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectForIssue500_Test()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectForIssue500_Test_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UObjectForIssue500 Function Test *******************************************

// ********** Begin Class UObjectForIssue500 *******************************************************
void UObjectForIssue500::StaticRegisterNativesUObjectForIssue500()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UObjectForIssue500;
UClass* UObjectForIssue500::GetPrivateStaticClass()
{
	using TClass = UObjectForIssue500;
	if (!Z_Registration_Info_UClass_UObjectForIssue500.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ObjectForIssue500"),
			Z_Registration_Info_UClass_UObjectForIssue500.InnerSingleton,
			StaticRegisterNativesUObjectForIssue500,
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
	return Z_Registration_Info_UClass_UObjectForIssue500.InnerSingleton;
}
UClass* Z_Construct_UClass_UObjectForIssue500_NoRegister()
{
	return UObjectForIssue500::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UObjectForIssue500_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tests/Issue500Test.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue500Test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectForIssue500_Test, "Test" }, // 480442598
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectForIssue500>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjectForIssue500_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectForIssue500_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UObjectForIssue500_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(UObjectForIssue500, IUnLuaInterface), false },  // 3862883213
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectForIssue500_Statics::ClassParams = {
	&UObjectForIssue500::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectForIssue500_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectForIssue500_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectForIssue500()
{
	if (!Z_Registration_Info_UClass_UObjectForIssue500.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectForIssue500.OuterSingleton, Z_Construct_UClass_UObjectForIssue500_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectForIssue500.OuterSingleton;
}
UObjectForIssue500::UObjectForIssue500(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectForIssue500);
UObjectForIssue500::~UObjectForIssue500() {}
// ********** End Class UObjectForIssue500 *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue500Test_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectForIssue500, UObjectForIssue500::StaticClass, TEXT("UObjectForIssue500"), &Z_Registration_Info_UClass_UObjectForIssue500, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectForIssue500), 3190005661U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue500Test_h__Script_UnLuaTestSuite_1860886361(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue500Test_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue500Test_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
