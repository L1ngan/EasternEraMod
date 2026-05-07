// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BinkMediaPlayerFactoryNew.h"

#ifdef BINKMEDIAPLAYEREDITOR_BinkMediaPlayerFactoryNew_generated_h
#error "BinkMediaPlayerFactoryNew.generated.h already included, missing '#pragma once' in BinkMediaPlayerFactoryNew.h"
#endif
#define BINKMEDIAPLAYEREDITOR_BinkMediaPlayerFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBinkMediaPlayerFactoryNew ***********************************************
BINKMEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UBinkMediaPlayerFactoryNew_NoRegister();

#define FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactoryNew_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBinkMediaPlayerFactoryNew(); \
	friend struct Z_Construct_UClass_UBinkMediaPlayerFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BINKMEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UBinkMediaPlayerFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UBinkMediaPlayerFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BinkMediaPlayerEditor"), Z_Construct_UClass_UBinkMediaPlayerFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UBinkMediaPlayerFactoryNew)


#define FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactoryNew_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBinkMediaPlayerFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBinkMediaPlayerFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBinkMediaPlayerFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBinkMediaPlayerFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBinkMediaPlayerFactoryNew(UBinkMediaPlayerFactoryNew&&) = delete; \
	UBinkMediaPlayerFactoryNew(const UBinkMediaPlayerFactoryNew&) = delete; \
	NO_API virtual ~UBinkMediaPlayerFactoryNew();


#define FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactoryNew_h_10_PROLOG
#define FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactoryNew_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactoryNew_h_13_INCLASS \
	FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactoryNew_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBinkMediaPlayerFactoryNew;

// ********** End Class UBinkMediaPlayerFactoryNew *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
