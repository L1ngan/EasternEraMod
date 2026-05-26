// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BinkFunctionLibrary.h"

#ifdef BINKMEDIAPLAYER_BinkFunctionLibrary_generated_h
#error "BinkFunctionLibrary.generated.h already included, missing '#pragma once' in BinkFunctionLibrary.h"
#endif
#define BINKMEDIAPLAYER_BinkFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FTimespan;

// ********** Begin Class UBinkFunctionLibrary *****************************************************
#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBinkLoadingMovie_GetTime); \
	DECLARE_FUNCTION(execBinkLoadingMovie_GetDuration); \
	DECLARE_FUNCTION(execBink_DrawOverlays);


BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkFunctionLibrary_NoRegister();

#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBinkFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBinkFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBinkFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BinkMediaPlayer"), Z_Construct_UClass_UBinkFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBinkFunctionLibrary)


#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBinkFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBinkFunctionLibrary(UBinkFunctionLibrary&&) = delete; \
	UBinkFunctionLibrary(const UBinkFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBinkFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBinkFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBinkFunctionLibrary) \
	NO_API virtual ~UBinkFunctionLibrary();


#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_9_PROLOG
#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBinkFunctionLibrary;

// ********** End Class UBinkFunctionLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
