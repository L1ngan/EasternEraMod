// Copyright Aurora Devs 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "RHS_Data.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "RHS_AnimNotifyBase.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class AURORADEVS_RHS_API URHS_AnimNotifyBase : public UAnimNotify
{
	GENERATED_BODY()

public:
	// Parent attachment socket/bone
	UPROPERTY(EditAnywhere, meta = (AnimNotifyBoneName = "true"), Category = "Attachment Setup", BlueprintReadOnly)
	FName ParentSocket = NAME_None;
	
	UPROPERTY(EditAnywhere, Category = "Debugging", BlueprintReadWrite)
	FRHSDebugSettings DebugSettings;
};
