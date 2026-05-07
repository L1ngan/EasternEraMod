// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/BinkMediaTextureFactoryNew.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBinkMediaTextureFactoryNew() {}

// ********** Begin Cross Module References ********************************************************
BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister();
BINKMEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UBinkMediaTextureFactoryNew();
BINKMEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UBinkMediaTextureFactoryNew_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_BinkMediaPlayerEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBinkMediaTextureFactoryNew **********************************************
void UBinkMediaTextureFactoryNew::StaticRegisterNativesUBinkMediaTextureFactoryNew()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBinkMediaTextureFactoryNew;
UClass* UBinkMediaTextureFactoryNew::GetPrivateStaticClass()
{
	using TClass = UBinkMediaTextureFactoryNew;
	if (!Z_Registration_Info_UClass_UBinkMediaTextureFactoryNew.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BinkMediaTextureFactoryNew"),
			Z_Registration_Info_UClass_UBinkMediaTextureFactoryNew.InnerSingleton,
			StaticRegisterNativesUBinkMediaTextureFactoryNew,
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
	return Z_Registration_Info_UClass_UBinkMediaTextureFactoryNew.InnerSingleton;
}
UClass* Z_Construct_UClass_UBinkMediaTextureFactoryNew_NoRegister()
{
	return UBinkMediaTextureFactoryNew::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/BinkMediaTextureFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/BinkMediaTextureFactoryNew.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialMediaPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/BinkMediaTextureFactoryNew.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialMediaPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinkMediaTextureFactoryNew>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::NewProp_InitialMediaPlayer = { "InitialMediaPlayer", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaTextureFactoryNew, InitialMediaPlayer), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialMediaPlayer_MetaData), NewProp_InitialMediaPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::NewProp_InitialMediaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_BinkMediaPlayerEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::ClassParams = {
	&UBinkMediaTextureFactoryNew::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::Class_MetaDataParams), Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBinkMediaTextureFactoryNew()
{
	if (!Z_Registration_Info_UClass_UBinkMediaTextureFactoryNew.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinkMediaTextureFactoryNew.OuterSingleton, Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBinkMediaTextureFactoryNew.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBinkMediaTextureFactoryNew);
UBinkMediaTextureFactoryNew::~UBinkMediaTextureFactoryNew() {}
// ********** End Class UBinkMediaTextureFactoryNew ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaTextureFactoryNew_h__Script_BinkMediaPlayerEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBinkMediaTextureFactoryNew, UBinkMediaTextureFactoryNew::StaticClass, TEXT("UBinkMediaTextureFactoryNew"), &Z_Registration_Info_UClass_UBinkMediaTextureFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinkMediaTextureFactoryNew), 783494376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaTextureFactoryNew_h__Script_BinkMediaPlayerEditor_572182699(TEXT("/Script/BinkMediaPlayerEditor"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaTextureFactoryNew_h__Script_BinkMediaPlayerEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaTextureFactoryNew_h__Script_BinkMediaPlayerEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
