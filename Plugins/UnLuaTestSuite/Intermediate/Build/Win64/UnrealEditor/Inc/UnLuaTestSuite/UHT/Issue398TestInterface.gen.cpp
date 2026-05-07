// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue398TestInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue398TestInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UInterfaceForIssue398();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UInterfaceForIssue398_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UInterfaceForIssue398 ************************************************
void UInterfaceForIssue398::StaticRegisterNativesUInterfaceForIssue398()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInterfaceForIssue398;
UClass* UInterfaceForIssue398::GetPrivateStaticClass()
{
	using TClass = UInterfaceForIssue398;
	if (!Z_Registration_Info_UClass_UInterfaceForIssue398.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InterfaceForIssue398"),
			Z_Registration_Info_UClass_UInterfaceForIssue398.InnerSingleton,
			StaticRegisterNativesUInterfaceForIssue398,
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
	return Z_Registration_Info_UClass_UInterfaceForIssue398.InnerSingleton;
}
UClass* Z_Construct_UClass_UInterfaceForIssue398_NoRegister()
{
	return UInterfaceForIssue398::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInterfaceForIssue398_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue398TestInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterfaceForIssue398>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterfaceForIssue398_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterfaceForIssue398_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterfaceForIssue398_Statics::ClassParams = {
	&UInterfaceForIssue398::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterfaceForIssue398_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterfaceForIssue398_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterfaceForIssue398()
{
	if (!Z_Registration_Info_UClass_UInterfaceForIssue398.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterfaceForIssue398.OuterSingleton, Z_Construct_UClass_UInterfaceForIssue398_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterfaceForIssue398.OuterSingleton;
}
UInterfaceForIssue398::UInterfaceForIssue398(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfaceForIssue398);
// ********** End Interface UInterfaceForIssue398 **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterfaceForIssue398, UInterfaceForIssue398::StaticClass, TEXT("UInterfaceForIssue398"), &Z_Registration_Info_UClass_UInterfaceForIssue398, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterfaceForIssue398), 2780130072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h__Script_UnLuaTestSuite_1324673920(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
