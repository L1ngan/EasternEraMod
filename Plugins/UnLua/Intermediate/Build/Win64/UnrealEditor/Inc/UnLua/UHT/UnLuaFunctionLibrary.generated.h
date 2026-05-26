// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnLuaFunctionLibrary.h"

#ifdef UNLUA_UnLuaFunctionLibrary_generated_h
#error "UnLuaFunctionLibrary.generated.h already included, missing '#pragma once' in UnLuaFunctionLibrary.h"
#endif
#define UNLUA_UnLuaFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUnLuaFunctionLibrary ****************************************************
#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHotReload); \
	DECLARE_FUNCTION(execGetFileLastModifiedTimestamp); \
	DECLARE_FUNCTION(execGetScriptRootPath);


UNLUA_API UClass* Z_Construct_UClass_UUnLuaFunctionLibrary_NoRegister();

#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUnLuaFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUA_API UClass* Z_Construct_UClass_UUnLuaFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnLuaFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLua"), Z_Construct_UClass_UUnLuaFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UUnLuaFunctionLibrary)


#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnLuaFunctionLibrary(UUnLuaFunctionLibrary&&) = delete; \
	UUnLuaFunctionLibrary(const UUnLuaFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaFunctionLibrary) \
	NO_API virtual ~UUnLuaFunctionLibrary();


#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h_21_PROLOG
#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnLuaFunctionLibrary;

// ********** End Class UUnLuaFunctionLibrary ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
