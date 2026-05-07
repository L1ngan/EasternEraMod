// Fill out your copyright notice in the Description page of Project Settings.

// ReSharper disable All
#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EastRimWorldAttributeSet.generated.h"

class AActor;
struct FGameplayEffectSpec;

/**
 * This macro defines a set of helper functions for accessing and initializing attributes.
 *
 * The following example of the macro:
 *		ATTRIBUTE_ACCESSORS(ULyraHealthSet, Health)
 * will create the following functions:
 *		static FGameplayAttribute GetHealthAttribute();
 *		float GetHealth() const;
 *		void SetHealth(float NewVal);
 *		void InitHealth(float NewVal);
 */
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class EASTRIMWORLD_API UEastRimWorldAttributeSet : public UAttributeSet
{
 GENERATED_BODY()
protected:
 
 virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
 
 virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
 virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;
public:
 UEastRimWorldAttributeSet();
 
};
