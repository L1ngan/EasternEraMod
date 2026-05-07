// Copyright 2024 liwei, Inc. All Rights Reserved.

#pragma once
#include "LBaseValue.h"
#include "GameFramework/Actor.h"
#include "LActor.generated.h"

UCLASS()
class LQUICKFRAME_API ALActor : public AActor,public ILBaseInterface
{
	GENERATED_BODY()
public:	
	ALActor();
	ALActor(const FObjectInitializer& ObjectInitializer);
protected:
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaTime) override;
};

