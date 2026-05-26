// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeModularPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerController();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AModularPlayerController *************************************************
void AModularPlayerController::StaticRegisterNativesAModularPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AModularPlayerController;
UClass* AModularPlayerController::GetPrivateStaticClass()
{
	using TClass = AModularPlayerController;
	if (!Z_Registration_Info_UClass_AModularPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ModularPlayerController"),
			Z_Registration_Info_UClass_AModularPlayerController.InnerSingleton,
			StaticRegisterNativesAModularPlayerController,
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
	return Z_Registration_Info_UClass_AModularPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AModularPlayerController_NoRegister()
{
	return AModularPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AModularPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimal class that supports extension by game feature plugins */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ModularPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimal class that supports extension by game feature plugins" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModularPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularPlayerController_Statics::ClassParams = {
	&AModularPlayerController::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularPlayerController()
{
	if (!Z_Registration_Info_UClass_AModularPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularPlayerController.OuterSingleton, Z_Construct_UClass_AModularPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularPlayerController.OuterSingleton;
}
AModularPlayerController::AModularPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularPlayerController);
AModularPlayerController::~AModularPlayerController() {}
// ********** End Class AModularPlayerController ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPlayerController_h__Script_ModularGameplayActors_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularPlayerController, AModularPlayerController::StaticClass, TEXT("AModularPlayerController"), &Z_Registration_Info_UClass_AModularPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularPlayerController), 293873915U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPlayerController_h__Script_ModularGameplayActors_1778219397(TEXT("/Script/ModularGameplayActors"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPlayerController_h__Script_ModularGameplayActors_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPlayerController_h__Script_ModularGameplayActors_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
