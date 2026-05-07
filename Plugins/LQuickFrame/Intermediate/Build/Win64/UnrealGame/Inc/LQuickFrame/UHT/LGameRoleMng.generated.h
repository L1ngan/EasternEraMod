// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mode/LGameRoleMng.h"

#ifdef LQUICKFRAME_LGameRoleMng_generated_h
#error "LGameRoleMng.generated.h already included, missing '#pragma once' in LGameRoleMng.h"
#endif
#define LQUICKFRAME_LGameRoleMng_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AController;
struct FGuid;

// ********** Begin Delegate FOnRegistedRoleChange *************************************************
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h_7_DELEGATE \
LQUICKFRAME_API void FOnRegistedRoleChange_DelegateWrapper(const FMulticastScriptDelegate& OnRegistedRoleChange, FGuid Id, bool bRegist);


// ********** End Delegate FOnRegistedRoleChange ***************************************************

// ********** Begin Class ULGameRoleMng ************************************************************
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllRoles); \
	DECLARE_FUNCTION(execFindRole); \
	DECLARE_FUNCTION(execUnRegistRole); \
	DECLARE_FUNCTION(execRegistRole);


LQUICKFRAME_API UClass* Z_Construct_UClass_ULGameRoleMng_NoRegister();

#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULGameRoleMng(); \
	friend struct Z_Construct_UClass_ULGameRoleMng_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ULGameRoleMng_NoRegister(); \
public: \
	DECLARE_CLASS2(ULGameRoleMng, ULActorComp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ULGameRoleMng_NoRegister) \
	DECLARE_SERIALIZER(ULGameRoleMng)


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGameRoleMng(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULGameRoleMng(ULGameRoleMng&&) = delete; \
	ULGameRoleMng(const ULGameRoleMng&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGameRoleMng); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGameRoleMng); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGameRoleMng) \
	NO_API virtual ~ULGameRoleMng();


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h_10_PROLOG
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h_13_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULGameRoleMng;

// ********** End Class ULGameRoleMng **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
