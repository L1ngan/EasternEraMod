// Copyright 2024 liwei, Inc. All Rights Reserved.

#pragma once
#include "LBaseValue.h"
#include "Components/ActorComponent.h"
#include "LComp.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LQUICKFRAME_API ULActorComp : public UActorComponent,public ILBaseInterface
{
	GENERATED_BODY()
public:	
	ULActorComp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
protected:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
