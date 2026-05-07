// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "UObject/Interface.h"

#include "EastRimWorldAbilitySourceInterface.generated.h"

class UObject;
class UPhysicalMaterial;
struct FGameplayTagContainer;


/** Base interface for anything acting as a ability calculation source */
UINTERFACE()
class UEastRimWorldAbilitySourceInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActivateAbilityStateDelegate,UGameplayAbility*,GameplayAbility,bool,bWasCancel);
class IEastRimWorldAbilitySourceInterface
{
	GENERATED_IINTERFACE_BODY()
	
	virtual FOnActivateAbilityStateDelegate * GetOnActivateAbilityStateDelegate() { return nullptr; }
};
