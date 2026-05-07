// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/BinkMediaPlayerFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBinkMediaPlayerFactory() {}

// ********** Begin Cross Module References ********************************************************
BINKMEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UBinkMediaPlayerFactory();
BINKMEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UBinkMediaPlayerFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_BinkMediaPlayerEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBinkMediaPlayerFactory **************************************************
void UBinkMediaPlayerFactory::StaticRegisterNativesUBinkMediaPlayerFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBinkMediaPlayerFactory;
UClass* UBinkMediaPlayerFactory::GetPrivateStaticClass()
{
	using TClass = UBinkMediaPlayerFactory;
	if (!Z_Registration_Info_UClass_UBinkMediaPlayerFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BinkMediaPlayerFactory"),
			Z_Registration_Info_UClass_UBinkMediaPlayerFactory.InnerSingleton,
			StaticRegisterNativesUBinkMediaPlayerFactory,
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
	return Z_Registration_Info_UClass_UBinkMediaPlayerFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UBinkMediaPlayerFactory_NoRegister()
{
	return UBinkMediaPlayerFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBinkMediaPlayerFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/BinkMediaPlayerFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/BinkMediaPlayerFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinkMediaPlayerFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBinkMediaPlayerFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_BinkMediaPlayerEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayerFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinkMediaPlayerFactory_Statics::ClassParams = {
	&UBinkMediaPlayerFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayerFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UBinkMediaPlayerFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBinkMediaPlayerFactory()
{
	if (!Z_Registration_Info_UClass_UBinkMediaPlayerFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinkMediaPlayerFactory.OuterSingleton, Z_Construct_UClass_UBinkMediaPlayerFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBinkMediaPlayerFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBinkMediaPlayerFactory);
UBinkMediaPlayerFactory::~UBinkMediaPlayerFactory() {}
// ********** End Class UBinkMediaPlayerFactory ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactory_h__Script_BinkMediaPlayerEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBinkMediaPlayerFactory, UBinkMediaPlayerFactory::StaticClass, TEXT("UBinkMediaPlayerFactory"), &Z_Registration_Info_UClass_UBinkMediaPlayerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinkMediaPlayerFactory), 275444033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactory_h__Script_BinkMediaPlayerEditor_2895236851(TEXT("/Script/BinkMediaPlayerEditor"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactory_h__Script_BinkMediaPlayerEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactory_h__Script_BinkMediaPlayerEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
