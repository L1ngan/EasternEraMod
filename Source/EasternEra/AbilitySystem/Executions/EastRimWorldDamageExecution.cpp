// Copyright Epic Games, Inc. All Rights Reserved.

#include "EastRimWorldDamageExecution.h"
#include "DamageStatics.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(EastRimWorldDamageExecution)

UEastRimWorldDamageExecution::UEastRimWorldDamageExecution()
{
	RelevantAttributesToCapture.Add(DamageStatics().Source_MinAttackDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_MaxAttackDef);
	
	RelevantAttributesToCapture.Add(DamageStatics().Source_PierceIncreaseDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_SlashIncreaseDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_BluntIncreaseDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_PoisonIncreaseDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_TrueQiIncreaseDef);
	
	RelevantAttributesToCapture.Add(DamageStatics().Source_PierceCriticalDef);
	RelevantAttributesToCapture.Add(DamageStatics().Target_PierceResistanceDef);//穿刺伤害抗性
	RelevantAttributesToCapture.Add(DamageStatics().Source_SlashCriticalDef);
	RelevantAttributesToCapture.Add(DamageStatics().Target_SlashResistanceDef);//切割伤害抗性
	RelevantAttributesToCapture.Add(DamageStatics().Source_BluntCriticalDef);
	RelevantAttributesToCapture.Add(DamageStatics().Target_BluntResistanceDef);//钝器伤害抗性
	
	RelevantAttributesToCapture.Add(DamageStatics().Target_DefenseDef);//防御
	RelevantAttributesToCapture.Add(DamageStatics().Target_DefenseSupplementDef);
	
	RelevantAttributesToCapture.Add(DamageStatics().Target_PoisonResistanceDef);//抗毒性
	RelevantAttributesToCapture.Add(DamageStatics().Target_TrueQiResistanceDef);//真气抗性
	
	RelevantAttributesToCapture.Add(DamageStatics().Source_SubjoinPoisonAttackDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_SubjoinTrueQiAttackDef);
	
	RelevantAttributesToCapture.Add(DamageStatics().Source_CriticalStrikeMinValueDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_CriticalStrikeMaxValueDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_DamageTypeDef);
	RelevantAttributesToCapture.Add(DamageStatics().Target_ResistanceSupplementDef);

	RelevantAttributesToCapture.Add(DamageStatics().Source_DamageShieldEnhancedDamage); // 罡气增伤
	RelevantAttributesToCapture.Add(DamageStatics().Target_DamageShield); // 目标罡气值

	RelevantAttributesToCapture.Add(DamageStatics().Source_PierceFixedAttackDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_SlashFixedAttackDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_BluntFixedAttackDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_PoisonFixedAttackDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_TrueQiFixedAttackDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_CriticalIncreasedInjuryDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_FinalDamageIncreaseDef);
	RelevantAttributesToCapture.Add(DamageStatics().Target_DodgeDef);
	RelevantAttributesToCapture.Add(DamageStatics().Source_AttackAccuracyDef);
}

void UEastRimWorldDamageExecution::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{

	
}

