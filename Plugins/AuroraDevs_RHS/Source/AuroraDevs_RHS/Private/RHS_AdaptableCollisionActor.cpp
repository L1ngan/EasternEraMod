// Copyright Aurora Devs 2022. All Rights Reserved.


#include "RHS_AdaptableCollisionActor.h"

#include "RHS_CollisionShape.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"


ARHS_AdaptableCollisionActor::ARHS_AdaptableCollisionActor()
{
	// This scene component should be set as root and never deleted. This will be changed in runtime and replaced by the collision component
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SceneComponent->SetupAttachment(RootComponent);
}

void ARHS_AdaptableCollisionActor::SetUpdateComponent()
{
	
}

void ARHS_AdaptableCollisionActor::SetupCollisionComponent(UShapeComponent* Collision)
{
    if (!Collision)
        return;
    if (CollisionComponent)
    {
    	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
    	CollisionComponent->SetActive(false);
    }
	// Register new collision shape and set replication
	Collision->SetActive(true);
	CollisionComponent = Collision;
}

void ARHS_AdaptableCollisionActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
}

void ARHS_AdaptableCollisionActor::DrawClassDefaultCollisionShape(const UObject* WorldContextObject, const UClass* RHS_AdaptableCollisionActorClass, const FVector& Location, const FQuat& Rotation, const FLinearColor Color, const float Duration, const float Thickness)
{
	// Check if input is correct
    if (!RHS_AdaptableCollisionActorClass || !RHS_AdaptableCollisionActorClass->IsChildOf(ARHS_AdaptableCollisionActor::StaticClass()))
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid class. Should be child of ARHS_AdaptableCollisionActor"));
        return;
    }
	
	// Draw class default debug shape
    URHS_CollisionShape* Shape = RHS_AdaptableCollisionActorClass->GetDefaultObject<ARHS_AdaptableCollisionActor>()->ShapeType;
	if (Shape)
	    Shape->DrawDebugShape(WorldContextObject, Location, Rotation, Color.ToFColor(true), Duration, Thickness);
}

FVector ARHS_AdaptableCollisionActor::GetClassDefaultShapeExtent(const UClass* RHS_AdaptableCollisionActorClass)
{
    if (!RHS_AdaptableCollisionActorClass || !RHS_AdaptableCollisionActorClass->IsChildOf(ARHS_AdaptableCollisionActor::StaticClass()))
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid class. Should be child of ARHS_AdaptableCollisionActor"));
        return FVector::ZeroVector;
    }

	URHS_CollisionShape* Shape = RHS_AdaptableCollisionActorClass->GetDefaultObject<ARHS_AdaptableCollisionActor>()->ShapeType;
    return Shape? Shape->GetShapeExtentVector() : FVector::ZeroVector;
}

void ARHS_AdaptableCollisionActor::UpdateCollisionShapeInfo()
{
    if (!ShapeType)
        return;
	
    // If the newly selected shape type is a sphere
    URHS_CollisionShape_Sphere* CurSphereShape = Cast<URHS_CollisionShape_Sphere>(ShapeType);
    if (CurSphereShape)
    {
        USphereComponent* SphereComponent = Cast<USphereComponent>(CollisionComponent);
    	// If the previously selected collision component wasn't a sphere
        if (!SphereComponent)
        {
        	// Create and set up new sphere collision
        	if (!IsValid(SphereCollision))
        	{
        		SphereCollision = NewObject<USphereComponent>(this, USphereComponent::StaticClass(), TEXT("SphereCollision"), RF_NoFlags);
        		SphereCollision->AttachToComponent(SceneComponent,FAttachmentTransformRules::KeepRelativeTransform);
        		SphereCollision->RegisterComponent();
        	}
        	SphereCollision->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
            SphereCollision->SetSphereRadius(CurSphereShape->Radius);
            SetupCollisionComponent(SphereCollision);
        }
        else
        {
        	// Update sphere radius
            SphereComponent->SetSphereRadius(CurSphereShape->Radius);
        }
        return;
    }

    // If the newly selected shape type is a capsule
    URHS_CollisionShape_Capsule* CurCapsuleShape = Cast<URHS_CollisionShape_Capsule>(ShapeType);
    if (CurCapsuleShape)
    {
        UCapsuleComponent* CapsuleComponent = Cast<UCapsuleComponent>(CollisionComponent);
        // If the previously selected collision component wasn't a capsule
        if (!CapsuleComponent)
        {
            // Create and set up new capsule collision
            if (!IsValid(CapsuleCollision))
            {
            	CapsuleCollision = NewObject<UCapsuleComponent>(this, UCapsuleComponent::StaticClass(), TEXT("CapsuleCollision"), RF_NoFlags);
            	CapsuleCollision->AttachToComponent(SceneComponent,FAttachmentTransformRules::KeepRelativeTransform);
            	CapsuleCollision->RegisterComponent();
            }
        	CapsuleCollision->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
            CapsuleCollision->SetCapsuleSize(CurCapsuleShape->Radius, CurCapsuleShape->HalfHeight, true);
            SetupCollisionComponent(CapsuleCollision);
        }
        else
        {
            // Update capsule radius and half height
            CapsuleComponent->SetCapsuleSize(CurCapsuleShape->Radius, CurCapsuleShape->HalfHeight, true);
        }
        return;
    }

    // If the newly selected shape type is a box
    URHS_CollisionShape_Box* CurBoxShape = Cast<URHS_CollisionShape_Box>(ShapeType);
    if (CurBoxShape)
    {
        UBoxComponent* BoxComponent = Cast<UBoxComponent>(CollisionComponent);
        // If the previously selected collision component wasn't a box
        if (!BoxComponent)
        {
        	// Create and set up new box collision
	        if (!IsValid(BoxCollision))
	        {
	        	BoxCollision = NewObject<UBoxComponent>(this, UBoxComponent::StaticClass(), TEXT("BoxCollision"), RF_NoFlags);
	        	BoxCollision->AttachToComponent(SceneComponent,FAttachmentTransformRules::KeepRelativeTransform);
	        	BoxCollision->RegisterComponent();
	        }
        	BoxCollision->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
        	BoxCollision->SetBoxExtent(CurBoxShape->Extent/2.f);
        	SetupCollisionComponent(BoxCollision);
        }
        else
        {
        	// Update box collision
            BoxComponent->SetBoxExtent(CurBoxShape->Extent/2.f);
        }
        return;
    }
}

void ARHS_AdaptableCollisionActor::SetCollisionShapeInfo(TSubclassOf<URHS_CollisionShape> CollisionShape, FVector InCollisionInfo)
{
	if (!CollisionShape)
		return;
    if (CollisionShape == URHS_CollisionShape_Sphere::StaticClass())
    {
	    if (!IsValid(SphereShape))
	    {
	    	SphereShape = NewObject<URHS_CollisionShape_Sphere>(this);
	    }
    	SphereShape->Radius = InCollisionInfo.X;
    	ShapeType = SphereShape;
    }
	if (CollisionShape == URHS_CollisionShape_Capsule::StaticClass())
	{
		if (!IsValid(CapsuleShape))
		{
			CapsuleShape = NewObject<URHS_CollisionShape_Capsule>(this);
		}
		CapsuleShape->Radius = InCollisionInfo.X;
		CapsuleShape->HalfHeight = InCollisionInfo.Y;
		ShapeType = CapsuleShape;
	}
    // If the newly selected shape type is a box
	if (CollisionShape == URHS_CollisionShape_Box::StaticClass())
    {
    	if (!IsValid(BoxShape))
    	{
    		BoxShape = NewObject<URHS_CollisionShape_Box>(this);
    	}
		BoxShape->Extent.X = InCollisionInfo.X;
		BoxShape->Extent.Y = InCollisionInfo.Y;
		BoxShape->Extent.Z = InCollisionInfo.Z;
    	ShapeType = BoxShape;
    }
	UpdateCollisionShapeInfo();
}

void ARHS_AdaptableCollisionActor::SetCollisionOffset(const FVector& VectorOffset,const FRotator& CollisionRotatorOffset, bool bRotatorToParent)
{
	if (!IsValid(CollisionComponent))
	{
		return;
	}
	CollisionComponent->SetRelativeLocation(VectorOffset);
	if (bRotatorToParent)
	{
		SceneComponent->SetRelativeRotation(CollisionRotatorOffset);
		CollisionComponent->SetRelativeRotation(FRotator::ZeroRotator);
	}
	else
	{
		SceneComponent->SetRelativeRotation(FRotator::ZeroRotator);
		CollisionComponent->SetRelativeRotation(CollisionRotatorOffset);
	}
}
