// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RHS_AdaptableCollisionActor.h"

#ifdef AURORADEVS_RHS_RHS_AdaptableCollisionActor_generated_h
#error "RHS_AdaptableCollisionActor.generated.h already included, missing '#pragma once' in RHS_AdaptableCollisionActor.h"
#endif
#define AURORADEVS_RHS_RHS_AdaptableCollisionActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class URHS_CollisionShape;
struct FLinearColor;

// ********** Begin Class ARHS_AdaptableCollisionActor *********************************************
#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AdaptableCollisionActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCollisionOffset); \
	DECLARE_FUNCTION(execSetCollisionShapeInfo); \
	DECLARE_FUNCTION(execUpdateCollisionShapeInfo); \
	DECLARE_FUNCTION(execGetClassDefaultShapeExtent); \
	DECLARE_FUNCTION(execDrawClassDefaultCollisionShape);


AURORADEVS_RHS_API UClass* Z_Construct_UClass_ARHS_AdaptableCollisionActor_NoRegister();

#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AdaptableCollisionActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARHS_AdaptableCollisionActor(); \
	friend struct Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_RHS_API UClass* Z_Construct_UClass_ARHS_AdaptableCollisionActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ARHS_AdaptableCollisionActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AuroraDevs_RHS"), Z_Construct_UClass_ARHS_AdaptableCollisionActor_NoRegister) \
	DECLARE_SERIALIZER(ARHS_AdaptableCollisionActor)


#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AdaptableCollisionActor_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARHS_AdaptableCollisionActor(ARHS_AdaptableCollisionActor&&) = delete; \
	ARHS_AdaptableCollisionActor(const ARHS_AdaptableCollisionActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARHS_AdaptableCollisionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARHS_AdaptableCollisionActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ARHS_AdaptableCollisionActor) \
	NO_API virtual ~ARHS_AdaptableCollisionActor();


#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AdaptableCollisionActor_h_16_PROLOG
#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AdaptableCollisionActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AdaptableCollisionActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AdaptableCollisionActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AdaptableCollisionActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARHS_AdaptableCollisionActor;

// ********** End Class ARHS_AdaptableCollisionActor ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AdaptableCollisionActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
