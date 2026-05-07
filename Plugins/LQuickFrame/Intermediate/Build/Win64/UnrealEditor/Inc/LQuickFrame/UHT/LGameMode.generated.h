// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mode/LGameMode.h"

#ifdef LQUICKFRAME_LGameMode_generated_h
#error "LGameMode.generated.h already included, missing '#pragma once' in LGameMode.h"
#endif
#define LQUICKFRAME_LGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UActorComponent;
class UObject;

// ********** Begin Class ALGameMode ***************************************************************
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSubLevelLoaded); \
	DECLARE_FUNCTION(execGetModeComp);


LQUICKFRAME_API UClass* Z_Construct_UClass_ALGameMode_NoRegister();

#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameMode_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALGameMode(); \
	friend struct Z_Construct_UClass_ALGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ALGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ALGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ALGameMode_NoRegister) \
	DECLARE_SERIALIZER(ALGameMode)


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameMode_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALGameMode(ALGameMode&&) = delete; \
	ALGameMode(const ALGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALGameMode) \
	NO_API virtual ~ALGameMode();


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameMode_h_7_PROLOG
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameMode_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameMode_h_10_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameMode_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALGameMode;

// ********** End Class ALGameMode *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
