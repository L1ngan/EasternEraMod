// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mode/LGameInst.h"

#ifdef LQUICKFRAME_LGameInst_generated_h
#error "LGameInst.generated.h already included, missing '#pragma once' in LGameInst.h"
#endif
#define LQUICKFRAME_LGameInst_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class APawn;
class ULevel;
class UWorld;
enum class EEnterGameMode : uint8;
enum class ESpawnActorCollisionHandlingMethod : uint8;

// ********** Begin Delegate FOnUpdateGamePlaySpeed ************************************************
#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h_10_DELEGATE \
LQUICKFRAME_API void FOnUpdateGamePlaySpeed_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateGamePlaySpeed, float NewSpeed);


// ********** End Delegate FOnUpdateGamePlaySpeed **************************************************

// ********** Begin Class ULGameInst ***************************************************************
#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckLowerThanVersion); \
	DECLARE_FUNCTION(execSetOpenLoadingState); \
	DECLARE_FUNCTION(execGetCurLevel); \
	DECLARE_FUNCTION(execPauseGamePlay); \
	DECLARE_FUNCTION(execGetGamePlaySpeed); \
	DECLARE_FUNCTION(execGetGamePlaySpeedIndex); \
	DECLARE_FUNCTION(execSetGamePlaySpeed); \
	DECLARE_FUNCTION(execRemoveAllPoolByLevel); \
	DECLARE_FUNCTION(execAfterSaveLevelAndBeforeSaveLevel); \
	DECLARE_FUNCTION(execChangeSubLevel); \
	DECLARE_FUNCTION(execCloseSubLevel); \
	DECLARE_FUNCTION(execSaveSubLevel); \
	DECLARE_FUNCTION(execLoadSubLevel); \
	DECLARE_FUNCTION(execShowLoadingScreen); \
	DECLARE_FUNCTION(execOpenGameMainLevel); \
	DECLARE_FUNCTION(execOnClear); \
	DECLARE_FUNCTION(execCloseLoadingScreen); \
	DECLARE_FUNCTION(execPutToPool); \
	DECLARE_FUNCTION(execGetPawn); \
	DECLARE_FUNCTION(execGetActor);


#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h_14_CALLBACK_WRAPPERS
LQUICKFRAME_API UClass* Z_Construct_UClass_ULGameInst_NoRegister();

#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULGameInst(); \
	friend struct Z_Construct_UClass_ULGameInst_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ULGameInst_NoRegister(); \
public: \
	DECLARE_CLASS2(ULGameInst, UCommonGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ULGameInst_NoRegister) \
	DECLARE_SERIALIZER(ULGameInst)


#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULGameInst(ULGameInst&&) = delete; \
	ULGameInst(const ULGameInst&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGameInst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGameInst); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGameInst) \
	NO_API virtual ~ULGameInst();


#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h_11_PROLOG
#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h_14_CALLBACK_WRAPPERS \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h_14_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULGameInst;

// ********** End Class ULGameInst *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
