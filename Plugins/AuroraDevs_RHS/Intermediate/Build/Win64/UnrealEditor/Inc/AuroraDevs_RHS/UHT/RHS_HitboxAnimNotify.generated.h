// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RHS_HitboxAnimNotify.h"

#ifdef AURORADEVS_RHS_RHS_HitboxAnimNotify_generated_h
#error "RHS_HitboxAnimNotify.generated.h already included, missing '#pragma once' in RHS_HitboxAnimNotify.h"
#endif
#define AURORADEVS_RHS_RHS_HitboxAnimNotify_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class URHS_CollisionShape;
class USkeletalMeshComponent;

// ********** Begin Class URHS_HitboxAnimNotify ****************************************************
#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SERVER_ApplyShapeHit_Implementation(USkeletalMeshComponent* MeshComp, URHS_CollisionShape* CollisionShape, FVector const& Location, FQuat const& Rotation) const; \
	virtual void MULTICAST_DrawHitShapeDebug_Implementation(USkeletalMeshComponent* MeshComp, URHS_CollisionShape* CollisionShape, FVector const& Location, FQuat const& Rotation, const float FrameDeltaTime) const; \
	virtual void SERVER_DrawHitShapeDebug_Implementation(USkeletalMeshComponent* MeshComp, URHS_CollisionShape* CollisionShape, FVector const& Location, FQuat const& Rotation, const float FrameDeltaTime) const; \
	DECLARE_FUNCTION(execSERVER_ApplyShapeHit); \
	DECLARE_FUNCTION(execMULTICAST_DrawHitShapeDebug); \
	DECLARE_FUNCTION(execSERVER_DrawHitShapeDebug);


#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h_17_CALLBACK_WRAPPERS
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_HitboxAnimNotify_NoRegister();

#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURHS_HitboxAnimNotify(); \
	friend struct Z_Construct_UClass_URHS_HitboxAnimNotify_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_HitboxAnimNotify_NoRegister(); \
public: \
	DECLARE_CLASS2(URHS_HitboxAnimNotify, UAnimNotifyState, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AuroraDevs_RHS"), Z_Construct_UClass_URHS_HitboxAnimNotify_NoRegister) \
	DECLARE_SERIALIZER(URHS_HitboxAnimNotify) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CollisionShapes=NETFIELD_REP_START, \
		DebugSettings, \
		NETFIELD_REP_END=DebugSettings	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(URHS_HitboxAnimNotify) \
public:


#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URHS_HitboxAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URHS_HitboxAnimNotify(URHS_HitboxAnimNotify&&) = delete; \
	URHS_HitboxAnimNotify(const URHS_HitboxAnimNotify&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URHS_HitboxAnimNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URHS_HitboxAnimNotify); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URHS_HitboxAnimNotify) \
	NO_API virtual ~URHS_HitboxAnimNotify();


#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h_14_PROLOG
#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h_17_CALLBACK_WRAPPERS \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h_17_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URHS_HitboxAnimNotify;

// ********** End Class URHS_HitboxAnimNotify ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
