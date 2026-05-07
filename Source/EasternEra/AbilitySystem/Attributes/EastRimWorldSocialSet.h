// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "AbilitySystemComponent.h"
#include "EastRimWorldAttributeSet.h"

#include "EastRimWorldSocialSet.generated.h"

class UObject;
struct FFrame;

UCLASS(BlueprintType)
class UEastRimWorldSocialSet : public UEastRimWorldAttributeSet
{
	GENERATED_BODY()

public:

	UEastRimWorldSocialSet();

	ATTRIBUTE_ACCESSORS(UEastRimWorldSocialSet, NegotiationAbility);
	ATTRIBUTE_ACCESSORS(UEastRimWorldSocialSet, BargainAbility);
	ATTRIBUTE_ACCESSORS(UEastRimWorldSocialSet, Sociability);
	ATTRIBUTE_ACCESSORS(UEastRimWorldSocialSet, ArrestingAbility);
	ATTRIBUTE_ACCESSORS(UEastRimWorldSocialSet, Charm);
	ATTRIBUTE_ACCESSORS(UEastRimWorldSocialSet, TamingAbility);
	ATTRIBUTE_ACCESSORS(UEastRimWorldSocialSet, TrainingAbility);
protected:

private:

	//谈判能力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Social", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData NegotiationAbility;
	//议价能力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Social", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BargainAbility;
	//社交能力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Social", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Sociability;
	//拘捕能力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Social", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ArrestingAbility;
	//魅力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Social", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Charm;
	//驯服能力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Social", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData TamingAbility;
	//训练能力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Social", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData TrainingAbility;
};
