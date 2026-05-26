// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameUIManagerSubsystem.h"

#ifdef COMMONGAME_GameUIManagerSubsystem_generated_h
#error "GameUIManagerSubsystem.generated.h already included, missing '#pragma once' in GameUIManagerSubsystem.h"
#endif
#define COMMONGAME_GameUIManagerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameUIManagerSubsystem **************************************************
COMMONGAME_API UClass* Z_Construct_UClass_UGameUIManagerSubsystem_NoRegister();

#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_GameUIManagerSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameUIManagerSubsystem(); \
	friend struct Z_Construct_UClass_UGameUIManagerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONGAME_API UClass* Z_Construct_UClass_UGameUIManagerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameUIManagerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonGame"), Z_Construct_UClass_UGameUIManagerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UGameUIManagerSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_GameUIManagerSubsystem_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameUIManagerSubsystem(UGameUIManagerSubsystem&&) = delete; \
	UGameUIManagerSubsystem(const UGameUIManagerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameUIManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameUIManagerSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGameUIManagerSubsystem) \
	NO_API virtual ~UGameUIManagerSubsystem();


#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_GameUIManagerSubsystem_h_22_PROLOG
#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_GameUIManagerSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_CommonGame_Source_Public_GameUIManagerSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_CommonGame_Source_Public_GameUIManagerSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameUIManagerSubsystem;

// ********** End Class UGameUIManagerSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CommonGame_Source_Public_GameUIManagerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
