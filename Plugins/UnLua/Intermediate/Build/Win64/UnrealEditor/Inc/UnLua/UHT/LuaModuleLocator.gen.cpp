// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LuaModuleLocator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLuaModuleLocator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UNLUA_API UClass* Z_Construct_UClass_ULuaModuleLocator();
UNLUA_API UClass* Z_Construct_UClass_ULuaModuleLocator_ByPackage();
UNLUA_API UClass* Z_Construct_UClass_ULuaModuleLocator_ByPackage_NoRegister();
UNLUA_API UClass* Z_Construct_UClass_ULuaModuleLocator_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLua();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULuaModuleLocator ********************************************************
void ULuaModuleLocator::StaticRegisterNativesULuaModuleLocator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULuaModuleLocator;
UClass* ULuaModuleLocator::GetPrivateStaticClass()
{
	using TClass = ULuaModuleLocator;
	if (!Z_Registration_Info_UClass_ULuaModuleLocator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LuaModuleLocator"),
			Z_Registration_Info_UClass_ULuaModuleLocator.InnerSingleton,
			StaticRegisterNativesULuaModuleLocator,
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
	return Z_Registration_Info_UClass_ULuaModuleLocator.InnerSingleton;
}
UClass* Z_Construct_UClass_ULuaModuleLocator_NoRegister()
{
	return ULuaModuleLocator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULuaModuleLocator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LuaModuleLocator.h" },
		{ "ModuleRelativePath", "Public/LuaModuleLocator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaModuleLocator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULuaModuleLocator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaModuleLocator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaModuleLocator_Statics::ClassParams = {
	&ULuaModuleLocator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaModuleLocator_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaModuleLocator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULuaModuleLocator()
{
	if (!Z_Registration_Info_UClass_ULuaModuleLocator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaModuleLocator.OuterSingleton, Z_Construct_UClass_ULuaModuleLocator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULuaModuleLocator.OuterSingleton;
}
ULuaModuleLocator::ULuaModuleLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaModuleLocator);
ULuaModuleLocator::~ULuaModuleLocator() {}
// ********** End Class ULuaModuleLocator **********************************************************

// ********** Begin Class ULuaModuleLocator_ByPackage **********************************************
void ULuaModuleLocator_ByPackage::StaticRegisterNativesULuaModuleLocator_ByPackage()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULuaModuleLocator_ByPackage;
UClass* ULuaModuleLocator_ByPackage::GetPrivateStaticClass()
{
	using TClass = ULuaModuleLocator_ByPackage;
	if (!Z_Registration_Info_UClass_ULuaModuleLocator_ByPackage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LuaModuleLocator_ByPackage"),
			Z_Registration_Info_UClass_ULuaModuleLocator_ByPackage.InnerSingleton,
			StaticRegisterNativesULuaModuleLocator_ByPackage,
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
	return Z_Registration_Info_UClass_ULuaModuleLocator_ByPackage.InnerSingleton;
}
UClass* Z_Construct_UClass_ULuaModuleLocator_ByPackage_NoRegister()
{
	return ULuaModuleLocator_ByPackage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULuaModuleLocator_ByPackage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LuaModuleLocator.h" },
		{ "ModuleRelativePath", "Public/LuaModuleLocator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaModuleLocator_ByPackage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULuaModuleLocator_ByPackage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULuaModuleLocator,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaModuleLocator_ByPackage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaModuleLocator_ByPackage_Statics::ClassParams = {
	&ULuaModuleLocator_ByPackage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaModuleLocator_ByPackage_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaModuleLocator_ByPackage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULuaModuleLocator_ByPackage()
{
	if (!Z_Registration_Info_UClass_ULuaModuleLocator_ByPackage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaModuleLocator_ByPackage.OuterSingleton, Z_Construct_UClass_ULuaModuleLocator_ByPackage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULuaModuleLocator_ByPackage.OuterSingleton;
}
ULuaModuleLocator_ByPackage::ULuaModuleLocator_ByPackage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaModuleLocator_ByPackage);
ULuaModuleLocator_ByPackage::~ULuaModuleLocator_ByPackage() {}
// ********** End Class ULuaModuleLocator_ByPackage ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h__Script_UnLua_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULuaModuleLocator, ULuaModuleLocator::StaticClass, TEXT("ULuaModuleLocator"), &Z_Registration_Info_UClass_ULuaModuleLocator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaModuleLocator), 1719721469U) },
		{ Z_Construct_UClass_ULuaModuleLocator_ByPackage, ULuaModuleLocator_ByPackage::StaticClass, TEXT("ULuaModuleLocator_ByPackage"), &Z_Registration_Info_UClass_ULuaModuleLocator_ByPackage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaModuleLocator_ByPackage), 2120937090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h__Script_UnLua_2851985751(TEXT("/Script/UnLua"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h__Script_UnLua_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h__Script_UnLua_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
