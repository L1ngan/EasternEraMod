// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LQuickFrameSetting.h"

#ifdef LQUICKFRAME_LQuickFrameSetting_generated_h
#error "LQuickFrameSetting.generated.h already included, missing '#pragma once' in LQuickFrameSetting.h"
#endif
#define LQUICKFRAME_LQuickFrameSetting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULQuickFrameSetting ******************************************************
LQUICKFRAME_API UClass* Z_Construct_UClass_ULQuickFrameSetting_NoRegister();

#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Public_LQuickFrameSetting_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULQuickFrameSetting(); \
	friend struct Z_Construct_UClass_ULQuickFrameSetting_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ULQuickFrameSetting_NoRegister(); \
public: \
	DECLARE_CLASS2(ULQuickFrameSetting, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ULQuickFrameSetting_NoRegister) \
	DECLARE_SERIALIZER(ULQuickFrameSetting) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Public_LQuickFrameSetting_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULQuickFrameSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULQuickFrameSetting(ULQuickFrameSetting&&) = delete; \
	ULQuickFrameSetting(const ULQuickFrameSetting&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULQuickFrameSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULQuickFrameSetting); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULQuickFrameSetting) \
	NO_API virtual ~ULQuickFrameSetting();


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Public_LQuickFrameSetting_h_18_PROLOG
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Public_LQuickFrameSetting_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Public_LQuickFrameSetting_h_21_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Public_LQuickFrameSetting_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULQuickFrameSetting;

// ********** End Class ULQuickFrameSetting ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Public_LQuickFrameSetting_h

// ********** Begin Enum ELLogLevel ****************************************************************
#define FOREACH_ENUM_ELLOGLEVEL(op) \
	op(ELLogLevel::ELLOG_LEVEL_NONE) \
	op(ELLogLevel::ELLOG_LEVEL_ERROR) \
	op(ELLogLevel::ELLOG_LEVEL_Warning) \
	op(ELLogLevel::ELLOG_LEVEL_All) 

enum class ELLogLevel : uint8;
template<> struct TIsUEnumClass<ELLogLevel> { enum { Value = true }; };
template<> LQUICKFRAME_API UEnum* StaticEnum<ELLogLevel>();
// ********** End Enum ELLogLevel ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
