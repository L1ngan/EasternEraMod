// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BinkMoviePlayerSettings.h"

#ifdef BINKMEDIAPLAYER_BinkMoviePlayerSettings_generated_h
#error "BinkMoviePlayerSettings.generated.h already included, missing '#pragma once' in BinkMoviePlayerSettings.h"
#endif
#define BINKMEDIAPLAYER_BinkMoviePlayerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBinkMoviePlayerSettings *************************************************
BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMoviePlayerSettings_NoRegister();

#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUBinkMoviePlayerSettings(); \
	friend struct Z_Construct_UClass_UBinkMoviePlayerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMoviePlayerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UBinkMoviePlayerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/BinkMediaPlayer"), Z_Construct_UClass_UBinkMoviePlayerSettings_NoRegister) \
	DECLARE_SERIALIZER(UBinkMoviePlayerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBinkMoviePlayerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBinkMoviePlayerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBinkMoviePlayerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBinkMoviePlayerSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBinkMoviePlayerSettings(UBinkMoviePlayerSettings&&) = delete; \
	UBinkMoviePlayerSettings(const UBinkMoviePlayerSettings&) = delete; \
	NO_API virtual ~UBinkMoviePlayerSettings();


#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_61_PROLOG
#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_INCLASS \
	FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBinkMoviePlayerSettings;

// ********** End Class UBinkMoviePlayerSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h

// ********** Begin Enum EBinkMoviePlayerBinkBufferModes *******************************************
#define FOREACH_ENUM_EBINKMOVIEPLAYERBINKBUFFERMODES(op) \
	op(MP_Bink_Stream) \
	op(MP_Bink_PreloadAll) \
	op(MP_Bink_StreamUntilResident) 

enum EBinkMoviePlayerBinkBufferModes : int;
template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMoviePlayerBinkBufferModes>();
// ********** End Enum EBinkMoviePlayerBinkBufferModes *********************************************

// ********** Begin Enum EBinkMoviePlayerBinkSoundTrack ********************************************
#define FOREACH_ENUM_EBINKMOVIEPLAYERBINKSOUNDTRACK(op) \
	op(MP_Bink_Sound_None) \
	op(MP_Bink_Sound_Simple) \
	op(MP_Bink_Sound_LanguageOverride) \
	op(MP_Bink_Sound_51) \
	op(MP_Bink_Sound_51LanguageOverride) \
	op(MP_Bink_Sound_71) \
	op(MP_Bink_Sound_71LanguageOverride) 

enum EBinkMoviePlayerBinkSoundTrack : int;
template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMoviePlayerBinkSoundTrack>();
// ********** End Enum EBinkMoviePlayerBinkSoundTrack **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
