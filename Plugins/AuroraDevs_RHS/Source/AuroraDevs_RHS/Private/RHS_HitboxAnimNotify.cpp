// Copyright Aurora Devs 2022. All Rights Reserved.


#include "RHS_HitboxAnimNotify.h"

#include "RHS_CollisionShape.h"
#include "Net/UnrealNetwork.h"

void URHS_HitboxAnimNotify::SERVER_DrawHitShapeDebug_Implementation(USkeletalMeshComponent* MeshComp, class URHS_CollisionShape* CollisionShape, const FVector& Location, const FQuat& Rotation, const float FrameDeltaTime) const
{
	MULTICAST_DrawHitShapeDebug_Implementation(MeshComp, CollisionShape, Location, Rotation, FrameDeltaTime);
}

void URHS_HitboxAnimNotify::MULTICAST_DrawHitShapeDebug_Implementation(USkeletalMeshComponent* MeshComp, URHS_CollisionShape* CollisionShape, const FVector& Location, const FQuat& Rotation, const float FrameDeltaTime) const
{
	DrawHitShapeDebug(MeshComp, CollisionShape, Location, Rotation, FrameDeltaTime);
}

void URHS_HitboxAnimNotify::SERVER_ApplyShapeHit_Implementation(USkeletalMeshComponent* MeshComp, URHS_CollisionShape* CollisionShape, const FVector& Location, const FQuat& Rotation) const
{
	ApplyShapeHit(MeshComp, CollisionShape, Location, Rotation);
}

void URHS_HitboxAnimNotify::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(URHS_HitboxAnimNotify, CollisionShapes);
	DOREPLIFETIME(URHS_HitboxAnimNotify, DebugSettings);
}