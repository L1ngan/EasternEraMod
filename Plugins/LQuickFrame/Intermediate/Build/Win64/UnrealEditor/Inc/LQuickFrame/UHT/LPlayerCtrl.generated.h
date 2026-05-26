// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Role/LPlayerCtrl.h"

#ifdef LQUICKFRAME_LPlayerCtrl_generated_h
#error "LPlayerCtrl.generated.h already included, missing '#pragma once' in LPlayerCtrl.h"
#endif
#define LQUICKFRAME_LPlayerCtrl_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALPlayerCtrl *************************************************************
LQUICKFRAME_API UClass* Z_Construct_UClass_ALPlayerCtrl_NoRegister();

#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LPlayerCtrl_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALPlayerCtrl(); \
	friend struct Z_Construct_UClass_ALPlayerCtrl_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ALPlayerCtrl_NoRegister(); \
public: \
	DECLARE_CLASS2(ALPlayerCtrl, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ALPlayerCtrl_NoRegister) \
	DECLARE_SERIALIZER(ALPlayerCtrl)


#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LPlayerCtrl_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALPlayerCtrl(ALPlayerCtrl&&) = delete; \
	ALPlayerCtrl(const ALPlayerCtrl&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALPlayerCtrl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALPlayerCtrl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALPlayerCtrl) \
	NO_API virtual ~ALPlayerCtrl();


#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LPlayerCtrl_h_7_PROLOG
#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LPlayerCtrl_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LPlayerCtrl_h_10_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LPlayerCtrl_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALPlayerCtrl;

// ********** End Class ALPlayerCtrl ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LPlayerCtrl_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
