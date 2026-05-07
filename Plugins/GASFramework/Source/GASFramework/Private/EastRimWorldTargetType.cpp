// Fill out your copyright notice in the Description page of Project Settings.


#include "EastRimWorldTargetType.h"

#include "Abilities/GameplayAbilityTypes.h"

void UEastRimWorldTargetType::GetTargets_Implementation(AActor* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*> & OutActors) const
{
	return;
}

void UEastRimWorldTargetType_UseOwner::GetTargets_Implementation(AActor* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>  & OutActors) const
{
	OutActors.Add(TargetingCharacter);
}

void UEastRimWorldTargetType_UseEventData::GetTargets_Implementation(AActor* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*> & OutActors) const
{
	const FHitResult* FoundHitResult = EventData.ContextHandle.GetHitResult();
	if (FoundHitResult)
	{
		OutHitResults.Add(*FoundHitResult);
	}
	else if (EventData.Target)
	{
		if (const auto Target = const_cast<AActor*>(EventData.Target.Get()))
		{
			OutActors.Add(Target);
		}
	}
}

void UEastRimWorldTargetType_UseProjectile::GetTargets_Implementation(AActor* TargetingCharacter,
	AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults,
	TArray<AActor*> & OutActors) const
{
	
	return;
}
