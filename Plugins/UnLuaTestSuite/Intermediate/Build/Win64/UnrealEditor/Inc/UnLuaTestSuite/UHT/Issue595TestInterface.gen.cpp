// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue595TestInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue595TestInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue595Interface();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue595Interface_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIssue595Interface Function Test *************************************
struct Issue595Interface_eventTest_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	Issue595Interface_eventTest_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IIssue595Interface::Test() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Test instead.");
	Issue595Interface_eventTest_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIssue595Interface_Test = FName(TEXT("Test"));
int32 IIssue595Interface::Execute_Test(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIssue595Interface::StaticClass()));
	Issue595Interface_eventTest_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIssue595Interface_Test);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IIssue595Interface*)(O->GetNativeInterfaceAddress(UIssue595Interface::StaticClass())))
	{
		Parms.ReturnValue = I->Test_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIssue595Interface_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue595TestInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIssue595Interface_Test_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Issue595Interface_eventTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIssue595Interface_Test_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIssue595Interface_Test_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue595Interface_Test_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssue595Interface_Test_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIssue595Interface, nullptr, "Test", Z_Construct_UFunction_UIssue595Interface_Test_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue595Interface_Test_Statics::PropPointers), sizeof(Issue595Interface_eventTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue595Interface_Test_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIssue595Interface_Test_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Issue595Interface_eventTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIssue595Interface_Test()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIssue595Interface_Test_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIssue595Interface::execTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Test_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIssue595Interface Function Test ***************************************

// ********** Begin Interface UIssue595Interface ***************************************************
void UIssue595Interface::StaticRegisterNativesUIssue595Interface()
{
	UClass* Class = UIssue595Interface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Test", &IIssue595Interface::execTest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIssue595Interface;
UClass* UIssue595Interface::GetPrivateStaticClass()
{
	using TClass = UIssue595Interface;
	if (!Z_Registration_Info_UClass_UIssue595Interface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Issue595Interface"),
			Z_Registration_Info_UClass_UIssue595Interface.InnerSingleton,
			StaticRegisterNativesUIssue595Interface,
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
	return Z_Registration_Info_UClass_UIssue595Interface.InnerSingleton;
}
UClass* Z_Construct_UClass_UIssue595Interface_NoRegister()
{
	return UIssue595Interface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIssue595Interface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue595TestInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIssue595Interface_Test, "Test" }, // 3538692862
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIssue595Interface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIssue595Interface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIssue595Interface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIssue595Interface_Statics::ClassParams = {
	&UIssue595Interface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIssue595Interface_Statics::Class_MetaDataParams), Z_Construct_UClass_UIssue595Interface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIssue595Interface()
{
	if (!Z_Registration_Info_UClass_UIssue595Interface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIssue595Interface.OuterSingleton, Z_Construct_UClass_UIssue595Interface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIssue595Interface.OuterSingleton;
}
UIssue595Interface::UIssue595Interface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIssue595Interface);
// ********** End Interface UIssue595Interface *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIssue595Interface, UIssue595Interface::StaticClass, TEXT("UIssue595Interface"), &Z_Registration_Info_UClass_UIssue595Interface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIssue595Interface), 2742636844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h__Script_UnLuaTestSuite_3303277795(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
