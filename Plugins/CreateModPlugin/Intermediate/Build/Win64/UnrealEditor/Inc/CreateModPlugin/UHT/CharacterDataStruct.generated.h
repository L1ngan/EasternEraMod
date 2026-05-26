// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterDataStruct.h"

#ifdef CREATEMODPLUGIN_CharacterDataStruct_generated_h
#error "CharacterDataStruct.generated.h already included, missing '#pragma once' in CharacterDataStruct.h"
#endif
#define CREATEMODPLUGIN_CharacterDataStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModHumanData *****************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModHumanData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModHumanData;
// ********** End ScriptStruct FModHumanData *******************************************************

// ********** Begin ScriptStruct FModOutputData ****************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h_196_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModOutputData_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModOutputData;
// ********** End ScriptStruct FModOutputData ******************************************************

// ********** Begin ScriptStruct FModOutputDatas ***************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h_230_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModOutputDatas_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModOutputDatas;
// ********** End ScriptStruct FModOutputDatas *****************************************************

// ********** Begin ScriptStruct FModIDs ***********************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h_238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModIDs_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModIDs;
// ********** End ScriptStruct FModIDs *************************************************************

// ********** Begin ScriptStruct FModAllTypeItemDrop ***********************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModAllTypeItemDrop;
// ********** End ScriptStruct FModAllTypeItemDrop *************************************************

// ********** Begin ScriptStruct FModAnimalData ****************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h_268_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModAnimalData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModAnimalData;
// ********** End ScriptStruct FModAnimalData ******************************************************

// ********** Begin ScriptStruct FModCharacterActionAbilityAnimSections ****************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h_434_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModCharacterActionAbilityAnimSections;
// ********** End ScriptStruct FModCharacterActionAbilityAnimSections ******************************

// ********** Begin ScriptStruct FModAnimalActionAbility *******************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h_463_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModAnimalActionAbility;
// ********** End ScriptStruct FModAnimalActionAbility *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h

// ********** Begin Enum EModHitType ***************************************************************
#define FOREACH_ENUM_EMODHITTYPE(op) \
	op(EModHitType::None) \
	op(EModHitType::NormalLeftHit) \
	op(EModHitType::NormalRightHit) \
	op(EModHitType::NormalBackHit) \
	op(EModHitType::NormalFrontHit) 

enum class EModHitType : uint8;
template<> struct TIsUEnumClass<EModHitType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModHitType>();
// ********** End Enum EModHitType *****************************************************************

// ********** Begin Enum EModArmorType *************************************************************
#define FOREACH_ENUM_EMODARMORTYPE(op) \
	op(EModArmorType::None) \
	op(EModArmorType::Helmet) \
	op(EModArmorType::Bracer) \
	op(EModArmorType::Armor) \
	op(EModArmorType::Pants) \
	op(EModArmorType::Shoes) \
	op(EModArmorType::Eyes) \
	op(EModArmorType::Max) 

enum class EModArmorType : uint8;
template<> struct TIsUEnumClass<EModArmorType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModArmorType>();
// ********** End Enum EModArmorType ***************************************************************

// ********** Begin Enum EModAnimalAgeStage ********************************************************
#define FOREACH_ENUM_EMODANIMALAGESTAGE(op) \
	op(EModAnimalAgeStage::None) \
	op(EModAnimalAgeStage::Childhood) \
	op(EModAnimalAgeStage::Adulthood) \
	op(EModAnimalAgeStage::Oldhood) 

enum class EModAnimalAgeStage : uint8;
template<> struct TIsUEnumClass<EModAnimalAgeStage> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModAnimalAgeStage>();
// ********** End Enum EModAnimalAgeStage **********************************************************

// ********** Begin Enum EModAnimalBodyType ********************************************************
#define FOREACH_ENUM_EMODANIMALBODYTYPE(op) \
	op(EModAnimalBodyType::Normal) \
	op(EModAnimalBodyType::Big) \
	op(EModAnimalBodyType::Small) \
	op(EModAnimalBodyType::Huge) \
	op(EModAnimalBodyType::Mini) 

enum class EModAnimalBodyType : uint8;
template<> struct TIsUEnumClass<EModAnimalBodyType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModAnimalBodyType>();
// ********** End Enum EModAnimalBodyType **********************************************************

// ********** Begin Enum EModSpeciesType ***********************************************************
#define FOREACH_ENUM_EMODSPECIESTYPE(op) \
	op(EModSpeciesType::Human) \
	op(EModSpeciesType::Beast) \
	op(EModSpeciesType::Birds) \
	op(EModSpeciesType::RobotHuman) \
	op(EModSpeciesType::RobotBeast) \
	op(EModSpeciesType::RobotBirds) 

enum class EModSpeciesType : uint8;
template<> struct TIsUEnumClass<EModSpeciesType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModSpeciesType>();
// ********** End Enum EModSpeciesType *************************************************************

// ********** Begin Enum EModAnimalFunc ************************************************************
#define FOREACH_ENUM_EMODANIMALFUNC(op) \
	op(EModAnimalFunc::Follow) \
	op(EModAnimalFunc::Patrol) \
	op(EModAnimalFunc::BeControlled) 

enum class EModAnimalFunc : uint8;
template<> struct TIsUEnumClass<EModAnimalFunc> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModAnimalFunc>();
// ********** End Enum EModAnimalFunc **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
