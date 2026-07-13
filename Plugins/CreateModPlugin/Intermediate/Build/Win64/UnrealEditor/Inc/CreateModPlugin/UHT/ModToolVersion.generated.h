// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModToolVersion.h"

#ifdef CREATEMODPLUGIN_ModToolVersion_generated_h
#error "ModToolVersion.generated.h already included, missing '#pragma once' in ModToolVersion.h"
#endif
#define CREATEMODPLUGIN_ModToolVersion_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UModToolVersion **********************************************************
CREATEMODPLUGIN_API UClass* Z_Construct_UClass_UModToolVersion_NoRegister();

#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModToolVersion_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModToolVersion(); \
	friend struct Z_Construct_UClass_UModToolVersion_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CREATEMODPLUGIN_API UClass* Z_Construct_UClass_UModToolVersion_NoRegister(); \
public: \
	DECLARE_CLASS2(UModToolVersion, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CreateModPlugin"), Z_Construct_UClass_UModToolVersion_NoRegister) \
	DECLARE_SERIALIZER(UModToolVersion)


#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModToolVersion_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModToolVersion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModToolVersion(UModToolVersion&&) = delete; \
	UModToolVersion(const UModToolVersion&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModToolVersion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModToolVersion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModToolVersion) \
	NO_API virtual ~UModToolVersion();


#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModToolVersion_h_11_PROLOG
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModToolVersion_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModToolVersion_h_14_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModToolVersion_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModToolVersion;

// ********** End Class UModToolVersion ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModToolVersion_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
