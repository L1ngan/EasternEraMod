// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LuaOverridesClass.h"

#ifdef UNLUA_LuaOverridesClass_generated_h
#error "LuaOverridesClass.generated.h already included, missing '#pragma once' in LuaOverridesClass.h"
#endif
#define UNLUA_LuaOverridesClass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULuaOverridesClass *******************************************************
UNLUA_API UClass* Z_Construct_UClass_ULuaOverridesClass_NoRegister();

#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaOverridesClass_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuaOverridesClass(); \
	friend struct Z_Construct_UClass_ULuaOverridesClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUA_API UClass* Z_Construct_UClass_ULuaOverridesClass_NoRegister(); \
public: \
	DECLARE_CLASS2(ULuaOverridesClass, UClass, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnLua"), Z_Construct_UClass_ULuaOverridesClass_NoRegister) \
	DECLARE_SERIALIZER(ULuaOverridesClass)


#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaOverridesClass_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaOverridesClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULuaOverridesClass(ULuaOverridesClass&&) = delete; \
	ULuaOverridesClass(const ULuaOverridesClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaOverridesClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaOverridesClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaOverridesClass) \
	NO_API virtual ~ULuaOverridesClass();


#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaOverridesClass_h_21_PROLOG
#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaOverridesClass_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaOverridesClass_h_24_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaOverridesClass_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULuaOverridesClass;

// ********** End Class ULuaOverridesClass *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaOverridesClass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
