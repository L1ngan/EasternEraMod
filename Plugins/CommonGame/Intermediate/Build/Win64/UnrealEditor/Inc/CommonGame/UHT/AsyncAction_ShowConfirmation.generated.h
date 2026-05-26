// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/AsyncAction_ShowConfirmation.h"

#ifdef COMMONGAME_AsyncAction_ShowConfirmation_generated_h
#error "AsyncAction_ShowConfirmation.generated.h already included, missing '#pragma once' in AsyncAction_ShowConfirmation.h"
#endif
#define COMMONGAME_AsyncAction_ShowConfirmation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncAction_ShowConfirmation;
class UCommonGameDialogDescriptor;
class UObject;
enum class ECommonMessagingResult : uint8;

// ********** Begin Delegate FCommonMessagingResultMCDelegate **************************************
#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_17_DELEGATE \
COMMONGAME_API void FCommonMessagingResultMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& CommonMessagingResultMCDelegate, ECommonMessagingResult Result);


// ********** End Delegate FCommonMessagingResultMCDelegate ****************************************

// ********** Begin Class UAsyncAction_ShowConfirmation ********************************************
#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execShowConfirmationCustom); \
	DECLARE_FUNCTION(execShowConfirmationOkCancelButtonLabel); \
	DECLARE_FUNCTION(execShowConfirmationOkCancel); \
	DECLARE_FUNCTION(execShowConfirmationOkButtonLabel); \
	DECLARE_FUNCTION(execShowConfirmationYesNoLabel); \
	DECLARE_FUNCTION(execShowConfirmationYesNo);


COMMONGAME_API UClass* Z_Construct_UClass_UAsyncAction_ShowConfirmation_NoRegister();

#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncAction_ShowConfirmation(); \
	friend struct Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONGAME_API UClass* Z_Construct_UClass_UAsyncAction_ShowConfirmation_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncAction_ShowConfirmation, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), Z_Construct_UClass_UAsyncAction_ShowConfirmation_NoRegister) \
	DECLARE_SERIALIZER(UAsyncAction_ShowConfirmation)


#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_ShowConfirmation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_ShowConfirmation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_ShowConfirmation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_ShowConfirmation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncAction_ShowConfirmation(UAsyncAction_ShowConfirmation&&) = delete; \
	UAsyncAction_ShowConfirmation(const UAsyncAction_ShowConfirmation&) = delete; \
	NO_API virtual ~UAsyncAction_ShowConfirmation();


#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_22_PROLOG
#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_25_RPC_WRAPPERS \
	FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_25_INCLASS \
	FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncAction_ShowConfirmation;

// ********** End Class UAsyncAction_ShowConfirmation **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CommonGame_Source_Public_Actions_AsyncAction_ShowConfirmation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
