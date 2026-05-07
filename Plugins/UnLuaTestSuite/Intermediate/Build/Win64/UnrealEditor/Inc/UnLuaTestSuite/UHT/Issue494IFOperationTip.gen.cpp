// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue494IFOperationTip.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue494IFOperationTip() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue494IFOperationTip();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue494IFOperationTip_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIssue494IFOperationTip Function GetTipText **************************
struct Issue494IFOperationTip_eventGetTipText_Parms
{
	FString ReturnValue;
};
FString IIssue494IFOperationTip::GetTipText()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTipText instead.");
	Issue494IFOperationTip_eventGetTipText_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIssue494IFOperationTip_GetTipText = FName(TEXT("GetTipText"));
FString IIssue494IFOperationTip::Execute_GetTipText(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIssue494IFOperationTip::StaticClass()));
	Issue494IFOperationTip_eventGetTipText_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIssue494IFOperationTip_GetTipText);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue494IFOperationTip.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Issue494IFOperationTip_eventGetTipText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIssue494IFOperationTip, nullptr, "GetTipText", Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::PropPointers), sizeof(Issue494IFOperationTip_eventGetTipText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Issue494IFOperationTip_eventGetTipText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Interface UIssue494IFOperationTip Function GetTipText ****************************

// ********** Begin Interface UIssue494IFOperationTip **********************************************
void UIssue494IFOperationTip::StaticRegisterNativesUIssue494IFOperationTip()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIssue494IFOperationTip;
UClass* UIssue494IFOperationTip::GetPrivateStaticClass()
{
	using TClass = UIssue494IFOperationTip;
	if (!Z_Registration_Info_UClass_UIssue494IFOperationTip.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Issue494IFOperationTip"),
			Z_Registration_Info_UClass_UIssue494IFOperationTip.InnerSingleton,
			StaticRegisterNativesUIssue494IFOperationTip,
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
	return Z_Registration_Info_UClass_UIssue494IFOperationTip.InnerSingleton;
}
UClass* Z_Construct_UClass_UIssue494IFOperationTip_NoRegister()
{
	return UIssue494IFOperationTip::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIssue494IFOperationTip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue494IFOperationTip.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIssue494IFOperationTip_GetTipText, "GetTipText" }, // 3538451896
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIssue494IFOperationTip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIssue494IFOperationTip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIssue494IFOperationTip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIssue494IFOperationTip_Statics::ClassParams = {
	&UIssue494IFOperationTip::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIssue494IFOperationTip_Statics::Class_MetaDataParams), Z_Construct_UClass_UIssue494IFOperationTip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIssue494IFOperationTip()
{
	if (!Z_Registration_Info_UClass_UIssue494IFOperationTip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIssue494IFOperationTip.OuterSingleton, Z_Construct_UClass_UIssue494IFOperationTip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIssue494IFOperationTip.OuterSingleton;
}
UIssue494IFOperationTip::UIssue494IFOperationTip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIssue494IFOperationTip);
// ********** End Interface UIssue494IFOperationTip ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue494IFOperationTip_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIssue494IFOperationTip, UIssue494IFOperationTip::StaticClass, TEXT("UIssue494IFOperationTip"), &Z_Registration_Info_UClass_UIssue494IFOperationTip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIssue494IFOperationTip), 565217321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue494IFOperationTip_h__Script_UnLuaTestSuite_4004368528(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue494IFOperationTip_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue494IFOperationTip_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
