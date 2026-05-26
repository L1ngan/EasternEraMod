// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/LComp.h"

#ifdef LQUICKFRAME_LComp_generated_h
#error "LComp.generated.h already included, missing '#pragma once' in LComp.h"
#endif
#define LQUICKFRAME_LComp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULActorComp **************************************************************
LQUICKFRAME_API UClass* Z_Construct_UClass_ULActorComp_NoRegister();

#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Base_LComp_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULActorComp(); \
	friend struct Z_Construct_UClass_ULActorComp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ULActorComp_NoRegister(); \
public: \
	DECLARE_CLASS2(ULActorComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ULActorComp_NoRegister) \
	DECLARE_SERIALIZER(ULActorComp) \
	virtual UObject* _getUObject() const override { return const_cast<ULActorComp*>(this); }


#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Base_LComp_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULActorComp(ULActorComp&&) = delete; \
	ULActorComp(const ULActorComp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULActorComp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULActorComp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULActorComp) \
	NO_API virtual ~ULActorComp();


#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Base_LComp_h_8_PROLOG
#define FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Base_LComp_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Base_LComp_h_11_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Base_LComp_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULActorComp;

// ********** End Class ULActorComp ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Base_LComp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
