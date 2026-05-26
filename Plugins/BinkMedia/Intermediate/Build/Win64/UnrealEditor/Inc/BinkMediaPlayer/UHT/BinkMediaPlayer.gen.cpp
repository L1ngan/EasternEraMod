// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BinkMediaPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBinkMediaPlayer() {}

// ********** Begin Cross Module References ********************************************************
BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer();
BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister();
BINKMEDIAPLAYER_API UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes();
BINKMEDIAPLAYER_API UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle();
BINKMEDIAPLAYER_API UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack();
BINKMEDIAPLAYER_API UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature();
BINKMEDIAPLAYER_API UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature();
BINKMEDIAPLAYER_API UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature();
BINKMEDIAPLAYER_API UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_BinkMediaPlayer();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EBinkMediaPlayerBinkBufferModes *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes;
static UEnum* EBinkMediaPlayerBinkBufferModes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes, (UObject*)Z_Construct_UPackage__Script_BinkMediaPlayer(), TEXT("EBinkMediaPlayerBinkBufferModes"));
	}
	return Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes.OuterSingleton;
}
template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMediaPlayerBinkBufferModes>()
{
	return EBinkMediaPlayerBinkBufferModes_StaticEnum();
}
struct Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BMASM_Bink_MAX.Name", "BMASM_Bink_MAX" },
		{ "BMASM_Bink_PreloadAll.Comment", "/** Loads the whole movie into memory at Open time (will block). */" },
		{ "BMASM_Bink_PreloadAll.DisplayName", "Preload All" },
		{ "BMASM_Bink_PreloadAll.Name", "BMASM_Bink_PreloadAll" },
		{ "BMASM_Bink_PreloadAll.ToolTip", "Loads the whole movie into memory at Open time (will block)." },
		{ "BMASM_Bink_Stream.Comment", "/** Stream the movie off the media during playback (caches about 1 second of video). */" },
		{ "BMASM_Bink_Stream.DisplayName", "Stream" },
		{ "BMASM_Bink_Stream.Name", "BMASM_Bink_Stream" },
		{ "BMASM_Bink_Stream.ToolTip", "Stream the movie off the media during playback (caches about 1 second of video)." },
		{ "BMASM_Bink_StreamUntilResident.Comment", "/** Streams the movie into a memory buffer as big as the movie, so it will be preloaded eventually). */" },
		{ "BMASM_Bink_StreamUntilResident.DisplayName", "Stream Until Resident" },
		{ "BMASM_Bink_StreamUntilResident.Name", "BMASM_Bink_StreamUntilResident" },
		{ "BMASM_Bink_StreamUntilResident.ToolTip", "Streams the movie into a memory buffer as big as the movie, so it will be preloaded eventually)." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enumerates available bink buffering modes.\n */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates available bink buffering modes." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BMASM_Bink_Stream", (int64)BMASM_Bink_Stream },
		{ "BMASM_Bink_PreloadAll", (int64)BMASM_Bink_PreloadAll },
		{ "BMASM_Bink_StreamUntilResident", (int64)BMASM_Bink_StreamUntilResident },
		{ "BMASM_Bink_MAX", (int64)BMASM_Bink_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
	nullptr,
	"EBinkMediaPlayerBinkBufferModes",
	"EBinkMediaPlayerBinkBufferModes",
	Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes()
{
	if (!Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes.InnerSingleton, Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes.InnerSingleton;
}
// ********** End Enum EBinkMediaPlayerBinkBufferModes *********************************************

// ********** Begin Enum EBinkMediaPlayerBinkSoundTrack ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack;
static UEnum* EBinkMediaPlayerBinkSoundTrack_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack, (UObject*)Z_Construct_UPackage__Script_BinkMediaPlayer(), TEXT("EBinkMediaPlayerBinkSoundTrack"));
	}
	return Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack.OuterSingleton;
}
template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMediaPlayerBinkSoundTrack>()
{
	return EBinkMediaPlayerBinkSoundTrack_StaticEnum();
}
struct Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BMASM_Bink_Sound_51.Comment", "/** 6 mono tracks in tracks snd_track_start[0..5] */" },
		{ "BMASM_Bink_Sound_51.DisplayName", "5.1 Surround" },
		{ "BMASM_Bink_Sound_51.Name", "BMASM_Bink_Sound_51" },
		{ "BMASM_Bink_Sound_51.ToolTip", "6 mono tracks in tracks snd_track_start[0..5]" },
		{ "BMASM_Bink_Sound_51LanguageOverride.Comment", "/** 6 mono tracks in tracks 0..5, center language track at snd_track_start */" },
		{ "BMASM_Bink_Sound_51LanguageOverride.DisplayName", "5.1 Surround, Language Override" },
		{ "BMASM_Bink_Sound_51LanguageOverride.Name", "BMASM_Bink_Sound_51LanguageOverride" },
		{ "BMASM_Bink_Sound_51LanguageOverride.ToolTip", "6 mono tracks in tracks 0..5, center language track at snd_track_start" },
		{ "BMASM_Bink_Sound_71.Comment", "/** 8 mono tracks in tracks snd_track_start[0..7] */" },
		{ "BMASM_Bink_Sound_71.DisplayName", "7.1 Surround" },
		{ "BMASM_Bink_Sound_71.Name", "BMASM_Bink_Sound_71" },
		{ "BMASM_Bink_Sound_71.ToolTip", "8 mono tracks in tracks snd_track_start[0..7]" },
		{ "BMASM_Bink_Sound_71LanguageOverride.Comment", "/** 8 mono tracks in tracks 0..7, center language track at snd_track_start */" },
		{ "BMASM_Bink_Sound_71LanguageOverride.DisplayName", "7.1 Surround, Language Override" },
		{ "BMASM_Bink_Sound_71LanguageOverride.Name", "BMASM_Bink_Sound_71LanguageOverride" },
		{ "BMASM_Bink_Sound_71LanguageOverride.ToolTip", "8 mono tracks in tracks 0..7, center language track at snd_track_start" },
		{ "BMASM_Bink_Sound_LanguageOverride.Comment", "/** Mono or stereo sound in track 0, language track at snd_track_start. */" },
		{ "BMASM_Bink_Sound_LanguageOverride.DisplayName", "Language Override" },
		{ "BMASM_Bink_Sound_LanguageOverride.Name", "BMASM_Bink_Sound_LanguageOverride" },
		{ "BMASM_Bink_Sound_LanguageOverride.ToolTip", "Mono or stereo sound in track 0, language track at snd_track_start." },
		{ "BMASM_Bink_Sound_MAX.Name", "BMASM_Bink_Sound_MAX" },
		{ "BMASM_Bink_Sound_None.Comment", "/** Don't open any sound tracks snd_track_start not used. */" },
		{ "BMASM_Bink_Sound_None.DisplayName", "None" },
		{ "BMASM_Bink_Sound_None.Name", "BMASM_Bink_Sound_None" },
		{ "BMASM_Bink_Sound_None.ToolTip", "Don't open any sound tracks snd_track_start not used." },
		{ "BMASM_Bink_Sound_Simple.Comment", "/** Based on filename, OR simply mono or stereo sound in track snd_track_start (default speaker spread). */" },
		{ "BMASM_Bink_Sound_Simple.DisplayName", "Simple" },
		{ "BMASM_Bink_Sound_Simple.Name", "BMASM_Bink_Sound_Simple" },
		{ "BMASM_Bink_Sound_Simple.ToolTip", "Based on filename, OR simply mono or stereo sound in track snd_track_start (default speaker spread)." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enumerates available used to specify the sounds to open at playback w/ bink movies.\n */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates available used to specify the sounds to open at playback w/ bink movies." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BMASM_Bink_Sound_None", (int64)BMASM_Bink_Sound_None },
		{ "BMASM_Bink_Sound_Simple", (int64)BMASM_Bink_Sound_Simple },
		{ "BMASM_Bink_Sound_LanguageOverride", (int64)BMASM_Bink_Sound_LanguageOverride },
		{ "BMASM_Bink_Sound_51", (int64)BMASM_Bink_Sound_51 },
		{ "BMASM_Bink_Sound_51LanguageOverride", (int64)BMASM_Bink_Sound_51LanguageOverride },
		{ "BMASM_Bink_Sound_71", (int64)BMASM_Bink_Sound_71 },
		{ "BMASM_Bink_Sound_71LanguageOverride", (int64)BMASM_Bink_Sound_71LanguageOverride },
		{ "BMASM_Bink_Sound_MAX", (int64)BMASM_Bink_Sound_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
	nullptr,
	"EBinkMediaPlayerBinkSoundTrack",
	"EBinkMediaPlayerBinkSoundTrack",
	Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack()
{
	if (!Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack.InnerSingleton, Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack.InnerSingleton;
}
// ********** End Enum EBinkMediaPlayerBinkSoundTrack **********************************************

// ********** Begin Enum EBinkMediaPlayerBinkDrawStyle *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle;
static UEnum* EBinkMediaPlayerBinkDrawStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle, (UObject*)Z_Construct_UPackage__Script_BinkMediaPlayer(), TEXT("EBinkMediaPlayerBinkDrawStyle"));
	}
	return Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle.OuterSingleton;
}
template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMediaPlayerBinkDrawStyle>()
{
	return EBinkMediaPlayerBinkDrawStyle_StaticEnum();
}
struct Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BMASM_Bink_DS_MAX.Name", "BMASM_Bink_DS_MAX" },
		{ "BMASM_Bink_DS_OverlayFillScreen.Comment", "/** Renders movie in an overlay (UE4 bypass), filling the entire destination rectangle */" },
		{ "BMASM_Bink_DS_OverlayFillScreen.DisplayName", "Overlay Fill Screen" },
		{ "BMASM_Bink_DS_OverlayFillScreen.Name", "BMASM_Bink_DS_OverlayFillScreen" },
		{ "BMASM_Bink_DS_OverlayFillScreen.ToolTip", "Renders movie in an overlay (UE4 bypass), filling the entire destination rectangle" },
		{ "BMASM_Bink_DS_OverlayFillScreenWithAspectRatio.Comment", "/** Renders movie in an overlay (UE4 bypass) and corrects for movie aspect ratio. */" },
		{ "BMASM_Bink_DS_OverlayFillScreenWithAspectRatio.DisplayName", "Overlay Fill Screen with Aspect Ratio" },
		{ "BMASM_Bink_DS_OverlayFillScreenWithAspectRatio.Name", "BMASM_Bink_DS_OverlayFillScreenWithAspectRatio" },
		{ "BMASM_Bink_DS_OverlayFillScreenWithAspectRatio.ToolTip", "Renders movie in an overlay (UE4 bypass) and corrects for movie aspect ratio." },
		{ "BMASM_Bink_DS_OverlayOriginalMovieSize.Comment", "/** Renders movie in an overlay (UE4 bypass), displaying the original movie size and not stretching to fill frame */" },
		{ "BMASM_Bink_DS_OverlayOriginalMovieSize.DisplayName", "Overlay Fill Original Movie Size" },
		{ "BMASM_Bink_DS_OverlayOriginalMovieSize.Name", "BMASM_Bink_DS_OverlayOriginalMovieSize" },
		{ "BMASM_Bink_DS_OverlayOriginalMovieSize.ToolTip", "Renders movie in an overlay (UE4 bypass), displaying the original movie size and not stretching to fill frame" },
		{ "BMASM_Bink_DS_OverlaySpecificDestinationRectangle.Comment", "/** Renders movie in an overlay (UE4 bypass), rendering to the specific rectangle specified (same as FillScreen) */" },
		{ "BMASM_Bink_DS_OverlaySpecificDestinationRectangle.DisplayName", "Overlay Specific Destination Rectangle" },
		{ "BMASM_Bink_DS_OverlaySpecificDestinationRectangle.Name", "BMASM_Bink_DS_OverlaySpecificDestinationRectangle" },
		{ "BMASM_Bink_DS_OverlaySpecificDestinationRectangle.ToolTip", "Renders movie in an overlay (UE4 bypass), rendering to the specific rectangle specified (same as FillScreen)" },
		{ "BMASM_Bink_DS_RenderToTexture.Comment", "/** Renders movie to the destination texture (default UE4 functionality) */" },
		{ "BMASM_Bink_DS_RenderToTexture.DisplayName", "Render to Texture" },
		{ "BMASM_Bink_DS_RenderToTexture.Name", "BMASM_Bink_DS_RenderToTexture" },
		{ "BMASM_Bink_DS_RenderToTexture.ToolTip", "Renders movie to the destination texture (default UE4 functionality)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enumerates available bink buffering modes.\n */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates available bink buffering modes." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BMASM_Bink_DS_RenderToTexture", (int64)BMASM_Bink_DS_RenderToTexture },
		{ "BMASM_Bink_DS_OverlayFillScreenWithAspectRatio", (int64)BMASM_Bink_DS_OverlayFillScreenWithAspectRatio },
		{ "BMASM_Bink_DS_OverlayOriginalMovieSize", (int64)BMASM_Bink_DS_OverlayOriginalMovieSize },
		{ "BMASM_Bink_DS_OverlayFillScreen", (int64)BMASM_Bink_DS_OverlayFillScreen },
		{ "BMASM_Bink_DS_OverlaySpecificDestinationRectangle", (int64)BMASM_Bink_DS_OverlaySpecificDestinationRectangle },
		{ "BMASM_Bink_DS_MAX", (int64)BMASM_Bink_DS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
	nullptr,
	"EBinkMediaPlayerBinkDrawStyle",
	"EBinkMediaPlayerBinkDrawStyle",
	Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle()
{
	if (!Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle.InnerSingleton, Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle.InnerSingleton;
}
// ********** End Enum EBinkMediaPlayerBinkDrawStyle ***********************************************

// ********** Begin Delegate FOnBinkMediaPlayerMediaClosed *****************************************
struct Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multicast delegate that is invoked when a media player's media has been closed. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast delegate that is invoked when a media player's media has been closed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer, nullptr, "OnBinkMediaPlayerMediaClosed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBinkMediaPlayerMediaClosed_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaClosed)
{
	OnBinkMediaPlayerMediaClosed.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnBinkMediaPlayerMediaClosed *******************************************

// ********** Begin Delegate FOnBinkMediaPlayerMediaOpened *****************************************
struct Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics
{
	struct _Script_BinkMediaPlayer_eventOnBinkMediaPlayerMediaOpened_Parms
	{
		FString OpenedUrl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multicast delegate that is invoked when a media player's media has been opened. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast delegate that is invoked when a media player's media has been opened." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OpenedUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::NewProp_OpenedUrl = { "OpenedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BinkMediaPlayer_eventOnBinkMediaPlayerMediaOpened_Parms, OpenedUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::NewProp_OpenedUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer, nullptr, "OnBinkMediaPlayerMediaOpened__DelegateSignature", Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::_Script_BinkMediaPlayer_eventOnBinkMediaPlayerMediaOpened_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::_Script_BinkMediaPlayer_eventOnBinkMediaPlayerMediaOpened_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBinkMediaPlayerMediaOpened_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaOpened, const FString& OpenedUrl)
{
	struct _Script_BinkMediaPlayer_eventOnBinkMediaPlayerMediaOpened_Parms
	{
		FString OpenedUrl;
	};
	_Script_BinkMediaPlayer_eventOnBinkMediaPlayerMediaOpened_Parms Parms;
	Parms.OpenedUrl=OpenedUrl;
	OnBinkMediaPlayerMediaOpened.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBinkMediaPlayerMediaOpened *******************************************

// ********** Begin Delegate FOnBinkMediaPlayerMediaReachedEnd *************************************
struct Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multicast delegate that is invoked when a media player's media has finished playing. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast delegate that is invoked when a media player's media has finished playing." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer, nullptr, "OnBinkMediaPlayerMediaReachedEnd__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBinkMediaPlayerMediaReachedEnd_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaReachedEnd)
{
	OnBinkMediaPlayerMediaReachedEnd.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnBinkMediaPlayerMediaReachedEnd ***************************************

// ********** Begin Delegate FOnBinkMediaPlayerMediaEvent ******************************************
struct Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multicast delegate that is invoked when a media event occurred in the player. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast delegate that is invoked when a media event occurred in the player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer, nullptr, "OnBinkMediaPlayerMediaEvent__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBinkMediaPlayerMediaEvent_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaEvent)
{
	OnBinkMediaPlayerMediaEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnBinkMediaPlayerMediaEvent ********************************************

// ********** Begin Class UBinkMediaPlayer Function CanPause ***************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics
{
	struct BinkMediaPlayer_eventCanPause_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether media playback can be paused right now.\n\x09 *\n\x09 * Playback can be paused if the media supports pausing and if it is currently playing.\n\x09 *\n\x09 * @return true if pausing playback can be paused, false otherwise.\n\x09 * @see CanPlay, Pause\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether media playback can be paused right now.\n\nPlayback can be paused if the media supports pausing and if it is currently playing.\n\n@return true if pausing playback can be paused, false otherwise.\n@see CanPlay, Pause" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventCanPause_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventCanPause_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "CanPause", Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::BinkMediaPlayer_eventCanPause_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::BinkMediaPlayer_eventCanPause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_CanPause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execCanPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPause();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function CanPause *****************************************

// ********** Begin Class UBinkMediaPlayer Function CanPlay ****************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics
{
	struct BinkMediaPlayer_eventCanPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether media playback can be started right now.\n\x09 *\n\x09 * @return true if playback can be started, false otherwise.\n\x09 * @see CanPause, Play\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether media playback can be started right now.\n\n@return true if playback can be started, false otherwise.\n@see CanPause, Play" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventCanPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventCanPlay_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "CanPlay", Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::BinkMediaPlayer_eventCanPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::BinkMediaPlayer_eventCanPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_CanPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execCanPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlay();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function CanPlay ******************************************

// ********** Begin Class UBinkMediaPlayer Function CloseUrl ***************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Closes the specified media URL.\n\x09 *\n\x09 * @param NewUrl The URL to open.\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetUrl\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Closes the specified media URL.\n\n@param NewUrl The URL to open.\n@return true on success, false otherwise.\n@see GetUrl" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "CloseUrl", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execCloseUrl)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseUrl();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function CloseUrl *****************************************

// ********** Begin Class UBinkMediaPlayer Function Draw *******************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics
{
	struct BinkMediaPlayer_eventDraw_Parms
	{
		UTexture* texture;
		bool tonemap;
		int32 out_nits;
		float alpha;
		bool srgb_decode;
		bool hdr;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Draws this bink to the specified texture\n\x09 */" },
#endif
		{ "CPP_Default_alpha", "1.000000" },
		{ "CPP_Default_hdr", "false" },
		{ "CPP_Default_out_nits", "10000" },
		{ "CPP_Default_srgb_decode", "false" },
		{ "CPP_Default_tonemap", "false" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws this bink to the specified texture" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
	static void NewProp_tonemap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_tonemap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_out_nits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_alpha;
	static void NewProp_srgb_decode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_srgb_decode;
	static void NewProp_hdr_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hdr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkMediaPlayer_eventDraw_Parms, texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_tonemap_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventDraw_Parms*)Obj)->tonemap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_tonemap = { "tonemap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventDraw_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_tonemap_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_out_nits = { "out_nits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkMediaPlayer_eventDraw_Parms, out_nits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkMediaPlayer_eventDraw_Parms, alpha), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_srgb_decode_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventDraw_Parms*)Obj)->srgb_decode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_srgb_decode = { "srgb_decode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventDraw_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_srgb_decode_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_hdr_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventDraw_Parms*)Obj)->hdr = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_hdr = { "hdr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventDraw_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_hdr_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_tonemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_out_nits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_srgb_decode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_hdr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "Draw", Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::BinkMediaPlayer_eventDraw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::BinkMediaPlayer_eventDraw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_Draw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execDraw)
{
	P_GET_OBJECT(UTexture,Z_Param_texture);
	P_GET_UBOOL(Z_Param_tonemap);
	P_GET_PROPERTY(FIntProperty,Z_Param_out_nits);
	P_GET_PROPERTY(FFloatProperty,Z_Param_alpha);
	P_GET_UBOOL(Z_Param_srgb_decode);
	P_GET_UBOOL(Z_Param_hdr);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Draw(Z_Param_texture,Z_Param_tonemap,Z_Param_out_nits,Z_Param_alpha,Z_Param_srgb_decode,Z_Param_hdr);
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function Draw *********************************************

// ********** Begin Class UBinkMediaPlayer Function GetDuration ************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics
{
	struct BinkMediaPlayer_eventGetDuration_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the media's duration.\n\x09 *\n\x09 * @return A time span representing the duration.\n\x09 * @see GetTime, Seek\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the media's duration.\n\n@return A time span representing the duration.\n@see GetTime, Seek" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkMediaPlayer_eventGetDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "GetDuration", Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::BinkMediaPlayer_eventGetDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::BinkMediaPlayer_eventGetDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_GetDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execGetDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=P_THIS->GetDuration();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function GetDuration **************************************

// ********** Begin Class UBinkMediaPlayer Function GetRate ****************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics
{
	struct BinkMediaPlayer_eventGetRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the media's current playback rate.\n\x09 *\n\x09 * @return The playback rate.\n\x09 * @see SetRate, SupportsRate\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the media's current playback rate.\n\n@return The playback rate.\n@see SetRate, SupportsRate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkMediaPlayer_eventGetRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "GetRate", Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::BinkMediaPlayer_eventGetRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::BinkMediaPlayer_eventGetRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_GetRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execGetRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRate();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function GetRate ******************************************

// ********** Begin Class UBinkMediaPlayer Function GetTime ****************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics
{
	struct BinkMediaPlayer_eventGetTime_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the media's current playback time.\n\x09 *\n\x09 * @return Playback time.\n\x09 * @see GetDuration, Seek\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the media's current playback time.\n\n@return Playback time.\n@see GetDuration, Seek" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkMediaPlayer_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "GetTime", Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::BinkMediaPlayer_eventGetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::BinkMediaPlayer_eventGetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_GetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execGetTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=P_THIS->GetTime();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function GetTime ******************************************

// ********** Begin Class UBinkMediaPlayer Function GetUrl *****************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics
{
	struct BinkMediaPlayer_eventGetUrl_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the URL of the currently loaded media, if any.\n\x09 *\n\x09 * @return Media URL, or empty string if no media was loaded.\n\x09 * @see OpenUrl\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the URL of the currently loaded media, if any.\n\n@return Media URL, or empty string if no media was loaded.\n@see OpenUrl" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkMediaPlayer_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "GetUrl", Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::BinkMediaPlayer_eventGetUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::BinkMediaPlayer_eventGetUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_GetUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execGetUrl)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUrl();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function GetUrl *******************************************

// ********** Begin Class UBinkMediaPlayer Function IsGotoing **************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics
{
	struct BinkMediaPlayer_eventIsGotoing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether playback is \"GoTo'ing\".\n\x09 *\n\x09 * @return true if playback is gotoing, false otherwise.\n\x09 * @see IsPaused, IsPlaying, Stop\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether playback is \"GoTo'ing\".\n\n@return true if playback is gotoing, false otherwise.\n@see IsPaused, IsPlaying, Stop" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventIsGotoing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventIsGotoing_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "IsGotoing", Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::BinkMediaPlayer_eventIsGotoing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::BinkMediaPlayer_eventIsGotoing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execIsGotoing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGotoing();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function IsGotoing ****************************************

// ********** Begin Class UBinkMediaPlayer Function IsInitialized **********************************
struct Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics
{
	struct BinkMediaPlayer_eventIsInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether this player has been initialized with a media source.\n\x09 *\n\x09 * @return true if a media source is associated with this player.\n\x09 * @see OpenUrl\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether this player has been initialized with a media source.\n\n@return true if a media source is associated with this player.\n@see OpenUrl" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventIsInitialized_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "IsInitialized", Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::BinkMediaPlayer_eventIsInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::BinkMediaPlayer_eventIsInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execIsInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInitialized();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function IsInitialized ************************************

// ********** Begin Class UBinkMediaPlayer Function IsLooping **************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics
{
	struct BinkMediaPlayer_eventIsLooping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether playback is looping.\n\x09 *\n\x09 * @return true if looping, false otherwise.\n\x09 * @see SetLooping\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether playback is looping.\n\n@return true if looping, false otherwise.\n@see SetLooping" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventIsLooping_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "IsLooping", Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::BinkMediaPlayer_eventIsLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::BinkMediaPlayer_eventIsLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_IsLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execIsLooping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLooping();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function IsLooping ****************************************

// ********** Begin Class UBinkMediaPlayer Function IsPaused ***************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics
{
	struct BinkMediaPlayer_eventIsPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether playback is currently paused.\n\x09 *\n\x09 * @return true if playback is paused, false otherwise.\n\x09 * @see CanPause, IsPlaying, IsStopped, Pause\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether playback is currently paused.\n\n@return true if playback is paused, false otherwise.\n@see CanPause, IsPlaying, IsStopped, Pause" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventIsPaused_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "IsPaused", Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::BinkMediaPlayer_eventIsPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::BinkMediaPlayer_eventIsPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_IsPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execIsPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPaused();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function IsPaused *****************************************

// ********** Begin Class UBinkMediaPlayer Function IsPlaying **************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics
{
	struct BinkMediaPlayer_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether playback has started.\n\x09 *\n\x09 * @return true if playback has started, false otherwise.\n\x09 * @see CanPlay, IsPaused, IsStopped, Play\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether playback has started.\n\n@return true if playback has started, false otherwise.\n@see CanPlay, IsPaused, IsStopped, Play" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "IsPlaying", Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::BinkMediaPlayer_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::BinkMediaPlayer_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function IsPlaying ****************************************

// ********** Begin Class UBinkMediaPlayer Function IsStopped **************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics
{
	struct BinkMediaPlayer_eventIsStopped_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether playback has stopped.\n\x09 *\n\x09 * @return true if playback has stopped, false otherwise.\n\x09 * @see IsPaused, IsPlaying, Stop\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether playback has stopped.\n\n@return true if playback has stopped, false otherwise.\n@see IsPaused, IsPlaying, Stop" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventIsStopped_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventIsStopped_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "IsStopped", Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::BinkMediaPlayer_eventIsStopped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::BinkMediaPlayer_eventIsStopped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_IsStopped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execIsStopped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStopped();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function IsStopped ****************************************

// ********** Begin Class UBinkMediaPlayer Function OpenUrl ****************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics
{
	struct BinkMediaPlayer_eventOpenUrl_Parms
	{
		FString NewUrl;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Opens the specified media URL.\n\x09 *\n\x09 * @param NewUrl The URL to open.\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetUrl\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Opens the specified media URL.\n\n@param NewUrl The URL to open.\n@return true on success, false otherwise.\n@see GetUrl" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewUrl;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_NewUrl = { "NewUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkMediaPlayer_eventOpenUrl_Parms, NewUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewUrl_MetaData), NewProp_NewUrl_MetaData) };
void Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventOpenUrl_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventOpenUrl_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_NewUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "OpenUrl", Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::BinkMediaPlayer_eventOpenUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::BinkMediaPlayer_eventOpenUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execOpenUrl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewUrl);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OpenUrl(Z_Param_NewUrl);
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function OpenUrl ******************************************

// ********** Begin Class UBinkMediaPlayer Function Pause ******************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics
{
	struct BinkMediaPlayer_eventPause_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pauses media playback.\n\x09 *\n\x09 * This is the same as setting the playback rate to 0.0.\n\x09 *\n\x09 * @return true if playback is being paused, false otherwise.\n\x09 * @see CanPause, Play, Rewind, Seek, SetRate\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pauses media playback.\n\nThis is the same as setting the playback rate to 0.0.\n\n@return true if playback is being paused, false otherwise.\n@see CanPause, Play, Rewind, Seek, SetRate" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventPause_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventPause_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "Pause", Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::BinkMediaPlayer_eventPause_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::BinkMediaPlayer_eventPause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Pause();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function Pause ********************************************

// ********** Begin Class UBinkMediaPlayer Function Play *******************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics
{
	struct BinkMediaPlayer_eventPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts media playback.\n\x09 *\n\x09 * This is the same as setting the playback rate to 1.0.\n\x09 *\n\x09 * @return true if playback is starting, false otherwise.\n\x09 * @see CanPlay, Pause, Rewind, Seek, SetRate\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts media playback.\n\nThis is the same as setting the playback rate to 1.0.\n\n@return true if playback is starting, false otherwise.\n@see CanPlay, Pause, Rewind, Seek, SetRate" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventPlay_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "Play", Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::BinkMediaPlayer_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::BinkMediaPlayer_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function Play *********************************************

// ********** Begin Class UBinkMediaPlayer Function Rewind *****************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics
{
	struct BinkMediaPlayer_eventRewind_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Rewinds the media to the beginning.\n\x09 *\n\x09 * This is the same as seeking to zero time.\n\x09 *\n\x09 * @return true if rewinding, false otherwise.\n\x09 * @see GetTime, Pause, Play, Seek\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rewinds the media to the beginning.\n\nThis is the same as seeking to zero time.\n\n@return true if rewinding, false otherwise.\n@see GetTime, Pause, Play, Seek" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventRewind_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventRewind_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "Rewind", Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::BinkMediaPlayer_eventRewind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::BinkMediaPlayer_eventRewind_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_Rewind()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execRewind)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Rewind();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function Rewind *******************************************

// ********** Begin Class UBinkMediaPlayer Function Seek *******************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics
{
	struct BinkMediaPlayer_eventSeek_Parms
	{
		FTimespan InTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Seeks to the specified playback time.\n\x09 *\n\x09 * @param InTime The playback time to set.\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetTime, Rewind\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seeks to the specified playback time.\n\n@param InTime The playback time to set.\n@return true on success, false otherwise.\n@see GetTime, Rewind" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkMediaPlayer_eventSeek_Parms, InTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTime_MetaData), NewProp_InTime_MetaData) };
void Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventSeek_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventSeek_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "Seek", Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::BinkMediaPlayer_eventSeek_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::BinkMediaPlayer_eventSeek_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_Seek()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execSeek)
{
	P_GET_STRUCT_REF(FTimespan,Z_Param_Out_InTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Seek(Z_Param_Out_InTime);
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function Seek *********************************************

// ********** Begin Class UBinkMediaPlayer Function SetLooping *************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics
{
	struct BinkMediaPlayer_eventSetLooping_Parms
	{
		bool InLooping;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enables or disables playback looping.\n\x09 *\n\x09 * @param Looping Whether playback should be looped.\n\x09 * @return true on success, false otherwise.\n\x09 * @see IsLooping\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables playback looping.\n\n@param Looping Whether playback should be looped.\n@return true on success, false otherwise.\n@see IsLooping" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_InLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InLooping;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_InLooping_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventSetLooping_Parms*)Obj)->InLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_InLooping = { "InLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_InLooping_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventSetLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_InLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "SetLooping", Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::BinkMediaPlayer_eventSetLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::BinkMediaPlayer_eventSetLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_SetLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execSetLooping)
{
	P_GET_UBOOL(Z_Param_InLooping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetLooping(Z_Param_InLooping);
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function SetLooping ***************************************

// ********** Begin Class UBinkMediaPlayer Function SetRate ****************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics
{
	struct BinkMediaPlayer_eventSetRate_Parms
	{
		float Rate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Changes the media's playback rate.\n\x09 *\n\x09 * @param Rate The playback rate to set.\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetRate, SupportsRate\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the media's playback rate.\n\n@param Rate The playback rate to set.\n@return true on success, false otherwise.\n@see GetRate, SupportsRate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkMediaPlayer_eventSetRate_Parms, Rate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventSetRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventSetRate_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "SetRate", Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::BinkMediaPlayer_eventSetRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::BinkMediaPlayer_eventSetRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_SetRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execSetRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetRate(Z_Param_Rate);
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function SetRate ******************************************

// ********** Begin Class UBinkMediaPlayer Function SetVolume **************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics
{
	struct BinkMediaPlayer_eventSetVolume_Parms
	{
		float Rate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Changes the media's volume\n\x09 *\n\x09 * @param Rate The playback volume to set. 0 to 1\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the media's volume\n\n@param Rate The playback volume to set. 0 to 1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkMediaPlayer_eventSetVolume_Parms, Rate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::NewProp_Rate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "SetVolume", Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::BinkMediaPlayer_eventSetVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::BinkMediaPlayer_eventSetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_SetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execSetVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolume(Z_Param_Rate);
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function SetVolume ****************************************

// ********** Begin Class UBinkMediaPlayer Function Stop *******************************************
struct Z_Construct_UFunction_UBinkMediaPlayer_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops playback and unloads the video from memory. If you want to start the video again you'll need to call InitializePlayer.\n\x09 * MediaEvent will broadcast EMediaEvent::MediaClosed.\n\x09 * @return true on success, false otherwise.\n\x09 * @see InitializePlayer, IsStopped, Play\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops playback and unloads the video from memory. If you want to start the video again you'll need to call InitializePlayer.\nMediaEvent will broadcast EMediaEvent::MediaClosed.\n@return true on success, false otherwise.\n@see InitializePlayer, IsStopped, Play" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_Stop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function Stop *********************************************

// ********** Begin Class UBinkMediaPlayer Function SupportsRate ***********************************
struct Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics
{
	struct BinkMediaPlayer_eventSupportsRate_Parms
	{
		float Rate;
		bool Unthinned;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether the specified playback rate is supported.\n\x09 *\n\x09 * @param Rate The playback rate to check.\n\x09 * @param Unthinned Whether no frames should be dropped at the given rate.\n\x09 * @see SupportsScrubbing, SupportsSeeking\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether the specified playback rate is supported.\n\n@param Rate The playback rate to check.\n@param Unthinned Whether no frames should be dropped at the given rate.\n@see SupportsScrubbing, SupportsSeeking" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static void NewProp_Unthinned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Unthinned;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkMediaPlayer_eventSupportsRate_Parms, Rate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_Unthinned_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventSupportsRate_Parms*)Obj)->Unthinned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_Unthinned = { "Unthinned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventSupportsRate_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_Unthinned_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventSupportsRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventSupportsRate_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_Unthinned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "SupportsRate", Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::BinkMediaPlayer_eventSupportsRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::BinkMediaPlayer_eventSupportsRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execSupportsRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
	P_GET_UBOOL(Z_Param_Unthinned);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SupportsRate(Z_Param_Rate,Z_Param_Unthinned);
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function SupportsRate *************************************

// ********** Begin Class UBinkMediaPlayer Function SupportsScrubbing ******************************
struct Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics
{
	struct BinkMediaPlayer_eventSupportsScrubbing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether the currently loaded media supports scrubbing.\n\x09 *\n\x09 * @return true if scrubbing is supported, false otherwise.\n\x09 * @see SupportsRate, SupportsSeeking\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether the currently loaded media supports scrubbing.\n\n@return true if scrubbing is supported, false otherwise.\n@see SupportsRate, SupportsSeeking" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventSupportsScrubbing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventSupportsScrubbing_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "SupportsScrubbing", Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::BinkMediaPlayer_eventSupportsScrubbing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::BinkMediaPlayer_eventSupportsScrubbing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execSupportsScrubbing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SupportsScrubbing();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function SupportsScrubbing ********************************

// ********** Begin Class UBinkMediaPlayer Function SupportsSeeking ********************************
struct Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics
{
	struct BinkMediaPlayer_eventSupportsSeeking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether the currently loaded media can jump to a certain position.\n\x09 *\n\x09 * @return true if seeking is supported, false otherwise.\n\x09 * @see SupportsRate, SupportsScrubbing\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether the currently loaded media can jump to a certain position.\n\n@return true if seeking is supported, false otherwise.\n@see SupportsRate, SupportsScrubbing" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BinkMediaPlayer_eventSupportsSeeking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BinkMediaPlayer_eventSupportsSeeking_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "SupportsSeeking", Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::BinkMediaPlayer_eventSupportsSeeking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::BinkMediaPlayer_eventSupportsSeeking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaPlayer::execSupportsSeeking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SupportsSeeking();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaPlayer Function SupportsSeeking **********************************

// ********** Begin Class UBinkMediaPlayer *********************************************************
void UBinkMediaPlayer::StaticRegisterNativesUBinkMediaPlayer()
{
	UClass* Class = UBinkMediaPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanPause", &UBinkMediaPlayer::execCanPause },
		{ "CanPlay", &UBinkMediaPlayer::execCanPlay },
		{ "CloseUrl", &UBinkMediaPlayer::execCloseUrl },
		{ "Draw", &UBinkMediaPlayer::execDraw },
		{ "GetDuration", &UBinkMediaPlayer::execGetDuration },
		{ "GetRate", &UBinkMediaPlayer::execGetRate },
		{ "GetTime", &UBinkMediaPlayer::execGetTime },
		{ "GetUrl", &UBinkMediaPlayer::execGetUrl },
		{ "IsGotoing", &UBinkMediaPlayer::execIsGotoing },
		{ "IsInitialized", &UBinkMediaPlayer::execIsInitialized },
		{ "IsLooping", &UBinkMediaPlayer::execIsLooping },
		{ "IsPaused", &UBinkMediaPlayer::execIsPaused },
		{ "IsPlaying", &UBinkMediaPlayer::execIsPlaying },
		{ "IsStopped", &UBinkMediaPlayer::execIsStopped },
		{ "OpenUrl", &UBinkMediaPlayer::execOpenUrl },
		{ "Pause", &UBinkMediaPlayer::execPause },
		{ "Play", &UBinkMediaPlayer::execPlay },
		{ "Rewind", &UBinkMediaPlayer::execRewind },
		{ "Seek", &UBinkMediaPlayer::execSeek },
		{ "SetLooping", &UBinkMediaPlayer::execSetLooping },
		{ "SetRate", &UBinkMediaPlayer::execSetRate },
		{ "SetVolume", &UBinkMediaPlayer::execSetVolume },
		{ "Stop", &UBinkMediaPlayer::execStop },
		{ "SupportsRate", &UBinkMediaPlayer::execSupportsRate },
		{ "SupportsScrubbing", &UBinkMediaPlayer::execSupportsScrubbing },
		{ "SupportsSeeking", &UBinkMediaPlayer::execSupportsSeeking },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBinkMediaPlayer;
UClass* UBinkMediaPlayer::GetPrivateStaticClass()
{
	using TClass = UBinkMediaPlayer;
	if (!Z_Registration_Info_UClass_UBinkMediaPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BinkMediaPlayer"),
			Z_Registration_Info_UClass_UBinkMediaPlayer.InnerSingleton,
			StaticRegisterNativesUBinkMediaPlayer,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBinkMediaPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister()
{
	return UBinkMediaPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBinkMediaPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Implements a media player asset that can play movies and other media.\n *\n * This class is represents a media URL along with a corresponding media player\n * for exposing media playback functionality to the Engine and to Blueprints.\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "BinkMediaPlayer.h" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements a media player asset that can play movies and other media.\n\nThis class is represents a media URL along with a corresponding media player\nfor exposing media playback functionality to the Engine and to Blueprints." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMediaClosed_MetaData[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds a delegate that is invoked when a media source has been closed. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds a delegate that is invoked when a media source has been closed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMediaOpened_MetaData[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds a delegate that is invoked when a media source has been opened. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds a delegate that is invoked when a media source has been opened." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMediaReachedEnd_MetaData[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds a delegate that is invoked when a media source has been opened. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds a delegate that is invoked when a media source has been opened." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackSuspended_MetaData[] = {
		{ "Category", "Media|BinkMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A delegate that is invoked when media playback has been suspended. */" },
#endif
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A delegate that is invoked when media playback has been suspended." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Looping_MetaData[] = {
		{ "Category", "Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether playback should loop when it reaches the end. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether playback should loop when it reaches the end." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartImmediately_MetaData[] = {
		{ "Category", "Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether playback start immediately, or wait for blueprint to start it. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether playback start immediately, or wait for blueprint to start it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayedOpen_MetaData[] = {
		{ "Category", "Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** To reduce memory use, don't immediately open the bink until it is first played. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To reduce memory use, don't immediately open the bink until it is first played." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinkDestinationUpperLeft_MetaData[] = {
		{ "Category", "Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to specify the sounds to open at playback. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to specify the sounds to open at playback." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinkDestinationLowerRight_MetaData[] = {
		{ "Category", "Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to specify the sounds to open at playback. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to specify the sounds to open at playback." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "Category", "Source" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The path or URL to the media file to be played. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The path or URL to the media file to be played." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinkBufferMode_MetaData[] = {
		{ "Category", "Source" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to specify the how the video should be buffered. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to specify the how the video should be buffered." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinkSoundTrack_MetaData[] = {
		{ "Category", "Source" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to specify the sounds to open at playback. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to specify the sounds to open at playback." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinkSoundTrackStart_MetaData[] = {
		{ "Category", "Source" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to specify the sounds to open at playback. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to specify the sounds to open at playback." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinkDrawStyle_MetaData[] = {
		{ "Category", "Source" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to specify how the movie is drawn. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to specify how the movie is drawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinkLayerDepth_MetaData[] = {
		{ "Category", "Source" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to specify the render order. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to specify the render order." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMediaClosed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMediaOpened;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMediaReachedEnd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackSuspended;
	static void NewProp_Looping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Looping;
	static void NewProp_StartImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartImmediately;
	static void NewProp_DelayedOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DelayedOpen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BinkDestinationUpperLeft;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BinkDestinationLowerRight;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BinkBufferMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BinkSoundTrack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BinkSoundTrackStart;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BinkDrawStyle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BinkLayerDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBinkMediaPlayer_CanPause, "CanPause" }, // 1654430346
		{ &Z_Construct_UFunction_UBinkMediaPlayer_CanPlay, "CanPlay" }, // 1890691592
		{ &Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl, "CloseUrl" }, // 1539862771
		{ &Z_Construct_UFunction_UBinkMediaPlayer_Draw, "Draw" }, // 1429152942
		{ &Z_Construct_UFunction_UBinkMediaPlayer_GetDuration, "GetDuration" }, // 892097954
		{ &Z_Construct_UFunction_UBinkMediaPlayer_GetRate, "GetRate" }, // 2221758749
		{ &Z_Construct_UFunction_UBinkMediaPlayer_GetTime, "GetTime" }, // 501032862
		{ &Z_Construct_UFunction_UBinkMediaPlayer_GetUrl, "GetUrl" }, // 3959071419
		{ &Z_Construct_UFunction_UBinkMediaPlayer_IsGotoing, "IsGotoing" }, // 2841374292
		{ &Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized, "IsInitialized" }, // 3331821725
		{ &Z_Construct_UFunction_UBinkMediaPlayer_IsLooping, "IsLooping" }, // 1998457952
		{ &Z_Construct_UFunction_UBinkMediaPlayer_IsPaused, "IsPaused" }, // 3059597705
		{ &Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying, "IsPlaying" }, // 2560923778
		{ &Z_Construct_UFunction_UBinkMediaPlayer_IsStopped, "IsStopped" }, // 2031287826
		{ &Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl, "OpenUrl" }, // 123802626
		{ &Z_Construct_UFunction_UBinkMediaPlayer_Pause, "Pause" }, // 2128945743
		{ &Z_Construct_UFunction_UBinkMediaPlayer_Play, "Play" }, // 3454699247
		{ &Z_Construct_UFunction_UBinkMediaPlayer_Rewind, "Rewind" }, // 3328790076
		{ &Z_Construct_UFunction_UBinkMediaPlayer_Seek, "Seek" }, // 466309932
		{ &Z_Construct_UFunction_UBinkMediaPlayer_SetLooping, "SetLooping" }, // 1919002974
		{ &Z_Construct_UFunction_UBinkMediaPlayer_SetRate, "SetRate" }, // 4097607425
		{ &Z_Construct_UFunction_UBinkMediaPlayer_SetVolume, "SetVolume" }, // 3842205104
		{ &Z_Construct_UFunction_UBinkMediaPlayer_Stop, "Stop" }, // 3390691853
		{ &Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate, "SupportsRate" }, // 3571070550
		{ &Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing, "SupportsScrubbing" }, // 4253880480
		{ &Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking, "SupportsSeeking" }, // 2827247163
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinkMediaPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaClosed = { "OnMediaClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaPlayer, OnMediaClosed), Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMediaClosed_MetaData), NewProp_OnMediaClosed_MetaData) }; // 3338263702
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaOpened = { "OnMediaOpened", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaPlayer, OnMediaOpened), Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMediaOpened_MetaData), NewProp_OnMediaOpened_MetaData) }; // 4209479452
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaReachedEnd = { "OnMediaReachedEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaPlayer, OnMediaReachedEnd), Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMediaReachedEnd_MetaData), NewProp_OnMediaReachedEnd_MetaData) }; // 1631587853
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnPlaybackSuspended = { "OnPlaybackSuspended", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaPlayer, OnPlaybackSuspended), Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaybackSuspended_MetaData), NewProp_OnPlaybackSuspended_MetaData) }; // 2238158705
void Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_Looping_SetBit(void* Obj)
{
	((UBinkMediaPlayer*)Obj)->Looping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBinkMediaPlayer), &Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Looping_MetaData), NewProp_Looping_MetaData) };
void Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_StartImmediately_SetBit(void* Obj)
{
	((UBinkMediaPlayer*)Obj)->StartImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_StartImmediately = { "StartImmediately", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBinkMediaPlayer), &Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_StartImmediately_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartImmediately_MetaData), NewProp_StartImmediately_MetaData) };
void Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_DelayedOpen_SetBit(void* Obj)
{
	((UBinkMediaPlayer*)Obj)->DelayedOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_DelayedOpen = { "DelayedOpen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBinkMediaPlayer), &Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_DelayedOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayedOpen_MetaData), NewProp_DelayedOpen_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationUpperLeft = { "BinkDestinationUpperLeft", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaPlayer, BinkDestinationUpperLeft), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinkDestinationUpperLeft_MetaData), NewProp_BinkDestinationUpperLeft_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationLowerRight = { "BinkDestinationLowerRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaPlayer, BinkDestinationLowerRight), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinkDestinationLowerRight_MetaData), NewProp_BinkDestinationLowerRight_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaPlayer, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkBufferMode = { "BinkBufferMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaPlayer, BinkBufferMode), Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinkBufferMode_MetaData), NewProp_BinkBufferMode_MetaData) }; // 3130091699
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrack = { "BinkSoundTrack", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaPlayer, BinkSoundTrack), Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinkSoundTrack_MetaData), NewProp_BinkSoundTrack_MetaData) }; // 923735841
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrackStart = { "BinkSoundTrackStart", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaPlayer, BinkSoundTrackStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinkSoundTrackStart_MetaData), NewProp_BinkSoundTrackStart_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDrawStyle = { "BinkDrawStyle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaPlayer, BinkDrawStyle), Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinkDrawStyle_MetaData), NewProp_BinkDrawStyle_MetaData) }; // 389959691
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkLayerDepth = { "BinkLayerDepth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaPlayer, BinkLayerDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinkLayerDepth_MetaData), NewProp_BinkLayerDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBinkMediaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaReachedEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnPlaybackSuspended,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_Looping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_StartImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_DelayedOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationUpperLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationLowerRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkBufferMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrackStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDrawStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkLayerDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBinkMediaPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinkMediaPlayer_Statics::ClassParams = {
	&UBinkMediaPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBinkMediaPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBinkMediaPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBinkMediaPlayer()
{
	if (!Z_Registration_Info_UClass_UBinkMediaPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinkMediaPlayer.OuterSingleton, Z_Construct_UClass_UBinkMediaPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBinkMediaPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBinkMediaPlayer);
UBinkMediaPlayer::~UBinkMediaPlayer() {}
// ********** End Class UBinkMediaPlayer ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h__Script_BinkMediaPlayer_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBinkMediaPlayerBinkBufferModes_StaticEnum, TEXT("EBinkMediaPlayerBinkBufferModes"), &Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3130091699U) },
		{ EBinkMediaPlayerBinkSoundTrack_StaticEnum, TEXT("EBinkMediaPlayerBinkSoundTrack"), &Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 923735841U) },
		{ EBinkMediaPlayerBinkDrawStyle_StaticEnum, TEXT("EBinkMediaPlayerBinkDrawStyle"), &Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 389959691U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBinkMediaPlayer, UBinkMediaPlayer::StaticClass, TEXT("UBinkMediaPlayer"), &Z_Registration_Info_UClass_UBinkMediaPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinkMediaPlayer), 1946299910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h__Script_BinkMediaPlayer_63529803(TEXT("/Script/BinkMediaPlayer"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h__Script_BinkMediaPlayer_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h__Script_BinkMediaPlayer_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h__Script_BinkMediaPlayer_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h__Script_BinkMediaPlayer_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
