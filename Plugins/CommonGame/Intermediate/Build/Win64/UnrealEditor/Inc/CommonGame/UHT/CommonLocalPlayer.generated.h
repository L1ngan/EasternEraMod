// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonLocalPlayer.h"

#ifdef COMMONGAME_CommonLocalPlayer_generated_h
#error "CommonLocalPlayer.generated.h already included, missing '#pragma once' in CommonLocalPlayer.h"
#endif
#define COMMONGAME_CommonLocalPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCommonLocalPlayer *******************************************************
COMMONGAME_API UClass* Z_Construct_UClass_UCommonLocalPlayer_NoRegister();

#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonLocalPlayer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonLocalPlayer(); \
	friend struct Z_Construct_UClass_UCommonLocalPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONGAME_API UClass* Z_Construct_UClass_UCommonLocalPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonLocalPlayer, ULocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonGame"), Z_Construct_UClass_UCommonLocalPlayer_NoRegister) \
	DECLARE_SERIALIZER(UCommonLocalPlayer)


#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonLocalPlayer_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonLocalPlayer(UCommonLocalPlayer&&) = delete; \
	UCommonLocalPlayer(const UCommonLocalPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLocalPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonLocalPlayer) \
	NO_API virtual ~UCommonLocalPlayer();


#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonLocalPlayer_h_17_PROLOG
#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonLocalPlayer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonLocalPlayer_h_20_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonLocalPlayer_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonLocalPlayer;

// ********** End Class UCommonLocalPlayer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonLocalPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
