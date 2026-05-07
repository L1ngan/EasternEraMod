// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameplayEffectExecutionCalculation.h"

#include "EastRimWorldDamageExecution.generated.h"

class UObject;


/**
 * UEastRimWorldDamageExecution
 *
 *	Execution used by gameplay effects to apply damage to the health attributes.
 */
UCLASS()
class UEastRimWorldDamageExecution : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

public:

	UEastRimWorldDamageExecution();

protected:

	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
};
