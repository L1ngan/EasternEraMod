// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LuaModuleLocator.h"

#ifdef UNLUA_LuaModuleLocator_generated_h
#error "LuaModuleLocator.generated.h already included, missing '#pragma once' in LuaModuleLocator.h"
#endif
#define UNLUA_LuaModuleLocator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULuaModuleLocator ********************************************************
UNLUA_API UClass* Z_Construct_UClass_ULuaModuleLocator_NoRegister();

#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuaModuleLocator(); \
	friend struct Z_Construct_UClass_ULuaModuleLocator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUA_API UClass* Z_Construct_UClass_ULuaModuleLocator_NoRegister(); \
public: \
	DECLARE_CLASS2(ULuaModuleLocator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLua"), Z_Construct_UClass_ULuaModuleLocator_NoRegister) \
	DECLARE_SERIALIZER(ULuaModuleLocator)


#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaModuleLocator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULuaModuleLocator(ULuaModuleLocator&&) = delete; \
	ULuaModuleLocator(const ULuaModuleLocator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaModuleLocator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaModuleLocator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaModuleLocator) \
	NO_API virtual ~ULuaModuleLocator();


#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h_20_PROLOG
#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h_23_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULuaModuleLocator;

// ********** End Class ULuaModuleLocator **********************************************************

// ********** Begin Class ULuaModuleLocator_ByPackage **********************************************
UNLUA_API UClass* Z_Construct_UClass_ULuaModuleLocator_ByPackage_NoRegister();

#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuaModuleLocator_ByPackage(); \
	friend struct Z_Construct_UClass_ULuaModuleLocator_ByPackage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUA_API UClass* Z_Construct_UClass_ULuaModuleLocator_ByPackage_NoRegister(); \
public: \
	DECLARE_CLASS2(ULuaModuleLocator_ByPackage, ULuaModuleLocator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLua"), Z_Construct_UClass_ULuaModuleLocator_ByPackage_NoRegister) \
	DECLARE_SERIALIZER(ULuaModuleLocator_ByPackage)


#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaModuleLocator_ByPackage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULuaModuleLocator_ByPackage(ULuaModuleLocator_ByPackage&&) = delete; \
	ULuaModuleLocator_ByPackage(const ULuaModuleLocator_ByPackage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaModuleLocator_ByPackage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaModuleLocator_ByPackage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaModuleLocator_ByPackage) \
	NO_API virtual ~ULuaModuleLocator_ByPackage();


#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h_28_PROLOG
#define FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h_31_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULuaModuleLocator_ByPackage;

// ********** End Class ULuaModuleLocator_ByPackage ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaModuleLocator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
