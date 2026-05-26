// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnLuaSettings.h"

#ifdef UNLUA_UnLuaSettings_generated_h
#error "UnLuaSettings.generated.h already included, missing '#pragma once' in UnLuaSettings.h"
#endif
#define UNLUA_UnLuaSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUnLuaSettings ***********************************************************
UNLUA_API UClass* Z_Construct_UClass_UUnLuaSettings_NoRegister();

#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaSettings_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaSettings(); \
	friend struct Z_Construct_UClass_UUnLuaSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUA_API UClass* Z_Construct_UClass_UUnLuaSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnLuaSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnLua"), Z_Construct_UClass_UUnLuaSettings_NoRegister) \
	DECLARE_SERIALIZER(UUnLuaSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("UnLuaSettings");} \



#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaSettings_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnLuaSettings(UUnLuaSettings&&) = delete; \
	UUnLuaSettings(const UUnLuaSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaSettings) \
	NO_API virtual ~UUnLuaSettings();


#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaSettings_h_23_PROLOG
#define FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaSettings_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaSettings_h_26_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaSettings_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnLuaSettings;

// ********** End Class UUnLuaSettings *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
