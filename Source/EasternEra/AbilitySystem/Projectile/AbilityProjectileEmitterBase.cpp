// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityProjectileEmitterBase.h"

void AAbilityProjectileEmitterBase::BeginPlay()
{
	Super::BeginPlay();
}

AAbilityProjectileEmitterBase::AAbilityProjectileEmitterBase()
{
}

TArray<AActor*> AAbilityProjectileEmitterBase::GetMultipleTargets(int TargetNumber)
{
	return {};
}

void AAbilityProjectileEmitterBase::AbilityProjectileEmitterEnd()
{

}

void AAbilityProjectileEmitterBase::InitProjectileEmitter(const FTransform& InTransform,const FProjectileStruct& InProjectileStruct,const TMap<ETargetClassType, FAllGameplayEffectSpecHandles>& InProjectileSpecHandles,AActor * InMainAttackTarget)
{
	MainAttackTarget = InMainAttackTarget;
	SetActorTransform(InTransform);
	ProjectileStruct = InProjectileStruct;
	ProjectileSpecHandles = InProjectileSpecHandles;
	
	EmitterStartLaunch();
}

void AAbilityProjectileEmitterBase::EmitterStartLaunch()
{
	K2_EmitterStartLaunch();	
}

void AAbilityProjectileEmitterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
