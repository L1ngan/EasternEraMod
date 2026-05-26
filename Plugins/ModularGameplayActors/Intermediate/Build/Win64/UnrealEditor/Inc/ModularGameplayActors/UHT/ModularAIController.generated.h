// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularAIController.h"

#ifdef MODULARGAMEPLAYACTORS_ModularAIController_generated_h
#error "ModularAIController.generated.h already included, missing '#pragma once' in ModularAIController.h"
#endif
#define MODULARGAMEPLAYACTORS_ModularAIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AModularAIController *****************************************************
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularAIController_NoRegister();

#define FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModularAIController(); \
	friend struct Z_Construct_UClass_AModularAIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularAIController_NoRegister(); \
public: \
	DECLARE_CLASS2(AModularAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplayActors"), Z_Construct_UClass_AModularAIController_NoRegister) \
	DECLARE_SERIALIZER(AModularAIController)


#define FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularAIController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModularAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AModularAIController(AModularAIController&&) = delete; \
	AModularAIController(const AModularAIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularAIController) \
	NO_API virtual ~AModularAIController();


#define FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularAIController_h_12_PROLOG
#define FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularAIController_h_15_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AModularAIController;

// ********** End Class AModularAIController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularAIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
