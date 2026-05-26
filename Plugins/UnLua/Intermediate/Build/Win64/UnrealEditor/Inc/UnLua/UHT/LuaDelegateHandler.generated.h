// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LuaDelegateHandler.h"

#ifdef UNLUA_LuaDelegateHandler_generated_h
#error "LuaDelegateHandler.generated.h already included, missing '#pragma once' in LuaDelegateHandler.h"
#endif
#define UNLUA_LuaDelegateHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULuaDelegateHandler ******************************************************
#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaDelegateHandler_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDummy);


UNLUA_API UClass* Z_Construct_UClass_ULuaDelegateHandler_NoRegister();

#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaDelegateHandler_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuaDelegateHandler(); \
	friend struct Z_Construct_UClass_ULuaDelegateHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUA_API UClass* Z_Construct_UClass_ULuaDelegateHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(ULuaDelegateHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLua"), Z_Construct_UClass_ULuaDelegateHandler_NoRegister) \
	DECLARE_SERIALIZER(ULuaDelegateHandler)


#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaDelegateHandler_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULuaDelegateHandler(ULuaDelegateHandler&&) = delete; \
	ULuaDelegateHandler(const ULuaDelegateHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaDelegateHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaDelegateHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULuaDelegateHandler) \
	NO_API virtual ~ULuaDelegateHandler();


#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaDelegateHandler_h_26_PROLOG
#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaDelegateHandler_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaDelegateHandler_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaDelegateHandler_h_31_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaDelegateHandler_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULuaDelegateHandler;

// ********** End Class ULuaDelegateHandler ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaDelegateHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
