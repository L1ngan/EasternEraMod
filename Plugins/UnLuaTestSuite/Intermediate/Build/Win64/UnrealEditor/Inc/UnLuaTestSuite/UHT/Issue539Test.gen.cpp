// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue539Test.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue539Test() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UObjectForIssue539();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UObjectForIssue539_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UObjectForIssue539 Function Test *****************************************
struct ObjectForIssue539_eventTest_Parms
{
	FVector Dest;
	UObject* Obj;
	float Radius;
	bool bStop;
};
static FName NAME_UObjectForIssue539_Test = FName(TEXT("Test"));
void UObjectForIssue539::Test(FVector& Dest, UObject*& Obj, float& Radius, bool& bStop)
{
	ObjectForIssue539_eventTest_Parms Parms;
	Parms.Dest=Dest;
	Parms.Obj=Obj;
	Parms.Radius=Radius;
	Parms.bStop=bStop ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UObjectForIssue539_Test);
	ProcessEvent(Func,&Parms);
	Dest=Parms.Dest;
	Obj=Parms.Obj;
	Radius=Parms.Radius;
	bStop=Parms.bStop;
}
struct Z_Construct_UFunction_UObjectForIssue539_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue539Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bStop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectForIssue539_eventTest_Parms, Dest), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectForIssue539_eventTest_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectForIssue539_eventTest_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_bStop_SetBit(void* Obj)
{
	((ObjectForIssue539_eventTest_Parms*)Obj)->bStop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_bStop = { "bStop", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ObjectForIssue539_eventTest_Parms), &Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_bStop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectForIssue539_Test_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_Dest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectForIssue539_Test_Statics::NewProp_bStop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectForIssue539_Test_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectForIssue539_Test_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectForIssue539, nullptr, "Test", Z_Construct_UFunction_UObjectForIssue539_Test_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectForIssue539_Test_Statics::PropPointers), sizeof(ObjectForIssue539_eventTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectForIssue539_Test_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectForIssue539_Test_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ObjectForIssue539_eventTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectForIssue539_Test()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectForIssue539_Test_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UObjectForIssue539 Function Test *******************************************

// ********** Begin Class UObjectForIssue539 *******************************************************
void UObjectForIssue539::StaticRegisterNativesUObjectForIssue539()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UObjectForIssue539;
UClass* UObjectForIssue539::GetPrivateStaticClass()
{
	using TClass = UObjectForIssue539;
	if (!Z_Registration_Info_UClass_UObjectForIssue539.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ObjectForIssue539"),
			Z_Registration_Info_UClass_UObjectForIssue539.InnerSingleton,
			StaticRegisterNativesUObjectForIssue539,
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
	return Z_Registration_Info_UClass_UObjectForIssue539.InnerSingleton;
}
UClass* Z_Construct_UClass_UObjectForIssue539_NoRegister()
{
	return UObjectForIssue539::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UObjectForIssue539_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tests/Issue539Test.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue539Test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectForIssue539_Test, "Test" }, // 3846532203
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectForIssue539>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjectForIssue539_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectForIssue539_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UObjectForIssue539_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(UObjectForIssue539, IUnLuaInterface), false },  // 3862883213
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectForIssue539_Statics::ClassParams = {
	&UObjectForIssue539::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectForIssue539_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectForIssue539_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectForIssue539()
{
	if (!Z_Registration_Info_UClass_UObjectForIssue539.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectForIssue539.OuterSingleton, Z_Construct_UClass_UObjectForIssue539_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectForIssue539.OuterSingleton;
}
UObjectForIssue539::UObjectForIssue539(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectForIssue539);
UObjectForIssue539::~UObjectForIssue539() {}
// ********** End Class UObjectForIssue539 *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue539Test_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectForIssue539, UObjectForIssue539::StaticClass, TEXT("UObjectForIssue539"), &Z_Registration_Info_UClass_UObjectForIssue539, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectForIssue539), 1403055814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue539Test_h__Script_UnLuaTestSuite_4134771557(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue539Test_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue539Test_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
