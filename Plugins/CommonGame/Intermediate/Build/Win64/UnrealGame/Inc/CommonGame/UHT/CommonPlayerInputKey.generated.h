// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonPlayerInputKey.h"

#ifdef COMMONGAME_CommonPlayerInputKey_generated_h
#error "CommonPlayerInputKey.generated.h already included, missing '#pragma once' in CommonPlayerInputKey.h"
#endif
#define COMMONGAME_CommonPlayerInputKey_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ECommonKeybindForcedHoldStatus : uint8;
struct FKey;

// ********** Begin ScriptStruct FMeasuredText *****************************************************
#define FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeasuredText_Statics; \
	COMMONGAME_API static class UScriptStruct* StaticStruct();


struct FMeasuredText;
// ********** End ScriptStruct FMeasuredText *******************************************************

// ********** Begin Class UCommonPlayerInputKey ****************************************************
#define FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsBoundKeyValid); \
	DECLARE_FUNCTION(execIsHoldKeybind); \
	DECLARE_FUNCTION(execStopHoldProgress); \
	DECLARE_FUNCTION(execStartHoldProgress); \
	DECLARE_FUNCTION(execSetPresetNameOverride); \
	DECLARE_FUNCTION(execSetAxisScale); \
	DECLARE_FUNCTION(execSetShowProgressCountDown); \
	DECLARE_FUNCTION(execSetForcedHoldKeybindStatus); \
	DECLARE_FUNCTION(execSetForcedHoldKeybind); \
	DECLARE_FUNCTION(execSetBoundAction); \
	DECLARE_FUNCTION(execSetBoundKey); \
	DECLARE_FUNCTION(execUpdateKeybindWidget);


COMMONGAME_API UClass* Z_Construct_UClass_UCommonPlayerInputKey_NoRegister();

#define FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonPlayerInputKey(); \
	friend struct Z_Construct_UClass_UCommonPlayerInputKey_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONGAME_API UClass* Z_Construct_UClass_UCommonPlayerInputKey_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonPlayerInputKey, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonGame"), Z_Construct_UClass_UCommonPlayerInputKey_NoRegister) \
	DECLARE_SERIALIZER(UCommonPlayerInputKey)


#define FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonPlayerInputKey(UCommonPlayerInputKey&&) = delete; \
	UCommonPlayerInputKey(const UCommonPlayerInputKey&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonPlayerInputKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPlayerInputKey); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonPlayerInputKey) \
	NO_API virtual ~UCommonPlayerInputKey();


#define FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_50_PROLOG
#define FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_53_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonPlayerInputKey;

// ********** End Class UCommonPlayerInputKey ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h

// ********** Begin Enum ECommonKeybindForcedHoldStatus ********************************************
#define FOREACH_ENUM_ECOMMONKEYBINDFORCEDHOLDSTATUS(op) \
	op(ECommonKeybindForcedHoldStatus::NoForcedHold) \
	op(ECommonKeybindForcedHoldStatus::ForcedHold) \
	op(ECommonKeybindForcedHoldStatus::NeverShowHold) 

enum class ECommonKeybindForcedHoldStatus : uint8;
template<> struct TIsUEnumClass<ECommonKeybindForcedHoldStatus> { enum { Value = true }; };
template<> COMMONGAME_API UEnum* StaticEnum<ECommonKeybindForcedHoldStatus>();
// ********** End Enum ECommonKeybindForcedHoldStatus **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
