// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "BuildingDamageExecution.generated.h"

/**
 * 
 */
UCLASS()
class EASTRIMWORLD_API UBuildingDamageExecution : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

public:

	UBuildingDamageExecution();

protected:

	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;

};
