// Copyright Aurora Devs 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "RHS_Data.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RHS_HitboxAnimNotify.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class AURORADEVS_RHS_API URHS_HitboxAnimNotify : public UAnimNotifyState
{
	GENERATED_BODY()
protected:
	// Draw debugs of the hitbox in editor and/or game worlds
	UFUNCTION(BlueprintImplementableEvent, Category = "Aurora Devs - Anim HitBox")
	void DrawHitShapeDebug(class USkeletalMeshComponent* MeshComp, class URHS_CollisionShape* CollisionShape, const FVector& Location, const FQuat& Rotation, const float FrameDeltaTime) const;

	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "Aurora Devs - Anim HitBox")
	void SERVER_DrawHitShapeDebug(class USkeletalMeshComponent* MeshComp, class URHS_CollisionShape* CollisionShape, const FVector& Location, const FQuat& Rotation, const float FrameDeltaTime) const;

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, Category = "Aurora Devs - Anim HitBox")
	void MULTICAST_DrawHitShapeDebug(class USkeletalMeshComponent* MeshComp, class URHS_CollisionShape* CollisionShape, const FVector& Location, const FQuat& Rotation, const float FrameDeltaTime) const;

	// Trace the collision shape against the selected trace channel
	UFUNCTION(BlueprintImplementableEvent, Category = "Aurora Devs - Anim HitBox")
	void ApplyShapeHit(class USkeletalMeshComponent* MeshComp, class URHS_CollisionShape* CollisionShape, const FVector& Location, const FQuat& Rotation) const;

	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "Aurora Devs - Anim HitBox")
	void SERVER_ApplyShapeHit(class USkeletalMeshComponent* MeshComp, class URHS_CollisionShape* CollisionShape, const FVector& Location, const FQuat& Rotation) const;
	
	// Should the collision shape rotate with the bone. THE ROTATION IS APPLIED BEFORE THE ROTATION OFFSET
	UPROPERTY(EditAnywhere, Category = "HitBox", BlueprintReadOnly)
	bool bRotatesWithParent = false;

	// Collision shapes to trace against the world. Each notify detects each hit actor only once.
	UPROPERTY(EditAnywhere, Instanced, Category = "HitBox", BlueprintReadOnly, Replicated)
	TArray<class URHS_CollisionShape*> CollisionShapes;

	UPROPERTY(EditAnywhere, Category = "Debugging", BlueprintReadWrite, Replicated)
	FRHSDebugSettings DebugSettings;
};
