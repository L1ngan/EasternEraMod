// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/LQuickTools.h"

#ifdef LQUICKFRAME_LQuickTools_generated_h
#error "LQuickTools.generated.h already included, missing '#pragma once' in LQuickTools.h"
#endif
#define LQUICKFRAME_LQuickTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AHUD;
class ALGameMode;
class ALPlayerCtrl;
class APawn;
class UActorComponent;
class ULevel;
class ULevelStreaming;
class ULGameInst;
class UObject;
class UWorld;
struct FHitResult;

// ********** Begin Class ULQuickTools *************************************************************
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LQuickTools_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLevelObjectByName); \
	DECLARE_FUNCTION(execGetLevelObject); \
	DECLARE_FUNCTION(execGetLevelStreamingObjectByName); \
	DECLARE_FUNCTION(execGetLevelStreamingObject); \
	DECLARE_FUNCTION(execGetPlayerHUD); \
	DECLARE_FUNCTION(execCustomSplit); \
	DECLARE_FUNCTION(execStrCompare); \
	DECLARE_FUNCTION(execScreenTraceObjects); \
	DECLARE_FUNCTION(execScreenTraceChannel); \
	DECLARE_FUNCTION(execGetActorComp); \
	DECLARE_FUNCTION(execGetPlayerPawn); \
	DECLARE_FUNCTION(execGetPlayerCtrl); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execGetGameInst);


LQUICKFRAME_API UClass* Z_Construct_UClass_ULQuickTools_NoRegister();

#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LQuickTools_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULQuickTools(); \
	friend struct Z_Construct_UClass_ULQuickTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ULQuickTools_NoRegister(); \
public: \
	DECLARE_CLASS2(ULQuickTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ULQuickTools_NoRegister) \
	DECLARE_SERIALIZER(ULQuickTools)


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LQuickTools_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULQuickTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULQuickTools(ULQuickTools&&) = delete; \
	ULQuickTools(const ULQuickTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULQuickTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULQuickTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULQuickTools) \
	NO_API virtual ~ULQuickTools();


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LQuickTools_h_16_PROLOG
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LQuickTools_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LQuickTools_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LQuickTools_h_19_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LQuickTools_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULQuickTools;

// ********** End Class ULQuickTools ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LQuickTools_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
