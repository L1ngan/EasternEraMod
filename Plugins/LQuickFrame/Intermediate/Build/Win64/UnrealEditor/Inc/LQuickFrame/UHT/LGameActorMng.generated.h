// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mode/LGameActorMng.h"

#ifdef LQUICKFRAME_LGameActorMng_generated_h
#error "LGameActorMng.generated.h already included, missing '#pragma once' in LGameActorMng.h"
#endif
#define LQUICKFRAME_LGameActorMng_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ACharacter;
class ALActor;
struct FGuid;

// ********** Begin Class ULGameActorMng ***********************************************************
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsFilterAll); \
	DECLARE_FUNCTION(execIsFilterNear); \
	DECLARE_FUNCTION(execGetAllRoles); \
	DECLARE_FUNCTION(execFindActorByGuid); \
	DECLARE_FUNCTION(execFindCharacterByGuid); \
	DECLARE_FUNCTION(execFindNearByClass); \
	DECLARE_FUNCTION(execFindNearByName); \
	DECLARE_FUNCTION(execFindNearByType); \
	DECLARE_FUNCTION(execFindAllByClass); \
	DECLARE_FUNCTION(execFindAllByName); \
	DECLARE_FUNCTION(execFindAllByType); \
	DECLARE_FUNCTION(execUnRegisterByGuid); \
	DECLARE_FUNCTION(execRegisterByGuid); \
	DECLARE_FUNCTION(execUnRegistByClass); \
	DECLARE_FUNCTION(execRegistByClass); \
	DECLARE_FUNCTION(execUnRegistByName); \
	DECLARE_FUNCTION(execRegistByName); \
	DECLARE_FUNCTION(execUnRegistByType); \
	DECLARE_FUNCTION(execRegistByType);


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h_11_CALLBACK_WRAPPERS
LQUICKFRAME_API UClass* Z_Construct_UClass_ULGameActorMng_NoRegister();

#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULGameActorMng(); \
	friend struct Z_Construct_UClass_ULGameActorMng_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ULGameActorMng_NoRegister(); \
public: \
	DECLARE_CLASS2(ULGameActorMng, ULActorComp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ULGameActorMng_NoRegister) \
	DECLARE_SERIALIZER(ULGameActorMng)


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGameActorMng(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULGameActorMng(ULGameActorMng&&) = delete; \
	ULGameActorMng(const ULGameActorMng&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGameActorMng); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGameActorMng); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGameActorMng) \
	NO_API virtual ~ULGameActorMng();


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h_8_PROLOG
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h_11_CALLBACK_WRAPPERS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h_11_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULGameActorMng;

// ********** End Class ULGameActorMng *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
