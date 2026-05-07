// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildingDamageExecution.h"

#include "DamageStatics.h"

UBuildingDamageExecution::UBuildingDamageExecution()
{
	RelevantAttributesToCapture.Add(BuildingDamageStatics().Source_MinAttackDef);
	RelevantAttributesToCapture.Add(BuildingDamageStatics().Source_MaxAttackDef);
}

void UBuildingDamageExecution::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{

}
