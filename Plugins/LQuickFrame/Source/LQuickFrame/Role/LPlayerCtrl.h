// Copyright 2024 liwei, Inc. All Rights Reserved.

#pragma once
#include "GameFramework/PlayerController.h"
#include "LPlayerCtrl.generated.h"

UCLASS()
class LQUICKFRAME_API ALPlayerCtrl : public APlayerController
{
	GENERATED_BODY()
public:
	ALPlayerCtrl(const FObjectInitializer& Initer = FObjectInitializer::Get());
};
