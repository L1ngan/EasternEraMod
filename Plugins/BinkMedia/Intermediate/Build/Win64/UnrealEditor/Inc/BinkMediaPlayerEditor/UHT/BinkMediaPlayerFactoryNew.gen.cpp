// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/BinkMediaPlayerFactoryNew.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBinkMediaPlayerFactoryNew() {}

// ********** Begin Cross Module References ********************************************************
BINKMEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UBinkMediaPlayerFactoryNew();
BINKMEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UBinkMediaPlayerFactoryNew_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_BinkMediaPlayerEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBinkMediaPlayerFactoryNew ***********************************************
void UBinkMediaPlayerFactoryNew::StaticRegisterNativesUBinkMediaPlayerFactoryNew()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBinkMediaPlayerFactoryNew;
UClass* UBinkMediaPlayerFactoryNew::GetPrivateStaticClass()
{
	using TClass = UBinkMediaPlayerFactoryNew;
	if (!Z_Registration_Info_UClass_UBinkMediaPlayerFactoryNew.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BinkMediaPlayerFactoryNew"),
			Z_Registration_Info_UClass_UBinkMediaPlayerFactoryNew.InnerSingleton,
			StaticRegisterNativesUBinkMediaPlayerFactoryNew,
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
	return Z_Registration_Info_UClass_UBinkMediaPlayerFactoryNew.InnerSingleton;
}
UClass* Z_Construct_UClass_UBinkMediaPlayerFactoryNew_NoRegister()
{
	return UBinkMediaPlayerFactoryNew::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBinkMediaPlayerFactoryNew_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/BinkMediaPlayerFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/BinkMediaPlayerFactoryNew.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinkMediaPlayerFactoryNew>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBinkMediaPlayerFactoryNew_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_BinkMediaPlayerEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayerFactoryNew_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinkMediaPlayerFactoryNew_Statics::ClassParams = {
	&UBinkMediaPlayerFactoryNew::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayerFactoryNew_Statics::Class_MetaDataParams), Z_Construct_UClass_UBinkMediaPlayerFactoryNew_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBinkMediaPlayerFactoryNew()
{
	if (!Z_Registration_Info_UClass_UBinkMediaPlayerFactoryNew.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinkMediaPlayerFactoryNew.OuterSingleton, Z_Construct_UClass_UBinkMediaPlayerFactoryNew_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBinkMediaPlayerFactoryNew.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBinkMediaPlayerFactoryNew);
UBinkMediaPlayerFactoryNew::~UBinkMediaPlayerFactoryNew() {}
// ********** End Class UBinkMediaPlayerFactoryNew *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactoryNew_h__Script_BinkMediaPlayerEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBinkMediaPlayerFactoryNew, UBinkMediaPlayerFactoryNew::StaticClass, TEXT("UBinkMediaPlayerFactoryNew"), &Z_Registration_Info_UClass_UBinkMediaPlayerFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinkMediaPlayerFactoryNew), 4254958609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactoryNew_h__Script_BinkMediaPlayerEditor_2165372761(TEXT("/Script/BinkMediaPlayerEditor"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactoryNew_h__Script_BinkMediaPlayerEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactoryNew_h__Script_BinkMediaPlayerEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
