// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BinkMediaPlayerFactory.h"

#ifdef BINKMEDIAPLAYEREDITOR_BinkMediaPlayerFactory_generated_h
#error "BinkMediaPlayerFactory.generated.h already included, missing '#pragma once' in BinkMediaPlayerFactory.h"
#endif
#define BINKMEDIAPLAYEREDITOR_BinkMediaPlayerFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBinkMediaPlayerFactory **************************************************
BINKMEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UBinkMediaPlayerFactory_NoRegister();

#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactory_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBinkMediaPlayerFactory(); \
	friend struct Z_Construct_UClass_UBinkMediaPlayerFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BINKMEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UBinkMediaPlayerFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UBinkMediaPlayerFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BinkMediaPlayerEditor"), Z_Construct_UClass_UBinkMediaPlayerFactory_NoRegister) \
	DECLARE_SERIALIZER(UBinkMediaPlayerFactory)


#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactory_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBinkMediaPlayerFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBinkMediaPlayerFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBinkMediaPlayerFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBinkMediaPlayerFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBinkMediaPlayerFactory(UBinkMediaPlayerFactory&&) = delete; \
	UBinkMediaPlayerFactory(const UBinkMediaPlayerFactory&) = delete; \
	NO_API virtual ~UBinkMediaPlayerFactory();


#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactory_h_9_PROLOG
#define FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactory_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactory_h_12_INCLASS \
	FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactory_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBinkMediaPlayerFactory;

// ********** End Class UBinkMediaPlayerFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaPlayerFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
