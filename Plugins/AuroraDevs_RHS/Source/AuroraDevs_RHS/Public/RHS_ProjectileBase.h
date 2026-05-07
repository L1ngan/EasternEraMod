// Copyright Aurora Devs 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "RHS_AdaptableCollisionActor.h"
#include "RHS_ProjectileBase.generated.h"

UCLASS(Abstract)
class AURORADEVS_RHS_API ARHS_ProjectileBase : public ARHS_AdaptableCollisionActor
{
	GENERATED_BODY()
public:
	ARHS_ProjectileBase();

	virtual void OnConstruction(const FTransform& Transform) override;
	
	// Projectile movement component.
	UPROPERTY(VisibleAnywhere, Category = Movement, BlueprintReadWrite)
	class UProjectileMovementComponent* ProjectileMovementComponent;
	
protected:
	// VFX played when the projectile is spawned. Can be either Niagara or Cascade.
	UPROPERTY(EditAnywhere, Category = "Projectile VFX", BlueprintReadWrite)
	class UFXSystemAsset* ActivationVFX;
	// SFX played when the projectile is spawned.
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	class USoundBase* ActivationSFX;
	
	// VFX attached to actor during its lifespan. Can be either Niagara or Cascade.
	UPROPERTY(EditAnywhere, Category = "Projectile VFX", BlueprintReadWrite)
	class UFXSystemAsset* TrailVFX;
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	class USoundBase* TrailSFX;
	
	// VFX played when actor hits world. Can be either Niagara or Cascade.
	UPROPERTY(EditAnywhere, Category = "Projectile VFX", BlueprintReadWrite)
	class UFXSystemAsset* ImpactVFX;
	// SFX played when actor hits world
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	class USoundBase* ImpactSFX;

	virtual void SetUpdateComponent() override;
};
