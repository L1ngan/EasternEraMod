// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/LLog.h"

#ifdef LQUICKFRAME_LLog_generated_h
#error "LLog.generated.h already included, missing '#pragma once' in LLog.h"
#endif
#define LQUICKFRAME_LLog_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULLog ********************************************************************
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLog_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoggerError); \
	DECLARE_FUNCTION(execLoggerWarning); \
	DECLARE_FUNCTION(execLogger);


LQUICKFRAME_API UClass* Z_Construct_UClass_ULLog_NoRegister();

#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLog_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULLog(); \
	friend struct Z_Construct_UClass_ULLog_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ULLog_NoRegister(); \
public: \
	DECLARE_CLASS2(ULLog, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ULLog_NoRegister) \
	DECLARE_SERIALIZER(ULLog)


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLog_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULLog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULLog(ULLog&&) = delete; \
	ULLog(const ULLog&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULLog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULLog); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULLog) \
	NO_API virtual ~ULLog();


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLog_h_7_PROLOG
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLog_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLog_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLog_h_10_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLog_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULLog;

// ********** End Class ULLog **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLog_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
