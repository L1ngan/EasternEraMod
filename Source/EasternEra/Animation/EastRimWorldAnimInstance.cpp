// Copyright Epic Games, Inc. All Rights Reserved.

#include "EastRimWorldAnimInstance.h"

UEastRimWorldAnimInstance::UEastRimWorldAnimInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ShoeFootBones = { TEXT("foot_l"), TEXT("foot_r") };
	ShoeBallBones = { TEXT("ball_l"), TEXT("ball_r") };
}

void UEastRimWorldAnimInstance::SetShoeFootTransforms(float InRootOffset, float InFootRotation, float InBallRotation)
{
	ShoeRootOffset = InRootOffset;
	ShoeFootRotation = InFootRotation;
	ShoeBallRotation = InBallRotation;
}

