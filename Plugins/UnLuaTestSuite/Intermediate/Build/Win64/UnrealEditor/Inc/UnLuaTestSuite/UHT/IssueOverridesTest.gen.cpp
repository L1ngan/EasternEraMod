// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IssueOverridesTest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssueOverridesTest() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssueOverridesActor();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssueOverridesActor_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssueOverridesObject();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssueOverridesObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIssueOverridesActor *****************************************************
void AIssueOverridesActor::StaticRegisterNativesAIssueOverridesActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIssueOverridesActor;
UClass* AIssueOverridesActor::GetPrivateStaticClass()
{
	using TClass = AIssueOverridesActor;
	if (!Z_Registration_Info_UClass_AIssueOverridesActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IssueOverridesActor"),
			Z_Registration_Info_UClass_AIssueOverridesActor.InnerSingleton,
			StaticRegisterNativesAIssueOverridesActor,
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
	return Z_Registration_Info_UClass_AIssueOverridesActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIssueOverridesActor_NoRegister()
{
	return AIssueOverridesActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIssueOverridesActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tests/IssueOverridesTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Tests/IssueOverridesTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIssueOverridesActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AIssueOverridesActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIssueOverridesActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIssueOverridesActor_Statics::ClassParams = {
	&AIssueOverridesActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIssueOverridesActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIssueOverridesActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIssueOverridesActor()
{
	if (!Z_Registration_Info_UClass_AIssueOverridesActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIssueOverridesActor.OuterSingleton, Z_Construct_UClass_AIssueOverridesActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIssueOverridesActor.OuterSingleton;
}
AIssueOverridesActor::AIssueOverridesActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIssueOverridesActor);
AIssueOverridesActor::~AIssueOverridesActor() {}
// ********** End Class AIssueOverridesActor *******************************************************

// ********** Begin Class UIssueOverridesObject Function CollectInfo *******************************
struct IssueOverridesObject_eventCollectInfo_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	IssueOverridesObject_eventCollectInfo_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UIssueOverridesObject_CollectInfo = FName(TEXT("CollectInfo"));
int32 UIssueOverridesObject::CollectInfo() const
{
	UFunction* Func = FindFunctionChecked(NAME_UIssueOverridesObject_CollectInfo);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		IssueOverridesObject_eventCollectInfo_Parms Parms;
		const_cast<UIssueOverridesObject*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UIssueOverridesObject*>(this)->CollectInfo_Implementation();
	}
}
struct Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/IssueOverridesTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IssueOverridesObject_eventCollectInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIssueOverridesObject, nullptr, "CollectInfo", Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::PropPointers), sizeof(IssueOverridesObject_eventCollectInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IssueOverridesObject_eventCollectInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIssueOverridesObject_CollectInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIssueOverridesObject_CollectInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIssueOverridesObject::execCollectInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CollectInfo_Implementation();
	P_NATIVE_END;
}
// ********** End Class UIssueOverridesObject Function CollectInfo *********************************

// ********** Begin Class UIssueOverridesObject Function GetConfig *********************************
struct Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics
{
	struct IssueOverridesObject_eventGetConfig_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/IssueOverridesTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IssueOverridesObject_eventGetConfig_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIssueOverridesObject, nullptr, "GetConfig", Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::IssueOverridesObject_eventGetConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::IssueOverridesObject_eventGetConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIssueOverridesObject_GetConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIssueOverridesObject_GetConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIssueOverridesObject::execGetConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetConfig();
	P_NATIVE_END;
}
// ********** End Class UIssueOverridesObject Function GetConfig ***********************************

// ********** Begin Class UIssueOverridesObject ****************************************************
void UIssueOverridesObject::StaticRegisterNativesUIssueOverridesObject()
{
	UClass* Class = UIssueOverridesObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CollectInfo", &UIssueOverridesObject::execCollectInfo },
		{ "GetConfig", &UIssueOverridesObject::execGetConfig },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIssueOverridesObject;
UClass* UIssueOverridesObject::GetPrivateStaticClass()
{
	using TClass = UIssueOverridesObject;
	if (!Z_Registration_Info_UClass_UIssueOverridesObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IssueOverridesObject"),
			Z_Registration_Info_UClass_UIssueOverridesObject.InnerSingleton,
			StaticRegisterNativesUIssueOverridesObject,
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
	return Z_Registration_Info_UClass_UIssueOverridesObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UIssueOverridesObject_NoRegister()
{
	return UIssueOverridesObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIssueOverridesObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IssueOverridesTest.h" },
		{ "ModuleRelativePath", "Private/Tests/IssueOverridesTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIssueOverridesObject_CollectInfo, "CollectInfo" }, // 4188135778
		{ &Z_Construct_UFunction_UIssueOverridesObject_GetConfig, "GetConfig" }, // 2905654766
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIssueOverridesObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIssueOverridesObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIssueOverridesObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIssueOverridesObject_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(UIssueOverridesObject, IUnLuaInterface), false },  // 3862883213
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIssueOverridesObject_Statics::ClassParams = {
	&UIssueOverridesObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIssueOverridesObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UIssueOverridesObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIssueOverridesObject()
{
	if (!Z_Registration_Info_UClass_UIssueOverridesObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIssueOverridesObject.OuterSingleton, Z_Construct_UClass_UIssueOverridesObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIssueOverridesObject.OuterSingleton;
}
UIssueOverridesObject::UIssueOverridesObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIssueOverridesObject);
UIssueOverridesObject::~UIssueOverridesObject() {}
// ********** End Class UIssueOverridesObject ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIssueOverridesActor, AIssueOverridesActor::StaticClass, TEXT("AIssueOverridesActor"), &Z_Registration_Info_UClass_AIssueOverridesActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIssueOverridesActor), 206829555U) },
		{ Z_Construct_UClass_UIssueOverridesObject, UIssueOverridesObject::StaticClass, TEXT("UIssueOverridesObject"), &Z_Registration_Info_UClass_UIssueOverridesObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIssueOverridesObject), 3947643431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h__Script_UnLuaTestSuite_1548756912(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
