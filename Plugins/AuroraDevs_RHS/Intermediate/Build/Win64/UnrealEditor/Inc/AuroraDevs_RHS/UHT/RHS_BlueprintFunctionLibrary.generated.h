// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RHS_BlueprintFunctionLibrary.h"

#ifdef AURORADEVS_RHS_RHS_BlueprintFunctionLibrary_generated_h
#error "RHS_BlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in RHS_BlueprintFunctionLibrary.h"
#endif
#define AURORADEVS_RHS_RHS_BlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class APlayerController;
class UObject;

// ********** Begin Class URHS_BlueprintFunctionLibrary ********************************************
#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_BlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBoxOverlapMultiByProfile); \
	DECLARE_FUNCTION(execCapsuleOverlapMultiByProfile); \
	DECLARE_FUNCTION(execRotatorToQuaternion); \
	DECLARE_FUNCTION(execIsInGameWorld); \
	DECLARE_FUNCTION(execIsInEditorWorld); \
	DECLARE_FUNCTION(execBPGetPlayerViewPoint);


AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_BlueprintFunctionLibrary_NoRegister();

#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_BlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURHS_BlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_URHS_BlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_BlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URHS_BlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AuroraDevs_RHS"), Z_Construct_UClass_URHS_BlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(URHS_BlueprintFunctionLibrary)


#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_BlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URHS_BlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URHS_BlueprintFunctionLibrary(URHS_BlueprintFunctionLibrary&&) = delete; \
	URHS_BlueprintFunctionLibrary(const URHS_BlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URHS_BlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URHS_BlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URHS_BlueprintFunctionLibrary) \
	NO_API virtual ~URHS_BlueprintFunctionLibrary();


#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_BlueprintFunctionLibrary_h_12_PROLOG
#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_BlueprintFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_BlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_BlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_BlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URHS_BlueprintFunctionLibrary;

// ********** End Class URHS_BlueprintFunctionLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_BlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
