// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/OutParamTest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOutParamTest() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UOutParamTestStub();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UOutParamTestStub_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOutParamTestStub Function ReturnFull ************************************
struct OutParamTestStub_eventReturnFull_Parms
{
	FVector Dest;
	UObject* Obj;
	float Radius;
	bool bStop;
};
static FName NAME_UOutParamTestStub_ReturnFull = FName(TEXT("ReturnFull"));
void UOutParamTestStub::ReturnFull(FVector& Dest, UObject*& Obj, float& Radius, bool& bStop)
{
	OutParamTestStub_eventReturnFull_Parms Parms;
	Parms.Dest=Dest;
	Parms.Obj=Obj;
	Parms.Radius=Radius;
	Parms.bStop=bStop ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UOutParamTestStub_ReturnFull);
	ProcessEvent(Func,&Parms);
	Dest=Parms.Dest;
	Obj=Parms.Obj;
	Radius=Parms.Radius;
	bStop=Parms.bStop;
}
struct Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/OutParamTest.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutParamTestStub_eventReturnFull_Parms, Dest), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutParamTestStub_eventReturnFull_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutParamTestStub_eventReturnFull_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_bStop_SetBit(void* Obj)
{
	((OutParamTestStub_eventReturnFull_Parms*)Obj)->bStop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_bStop = { "bStop", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OutParamTestStub_eventReturnFull_Parms), &Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_bStop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_Dest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::NewProp_bStop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOutParamTestStub, nullptr, "ReturnFull", Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::PropPointers), sizeof(OutParamTestStub_eventReturnFull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(OutParamTestStub_eventReturnFull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutParamTestStub_ReturnFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutParamTestStub_ReturnFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UOutParamTestStub Function ReturnFull **************************************

// ********** Begin Class UOutParamTestStub Function ReturnPartial *********************************
struct OutParamTestStub_eventReturnPartial_Parms
{
	FVector Dest;
	UObject* Obj;
	float Radius;
	bool bStop;
};
static FName NAME_UOutParamTestStub_ReturnPartial = FName(TEXT("ReturnPartial"));
void UOutParamTestStub::ReturnPartial(FVector& Dest, UObject*& Obj, float& Radius, bool& bStop)
{
	OutParamTestStub_eventReturnPartial_Parms Parms;
	Parms.Dest=Dest;
	Parms.Obj=Obj;
	Parms.Radius=Radius;
	Parms.bStop=bStop ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UOutParamTestStub_ReturnPartial);
	ProcessEvent(Func,&Parms);
	Dest=Parms.Dest;
	Obj=Parms.Obj;
	Radius=Parms.Radius;
	bStop=Parms.bStop;
}
struct Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/OutParamTest.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutParamTestStub_eventReturnPartial_Parms, Dest), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutParamTestStub_eventReturnPartial_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutParamTestStub_eventReturnPartial_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_bStop_SetBit(void* Obj)
{
	((OutParamTestStub_eventReturnPartial_Parms*)Obj)->bStop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_bStop = { "bStop", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OutParamTestStub_eventReturnPartial_Parms), &Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_bStop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_Dest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::NewProp_bStop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOutParamTestStub, nullptr, "ReturnPartial", Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::PropPointers), sizeof(OutParamTestStub_eventReturnPartial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(OutParamTestStub_eventReturnPartial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutParamTestStub_ReturnPartial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutParamTestStub_ReturnPartial_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UOutParamTestStub Function ReturnPartial ***********************************

// ********** Begin Class UOutParamTestStub ********************************************************
void UOutParamTestStub::StaticRegisterNativesUOutParamTestStub()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOutParamTestStub;
UClass* UOutParamTestStub::GetPrivateStaticClass()
{
	using TClass = UOutParamTestStub;
	if (!Z_Registration_Info_UClass_UOutParamTestStub.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OutParamTestStub"),
			Z_Registration_Info_UClass_UOutParamTestStub.InnerSingleton,
			StaticRegisterNativesUOutParamTestStub,
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
	return Z_Registration_Info_UClass_UOutParamTestStub.InnerSingleton;
}
UClass* Z_Construct_UClass_UOutParamTestStub_NoRegister()
{
	return UOutParamTestStub::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOutParamTestStub_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tests/OutParamTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Tests/OutParamTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOutParamTestStub_ReturnFull, "ReturnFull" }, // 3187748449
		{ &Z_Construct_UFunction_UOutParamTestStub_ReturnPartial, "ReturnPartial" }, // 1237616565
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutParamTestStub>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOutParamTestStub_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOutParamTestStub_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOutParamTestStub_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(UOutParamTestStub, IUnLuaInterface), false },  // 3862883213
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOutParamTestStub_Statics::ClassParams = {
	&UOutParamTestStub::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOutParamTestStub_Statics::Class_MetaDataParams), Z_Construct_UClass_UOutParamTestStub_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOutParamTestStub()
{
	if (!Z_Registration_Info_UClass_UOutParamTestStub.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOutParamTestStub.OuterSingleton, Z_Construct_UClass_UOutParamTestStub_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOutParamTestStub.OuterSingleton;
}
UOutParamTestStub::UOutParamTestStub(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOutParamTestStub);
UOutParamTestStub::~UOutParamTestStub() {}
// ********** End Class UOutParamTestStub **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOutParamTestStub, UOutParamTestStub::StaticClass, TEXT("UOutParamTestStub"), &Z_Registration_Info_UClass_UOutParamTestStub, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOutParamTestStub), 1590773245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h__Script_UnLuaTestSuite_5052433(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
