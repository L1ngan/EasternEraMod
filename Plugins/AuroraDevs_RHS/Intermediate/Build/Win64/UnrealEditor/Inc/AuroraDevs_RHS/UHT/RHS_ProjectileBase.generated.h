// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RHS_ProjectileBase.h"

#ifdef AURORADEVS_RHS_RHS_ProjectileBase_generated_h
#error "RHS_ProjectileBase.generated.h already included, missing '#pragma once' in RHS_ProjectileBase.h"
#endif
#define AURORADEVS_RHS_RHS_ProjectileBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARHS_ProjectileBase ******************************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_ARHS_ProjectileBase_NoRegister();

#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_ProjectileBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARHS_ProjectileBase(); \
	friend struct Z_Construct_UClass_ARHS_ProjectileBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_RHS_API UClass* Z_Construct_UClass_ARHS_ProjectileBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ARHS_ProjectileBase, ARHS_AdaptableCollisionActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AuroraDevs_RHS"), Z_Construct_UClass_ARHS_ProjectileBase_NoRegister) \
	DECLARE_SERIALIZER(ARHS_ProjectileBase)


#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_ProjectileBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARHS_ProjectileBase(ARHS_ProjectileBase&&) = delete; \
	ARHS_ProjectileBase(const ARHS_ProjectileBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARHS_ProjectileBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARHS_ProjectileBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ARHS_ProjectileBase) \
	NO_API virtual ~ARHS_ProjectileBase();


#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_ProjectileBase_h_10_PROLOG
#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_ProjectileBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_ProjectileBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_ProjectileBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARHS_ProjectileBase;

// ********** End Class ARHS_ProjectileBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_ProjectileBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
