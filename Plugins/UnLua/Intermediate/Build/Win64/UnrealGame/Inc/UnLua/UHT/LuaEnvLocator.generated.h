// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LuaEnvLocator.h"

#ifdef UNLUA_LuaEnvLocator_generated_h
#error "LuaEnvLocator.generated.h already included, missing '#pragma once' in LuaEnvLocator.h"
#endif
#define UNLUA_LuaEnvLocator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULuaEnvLocator ***********************************************************
UNLUA_API UClass* Z_Construct_UClass_ULuaEnvLocator_NoRegister();

#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuaEnvLocator(); \
	friend struct Z_Construct_UClass_ULuaEnvLocator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUA_API UClass* Z_Construct_UClass_ULuaEnvLocator_NoRegister(); \
public: \
	DECLARE_CLASS2(ULuaEnvLocator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLua"), Z_Construct_UClass_ULuaEnvLocator_NoRegister) \
	DECLARE_SERIALIZER(ULuaEnvLocator)


#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaEnvLocator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULuaEnvLocator(ULuaEnvLocator&&) = delete; \
	ULuaEnvLocator(const ULuaEnvLocator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaEnvLocator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaEnvLocator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaEnvLocator) \
	NO_API virtual ~ULuaEnvLocator();


#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h_22_PROLOG
#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h_25_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULuaEnvLocator;

// ********** End Class ULuaEnvLocator *************************************************************

// ********** Begin Class ULuaEnvLocator_ByGameInstance ********************************************
UNLUA_API UClass* Z_Construct_UClass_ULuaEnvLocator_ByGameInstance_NoRegister();

#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuaEnvLocator_ByGameInstance(); \
	friend struct Z_Construct_UClass_ULuaEnvLocator_ByGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUA_API UClass* Z_Construct_UClass_ULuaEnvLocator_ByGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(ULuaEnvLocator_ByGameInstance, ULuaEnvLocator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLua"), Z_Construct_UClass_ULuaEnvLocator_ByGameInstance_NoRegister) \
	DECLARE_SERIALIZER(ULuaEnvLocator_ByGameInstance)


#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaEnvLocator_ByGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULuaEnvLocator_ByGameInstance(ULuaEnvLocator_ByGameInstance&&) = delete; \
	ULuaEnvLocator_ByGameInstance(const ULuaEnvLocator_ByGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaEnvLocator_ByGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaEnvLocator_ByGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaEnvLocator_ByGameInstance) \
	NO_API virtual ~ULuaEnvLocator_ByGameInstance();


#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h_36_PROLOG
#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h_39_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULuaEnvLocator_ByGameInstance;

// ********** End Class ULuaEnvLocator_ByGameInstance **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaEnvLocator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
