// Copyright 2024 liwei, Inc. All Rights Reserved.

#include "LGameMode.h"
#include "../Misc/LQuickTools.h"
#include "Components/ActorComponent.h"
#include "LQuickFrame/Misc/LLog.h"

ALGameMode::ALGameMode(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{	
}

UActorComponent* ALGameMode::GetModeComp(const UObject* Context, TSubclassOf<UActorComponent> Class)
{
	return ULQuickTools::GetActorComp(ULQuickTools::GetGameMode(Context), Class);
}

void ALGameMode::OnSubLevelLoaded()
{
	ULLog::Logger(TEXT("加载子关卡完成"));
}
