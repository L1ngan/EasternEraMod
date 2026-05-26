// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BinkMediaPlayer.h"

#ifdef BINKMEDIAPLAYER_BinkMediaPlayer_generated_h
#error "BinkMediaPlayer.generated.h already included, missing '#pragma once' in BinkMediaPlayer.h"
#endif
#define BINKMEDIAPLAYER_BinkMediaPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTexture;
struct FTimespan;

// ********** Begin Delegate FOnBinkMediaPlayerMediaClosed *****************************************
#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_90_DELEGATE \
BINKMEDIAPLAYER_API void FOnBinkMediaPlayerMediaClosed_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaClosed);


// ********** End Delegate FOnBinkMediaPlayerMediaClosed *******************************************

// ********** Begin Delegate FOnBinkMediaPlayerMediaOpened *****************************************
#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_93_DELEGATE \
BINKMEDIAPLAYER_API void FOnBinkMediaPlayerMediaOpened_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaOpened, const FString& OpenedUrl);


// ********** End Delegate FOnBinkMediaPlayerMediaOpened *******************************************

// ********** Begin Delegate FOnBinkMediaPlayerMediaReachedEnd *************************************
#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_96_DELEGATE \
BINKMEDIAPLAYER_API void FOnBinkMediaPlayerMediaReachedEnd_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaReachedEnd);


// ********** End Delegate FOnBinkMediaPlayerMediaReachedEnd ***************************************

// ********** Begin Delegate FOnBinkMediaPlayerMediaEvent ******************************************
#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_99_DELEGATE \
BINKMEDIAPLAYER_API void FOnBinkMediaPlayerMediaEvent_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaEvent);


// ********** End Delegate FOnBinkMediaPlayerMediaEvent ********************************************

// ********** Begin Class UBinkMediaPlayer *********************************************************
#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDraw); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execSupportsSeeking); \
	DECLARE_FUNCTION(execSupportsScrubbing); \
	DECLARE_FUNCTION(execSupportsRate); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execSetRate); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execRewind); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execCloseUrl); \
	DECLARE_FUNCTION(execOpenUrl); \
	DECLARE_FUNCTION(execIsGotoing); \
	DECLARE_FUNCTION(execIsStopped); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetRate); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execCanPlay); \
	DECLARE_FUNCTION(execCanPause);


BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister();

#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUBinkMediaPlayer(); \
	friend struct Z_Construct_UClass_UBinkMediaPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UBinkMediaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BinkMediaPlayer"), Z_Construct_UClass_UBinkMediaPlayer_NoRegister) \
	DECLARE_SERIALIZER(UBinkMediaPlayer)


#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBinkMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBinkMediaPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBinkMediaPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBinkMediaPlayer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBinkMediaPlayer(UBinkMediaPlayer&&) = delete; \
	UBinkMediaPlayer(const UBinkMediaPlayer&) = delete; \
	NO_API virtual ~UBinkMediaPlayer();


#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_107_PROLOG
#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_RPC_WRAPPERS \
	FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_INCLASS \
	FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBinkMediaPlayer;

// ********** End Class UBinkMediaPlayer ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h

// ********** Begin Enum EBinkMediaPlayerBinkBufferModes *******************************************
#define FOREACH_ENUM_EBINKMEDIAPLAYERBINKBUFFERMODES(op) \
	op(BMASM_Bink_Stream) \
	op(BMASM_Bink_PreloadAll) \
	op(BMASM_Bink_StreamUntilResident) 

enum EBinkMediaPlayerBinkBufferModes : int;
template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMediaPlayerBinkBufferModes>();
// ********** End Enum EBinkMediaPlayerBinkBufferModes *********************************************

// ********** Begin Enum EBinkMediaPlayerBinkSoundTrack ********************************************
#define FOREACH_ENUM_EBINKMEDIAPLAYERBINKSOUNDTRACK(op) \
	op(BMASM_Bink_Sound_None) \
	op(BMASM_Bink_Sound_Simple) \
	op(BMASM_Bink_Sound_LanguageOverride) \
	op(BMASM_Bink_Sound_51) \
	op(BMASM_Bink_Sound_51LanguageOverride) \
	op(BMASM_Bink_Sound_71) \
	op(BMASM_Bink_Sound_71LanguageOverride) 

enum EBinkMediaPlayerBinkSoundTrack : int;
template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMediaPlayerBinkSoundTrack>();
// ********** End Enum EBinkMediaPlayerBinkSoundTrack **********************************************

// ********** Begin Enum EBinkMediaPlayerBinkDrawStyle *********************************************
#define FOREACH_ENUM_EBINKMEDIAPLAYERBINKDRAWSTYLE(op) \
	op(BMASM_Bink_DS_RenderToTexture) \
	op(BMASM_Bink_DS_OverlayFillScreenWithAspectRatio) \
	op(BMASM_Bink_DS_OverlayOriginalMovieSize) \
	op(BMASM_Bink_DS_OverlayFillScreen) \
	op(BMASM_Bink_DS_OverlaySpecificDestinationRectangle) 

enum EBinkMediaPlayerBinkDrawStyle : int;
template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMediaPlayerBinkDrawStyle>();
// ********** End Enum EBinkMediaPlayerBinkDrawStyle ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
