// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RHS_AnimNotifyBase.h"

#ifdef AURORADEVS_RHS_RHS_AnimNotifyBase_generated_h
#error "RHS_AnimNotifyBase.generated.h already included, missing '#pragma once' in RHS_AnimNotifyBase.h"
#endif
#define AURORADEVS_RHS_RHS_AnimNotifyBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URHS_AnimNotifyBase ******************************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_AnimNotifyBase_NoRegister();

#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AnimNotifyBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURHS_AnimNotifyBase(); \
	friend struct Z_Construct_UClass_URHS_AnimNotifyBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_AnimNotifyBase_NoRegister(); \
public: \
	DECLARE_CLASS2(URHS_AnimNotifyBase, UAnimNotify, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AuroraDevs_RHS"), Z_Construct_UClass_URHS_AnimNotifyBase_NoRegister) \
	DECLARE_SERIALIZER(URHS_AnimNotifyBase)


#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AnimNotifyBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URHS_AnimNotifyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URHS_AnimNotifyBase(URHS_AnimNotifyBase&&) = delete; \
	URHS_AnimNotifyBase(const URHS_AnimNotifyBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URHS_AnimNotifyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URHS_AnimNotifyBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URHS_AnimNotifyBase) \
	NO_API virtual ~URHS_AnimNotifyBase();


#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AnimNotifyBase_h_14_PROLOG
#define FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AnimNotifyBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AnimNotifyBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AnimNotifyBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URHS_AnimNotifyBase;

// ********** End Class URHS_AnimNotifyBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AnimNotifyBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
