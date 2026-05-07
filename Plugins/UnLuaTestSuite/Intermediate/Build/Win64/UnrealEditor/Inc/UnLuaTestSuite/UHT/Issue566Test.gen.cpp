// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue566Test.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue566Test() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue566FunctionLibrary();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue566FunctionLibrary_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue566Object();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue566Object_NoRegister();
UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FIssue566Delegate *****************************************************
struct Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue566Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnLuaTestSuite, nullptr, "Issue566Delegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIssue566Delegate_DelegateWrapper(const FScriptDelegate& Issue566Delegate)
{
	Issue566Delegate.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FIssue566Delegate *******************************************************

// ********** Begin Class UIssue566FunctionLibrary Function AddCallback ****************************
struct Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics
{
	struct Issue566FunctionLibrary_eventAddCallback_Parms
	{
		FScriptDelegate InDelegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue566Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Issue566FunctionLibrary_eventAddCallback_Parms, InDelegate), Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2589051899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::NewProp_InDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIssue566FunctionLibrary, nullptr, "AddCallback", Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::Issue566FunctionLibrary_eventAddCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::Issue566FunctionLibrary_eventAddCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIssue566FunctionLibrary::execAddCallback)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIssue566FunctionLibrary::AddCallback(FIssue566Delegate(Z_Param_InDelegate));
	P_NATIVE_END;
}
// ********** End Class UIssue566FunctionLibrary Function AddCallback ******************************

// ********** Begin Class UIssue566FunctionLibrary Function Invoke *********************************
struct Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue566Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIssue566FunctionLibrary, nullptr, "Invoke", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIssue566FunctionLibrary::execInvoke)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UIssue566FunctionLibrary::Invoke();
	P_NATIVE_END;
}
// ********** End Class UIssue566FunctionLibrary Function Invoke ***********************************

// ********** Begin Class UIssue566FunctionLibrary Function Reset **********************************
struct Z_Construct_UFunction_UIssue566FunctionLibrary_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue566Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssue566FunctionLibrary_Reset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIssue566FunctionLibrary, nullptr, "Reset", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue566FunctionLibrary_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIssue566FunctionLibrary_Reset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIssue566FunctionLibrary_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIssue566FunctionLibrary_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIssue566FunctionLibrary::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UIssue566FunctionLibrary::Reset();
	P_NATIVE_END;
}
// ********** End Class UIssue566FunctionLibrary Function Reset ************************************

// ********** Begin Class UIssue566FunctionLibrary *************************************************
void UIssue566FunctionLibrary::StaticRegisterNativesUIssue566FunctionLibrary()
{
	UClass* Class = UIssue566FunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCallback", &UIssue566FunctionLibrary::execAddCallback },
		{ "Invoke", &UIssue566FunctionLibrary::execInvoke },
		{ "Reset", &UIssue566FunctionLibrary::execReset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIssue566FunctionLibrary;
UClass* UIssue566FunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UIssue566FunctionLibrary;
	if (!Z_Registration_Info_UClass_UIssue566FunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Issue566FunctionLibrary"),
			Z_Registration_Info_UClass_UIssue566FunctionLibrary.InnerSingleton,
			StaticRegisterNativesUIssue566FunctionLibrary,
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
	return Z_Registration_Info_UClass_UIssue566FunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UIssue566FunctionLibrary_NoRegister()
{
	return UIssue566FunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIssue566FunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue566Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue566Test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIssue566FunctionLibrary_AddCallback, "AddCallback" }, // 2407136177
		{ &Z_Construct_UFunction_UIssue566FunctionLibrary_Invoke, "Invoke" }, // 2933294464
		{ &Z_Construct_UFunction_UIssue566FunctionLibrary_Reset, "Reset" }, // 3173181568
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIssue566FunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIssue566FunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIssue566FunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIssue566FunctionLibrary_Statics::ClassParams = {
	&UIssue566FunctionLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIssue566FunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UIssue566FunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIssue566FunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UIssue566FunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIssue566FunctionLibrary.OuterSingleton, Z_Construct_UClass_UIssue566FunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIssue566FunctionLibrary.OuterSingleton;
}
UIssue566FunctionLibrary::UIssue566FunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIssue566FunctionLibrary);
UIssue566FunctionLibrary::~UIssue566FunctionLibrary() {}
// ********** End Class UIssue566FunctionLibrary ***************************************************

// ********** Begin Class UIssue566Object **********************************************************
void UIssue566Object::StaticRegisterNativesUIssue566Object()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIssue566Object;
UClass* UIssue566Object::GetPrivateStaticClass()
{
	using TClass = UIssue566Object;
	if (!Z_Registration_Info_UClass_UIssue566Object.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Issue566Object"),
			Z_Registration_Info_UClass_UIssue566Object.InnerSingleton,
			StaticRegisterNativesUIssue566Object,
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
	return Z_Registration_Info_UClass_UIssue566Object.InnerSingleton;
}
UClass* Z_Construct_UClass_UIssue566Object_NoRegister()
{
	return UIssue566Object::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIssue566Object_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue566Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue566Test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIssue566Object>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIssue566Object_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIssue566Object_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIssue566Object_Statics::ClassParams = {
	&UIssue566Object::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIssue566Object_Statics::Class_MetaDataParams), Z_Construct_UClass_UIssue566Object_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIssue566Object()
{
	if (!Z_Registration_Info_UClass_UIssue566Object.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIssue566Object.OuterSingleton, Z_Construct_UClass_UIssue566Object_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIssue566Object.OuterSingleton;
}
UIssue566Object::UIssue566Object(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIssue566Object);
UIssue566Object::~UIssue566Object() {}
// ********** End Class UIssue566Object ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue566Test_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIssue566FunctionLibrary, UIssue566FunctionLibrary::StaticClass, TEXT("UIssue566FunctionLibrary"), &Z_Registration_Info_UClass_UIssue566FunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIssue566FunctionLibrary), 3421155495U) },
		{ Z_Construct_UClass_UIssue566Object, UIssue566Object::StaticClass, TEXT("UIssue566Object"), &Z_Registration_Info_UClass_UIssue566Object, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIssue566Object), 2669214317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue566Test_h__Script_UnLuaTestSuite_3698873050(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue566Test_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue566Test_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
