// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Role/LAICtrl.h"

#ifdef LQUICKFRAME_LAICtrl_generated_h
#error "LAICtrl.generated.h already included, missing '#pragma once' in LAICtrl.h"
#endif
#define LQUICKFRAME_LAICtrl_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALAICtrl *****************************************************************
LQUICKFRAME_API UClass* Z_Construct_UClass_ALAICtrl_NoRegister();

#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LAICtrl_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALAICtrl(); \
	friend struct Z_Construct_UClass_ALAICtrl_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ALAICtrl_NoRegister(); \
public: \
	DECLARE_CLASS2(ALAICtrl, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ALAICtrl_NoRegister) \
	DECLARE_SERIALIZER(ALAICtrl) \
	virtual UObject* _getUObject() const override { return const_cast<ALAICtrl*>(this); }


#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LAICtrl_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALAICtrl(ALAICtrl&&) = delete; \
	ALAICtrl(const ALAICtrl&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALAICtrl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALAICtrl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALAICtrl) \
	NO_API virtual ~ALAICtrl();


#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LAICtrl_h_8_PROLOG
#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LAICtrl_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LAICtrl_h_11_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LAICtrl_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALAICtrl;

// ********** End Class ALAICtrl *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LAICtrl_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
