// Copyright Aurora Devs 2022. All Rights Reserved.

#pragma once

#include "RHS_Data.generated.h"

/**
 * Struct used for setting up debugging. This is mainly used in RHS AnimNotifies
 */
USTRUCT(BlueprintType)
struct FRHSDebugSettings
{
	GENERATED_BODY()

public:
	FRHSDebugSettings() : bDrawDebugsInGame(false), DebugDuration(1.f), DebugThickness(1.5f) {}

	// Whether debug shapes, which are usually draw in editor worlds, should be drawn in game worlds as well.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aurora Devs - Debugging")
	bool bDrawDebugsInGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aurora Devs - Debugging")
	float DebugDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aurora Devs - Debugging")
	float DebugThickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aurora Devs - Debugging")
		FColor DebugColor {
		static_cast<uint8>(174.f), static_cast<uint8>(0.f), static_cast<uint8>(46.f)
	};
};

/**
 * Struct used for setting up spawning of multiple projectiles. This is mainly used in RHS AnimNotifies
 * Sets up transform, number of instances, speed and velocity
 */
USTRUCT(BlueprintType)
struct FRHSProjectileBulkSpawnSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aurora Devs - Projectiles")
	FVector LocationOffset = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aurora Devs - Projectiles")
	FRotator RotationOffset = FRotator::ZeroRotator;

	// Amount of projectiles to spawn at once. For RHS_ProjectileRain, this is the amount that is spawned each time the cooldown expires.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aurora Devs - Projectiles", meta = (UIMin = 1, ClampMin = 1))
	uint8 AmountToSpawnAtOnce = 1;
	// Projectile speed. For RHS_ProjectileRain, the speed should be negative if you want the projectiles to fall down.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aurora Devs - Projectiles")
	float ProjectileSpeed = 300.f;

	/* Minimum value of the range of values that will be randomly chosen and applied to the X and Y of the velocity direction of the projectiles
	 * For RHS_ProjectileRain and RHS_HomingProjectiles, This adds randomness to the direction of the projectile if you don't want them to all spawn heading the exact same way.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aurora Devs - Projectiles", meta = (UIMin = -1, UIMax = 1, ClampMin = -1, ClampMax = 1))
	float MinXYRandomVelocityDirection = 0.f;

	/* Maximum value of the range of values that will be randomly chosen and applied to the X and Y of the velocity direction of the projectiles
	 * For RHS_ProjectileRain and RHS_HomingProjectiles, This adds randomness to the direction of the projectile if you don't want them to all spawn heading the exact same way.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aurora Devs - Projectiles", meta = (UIMin = -1, UIMax = 1, ClampMin = -1, ClampMax = 1))
	float MaxXYRandomVelocityDirection = 0.f;
	

};