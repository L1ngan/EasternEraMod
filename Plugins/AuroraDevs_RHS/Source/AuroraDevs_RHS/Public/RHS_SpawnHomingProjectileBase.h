// Copyright Aurora Devs 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RHS_AnimNotifyBase.h"
#include "RHS_SpawnHomingProjectileBase.generated.h"

/**
 * Enum describing the different methods for spawning multiple homing projectiles
 */
UENUM(BlueprintType)
enum class ERHSHomingProjectileSpawnType : uint8
{
	//Spawn randomly inside the extents of a bounding box
	RandomBoundingBox,
	//Spawn along vector describing both the direction and the distance between spawned instances.
	EvenlyAlongVector,
	EvenlyInCircle
};

/*
 * Settings governing homing projectiles' spawn distribution
 */
USTRUCT(BlueprintType)
struct FRHSHomingProjectileSpawnTypeSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Homing Projectile Setup")
	ERHSHomingProjectileSpawnType HomingProjectileSpawnType = ERHSHomingProjectileSpawnType::EvenlyAlongVector;

	/*
	 * If SpawnType is RandomBoundingBox, then this is the box's extent.
	 * If SpawnType is EvenlyAlongVector, then this describes both the direction along which projectiles are spawned, and the distance between each projectile instance.
	 * This means nothing when SpawnType is EvenlyInCircle.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Homing Projectile Setup", meta = (UIMin = 0, ClampMin = 0, EditCondition = "HomingProjectileSpawnType != ERHSHomingProjectileSpawnType::EvenlyInCircle"))
	FVector SpawnLocationVariance = FVector(64.f, 0.f, 0.f);

	/*
	 * Only valid when Spawn Type is EvenlyInCircle.
	 * Radius of the circle
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Homing Projectile Setup", meta = (UIMin = 0, ClampMin = 0, EditCondition = "HomingProjectileSpawnType == ERHSHomingProjectileSpawnType::EvenlyInCircle"))
	float CircleRadius = 64.f;

	/*
	 * Only valid when Spawn Type is EvenlyInCircle.
	 * The unit vector perpendicular to the circle and looking away from it.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Homing Projectile Setup", meta = (UIMin = -1, UIMax = 1, ClampMin = -1, ClampMax = 1, EditCondition = "HomingProjectileSpawnType == ERHSHomingProjectileSpawnType::EvenlyInCircle"))
	FVector CircleRotationAxis = FVector::YAxisVector;
	
	/*
	 * Only valid when Spawn Type is EvenlyInCircle.
	 * Max circle angle, knowing that projectiles are spawned from each side of the 0 angle. This means that 360 will you give you a full circle, 180 a semi-circle, etc.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Homing Projectile Setup", meta = (UIMin = 0, UIMax = 360, ClampMin = 0, ClampMax = 360, EditCondition = "HomingProjectileSpawnType == ERHSHomingProjectileSpawnType::EvenlyInCircle"))
	float MaxCircleAngle = 92.f;
};

UCLASS(Abstract)
class AURORADEVS_RHS_API URHS_SpawnHomingProjectileBase : public URHS_AnimNotifyBase
{
	GENERATED_BODY()

protected:
	// Settings governing homing projectiles' spawn distribution
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Homing Projectile Setup")
	FRHSHomingProjectileSpawnTypeSettings HomingProjectileSpawnSettings;
	
	// Settings governing homing projectiles' bulk spawning and initial speed/velocity
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile Setup")
	FRHSProjectileBulkSpawnSetting ProjectileBulkSpawnSettings;
};