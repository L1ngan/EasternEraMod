// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Messaging/CommonGameDialog.h"

#ifdef COMMONGAME_CommonGameDialog_generated_h
#error "CommonGameDialog.generated.h already included, missing '#pragma once' in CommonGameDialog.h"
#endif
#define COMMONGAME_CommonGameDialog_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConfirmationDialogAction *****************************************
#define FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics; \
	COMMONGAME_API static class UScriptStruct* StaticStruct();


struct FConfirmationDialogAction;
// ********** End ScriptStruct FConfirmationDialogAction *******************************************

// ********** Begin Class UCommonGameDialogDescriptor **********************************************
COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameDialogDescriptor_NoRegister();

#define FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonGameDialogDescriptor(); \
	friend struct Z_Construct_UClass_UCommonGameDialogDescriptor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameDialogDescriptor_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonGameDialogDescriptor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), Z_Construct_UClass_UCommonGameDialogDescriptor_NoRegister) \
	DECLARE_SERIALIZER(UCommonGameDialogDescriptor)


#define FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonGameDialogDescriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonGameDialogDescriptor(UCommonGameDialogDescriptor&&) = delete; \
	UCommonGameDialogDescriptor(const UCommonGameDialogDescriptor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonGameDialogDescriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonGameDialogDescriptor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonGameDialogDescriptor) \
	NO_API virtual ~UCommonGameDialogDescriptor();


#define FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h_31_PROLOG
#define FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h_34_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonGameDialogDescriptor;

// ********** End Class UCommonGameDialogDescriptor ************************************************

// ********** Begin Class UCommonGameDialog ********************************************************
COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameDialog_NoRegister();

#define FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonGameDialog(); \
	friend struct Z_Construct_UClass_UCommonGameDialog_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameDialog_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonGameDialog, UCommonActivatableWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonGame"), Z_Construct_UClass_UCommonGameDialog_NoRegister) \
	DECLARE_SERIALIZER(UCommonGameDialog)


#define FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h_63_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonGameDialog(UCommonGameDialog&&) = delete; \
	UCommonGameDialog(const UCommonGameDialog&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonGameDialog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonGameDialog); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCommonGameDialog) \
	NO_API virtual ~UCommonGameDialog();


#define FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h_60_PROLOG
#define FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h_63_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonGameDialog;

// ********** End Class UCommonGameDialog **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_CommonGame_Source_Public_Messaging_CommonGameDialog_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
