// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue398Test.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue398Test() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_ACharacterForIssue398();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_ACharacterForIssue398_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UInterfaceForIssue398_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACharacterForIssue398 ****************************************************
void ACharacterForIssue398::StaticRegisterNativesACharacterForIssue398()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACharacterForIssue398;
UClass* ACharacterForIssue398::GetPrivateStaticClass()
{
	using TClass = ACharacterForIssue398;
	if (!Z_Registration_Info_UClass_ACharacterForIssue398.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterForIssue398"),
			Z_Registration_Info_UClass_ACharacterForIssue398.InnerSingleton,
			StaticRegisterNativesACharacterForIssue398,
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
	return Z_Registration_Info_UClass_ACharacterForIssue398.InnerSingleton;
}
UClass* Z_Construct_UClass_ACharacterForIssue398_NoRegister()
{
	return ACharacterForIssue398::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACharacterForIssue398_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tests/Issue398Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue398Test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterForIssue398>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACharacterForIssue398_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterForIssue398_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACharacterForIssue398_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterfaceForIssue398_NoRegister, (int32)VTABLE_OFFSET(ACharacterForIssue398, IInterfaceForIssue398), false },  // 2780130072
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterForIssue398_Statics::ClassParams = {
	&ACharacterForIssue398::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterForIssue398_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterForIssue398_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterForIssue398()
{
	if (!Z_Registration_Info_UClass_ACharacterForIssue398.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterForIssue398.OuterSingleton, Z_Construct_UClass_ACharacterForIssue398_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterForIssue398.OuterSingleton;
}
ACharacterForIssue398::ACharacterForIssue398(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterForIssue398);
ACharacterForIssue398::~ACharacterForIssue398() {}
// ********** End Class ACharacterForIssue398 ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterForIssue398, ACharacterForIssue398::StaticClass, TEXT("ACharacterForIssue398"), &Z_Registration_Info_UClass_ACharacterForIssue398, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterForIssue398), 2704923011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h__Script_UnLuaTestSuite_4208116767(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
