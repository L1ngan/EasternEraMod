// Copyright 2024 liwei, Inc. All Rights Reserved.

#include "LAICtrl.h"
#include "../Mode/LGameInst.h"
#include "Navigation/CrowdFollowingComponent.h"

ALAICtrl::ALAICtrl(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
	
}

void ALAICtrl::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}