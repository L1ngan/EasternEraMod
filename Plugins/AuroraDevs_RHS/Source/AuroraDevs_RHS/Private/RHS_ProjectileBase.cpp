// Copyright Aurora Devs 2022. All Rights Reserved.

#include "RHS_ProjectileBase.h"

#include "Components/ShapeComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

ARHS_ProjectileBase::ARHS_ProjectileBase()
{	
    // Use this component to drive this projectile's movement.
    ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    ProjectileMovementComponent->SetUpdatedComponent(RootComponent);
    ProjectileMovementComponent->bRotationFollowsVelocity = true;
	
    bReplicates = true;
    AActor::SetReplicateMovement(true);
    ProjectileMovementComponent->SetIsReplicated(true);
    ProjectileMovementComponent->ProjectileGravityScale = 0.f;
    ProjectileMovementComponent->bInterpMovement = ProjectileMovementComponent->bInterpRotation = true;
}

void ARHS_ProjectileBase::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
}

void ARHS_ProjectileBase::SetUpdateComponent()
{
	Super::SetUpdateComponent();
	if (CollisionComponent)
		ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
}
