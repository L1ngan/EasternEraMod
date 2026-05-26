// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnLuaLatentAction.h"

#ifdef UNLUA_UnLuaLatentAction_generated_h
#error "UnLuaLatentAction.generated.h already included, missing '#pragma once' in UnLuaLatentAction.h"
#endif
#define UNLUA_UnLuaLatentAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FUnLuaLatentActionCallback ********************************************
#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h_22_DELEGATE \
UNLUA_API void FUnLuaLatentActionCallback_DelegateWrapper(const FScriptDelegate& UnLuaLatentActionCallback, int32 InLinkage);


// ********** End Delegate FUnLuaLatentActionCallback **********************************************

// ********** Begin Class UUnLuaLatentAction *******************************************************
#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnLegacyCallback); \
	DECLARE_FUNCTION(execSetTickableWhenPaused); \
	DECLARE_FUNCTION(execGetTickableWhenPaused); \
	DECLARE_FUNCTION(execOnCompleted);


UNLUA_API UClass* Z_Construct_UClass_UUnLuaLatentAction_NoRegister();

#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaLatentAction(); \
	friend struct Z_Construct_UClass_UUnLuaLatentAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUA_API UClass* Z_Construct_UClass_UUnLuaLatentAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnLuaLatentAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLua"), Z_Construct_UClass_UUnLuaLatentAction_NoRegister) \
	DECLARE_SERIALIZER(UUnLuaLatentAction)


#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaLatentAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnLuaLatentAction(UUnLuaLatentAction&&) = delete; \
	UUnLuaLatentAction(const UUnLuaLatentAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaLatentAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaLatentAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaLatentAction) \
	NO_API virtual ~UUnLuaLatentAction();


#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h_24_PROLOG
#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h_27_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnLuaLatentAction;

// ********** End Class UUnLuaLatentAction *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
