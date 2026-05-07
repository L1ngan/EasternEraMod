// Copyright Epic Games, Inc. All Rights Reserved.

#include "EastRimWorldCombatSet.h"

#include "GameplayEffectExtension.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(EastRimWorldCombatSet)

UEastRimWorldCombatSet::UEastRimWorldCombatSet()
{
}

bool UEastRimWorldCombatSet::PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data)
{
	return Super::PreGameplayEffectExecute(Data);
}

void UEastRimWorldCombatSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	if (Data.EvaluatedData.Attribute == GetAttackIntensityAttribute())
	{
		if (Data.EvaluatedData.Magnitude > 0.f)
		{
			const FGameplayEffectContextHandle& EffectContext = Data.EffectSpec.GetEffectContext();
			OnHitAction.Broadcast(Data.EvaluatedData.Magnitude,EffectContext.GetOrigin());
		}
		SetAttackIntensity(0.f);
	}
}

void UEastRimWorldCombatSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);
}

void UEastRimWorldCombatSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
}

void UEastRimWorldCombatSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);
}
