// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameUIPolicy.h"

#ifdef COMMONGAME_GameUIPolicy_generated_h
#error "GameUIPolicy.generated.h already included, missing '#pragma once' in GameUIPolicy.h"
#endif
#define COMMONGAME_GameUIPolicy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRootViewportLayoutInfo *******************************************
#define FID_ModProject_Plugins_CommonGame_Source_Public_GameUIPolicy_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics; \
	COMMONGAME_API static class UScriptStruct* StaticStruct();


struct FRootViewportLayoutInfo;
// ********** End ScriptStruct FRootViewportLayoutInfo *********************************************

// ********** Begin Class UGameUIPolicy ************************************************************
COMMONGAME_API UClass* Z_Construct_UClass_UGameUIPolicy_NoRegister();

#define FID_ModProject_Plugins_CommonGame_Source_Public_GameUIPolicy_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameUIPolicy(); \
	friend struct Z_Construct_UClass_UGameUIPolicy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONGAME_API UClass* Z_Construct_UClass_UGameUIPolicy_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameUIPolicy, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonGame"), Z_Construct_UClass_UGameUIPolicy_NoRegister) \
	DECLARE_SERIALIZER(UGameUIPolicy) \
	DECLARE_WITHIN(UGameUIManagerSubsystem)


#define FID_ModProject_Plugins_CommonGame_Source_Public_GameUIPolicy_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameUIPolicy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameUIPolicy(UGameUIPolicy&&) = delete; \
	UGameUIPolicy(const UGameUIPolicy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameUIPolicy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameUIPolicy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameUIPolicy) \
	NO_API virtual ~UGameUIPolicy();


#define FID_ModProject_Plugins_CommonGame_Source_Public_GameUIPolicy_h_54_PROLOG
#define FID_ModProject_Plugins_CommonGame_Source_Public_GameUIPolicy_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_CommonGame_Source_Public_GameUIPolicy_h_57_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CommonGame_Source_Public_GameUIPolicy_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameUIPolicy;

// ********** End Class UGameUIPolicy **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_CommonGame_Source_Public_GameUIPolicy_h

// ********** Begin Enum ELocalMultiplayerInteractionMode ******************************************
#define FOREACH_ENUM_ELOCALMULTIPLAYERINTERACTIONMODE(op) \
	op(ELocalMultiplayerInteractionMode::PrimaryOnly) \
	op(ELocalMultiplayerInteractionMode::SingleToggle) \
	op(ELocalMultiplayerInteractionMode::Simultaneous) 

enum class ELocalMultiplayerInteractionMode : uint8;
template<> struct TIsUEnumClass<ELocalMultiplayerInteractionMode> { enum { Value = true }; };
template<> COMMONGAME_API UEnum* StaticEnum<ELocalMultiplayerInteractionMode>();
// ********** End Enum ELocalMultiplayerInteractionMode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
