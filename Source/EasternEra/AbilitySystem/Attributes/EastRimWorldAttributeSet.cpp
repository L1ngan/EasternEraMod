// Fill out your copyright notice in the Description page of Project Settings.


#include "EastRimWorldAttributeSet.h"

#include "GameplayEffectExtension.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(EastRimWorldAttributeSet)

class UWorld;
void UEastRimWorldAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

}
void UEastRimWorldAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
}

void UEastRimWorldAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);
}

UEastRimWorldAttributeSet::UEastRimWorldAttributeSet()
{
	
}


