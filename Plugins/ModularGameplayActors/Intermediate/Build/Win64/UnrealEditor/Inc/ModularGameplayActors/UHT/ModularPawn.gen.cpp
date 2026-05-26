// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeModularPawn() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPawn();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AModularPawn *************************************************************
void AModularPawn::StaticRegisterNativesAModularPawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AModularPawn;
UClass* AModularPawn::GetPrivateStaticClass()
{
	using TClass = AModularPawn;
	if (!Z_Registration_Info_UClass_AModularPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ModularPawn"),
			Z_Registration_Info_UClass_AModularPawn.InnerSingleton,
			StaticRegisterNativesAModularPawn,
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
	return Z_Registration_Info_UClass_AModularPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_AModularPawn_NoRegister()
{
	return AModularPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AModularPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimal class that supports extension by game feature plugins */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ModularPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimal class that supports extension by game feature plugins" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModularPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularPawn_Statics::ClassParams = {
	&AModularPawn::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularPawn()
{
	if (!Z_Registration_Info_UClass_AModularPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularPawn.OuterSingleton, Z_Construct_UClass_AModularPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularPawn.OuterSingleton;
}
AModularPawn::AModularPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularPawn);
AModularPawn::~AModularPawn() {}
// ********** End Class AModularPawn ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h__Script_ModularGameplayActors_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularPawn, AModularPawn::StaticClass, TEXT("AModularPawn"), &Z_Registration_Info_UClass_AModularPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularPawn), 3009244920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h__Script_ModularGameplayActors_3457656883(TEXT("/Script/ModularGameplayActors"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h__Script_ModularGameplayActors_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h__Script_ModularGameplayActors_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
