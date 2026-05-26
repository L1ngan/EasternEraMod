// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/LFile.h"

#ifdef LQUICKFRAME_LFile_generated_h
#error "LFile.generated.h already included, missing '#pragma once' in LFile.h"
#endif
#define LQUICKFRAME_LFile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ULAsyncFile;
class UObject;
struct FSoftClassPath;
struct FSoftObjectPath;

// ********** Begin Class ULFile *******************************************************************
#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadObjectPath); \
	DECLARE_FUNCTION(execLoadClassPath); \
	DECLARE_FUNCTION(execCaptureScreen); \
	DECLARE_FUNCTION(execGetProjPath); \
	DECLARE_FUNCTION(execGetSavePath);


LQUICKFRAME_API UClass* Z_Construct_UClass_ULFile_NoRegister();

#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFile(); \
	friend struct Z_Construct_UClass_ULFile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ULFile_NoRegister(); \
public: \
	DECLARE_CLASS2(ULFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ULFile_NoRegister) \
	DECLARE_SERIALIZER(ULFile)


#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULFile(ULFile&&) = delete; \
	ULFile(const ULFile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFile) \
	NO_API virtual ~ULFile();


#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_10_PROLOG
#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_13_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULFile;

// ********** End Class ULFile *********************************************************************

// ********** Begin Delegate FLLoadObjectCall ******************************************************
#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_40_DELEGATE \
static void FLLoadObjectCall_DelegateWrapper(const FMulticastScriptDelegate& LLoadObjectCall, UObject* Out);


// ********** End Delegate FLLoadObjectCall ********************************************************

// ********** Begin Class ULAsyncFile **************************************************************
#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnLoaded); \
	DECLARE_FUNCTION(execAsyncLoadAndUnloadStreamings); \
	DECLARE_FUNCTION(execAsyncLoadClass); \
	DECLARE_FUNCTION(execAsyncLoadObject);


LQUICKFRAME_API UClass* Z_Construct_UClass_ULAsyncFile_NoRegister();

#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULAsyncFile(); \
	friend struct Z_Construct_UClass_ULAsyncFile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ULAsyncFile_NoRegister(); \
public: \
	DECLARE_CLASS2(ULAsyncFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ULAsyncFile_NoRegister) \
	DECLARE_SERIALIZER(ULAsyncFile)


#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULAsyncFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULAsyncFile(ULAsyncFile&&) = delete; \
	ULAsyncFile(const ULAsyncFile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULAsyncFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULAsyncFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULAsyncFile) \
	NO_API virtual ~ULAsyncFile();


#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_32_PROLOG
#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_35_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULAsyncFile;

// ********** End Class ULAsyncFile ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
