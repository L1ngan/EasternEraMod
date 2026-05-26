// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RHS_ProjectileBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRHS_ProjectileBase() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_ARHS_AdaptableCollisionActor();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_ARHS_ProjectileBase();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_ARHS_ProjectileBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_RHS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARHS_ProjectileBase ******************************************************
void ARHS_ProjectileBase::StaticRegisterNativesARHS_ProjectileBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARHS_ProjectileBase;
UClass* ARHS_ProjectileBase::GetPrivateStaticClass()
{
	using TClass = ARHS_ProjectileBase;
	if (!Z_Registration_Info_UClass_ARHS_ProjectileBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RHS_ProjectileBase"),
			Z_Registration_Info_UClass_ARHS_ProjectileBase.InnerSingleton,
			StaticRegisterNativesARHS_ProjectileBase,
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
	return Z_Registration_Info_UClass_ARHS_ProjectileBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ARHS_ProjectileBase_NoRegister()
{
	return ARHS_ProjectileBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARHS_ProjectileBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RHS_ProjectileBase.h" },
		{ "ModuleRelativePath", "Public/RHS_ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile movement component.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RHS_ProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile movement component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationVFX_MetaData[] = {
		{ "Category", "Projectile VFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VFX played when the projectile is spawned. Can be either Niagara or Cascade.\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_ProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VFX played when the projectile is spawned. Can be either Niagara or Cascade." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationSFX_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SFX played when the projectile is spawned.\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_ProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SFX played when the projectile is spawned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailVFX_MetaData[] = {
		{ "Category", "Projectile VFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VFX attached to actor during its lifespan. Can be either Niagara or Cascade.\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_ProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VFX attached to actor during its lifespan. Can be either Niagara or Cascade." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailSFX_MetaData[] = {
		{ "Category", "Projectile SFX" },
		{ "ModuleRelativePath", "Public/RHS_ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVFX_MetaData[] = {
		{ "Category", "Projectile VFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VFX played when actor hits world. Can be either Niagara or Cascade.\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_ProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VFX played when actor hits world. Can be either Niagara or Cascade." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSFX_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SFX played when actor hits world\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_ProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SFX played when actor hits world" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivationVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivationSFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailSFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSFX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARHS_ProjectileBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_ProjectileBase, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovementComponent_MetaData), NewProp_ProjectileMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_ActivationVFX = { "ActivationVFX", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_ProjectileBase, ActivationVFX), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationVFX_MetaData), NewProp_ActivationVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_ActivationSFX = { "ActivationSFX", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_ProjectileBase, ActivationSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationSFX_MetaData), NewProp_ActivationSFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_TrailVFX = { "TrailVFX", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_ProjectileBase, TrailVFX), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailVFX_MetaData), NewProp_TrailVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_TrailSFX = { "TrailSFX", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_ProjectileBase, TrailSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailSFX_MetaData), NewProp_TrailSFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_ImpactVFX = { "ImpactVFX", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_ProjectileBase, ImpactVFX), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactVFX_MetaData), NewProp_ImpactVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_ImpactSFX = { "ImpactSFX", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_ProjectileBase, ImpactSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactSFX_MetaData), NewProp_ImpactSFX_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARHS_ProjectileBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_ProjectileMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_ActivationVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_ActivationSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_TrailVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_TrailSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_ImpactVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_ProjectileBase_Statics::NewProp_ImpactSFX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARHS_ProjectileBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARHS_ProjectileBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARHS_AdaptableCollisionActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARHS_ProjectileBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARHS_ProjectileBase_Statics::ClassParams = {
	&ARHS_ProjectileBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARHS_ProjectileBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARHS_ProjectileBase_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARHS_ProjectileBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARHS_ProjectileBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARHS_ProjectileBase()
{
	if (!Z_Registration_Info_UClass_ARHS_ProjectileBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARHS_ProjectileBase.OuterSingleton, Z_Construct_UClass_ARHS_ProjectileBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARHS_ProjectileBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARHS_ProjectileBase);
ARHS_ProjectileBase::~ARHS_ProjectileBase() {}
// ********** End Class ARHS_ProjectileBase ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_ProjectileBase_h__Script_AuroraDevs_RHS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARHS_ProjectileBase, ARHS_ProjectileBase::StaticClass, TEXT("ARHS_ProjectileBase"), &Z_Registration_Info_UClass_ARHS_ProjectileBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARHS_ProjectileBase), 2800668450U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_ProjectileBase_h__Script_AuroraDevs_RHS_1438113059(TEXT("/Script/AuroraDevs_RHS"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_ProjectileBase_h__Script_AuroraDevs_RHS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_ProjectileBase_h__Script_AuroraDevs_RHS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
