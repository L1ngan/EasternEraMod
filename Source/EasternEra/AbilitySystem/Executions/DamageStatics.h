// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "EasternEra/AbilitySystem/Attributes/EastRimWorldCombatSet.h"
#include "EasternEra/AbilitySystem/Attributes/EastRimWorldHealthSet.h"

struct FDamageStatics
{
	FGameplayEffectAttributeCaptureDefinition Source_MinAttackDef;
	FGameplayEffectAttributeCaptureDefinition Source_MaxAttackDef;
	FGameplayEffectAttributeCaptureDefinition Source_PierceIncreaseDef;
	FGameplayEffectAttributeCaptureDefinition Source_SlashIncreaseDef;
	FGameplayEffectAttributeCaptureDefinition Source_BluntIncreaseDef;
	FGameplayEffectAttributeCaptureDefinition Source_PoisonIncreaseDef;
	FGameplayEffectAttributeCaptureDefinition Source_TrueQiIncreaseDef;
	FGameplayEffectAttributeCaptureDefinition Source_PierceCriticalDef;
	FGameplayEffectAttributeCaptureDefinition Source_SlashCriticalDef;
	FGameplayEffectAttributeCaptureDefinition Source_BluntCriticalDef;
	FGameplayEffectAttributeCaptureDefinition Source_SubjoinPoisonAttackDef;
	FGameplayEffectAttributeCaptureDefinition Source_SubjoinTrueQiAttackDef;
	FGameplayEffectAttributeCaptureDefinition Source_CriticalStrikeMinValueDef;
	FGameplayEffectAttributeCaptureDefinition Source_CriticalStrikeMaxValueDef;
	
	FGameplayEffectAttributeCaptureDefinition Target_PierceResistanceDef;
	FGameplayEffectAttributeCaptureDefinition Target_SlashResistanceDef;
	FGameplayEffectAttributeCaptureDefinition Target_BluntResistanceDef;
	FGameplayEffectAttributeCaptureDefinition Target_PoisonResistanceDef;
	FGameplayEffectAttributeCaptureDefinition Target_TrueQiResistanceDef;
	FGameplayEffectAttributeCaptureDefinition Target_DefenseDef;
	FGameplayEffectAttributeCaptureDefinition Target_DefenseSupplementDef;

	FGameplayEffectAttributeCaptureDefinition Source_DamageTypeDef;
	FGameplayEffectAttributeCaptureDefinition Target_ResistanceSupplementDef;

	FGameplayEffectAttributeCaptureDefinition Source_DamageShieldEnhancedDamage;
	FGameplayEffectAttributeCaptureDefinition Target_DamageShield; // 罡气护盾

	FGameplayEffectAttributeCaptureDefinition Source_PierceFixedAttackDef;
	FGameplayEffectAttributeCaptureDefinition Source_SlashFixedAttackDef;
	FGameplayEffectAttributeCaptureDefinition Source_BluntFixedAttackDef;
	FGameplayEffectAttributeCaptureDefinition Source_PoisonFixedAttackDef;
	FGameplayEffectAttributeCaptureDefinition Source_TrueQiFixedAttackDef;
	FGameplayEffectAttributeCaptureDefinition Source_CriticalIncreasedInjuryDef;
	
	FGameplayEffectAttributeCaptureDefinition Source_FinalDamageIncreaseDef;
	
	FGameplayEffectAttributeCaptureDefinition Target_DodgeDef;
	FGameplayEffectAttributeCaptureDefinition Source_AttackAccuracyDef;
	
	
	FDamageStatics()
	{
		Source_MinAttackDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetMinAttackAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_MaxAttackDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetMaxAttackAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_PierceIncreaseDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetPierceIncreaseAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_SlashIncreaseDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetSlashIncreaseAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_BluntIncreaseDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetBluntIncreaseAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_PoisonIncreaseDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetPoisonIncreaseAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_TrueQiIncreaseDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetTrueQiIncreaseAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		
		Source_PierceCriticalDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetPierceCriticalAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_SlashCriticalDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetSlashCriticalAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_BluntCriticalDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetBluntCriticalAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_SubjoinPoisonAttackDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetSubjoinPoisonAttackAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_SubjoinTrueQiAttackDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetSubjoinTrueQiAttackAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_CriticalStrikeMinValueDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetCriticalStrikeMinValueAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_CriticalStrikeMaxValueDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetCriticalStrikeMaxValueAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		
		Target_PierceResistanceDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetPierceResistanceAttribute(), EGameplayEffectAttributeCaptureSource::Target, true);
		Target_SlashResistanceDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetSlashResistanceAttribute(), EGameplayEffectAttributeCaptureSource::Target, true);
		Target_BluntResistanceDef= FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetBluntResistanceAttribute(), EGameplayEffectAttributeCaptureSource::Target, true);
		Target_PoisonResistanceDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetPoisonResistanceAttribute(), EGameplayEffectAttributeCaptureSource::Target, true);
		Target_TrueQiResistanceDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetTrueQiResistanceAttribute(), EGameplayEffectAttributeCaptureSource::Target, true);
		Target_DefenseDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetDefenseAttribute(), EGameplayEffectAttributeCaptureSource::Target, true);
		Target_DefenseSupplementDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetDefenseSupplementAttribute(), EGameplayEffectAttributeCaptureSource::Target, true);
		
		Source_DamageTypeDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetDamageTypeAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Target_ResistanceSupplementDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetResistanceSupplementAttribute(), EGameplayEffectAttributeCaptureSource::Target, true);

		Source_DamageShieldEnhancedDamage = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetDamageShieldEnhanceDamageAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Target_DamageShield = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldHealthSet::GetDamageShieldAttribute(), EGameplayEffectAttributeCaptureSource::Target, true);
		
		Source_PierceFixedAttackDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetPierceFixedAttackAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_SlashFixedAttackDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetSlashFixedAttackAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_BluntFixedAttackDef= FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetBluntFixedAttackAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_PoisonFixedAttackDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetPoisonFixedAttackAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_TrueQiFixedAttackDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetTrueQiFixedAttackAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_CriticalIncreasedInjuryDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetCriticalIncreasedInjuryAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		
		Source_FinalDamageIncreaseDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetFinalDamageIncreaseAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Target_DodgeDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetDodgeAttribute(), EGameplayEffectAttributeCaptureSource::Target, true);
		Source_AttackAccuracyDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetAttackAccuracyAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);

	}
};

static FDamageStatics& DamageStatics()
{
	static FDamageStatics Statics;
	return Statics;
}

struct FBuildingDamageStatics
{
	FGameplayEffectAttributeCaptureDefinition Source_MinAttackDef;
	FGameplayEffectAttributeCaptureDefinition Source_MaxAttackDef;
	FBuildingDamageStatics()
	{
		Source_MinAttackDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetMinAttackAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		Source_MaxAttackDef = FGameplayEffectAttributeCaptureDefinition(UEastRimWorldCombatSet::GetMaxAttackAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
	}
};
static FBuildingDamageStatics & BuildingDamageStatics()
{
	static FBuildingDamageStatics Statics;
	return Statics;
}