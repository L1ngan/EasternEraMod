// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/AsyncAction_PushContentToLayerForPlayer.h"

#ifdef COMMONGAME_AsyncAction_PushContentToLayerForPlayer_generated_h
#error "AsyncAction_PushContentToLayerForPlayer.generated.h already included, missing '#pragma once' in AsyncAction_PushContentToLayerForPlayer.h"
#endif
#define COMMONGAME_AsyncAction_PushContentToLayerForPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerController;
class UAsyncAction_PushContentToLayerForPlayer;
class UCommonActivatableWidget;
struct FGameplayTag;

// ********** Begin Delegate FPushContentToLayerForPlayerAsyncDelegate *****************************
#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_17_DELEGATE \
COMMONGAME_API void FPushContentToLayerForPlayerAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& PushContentToLayerForPlayerAsyncDelegate, UCommonActivatableWidget* UserWidget);


// ********** End Delegate FPushContentToLayerForPlayerAsyncDelegate *******************************

// ********** Begin Class UAsyncAction_PushContentToLayerForPlayer *********************************
#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRemoveWidgetFromLayer); \
	DECLARE_FUNCTION(execPushContentToLayerForPlayer);


COMMONGAME_API UClass* Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_NoRegister();

#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncAction_PushContentToLayerForPlayer(); \
	friend struct Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONGAME_API UClass* Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncAction_PushContentToLayerForPlayer, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_NoRegister) \
	DECLARE_SERIALIZER(UAsyncAction_PushContentToLayerForPlayer)


#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_PushContentToLayerForPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_PushContentToLayerForPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_PushContentToLayerForPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_PushContentToLayerForPlayer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncAction_PushContentToLayerForPlayer(UAsyncAction_PushContentToLayerForPlayer&&) = delete; \
	UAsyncAction_PushContentToLayerForPlayer(const UAsyncAction_PushContentToLayerForPlayer&) = delete; \
	NO_API virtual ~UAsyncAction_PushContentToLayerForPlayer();


#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_22_PROLOG
#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_25_RPC_WRAPPERS \
	FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_25_INCLASS \
	FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncAction_PushContentToLayerForPlayer;

// ********** End Class UAsyncAction_PushContentToLayerForPlayer ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
