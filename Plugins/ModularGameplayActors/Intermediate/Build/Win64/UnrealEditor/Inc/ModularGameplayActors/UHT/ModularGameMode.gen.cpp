// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeModularGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameMode();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameMode_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameModeBase();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AModularGameModeBase *****************************************************
void AModularGameModeBase::StaticRegisterNativesAModularGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AModularGameModeBase;
UClass* AModularGameModeBase::GetPrivateStaticClass()
{
	using TClass = AModularGameModeBase;
	if (!Z_Registration_Info_UClass_AModularGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ModularGameModeBase"),
			Z_Registration_Info_UClass_AModularGameModeBase.InnerSingleton,
			StaticRegisterNativesAModularGameModeBase,
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
	return Z_Registration_Info_UClass_AModularGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AModularGameModeBase_NoRegister()
{
	return AModularGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AModularGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pair this with a ModularGameStateBase */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pair this with a ModularGameStateBase" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModularGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameModeBase_Statics::ClassParams = {
	&AModularGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularGameModeBase()
{
	if (!Z_Registration_Info_UClass_AModularGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularGameModeBase.OuterSingleton, Z_Construct_UClass_AModularGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularGameModeBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameModeBase);
AModularGameModeBase::~AModularGameModeBase() {}
// ********** End Class AModularGameModeBase *******************************************************

// ********** Begin Class AModularGameMode *********************************************************
void AModularGameMode::StaticRegisterNativesAModularGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AModularGameMode;
UClass* AModularGameMode::GetPrivateStaticClass()
{
	using TClass = AModularGameMode;
	if (!Z_Registration_Info_UClass_AModularGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ModularGameMode"),
			Z_Registration_Info_UClass_AModularGameMode.InnerSingleton,
			StaticRegisterNativesAModularGameMode,
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
	return Z_Registration_Info_UClass_AModularGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AModularGameMode_NoRegister()
{
	return AModularGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AModularGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pair this with a ModularGameState */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pair this with a ModularGameState" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModularGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameMode_Statics::ClassParams = {
	&AModularGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularGameMode()
{
	if (!Z_Registration_Info_UClass_AModularGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularGameMode.OuterSingleton, Z_Construct_UClass_AModularGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameMode);
AModularGameMode::~AModularGameMode() {}
// ********** End Class AModularGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameMode_h__Script_ModularGameplayActors_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularGameModeBase, AModularGameModeBase::StaticClass, TEXT("AModularGameModeBase"), &Z_Registration_Info_UClass_AModularGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularGameModeBase), 1864361298U) },
		{ Z_Construct_UClass_AModularGameMode, AModularGameMode::StaticClass, TEXT("AModularGameMode"), &Z_Registration_Info_UClass_AModularGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularGameMode), 2648160938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameMode_h__Script_ModularGameplayActors_3930528147(TEXT("/Script/ModularGameplayActors"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameMode_h__Script_ModularGameplayActors_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameMode_h__Script_ModularGameplayActors_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
