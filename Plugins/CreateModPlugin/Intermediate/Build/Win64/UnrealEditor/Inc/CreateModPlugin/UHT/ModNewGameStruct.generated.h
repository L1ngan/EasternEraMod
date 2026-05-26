// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModNewGameStruct.h"

#ifdef CREATEMODPLUGIN_ModNewGameStruct_generated_h
#error "ModNewGameStruct.generated.h already included, missing '#pragma once' in ModNewGameStruct.h"
#endif
#define CREATEMODPLUGIN_ModNewGameStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModCharacteristicNumWeight ***************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModCharacteristicNumWeight;
// ********** End ScriptStruct FModCharacteristicNumWeight *****************************************

// ********** Begin Class UModNewGameConfigAsset ***************************************************
CREATEMODPLUGIN_API UClass* Z_Construct_UClass_UModNewGameConfigAsset_NoRegister();

#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModNewGameConfigAsset(); \
	friend struct Z_Construct_UClass_UModNewGameConfigAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CREATEMODPLUGIN_API UClass* Z_Construct_UClass_UModNewGameConfigAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UModNewGameConfigAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CreateModPlugin"), Z_Construct_UClass_UModNewGameConfigAsset_NoRegister) \
	DECLARE_SERIALIZER(UModNewGameConfigAsset)


#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModNewGameConfigAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModNewGameConfigAsset(UModNewGameConfigAsset&&) = delete; \
	UModNewGameConfigAsset(const UModNewGameConfigAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModNewGameConfigAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModNewGameConfigAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModNewGameConfigAsset) \
	NO_API virtual ~UModNewGameConfigAsset();


#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h_19_PROLOG
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h_22_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModNewGameConfigAsset;

// ********** End Class UModNewGameConfigAsset *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
