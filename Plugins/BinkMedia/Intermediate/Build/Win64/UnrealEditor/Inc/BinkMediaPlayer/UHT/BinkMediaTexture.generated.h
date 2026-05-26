// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BinkMediaTexture.h"

#ifdef BINKMEDIAPLAYER_BinkMediaTexture_generated_h
#error "BinkMediaTexture.generated.h already included, missing '#pragma once' in BinkMediaTexture.h"
#endif
#define BINKMEDIAPLAYER_BinkMediaTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBinkMediaPlayer;

// ********** Begin Class UBinkMediaTexture ********************************************************
#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execSetMediaPlayer);


BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaTexture_NoRegister();

#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUBinkMediaTexture(); \
	friend struct Z_Construct_UClass_UBinkMediaTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UBinkMediaTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BinkMediaPlayer"), Z_Construct_UClass_UBinkMediaTexture_NoRegister) \
	DECLARE_SERIALIZER(UBinkMediaTexture)


#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBinkMediaTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBinkMediaTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBinkMediaTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBinkMediaTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBinkMediaTexture(UBinkMediaTexture&&) = delete; \
	UBinkMediaTexture(const UBinkMediaTexture&) = delete;


#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h_21_PROLOG
#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h_24_RPC_WRAPPERS \
	FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h_24_INCLASS \
	FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBinkMediaTexture;

// ********** End Class UBinkMediaTexture **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
