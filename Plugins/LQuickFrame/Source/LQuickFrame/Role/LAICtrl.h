// Copyright 2024 liwei, Inc. All Rights Reserved.

#pragma once
#include "AIController.h"
#include "LQuickFrame/Base/LBaseValue.h"
#include "LAICtrl.generated.h"

UCLASS(BlueprintType)
class LQUICKFRAME_API ALAICtrl : public AAIController,public ILBaseInterface
{
	GENERATED_BODY()
public:
	ALAICtrl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

};
