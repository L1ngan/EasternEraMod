// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LuaEnvLocator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLuaEnvLocator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UNLUA_API UClass* Z_Construct_UClass_ULuaEnvLocator();
UNLUA_API UClass* Z_Construct_UClass_ULuaEnvLocator_ByGameInstance();
UNLUA_API UClass* Z_Construct_UClass_ULuaEnvLocator_ByGameInstance_NoRegister();
UNLUA_API UClass* Z_Construct_UClass_ULuaEnvLocator_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLua();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULuaEnvLocator ***********************************************************
void ULuaEnvLocator::StaticRegisterNativesULuaEnvLocator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULuaEnvLocator;
UClass* ULuaEnvLocator::GetPrivateStaticClass()
{
	using TClass = ULuaEnvLocator;
	if (!Z_Registration_Info_UClass_ULuaEnvLocator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LuaEnvLocator"),
			Z_Registration_Info_UClass_ULuaEnvLocator.InnerSingleton,
			StaticRegisterNativesULuaEnvLocator,
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
	return Z_Registration_Info_UClass_ULuaEnvLocator.InnerSingleton;
}
UClass* Z_Construct_UClass_ULuaEnvLocator_NoRegister()
{
	return ULuaEnvLocator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULuaEnvLocator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LuaEnvLocator.h" },
		{ "ModuleRelativePath", "Public/LuaEnvLocator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaEnvLocator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULuaEnvLocator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaEnvLocator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaEnvLocator_Statics::ClassParams = {
	&ULuaEnvLocator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaEnvLocator_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaEnvLocator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULuaEnvLocator()
{
	if (!Z_Registration_Info_UClass_ULuaEnvLocator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaEnvLocator.OuterSingleton, Z_Construct_UClass_ULuaEnvLocator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULuaEnvLocator.OuterSingleton;
}
ULuaEnvLocator::ULuaEnvLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaEnvLocator);
ULuaEnvLocator::~ULuaEnvLocator() {}
// ********** End Class ULuaEnvLocator *************************************************************

// ********** Begin Class ULuaEnvLocator_ByGameInstance ********************************************
void ULuaEnvLocator_ByGameInstance::StaticRegisterNativesULuaEnvLocator_ByGameInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULuaEnvLocator_ByGameInstance;
UClass* ULuaEnvLocator_ByGameInstance::GetPrivateStaticClass()
{
	using TClass = ULuaEnvLocator_ByGameInstance;
	if (!Z_Registration_Info_UClass_ULuaEnvLocator_ByGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LuaEnvLocator_ByGameInstance"),
			Z_Registration_Info_UClass_ULuaEnvLocator_ByGameInstance.InnerSingleton,
			StaticRegisterNativesULuaEnvLocator_ByGameInstance,
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
	return Z_Registration_Info_UClass_ULuaEnvLocator_ByGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_ULuaEnvLocator_ByGameInstance_NoRegister()
{
	return ULuaEnvLocator_ByGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULuaEnvLocator_ByGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LuaEnvLocator.h" },
		{ "ModuleRelativePath", "Public/LuaEnvLocator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaEnvLocator_ByGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULuaEnvLocator_ByGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULuaEnvLocator,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaEnvLocator_ByGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaEnvLocator_ByGameInstance_Statics::ClassParams = {
	&ULuaEnvLocator_ByGameInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaEnvLocator_ByGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaEnvLocator_ByGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULuaEnvLocator_ByGameInstance()
{
	if (!Z_Registration_Info_UClass_ULuaEnvLocator_ByGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaEnvLocator_ByGameInstance.OuterSingleton, Z_Construct_UClass_ULuaEnvLocator_ByGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULuaEnvLocator_ByGameInstance.OuterSingleton;
}
ULuaEnvLocator_ByGameInstance::ULuaEnvLocator_ByGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaEnvLocator_ByGameInstance);
ULuaEnvLocator_ByGameInstance::~ULuaEnvLocator_ByGameInstance() {}
// ********** End Class ULuaEnvLocator_ByGameInstance **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h__Script_UnLua_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULuaEnvLocator, ULuaEnvLocator::StaticClass, TEXT("ULuaEnvLocator"), &Z_Registration_Info_UClass_ULuaEnvLocator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaEnvLocator), 1407684135U) },
		{ Z_Construct_UClass_ULuaEnvLocator_ByGameInstance, ULuaEnvLocator_ByGameInstance::StaticClass, TEXT("ULuaEnvLocator_ByGameInstance"), &Z_Registration_Info_UClass_ULuaEnvLocator_ByGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaEnvLocator_ByGameInstance), 2594391234U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h__Script_UnLua_2887977341(TEXT("/Script/UnLua"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h__Script_UnLua_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h__Script_UnLua_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
