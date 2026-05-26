// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenerationMonster.h"

#ifdef CREATEMODPLUGIN_GenerationMonster_generated_h
#error "GenerationMonster.generated.h already included, missing '#pragma once' in GenerationMonster.h"
#endif
#define CREATEMODPLUGIN_GenerationMonster_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModNameIDArray ***************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModNameIDArray_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModNameIDArray;
// ********** End ScriptStruct FModNameIDArray *****************************************************

// ********** Begin ScriptStruct FModThreatPoolInfo ************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModThreatPoolInfo;
// ********** End ScriptStruct FModThreatPoolInfo **************************************************

// ********** Begin ScriptStruct FModGenerationData ************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModGenerationData_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FModGenerationData;
// ********** End ScriptStruct FModGenerationData **************************************************

// ********** Begin ScriptStruct FModGenerationSetData *********************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModGenerationSetData_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModGenerationSetData;
// ********** End ScriptStruct FModGenerationSetData ***********************************************

// ********** Begin ScriptStruct FModGenerationProbabilityInfluence ********************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModGenerationProbabilityInfluence;
// ********** End ScriptStruct FModGenerationProbabilityInfluence **********************************

// ********** Begin ScriptStruct FModGenerationRuleData ********************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h_160_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModGenerationRuleData_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModGenerationRuleData;
// ********** End ScriptStruct FModGenerationRuleData **********************************************

// ********** Begin ScriptStruct FModMonsterGenerationConfig ***************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h_195_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModMonsterGenerationConfig;
// ********** End ScriptStruct FModMonsterGenerationConfig *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h

// ********** Begin Enum EModThreatType ************************************************************
#define FOREACH_ENUM_EMODTHREATTYPE(op) \
	op(EModThreatType::None) \
	op(EModThreatType::BanditAttack) \
	op(EModThreatType::HostileSectAttack) \
	op(EModThreatType::MechanismAttack) \
	op(EModThreatType::ZombieRebirth) \
	op(EModThreatType::GhostBride) \
	op(EModThreatType::AnimalMigration) \
	op(EModThreatType::SearingSun) \
	op(EModThreatType::FrozenSoil) \
	op(EModThreatType::Plague) \
	op(EModThreatType::Tornado) \
	op(EModThreatType::LoggingAutomaton) \
	op(EModThreatType::MiningAutomaton) 

enum class EModThreatType : uint8;
template<> struct TIsUEnumClass<EModThreatType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModThreatType>();
// ********** End Enum EModThreatType **************************************************************

// ********** Begin Enum EModGenerationRuleType ****************************************************
#define FOREACH_ENUM_EMODGENERATIONRULETYPE(op) \
	op(EModGenerationRuleType::None) \
	op(EModGenerationRuleType::Fixed) \
	op(EModGenerationRuleType::Probability) 

enum class EModGenerationRuleType : uint8;
template<> struct TIsUEnumClass<EModGenerationRuleType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModGenerationRuleType>();
// ********** End Enum EModGenerationRuleType ******************************************************

// ********** Begin Enum EModInfluenceType *********************************************************
#define FOREACH_ENUM_EMODINFLUENCETYPE(op) \
	op(EModInfluenceType::None) \
	op(EModInfluenceType::LackCharacterNumber) 

enum class EModInfluenceType : uint8;
template<> struct TIsUEnumClass<EModInfluenceType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModInfluenceType>();
// ********** End Enum EModInfluenceType ***********************************************************

// ********** Begin Enum EModGenerationActorType ***************************************************
#define FOREACH_ENUM_EMODGENERATIONACTORTYPE(op) \
	op(EModGenerationActorType::None) \
	op(EModGenerationActorType::Recruit) \
	op(EModGenerationActorType::SpawnMonster) \
	op(EModGenerationActorType::SpawnMonsterNest) \
	op(EModGenerationActorType::SpawnPostStationChivalrous) \
	op(EModGenerationActorType::SpawnPostStationPeddler) \
	op(EModGenerationActorType::SpawnPostStationChivalrousByPresetID) 

enum class EModGenerationActorType : uint8;
template<> struct TIsUEnumClass<EModGenerationActorType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModGenerationActorType>();
// ********** End Enum EModGenerationActorType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
