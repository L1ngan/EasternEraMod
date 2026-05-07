// Copyright 2024 liwei, Inc. All Rights Reserved.

#include "LActor.h"

ALActor::ALActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

ALActor::ALActor(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
}

void ALActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void ALActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


