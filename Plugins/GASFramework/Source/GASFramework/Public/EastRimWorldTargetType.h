// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EastRimWorldAbilityTypes.h"
#include "EastRimWorldTargetType.generated.h"

class AActor;
struct FGameplayEventData;

UCLASS(Blueprintable, meta = (ShowWorldContextPin))
class GASFRAMEWORK_API UEastRimWorldTargetType : public UObject
{
	GENERATED_BODY()
	
public:
	// Constructor and overrides
	UEastRimWorldTargetType() {}
	
	UPROPERTY(BlueprintReadWrite)
	EEastRimWorldTargetType Type = EEastRimWorldTargetType::Enemies;
	/** Called to determine targets to apply gameplay effects to */
	UFUNCTION(BlueprintNativeEvent)
	void GetTargets(AActor* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*> & OutActors) const;
};

/** Trivial target type that uses the owner */
UCLASS(NotBlueprintable)
class GASFRAMEWORK_API UEastRimWorldTargetType_UseOwner : public UEastRimWorldTargetType
{
	GENERATED_BODY()

public:
	// Constructor and overrides
	UEastRimWorldTargetType_UseOwner() { Type = EEastRimWorldTargetType::Owner;}
	 
	/** Uses the passed in event data */
	virtual void GetTargets_Implementation(AActor* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*> & OutActors) const override;
};

/** Trivial target type that pulls the target out of the event data */
UCLASS(NotBlueprintable)
class GASFRAMEWORK_API UEastRimWorldTargetType_UseEventData : public UEastRimWorldTargetType
{
	GENERATED_BODY()

public:
	// Constructor and overrides
	UEastRimWorldTargetType_UseEventData() {Type=EEastRimWorldTargetType::Enemies;}

	/** Uses the passed in event data */
	virtual void GetTargets_Implementation(AActor* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const override;

};

//当用这个标记的话  指代该GE直接传导给投射物的效果
UCLASS(NotBlueprintable)
class GASFRAMEWORK_API UEastRimWorldTargetType_UseProjectile : public UEastRimWorldTargetType
{
	GENERATED_BODY()
	UEastRimWorldTargetType_UseProjectile()   {Type=EEastRimWorldTargetType::Projectile;}
public:
	virtual void GetTargets_Implementation(AActor* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*> & OutActors) const override;

};
