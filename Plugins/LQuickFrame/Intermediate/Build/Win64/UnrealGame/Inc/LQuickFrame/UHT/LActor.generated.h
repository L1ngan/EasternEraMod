// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/LActor.h"

#ifdef LQUICKFRAME_LActor_generated_h
#error "LActor.generated.h already included, missing '#pragma once' in LActor.h"
#endif
#define LQUICKFRAME_LActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALActor ******************************************************************
LQUICKFRAME_API UClass* Z_Construct_UClass_ALActor_NoRegister();

#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALActor(); \
	friend struct Z_Construct_UClass_ALActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ALActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ALActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ALActor_NoRegister) \
	DECLARE_SERIALIZER(ALActor) \
	virtual UObject* _getUObject() const override { return const_cast<ALActor*>(this); }


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LActor_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALActor(ALActor&&) = delete; \
	ALActor(const ALActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALActor) \
	NO_API virtual ~ALActor();


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LActor_h_8_PROLOG
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LActor_h_11_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALActor;

// ********** End Class ALActor ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
