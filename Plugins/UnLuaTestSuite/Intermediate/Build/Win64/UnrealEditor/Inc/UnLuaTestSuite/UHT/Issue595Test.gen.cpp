// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue595Test.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue595Test() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue595Interface_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue595Object();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue595Object_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIssue595Object **********************************************************
void UIssue595Object::StaticRegisterNativesUIssue595Object()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIssue595Object;
UClass* UIssue595Object::GetPrivateStaticClass()
{
	using TClass = UIssue595Object;
	if (!Z_Registration_Info_UClass_UIssue595Object.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Issue595Object"),
			Z_Registration_Info_UClass_UIssue595Object.InnerSingleton,
			StaticRegisterNativesUIssue595Object,
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
	return Z_Registration_Info_UClass_UIssue595Object.InnerSingleton;
}
UClass* Z_Construct_UClass_UIssue595Object_NoRegister()
{
	return UIssue595Object::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIssue595Object_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue595Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue595Test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIssue595Object>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIssue595Object_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIssue595Object_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIssue595Object_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIssue595Interface_NoRegister, (int32)VTABLE_OFFSET(UIssue595Object, IIssue595Interface), false },  // 2742636844
	{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(UIssue595Object, IUnLuaInterface), false },  // 3862883213
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIssue595Object_Statics::ClassParams = {
	&UIssue595Object::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIssue595Object_Statics::Class_MetaDataParams), Z_Construct_UClass_UIssue595Object_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIssue595Object()
{
	if (!Z_Registration_Info_UClass_UIssue595Object.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIssue595Object.OuterSingleton, Z_Construct_UClass_UIssue595Object_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIssue595Object.OuterSingleton;
}
UIssue595Object::UIssue595Object(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIssue595Object);
UIssue595Object::~UIssue595Object() {}
// ********** End Class UIssue595Object ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595Test_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIssue595Object, UIssue595Object::StaticClass, TEXT("UIssue595Object"), &Z_Registration_Info_UClass_UIssue595Object, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIssue595Object), 4053047184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595Test_h__Script_UnLuaTestSuite_2332800814(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595Test_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595Test_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
