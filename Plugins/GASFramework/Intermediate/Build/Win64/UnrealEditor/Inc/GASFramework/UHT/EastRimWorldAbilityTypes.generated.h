// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EastRimWorldAbilityTypes.h"

#ifdef GASFRAMEWORK_EastRimWorldAbilityTypes_generated_h
#error "EastRimWorldAbilityTypes.generated.h already included, missing '#pragma once' in EastRimWorldAbilityTypes.h"
#endif
#define GASFRAMEWORK_EastRimWorldAbilityTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayEffect_SetByCaller ***************************************
#define FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics; \
	static class UScriptStruct* StaticStruct();


struct FGameplayEffect_SetByCaller;
// ********** End ScriptStruct FGameplayEffect_SetByCaller *****************************************

// ********** Begin ScriptStruct FAbilityInit ******************************************************
#define FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityInit_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FAbilityInit;
// ********** End ScriptStruct FAbilityInit ********************************************************

// ********** Begin ScriptStruct FEastRimWorldGameplayEffectContainer ******************************
#define FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics; \
	static class UScriptStruct* StaticStruct();


struct FEastRimWorldGameplayEffectContainer;
// ********** End ScriptStruct FEastRimWorldGameplayEffectContainer ********************************

// ********** Begin ScriptStruct FEastRimWorldGameplayEffectContainerSpec **************************
#define FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics; \
	static class UScriptStruct* StaticStruct();


struct FEastRimWorldGameplayEffectContainerSpec;
// ********** End ScriptStruct FEastRimWorldGameplayEffectContainerSpec ****************************

// ********** Begin ScriptStruct FProjectileHitEventData *******************************************
#define FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileHitEventData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FProjectileHitEventData;
// ********** End ScriptStruct FProjectileHitEventData *********************************************

// ********** Begin ScriptStruct FProjectileHitTargetData ******************************************
#define FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h_172_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileHitTargetData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FGameplayAbilityTargetData Super;


struct FProjectileHitTargetData;
// ********** End ScriptStruct FProjectileHitTargetData ********************************************

// ********** Begin ScriptStruct FControlEffectData ************************************************
#define FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlEffectData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FControlEffectData;
// ********** End ScriptStruct FControlEffectData **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h

// ********** Begin Enum EEastRimWorldTargetType ***************************************************
#define FOREACH_ENUM_EEASTRIMWORLDTARGETTYPE(op) \
	op(EEastRimWorldTargetType::Enemies) \
	op(EEastRimWorldTargetType::Owner) \
	op(EEastRimWorldTargetType::Projectile) \
	op(EEastRimWorldTargetType::Teammate) 

enum class EEastRimWorldTargetType : uint8;
template<> struct TIsUEnumClass<EEastRimWorldTargetType> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<EEastRimWorldTargetType>();
// ********** End Enum EEastRimWorldTargetType *****************************************************

// ********** Begin Enum EDamageType ***************************************************************
#define FOREACH_ENUM_EDAMAGETYPE(op) \
	op(EDamageType::None) \
	op(EDamageType::PierceDamage) \
	op(EDamageType::SlashDamage) \
	op(EDamageType::BluntDamage) \
	op(EDamageType::PoisonDamage) \
	op(EDamageType::TrueQiDamage) 

enum class EDamageType : uint8;
template<> struct TIsUEnumClass<EDamageType> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<EDamageType>();
// ********** End Enum EDamageType *****************************************************************

// ********** Begin Enum EEastRimWorldAbilityType **************************************************
#define FOREACH_ENUM_EEASTRIMWORLDABILITYTYPE(op) \
	op(EEastRimWorldAbilityType::PassiveAbility) \
	op(EEastRimWorldAbilityType::GeneralAbility) \
	op(EEastRimWorldAbilityType::ChannelAbility) \
	op(EEastRimWorldAbilityType::ToggleAbility) \
	op(EEastRimWorldAbilityType::ActivateAbility) \
	op(EEastRimWorldAbilityType::TriggerSkill) \
	op(EEastRimWorldAbilityType::StratagemSkill) \
	op(EEastRimWorldAbilityType::BeingControlSkill) 

enum class EEastRimWorldAbilityType : uint8;
template<> struct TIsUEnumClass<EEastRimWorldAbilityType> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<EEastRimWorldAbilityType>();
// ********** End Enum EEastRimWorldAbilityType ****************************************************

// ********** Begin Enum EAbilityAttackType ********************************************************
#define FOREACH_ENUM_EABILITYATTACKTYPE(op) \
	op(EAbilityAttackType::NormalAttack) \
	op(EAbilityAttackType::SkillAttack) \
	op(EAbilityAttackType::None) 

enum class EAbilityAttackType : uint8;
template<> struct TIsUEnumClass<EAbilityAttackType> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<EAbilityAttackType>();
// ********** End Enum EAbilityAttackType **********************************************************

// ********** Begin Enum ETriggerAbilityEffectType *************************************************
#define FOREACH_ENUM_ETRIGGERABILITYEFFECTTYPE(op) \
	op(ETriggerAbilityEffectType::Normal) \
	op(ETriggerAbilityEffectType::ReduceCDs) \
	op(ETriggerAbilityEffectType::ContinueApplyEffects) \
	op(ETriggerAbilityEffectType::CounterattackDamage) 

enum class ETriggerAbilityEffectType : uint8;
template<> struct TIsUEnumClass<ETriggerAbilityEffectType> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<ETriggerAbilityEffectType>();
// ********** End Enum ETriggerAbilityEffectType ***************************************************

// ********** Begin Enum EAbilityUsageScenario *****************************************************
#define FOREACH_ENUM_EABILITYUSAGESCENARIO(op) \
	op(EAbilityUsageScenario::BattleGeneralAbility) \
	op(EAbilityUsageScenario::OtherAbility) \
	op(EAbilityUsageScenario::OffensiveDisplacementAbility) \
	op(EAbilityUsageScenario::KeepAwayFromAbility) 

enum class EAbilityUsageScenario : uint8;
template<> struct TIsUEnumClass<EAbilityUsageScenario> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<EAbilityUsageScenario>();
// ********** End Enum EAbilityUsageScenario *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
