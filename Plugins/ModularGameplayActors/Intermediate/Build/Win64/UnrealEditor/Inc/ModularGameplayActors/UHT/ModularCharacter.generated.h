// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularCharacter.h"

#ifdef MODULARGAMEPLAYACTORS_ModularCharacter_generated_h
#error "ModularCharacter.generated.h already included, missing '#pragma once' in ModularCharacter.h"
#endif
#define MODULARGAMEPLAYACTORS_ModularCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AModularCharacter ********************************************************
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter_NoRegister();

#define FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModularCharacter(); \
	friend struct Z_Construct_UClass_AModularCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AModularCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplayActors"), Z_Construct_UClass_AModularCharacter_NoRegister) \
	DECLARE_SERIALIZER(AModularCharacter)


#define FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModularCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AModularCharacter(AModularCharacter&&) = delete; \
	AModularCharacter(const AModularCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularCharacter) \
	NO_API virtual ~AModularCharacter();


#define FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularCharacter_h_12_PROLOG
#define FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AModularCharacter;

// ********** End Class AModularCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
