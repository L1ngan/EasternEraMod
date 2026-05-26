// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModToolVersion.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeModToolVersion() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CREATEMODPLUGIN_API UClass* Z_Construct_UClass_UModToolVersion();
CREATEMODPLUGIN_API UClass* Z_Construct_UClass_UModToolVersion_NoRegister();
UPackage* Z_Construct_UPackage__Script_CreateModPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UModToolVersion **********************************************************
void UModToolVersion::StaticRegisterNativesUModToolVersion()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModToolVersion;
UClass* UModToolVersion::GetPrivateStaticClass()
{
	using TClass = UModToolVersion;
	if (!Z_Registration_Info_UClass_UModToolVersion.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ModToolVersion"),
			Z_Registration_Info_UClass_UModToolVersion.InnerSingleton,
			StaticRegisterNativesUModToolVersion,
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
	return Z_Registration_Info_UClass_UModToolVersion.InnerSingleton;
}
UClass* Z_Construct_UClass_UModToolVersion_NoRegister()
{
	return UModToolVersion::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UModToolVersion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mod\xe5\xb7\xa5\xe5\x85\xb7\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7\xe5\xae\x9a\xe4\xb9\x89\n * \xe5\xbd\x93Mod\xe5\xb7\xa5\xe5\x85\xb7\xe5\x8a\x9f\xe8\x83\xbd\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe6\xad\xa4\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7\n * \xe6\xa0\xbc\xe5\xbc\x8f\xef\xbc\x9a\xe4\xb8\xbb\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7.\xe6\xac\xa1\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7.\xe4\xbf\xae\xe8\xae\xa2\xe5\x8f\xb7\xef\xbc\x88\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x9a""1.0.0\xef\xbc\x89\n */" },
#endif
		{ "IncludePath", "ModToolVersion.h" },
		{ "ModuleRelativePath", "Public/ModToolVersion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod\xe5\xb7\xa5\xe5\x85\xb7\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7\xe5\xae\x9a\xe4\xb9\x89\n\xe5\xbd\x93Mod\xe5\xb7\xa5\xe5\x85\xb7\xe5\x8a\x9f\xe8\x83\xbd\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe6\xad\xa4\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7\n\xe6\xa0\xbc\xe5\xbc\x8f\xef\xbc\x9a\xe4\xb8\xbb\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7.\xe6\xac\xa1\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7.\xe4\xbf\xae\xe8\xae\xa2\xe5\x8f\xb7\xef\xbc\x88\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x9a""1.0.0\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModToolVersion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModToolVersion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModToolVersion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModToolVersion_Statics::ClassParams = {
	&UModToolVersion::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModToolVersion_Statics::Class_MetaDataParams), Z_Construct_UClass_UModToolVersion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModToolVersion()
{
	if (!Z_Registration_Info_UClass_UModToolVersion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModToolVersion.OuterSingleton, Z_Construct_UClass_UModToolVersion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModToolVersion.OuterSingleton;
}
UModToolVersion::UModToolVersion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModToolVersion);
UModToolVersion::~UModToolVersion() {}
// ********** End Class UModToolVersion ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModToolVersion_h__Script_CreateModPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModToolVersion, UModToolVersion::StaticClass, TEXT("UModToolVersion"), &Z_Registration_Info_UClass_UModToolVersion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModToolVersion), 3238146817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModToolVersion_h__Script_CreateModPlugin_2826709228(TEXT("/Script/CreateModPlugin"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModToolVersion_h__Script_CreateModPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModToolVersion_h__Script_CreateModPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
