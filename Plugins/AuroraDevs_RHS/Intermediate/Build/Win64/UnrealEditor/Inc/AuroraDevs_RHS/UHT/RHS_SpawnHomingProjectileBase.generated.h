// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RHS_SpawnHomingProjectileBase.h"

#ifdef AURORADEVS_RHS_RHS_SpawnHomingProjectileBase_generated_h
#error "RHS_SpawnHomingProjectileBase.generated.h already included, missing '#pragma once' in RHS_SpawnHomingProjectileBase.h"
#endif
#define AURORADEVS_RHS_RHS_SpawnHomingProjectileBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRHSHomingProjectileSpawnTypeSettings *****************************
#define FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics; \
	AURORADEVS_RHS_API static class UScriptStruct* StaticStruct();


struct FRHSHomingProjectileSpawnTypeSettings;
// ********** End ScriptStruct FRHSHomingProjectileSpawnTypeSettings *******************************

// ********** Begin Class URHS_SpawnHomingProjectileBase *******************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_SpawnHomingProjectileBase_NoRegister();

#define FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURHS_SpawnHomingProjectileBase(); \
	friend struct Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_SpawnHomingProjectileBase_NoRegister(); \
public: \
	DECLARE_CLASS2(URHS_SpawnHomingProjectileBase, URHS_AnimNotifyBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AuroraDevs_RHS"), Z_Construct_UClass_URHS_SpawnHomingProjectileBase_NoRegister) \
	DECLARE_SERIALIZER(URHS_SpawnHomingProjectileBase)


#define FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URHS_SpawnHomingProjectileBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URHS_SpawnHomingProjectileBase(URHS_SpawnHomingProjectileBase&&) = delete; \
	URHS_SpawnHomingProjectileBase(const URHS_SpawnHomingProjectileBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URHS_SpawnHomingProjectileBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URHS_SpawnHomingProjectileBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URHS_SpawnHomingProjectileBase) \
	NO_API virtual ~URHS_SpawnHomingProjectileBase();


#define FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h_63_PROLOG
#define FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h_66_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URHS_SpawnHomingProjectileBase;

// ********** End Class URHS_SpawnHomingProjectileBase *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h

// ********** Begin Enum ERHSHomingProjectileSpawnType *********************************************
#define FOREACH_ENUM_ERHSHOMINGPROJECTILESPAWNTYPE(op) \
	op(ERHSHomingProjectileSpawnType::RandomBoundingBox) \
	op(ERHSHomingProjectileSpawnType::EvenlyAlongVector) \
	op(ERHSHomingProjectileSpawnType::EvenlyInCircle) 

enum class ERHSHomingProjectileSpawnType : uint8;
template<> struct TIsUEnumClass<ERHSHomingProjectileSpawnType> { enum { Value = true }; };
template<> AURORADEVS_RHS_API UEnum* StaticEnum<ERHSHomingProjectileSpawnType>();
// ********** End Enum ERHSHomingProjectileSpawnType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
