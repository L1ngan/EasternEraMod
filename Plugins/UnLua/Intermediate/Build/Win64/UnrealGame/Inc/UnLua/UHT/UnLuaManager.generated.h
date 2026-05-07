// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnLuaManager.h"

#ifdef UNLUA_UnLuaManager_generated_h
#error "UnLuaManager.generated.h already included, missing '#pragma once' in UnLuaManager.h"
#endif
#define UNLUA_UnLuaManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDynamicBlueprintBinding;
class UObject;
struct FKey;

// ********** Begin Class UUnLuaManager ************************************************************
#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnLatentActionCompleted); \
	DECLARE_FUNCTION(execOverride); \
	DECLARE_FUNCTION(execGetOrAddBindingObject);


#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_CALLBACK_WRAPPERS
UNLUA_API UClass* Z_Construct_UClass_UUnLuaManager_NoRegister();

#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaManager(); \
	friend struct Z_Construct_UClass_UUnLuaManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUA_API UClass* Z_Construct_UClass_UUnLuaManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnLuaManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLua"), Z_Construct_UClass_UUnLuaManager_NoRegister) \
	DECLARE_SERIALIZER(UUnLuaManager)


#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnLuaManager(UUnLuaManager&&) = delete; \
	UUnLuaManager(const UUnLuaManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUnLuaManager) \
	NO_API virtual ~UUnLuaManager();


#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_28_PROLOG
#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_CALLBACK_WRAPPERS \
	FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnLuaManager;

// ********** End Class UUnLuaManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
