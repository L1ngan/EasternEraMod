// Fill out your copyright notice in the Description page of Project Settings.


#include "EastRimWorldProjectileBase.h"
#include "AbilityProjectileEmitterBase.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Components/ShapeComponent.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "LQuickFrame/Misc/LQuickTools.h"
#include "Particles/ParticleSystem.h"

static FName NoCollision(TEXT("NoCollision"));

AEastRimWorldProjectileBase::AEastRimWorldProjectileBase(): ProjectileStruct(), CalculateCount(0)
{
}

void AEastRimWorldProjectileBase::BeginPlay()
{
	Super::BeginPlay();
}

void AEastRimWorldProjectileBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AEastRimWorldProjectileBase::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
}

void AEastRimWorldProjectileBase::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);
}

void AEastRimWorldProjectileBase::SetGenericTeamId(const FGenericTeamId& NewTeamID)
{
	MyTeamID = NewTeamID;
}

FGenericTeamId AEastRimWorldProjectileBase::GetGenericTeamId() const
{
	return MyTeamID;
}

void AEastRimWorldProjectileBase::Destroyed()
{
	Super::Destroyed();
}

AActor* AEastRimWorldProjectileBase::FindAttackTarget_Implementation(EFindAttackTargetRule FindAttackTargetRule)
{
	return nullptr;
}

void AEastRimWorldProjectileBase::AsynchronousLoadSucceed()
{
	if (!ProjectileStruct.VfxConfig.ActivationSFX.IsNull())
	{
		ActivationSFX = ProjectileStruct.VfxConfig.ActivationSFX.LoadSynchronous();
	}
	if (!ProjectileStruct.VfxConfig.TrailSFX.IsNull())
	{
		TrailSFX = ProjectileStruct.VfxConfig.TrailSFX.LoadSynchronous();
	}
	if (!ProjectileStruct.VfxConfig.ImpactSFX.IsNull())
	{
		ImpactSFX = ProjectileStruct.VfxConfig.ImpactSFX.LoadSynchronous();
	}
	if (!ProjectileStruct.VfxConfig.ActivationVFX.IsNull())
	{
		ActivationVFX = ProjectileStruct.VfxConfig.ActivationVFX.LoadSynchronous();
	}
	if (!ProjectileStruct.VfxConfig.TrailVFX.IsNull())
	{
		TrailVFX = ProjectileStruct.VfxConfig.TrailVFX.LoadSynchronous();
	}
	if (!ProjectileStruct.VfxConfig.ImpactVFX.IsNull())
	{
		ImpactVFX = ProjectileStruct.VfxConfig.ImpactVFX.LoadSynchronous();
	}
	
	const float ProjectileVolume = 1 + ProjectileStruct.ProjectileSpawnSetting.ProjectileVolume;
	ActivationVFXScale = ProjectileStruct.VfxConfig.ActivationScale * ProjectileVolume;
	TrailVFXScale = ProjectileStruct.VfxConfig.TrailScale * ProjectileVolume;
	ImpactVFXScale = ProjectileStruct.VfxConfig.ImpactScale * ProjectileVolume;
	CalculateCount = ProjectileStruct.ConsumeCount;
	StartSpawnVFXAndSFX();
	InitializationComplete = true;

	if (ProjectileStruct.ProjectileSpawnSetting.DelayLaunchTime > 0.f)
	{
		GetWorld()->GetTimerManager().SetTimer(DelayLaunchHandle,this,&ThisClass:: StartTheLaunch,ProjectileStruct.ProjectileSpawnSetting.DelayLaunchTime,false);
	}
	else
	{
		StartTheLaunch();
	}
	if (ProjectileStruct.ProjectileSpawnSetting.LifeTime > 0)
	{
		GetWorld()->GetTimerManager().SetTimer(RecycleProjectileHandle,this,&ThisClass:: AbilityProjectileEnd,ProjectileStruct.ProjectileSpawnSetting.LifeTime,false);
	}
	if (ProjectileStruct.bDot)
	{
		GetWorld()->GetTimerManager().SetTimer(DotHandle,this,&ThisClass:: DotApplyEffect,ProjectileStruct.DamageFrequency,true,ProjectileStruct.DamageDelay);
	}
	else
	{
		if (ProjectileStruct.DamageDelay > 0)
		{
			GetWorld()->GetTimerManager().SetTimer(CollisionOpenDelayHandle,this,&ThisClass::SetCollisionAndVisibility,ProjectileStruct.DamageDelay,false);
		}
		else
		{
			SetCollisionAndVisibility();
		}
	}
}

void AEastRimWorldProjectileBase::InitProjectile(const FTransform& InTransform,const FProjectileStruct& InProjectileStruct,const TMap<ETargetClassType, FAllGameplayEffectSpecHandles>& InProjectileSpecHandles, const FVector & InDirection,AActor * InTargetActor)
{
}

void AEastRimWorldProjectileBase::LoadProjectileData()
{
	TArray<FSoftObjectPath> SoftObjectPaths;
	if (!ProjectileStruct.VfxConfig.ActivationSFX.IsNull())
	{
		SoftObjectPaths.Add(ProjectileStruct.VfxConfig.ActivationSFX.ToSoftObjectPath());
	}
	if (!ProjectileStruct.VfxConfig.TrailSFX.IsNull())
	{
		SoftObjectPaths.Add(ProjectileStruct.VfxConfig.TrailSFX.ToSoftObjectPath());
	}
	if (!ProjectileStruct.VfxConfig.ImpactSFX.IsNull())
	{
		SoftObjectPaths.Add(ProjectileStruct.VfxConfig.ImpactSFX.ToSoftObjectPath());
	}
	if (!ProjectileStruct.VfxConfig.ActivationVFX.IsNull())
	{
		SoftObjectPaths.Add(ProjectileStruct.VfxConfig.ActivationVFX.ToSoftObjectPath());
	}
	if (!ProjectileStruct.VfxConfig.TrailVFX.IsNull())
	{
		SoftObjectPaths.Add(ProjectileStruct.VfxConfig.TrailVFX.ToSoftObjectPath());
	}
	if (!ProjectileStruct.VfxConfig.ImpactVFX.IsNull())
	{
		SoftObjectPaths.Add(ProjectileStruct.VfxConfig.ImpactVFX.ToSoftObjectPath());
	}
	if (SoftObjectPaths.Num() > 0)
	{
		FStreamableManager& StreamableManager = UAssetManager::Get().GetStreamableManager();
		ProjectileStreamableHandle = StreamableManager.RequestAsyncLoad(SoftObjectPaths,FStreamableDelegate::CreateUObject(this, &ThisClass::AsynchronousLoadSucceed));
	}
	else
	{
		AsynchronousLoadSucceed();
	}
}

void AEastRimWorldProjectileBase::SetProjectileSpeed(float InInitialSpeed, FVector InVelocity,bool bActivate)
{
	ProjectileMovementComponent->InitialSpeed = InInitialSpeed;
	ProjectileMovementComponent->MaxSpeed = InInitialSpeed;
	ProjectileMovementComponent->Velocity = InVelocity;
	ProjectileMovementComponent->SetActive(bActivate,true);
}

void AEastRimWorldProjectileBase::SetHomingTarget(USceneComponent* InHomingTargetComponent)
{
	if (IsValid(InHomingTargetComponent)) 
	{
		ProjectileMovementComponent->HomingTargetComponent = InHomingTargetComponent;
		ProjectileMovementComponent->bIsHomingProjectile = true;
		ProjectileMovementComponent->MaxSpeed = ProjectileStruct.ProjectileSpawnSetting.ProjectileSpeed;
		ProjectileMovementComponent->HomingAccelerationMagnitude = 100000.f;
	}
}

void AEastRimWorldProjectileBase::SearchTarget_Implementation()
{
}

bool AEastRimWorldProjectileBase::ApplyEffectToTarget(AActor* InTargetActor,const FVector & HitPoint,const FHitResult& HitResult)
{
	return false;
}

bool AEastRimWorldProjectileBase::HitTheCharacter(AActor* InTargetActor,const FVector & HitPoint,const FHitResult& HitResult)
{
	return false;
}

bool AEastRimWorldProjectileBase::HitTheBuilding(AActor* InTargetActor,const FVector & HitPoint,const FHitResult& HitResult)
{
	return false;
}

void AEastRimWorldProjectileBase::SetCollisionAndVisibility()
{
	if(CollisionComponent)
	{
		CollisionComponent->SetHiddenInGame(!ProjectileStruct.bDrawDebugsInGame);
		CollisionComponent->SetCollisionObjectType(ProjectileStruct.ProjectileSpawnSetting.CollisionChannel);
		CollisionComponent->SetCollisionProfileName(ProjectileStruct.ProjectileSpawnSetting.CollisionProfileName);
		if (ProjectileStruct.bDrawDebugsInGame)
		{
			CollisionComponent->ShapeColor = ProjectileStruct.Color;
			CollisionComponent->SetLineThickness(ProjectileStruct.Thickness);
		}
	}
}

void AEastRimWorldProjectileBase::SetCloseCollision()
{
	CollisionComponent->SetCollisionProfileName(NoCollision);
	CollisionComponent->SetHiddenInGame(true);
}

void AEastRimWorldProjectileBase::PlaySound_Implementation()
{
}

void AEastRimWorldProjectileBase::StartSpawnVFXAndSFX_Implementation()
{
}

void AEastRimWorldProjectileBase::OnHitSpawnVFXAndSFX_Implementation(AActor* InTargetActor,const FVector & HitPoint)
{
}

void AEastRimWorldProjectileBase::OnHitSpawnOtherProjectile_Implementation(const FVector & HitPoint)
{

}

void AEastRimWorldProjectileBase::StartTheLaunch()
{
	GenerateSummon();
	ProjectileLaunch();
}

void AEastRimWorldProjectileBase::GenerateSummon()
{
}

void AEastRimWorldProjectileBase::ProjectileLaunch_Implementation()
{

}

FVector AEastRimWorldProjectileBase::CalculateLaunchVelocity(FVector StartLocation, FVector EndLocation, float InitialSpeed)
{
	float Gravity = -GetWorld()->GetGravityZ(); // Gravity is usually negative, so take the absolute value
	FVector LocalDirection = EndLocation - StartLocation;
	float HorizontalDistance = FVector(LocalDirection.X, LocalDirection.Y, 0).Size();
	float VerticalDistance = EndLocation.Z - StartLocation.Z;

	float SpeedSquared = InitialSpeed * InitialSpeed;
	float GravityDistance = Gravity * HorizontalDistance;
	float SpeedQuad = SpeedSquared * SpeedSquared;

	// Calculating the launch angles
	float Discriminant = SpeedSquared * SpeedSquared - Gravity * (Gravity * HorizontalDistance * HorizontalDistance + 2 * VerticalDistance * SpeedSquared);

	if (Discriminant < 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No valid solution for the given parameters."));
		return FVector::ZeroVector; // No valid solution
	}

	float RootDiscriminant = FMath::Sqrt(Discriminant);

	float LaunchAngle1 = FMath::Atan((SpeedSquared + RootDiscriminant) / GravityDistance);
	float LaunchAngle2 = FMath::Atan((SpeedSquared - RootDiscriminant) / GravityDistance);

	float LaunchAngle = FMath::Min(LaunchAngle1, LaunchAngle2); // Choose the smaller angle

	// Calculate the launch velocity components
	float Vx = InitialSpeed * FMath::Cos(LaunchAngle);
	float Vz = InitialSpeed * FMath::Sin(LaunchAngle);

	FVector LaunchVelocity = LocalDirection.GetSafeNormal() * Vx;
	LaunchVelocity.Z = Vz;

	return LaunchVelocity;
}

void AEastRimWorldProjectileBase::AbilityProjectileEnd()
{
	SetCloseCollision();
	ProjectileRecycle();
	//GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::ProjectileRecycle);
}

void AEastRimWorldProjectileBase::BeforeRecycleProjectile()
{
	ClearProjectileFx();
	InitializationComplete = false;
	ProjectileMovementComponent->SetActive(false,true);
	SetActorHiddenInGame(true);
	ProjectileMovementComponent->HomingTargetComponent = nullptr;
	ProjectileMovementComponent->bIsHomingProjectile = false;
	ProjectileMovementComponent->HomingAccelerationMagnitude = 0.f;
	ProjectileMovementComponent->MaxSpeed = 0.f;
	ProjectileMovementComponent->InitialSpeed = 0.f;
	ProjectileMovementComponent->ProjectileGravityScale = 0.f;
	ProjectileMovementComponent->Velocity = FVector::ZeroVector;
	if (IsValid(CollisionComponent))
	{
		CollisionComponent->SetCollisionProfileName(NoCollision);
		CollisionComponent->OnComponentBeginOverlap.RemoveDynamic(this,&ThisClass::OnOverlappedBeginActor);
		CollisionComponent->OnComponentEndOverlap.RemoveDynamic(this,&ThisClass::OnOverlappedEndActor);
	}
	ClearProjectile();

}
void AEastRimWorldProjectileBase::ClearProjectile()
{
	if(GetWorld() == nullptr)
	{
		return;
	}
	if (PeriodicityApplyHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(PeriodicityApplyHandle);
		PeriodicityApplyHandle.Invalidate();
	}
	if (CollisionOpenDelayHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(CollisionOpenDelayHandle);
		CollisionOpenDelayHandle.Invalidate();
	}
	if (DelayLaunchHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(DelayLaunchHandle);
		DelayLaunchHandle.Invalidate();
	}
	if (RecycleProjectileHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(RecycleProjectileHandle);
		RecycleProjectileHandle.Invalidate();
	}
	if (ProjectileStreamableHandle.IsValid())
	{
		ProjectileStreamableHandle->CancelHandle();
	}
	if (DotHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(DotHandle);
		DotHandle.Invalidate();
	}
	if (CloseCollisionHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(CloseCollisionHandle);
		CloseCollisionHandle.Invalidate();
	}

	ActivationSFX = nullptr;
	TrailSFX = nullptr;
	ImpactSFX = nullptr;
	ActivationVFX = nullptr;
	TrailVFX = nullptr;
	ImpactVFX = nullptr;
	
	OverlappedActors.Reset();
	ActorEffectCount.Reset();
}

void AEastRimWorldProjectileBase::OnOverlappedBeginActor(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(!InitializationComplete)
	{
		return;
	}
	if (ProjectileStruct.OnlyTheTargetHit)
	{
		if (OtherActor != TargetActor)
		{
			return;
		}
	}
	
	FHitResult HitResult;
	OtherComp->SweepComponent(HitResult,GetActorLocation(),OtherActor->GetActorLocation(),GetActorRotation().Quaternion(),FCollisionShape::MakeSphere(5));
	
	FVector ClosestPoint;
	OverlappedComp->GetClosestPointOnCollision(OtherActor->GetActorLocation(), ClosestPoint);
	if (ApplyEffectToTarget(OtherActor,ClosestPoint,HitResult))
	{
		if (CalculateCount != -1)
		{
			CalculateCount -= 1;
			if (CalculateCount <= 0)
			{
				AbilityProjectileEnd();
			}
		}
	}
	if (ProjectileStruct.ProjectileSpawnSetting.bSpawnOtherProjectile && !ProjectileStruct.ProjectileSpawnSetting.bCheckApplyEffect) 
	{
		OnHitSpawnOtherProjectile(ClosestPoint);
	}
}

void AEastRimWorldProjectileBase::OnOverlappedEndActor(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	OverlappedActors.Remove(OtherActor);
}

void AEastRimWorldProjectileBase::DotApplyEffect()
{
	if (CloseCollisionHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(CloseCollisionHandle);
		CloseCollisionHandle.Invalidate();
	}
	SetCollisionAndVisibility();
	DotAlreadyDamageTime += ProjectileStruct.DamageDelay;
	CloseCollisionHandle = GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::SetCloseCollision);
}

void AEastRimWorldProjectileBase::ApplyGameplayEffectSpecHandles(UAbilitySystemComponent* AbilitySystemComponent,const FAllGameplayEffectSpecHandles & AllGameplayEffectSpecHandles,const FVector & HitPoint,const FHitResult& HitResult,const FVector & InProjectileDirection)
{
}

void AEastRimWorldProjectileBase::ProjectileRecycle()
{
}

ETeamAttitude::Type AEastRimWorldProjectileBase::GetTeamAttitudeTowards(const AActor& Other) const
{
	return ETeamAttitude::Neutral;
}
