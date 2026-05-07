// Fill out your copyright notice in the Description page of Project Settings.


#include "EastRimWorldGameplayAbility.h"
#include "AbilitySystemLog.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemGlobals.h"

#include "EastRimWorldTargetType.h"
#include "BehaviorTree/BlackboardComponent.h"


#include UE_INLINE_GENERATED_CPP_BY_NAME(EastRimWorldGameplayAbility)

#define ENSURE_ABILITY_IS_INSTANTIATED_OR_RETURN(FunctionName, ReturnValue)																				\
{																																						\
	if (!ensure(IsInstantiated()))																														\
	{																																					\
		ABILITY_LOG(Error, TEXT("%s: " #FunctionName " cannot be called on a non-instanced ability. Check the instancing policy."), *GetPathName());	\
		return ReturnValue;																																\
	}																																					\
}

UEastRimWorldGameplayAbility::UEastRimWorldGameplayAbility(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ActivationGroup = EEastRimWorldAbilityActivationGroup::Independent;
	AbilityType = EEastRimWorldAbilityType::ActivateAbility;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void UEastRimWorldGameplayAbility::NativeOnAbilityFailedToActivate(const FGameplayTagContainer& FailedReason) const
{
}

bool UEastRimWorldGameplayAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	return true;
}

void UEastRimWorldGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled)
{
	Super::SetCanBeCanceled(bCanBeCanceled);
}

void UEastRimWorldGameplayAbility::CancelAbility(const FGameplayAbilitySpecHandle Handle,const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,bool bReplicateCancelAbility)
{
	bCancelAbility = true;
	K2_OnCancelAbility();
	Super::CancelAbility(Handle, ActorInfo, ActivationInfo, bReplicateCancelAbility);
}

void UEastRimWorldGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);
}

void UEastRimWorldGameplayAbility::OnRemoveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	K2_OnAbilityRemoved();

	Super::OnRemoveAbility(ActorInfo, Spec);
}

void UEastRimWorldGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UEastRimWorldGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

bool UEastRimWorldGameplayAbility::CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CheckCost(Handle, ActorInfo, OptionalRelevantTags) || !ActorInfo)
	{
		return false;
	}
	return true;
}

void UEastRimWorldGameplayAbility::ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	Super::ApplyCost(Handle, ActorInfo, ActivationInfo);
}

FGameplayEffectContextHandle UEastRimWorldGameplayAbility::MakeEffectContext(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo) const
{
	FGameplayEffectContextHandle ContextHandle = Super::MakeEffectContext(Handle, ActorInfo);
	return ContextHandle;
}

void UEastRimWorldGameplayAbility::ApplyAbilityTagsToGameplayEffectSpec(FGameplayEffectSpec& Spec, FGameplayAbilitySpec* AbilitySpec) const
{
	Super::ApplyAbilityTagsToGameplayEffectSpec(Spec, AbilitySpec);
}

bool UEastRimWorldGameplayAbility::DoesAbilitySatisfyTagRequirements(const UAbilitySystemComponent& AbilitySystemComponent, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	return true;
}

void UEastRimWorldGameplayAbility::ApplyCooldown(const FGameplayAbilitySpecHandle Handle,const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
}

float UEastRimWorldGameplayAbility::GetCooldownTimeRemaining(const FGameplayAbilityActorInfo* ActorInfo) const
{
	return 0.f;
}

void UEastRimWorldGameplayAbility::SetCooldownTimeRemaining(float NewCooldownTimeRemaining)
{
}

UGameplayAbility* UEastRimWorldGameplayAbility::GetOnActivateAbility(const FGameplayAbilitySpec& GameplayAbilitySpec)
{
	if (GameplayAbilitySpec.Handle.IsValid())
	{
		return GameplayAbilitySpec.GetPrimaryInstance();
	}
	return nullptr;
}

void UEastRimWorldGameplayAbility::OnPawnAvatarSet()
{
	K2_OnPawnAvatarSet();
}

void UEastRimWorldGameplayAbility::GetAbilitySource(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, float& OutSourceLevel, const IEastRimWorldAbilitySourceInterface*& OutAbilitySource, AActor*& OutEffectCauser) const
{
	OutSourceLevel = 0.0f;
	OutAbilitySource = nullptr;
	OutEffectCauser = nullptr;

	OutEffectCauser = ActorInfo->AvatarActor.Get();

	// If we were added by something that's an ability info source, use it
	UObject* SourceObject = GetSourceObject(Handle, ActorInfo);

	OutAbilitySource = Cast<IEastRimWorldAbilitySourceInterface>(SourceObject);
}

FEastRimWorldGameplayEffectContainerSpec UEastRimWorldGameplayAbility::MakeEffectContainerSpecFromContainer(const FEastRimWorldGameplayEffectContainer& Container, const FGameplayEventData& EventData,int32 OverrideGameplayLevel)
{
	// First figure out our actor info
	FEastRimWorldGameplayEffectContainerSpec ReturnSpec;
	return ReturnSpec;
}

FEastRimWorldGameplayEffectContainerSpec UEastRimWorldGameplayAbility::MakeEffectContainerSpec(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel)
{
	
	if (const FEastRimWorldGameplayEffectContainer * FoundContainer = EffectContainerMap.Find(ContainerTag))
	{
		return MakeEffectContainerSpecFromContainer(*FoundContainer, EventData, OverrideGameplayLevel);
	}
	return FEastRimWorldGameplayEffectContainerSpec();
}

TArray<FActiveGameplayEffectHandle> UEastRimWorldGameplayAbility::ApplyEffectContainerSpecFormDynamicProperties(FGameplayTag ContainerTag,const TMap<FGameplayAttribute, float> & Attributes)
{
	TArray<FActiveGameplayEffectHandle> Handles;
	return Handles;
}

TArray<FActiveGameplayEffectHandle> UEastRimWorldGameplayAbility::ApplyEffectContainerSpec(const FEastRimWorldGameplayEffectContainerSpec& ContainerSpec)
{
	TArray<FActiveGameplayEffectHandle> AllEffects;
	// Iterate list of effect specs and apply them to their target data
	for (const FGameplayEffectSpecHandle& SpecHandle : ContainerSpec.TargetGameplayEffectSpecs)
	{
		AllEffects.Append(K2_ApplyGameplayEffectSpecToTarget(SpecHandle, ContainerSpec.TargetData));
	}
	return AllEffects;
}

TArray<FActiveGameplayEffectHandle> UEastRimWorldGameplayAbility::ApplyEffectContainer(FGameplayTag ContainerTag,const FGameplayEventData& EventData, int32 OverrideGameplayLevel)
{
	const FEastRimWorldGameplayEffectContainerSpec Spec = MakeEffectContainerSpec(ContainerTag, EventData, OverrideGameplayLevel);
	return ApplyEffectContainerSpec(Spec);
}

TArray<FActiveGameplayEffectHandle> UEastRimWorldGameplayAbility::ApplyMartialArtsEffectContainer(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel)
{
	TArray<FActiveGameplayEffectHandle> MartialArtsHandles;
	return MartialArtsHandles;
}

TMap<ETargetClassType, FAllGameplayEffectSpecHandles> UEastRimWorldGameplayAbility::GenerateSpecHandles(const TMap<ETargetClassType, FProjectileGEConfig>& InputMap,AActor * TargetActor)
{
	TMap<ETargetClassType, FAllGameplayEffectSpecHandles> Out;
	return Out;
}

void UEastRimWorldGameplayAbility::AddEffectContainerMap(const TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer>& InEffectContainerMap)
{
	EffectContainerMap.Append(InEffectContainerMap);
}

void UEastRimWorldGameplayAbility::InitEastRimWorldGameplayAbility(const FGameAbilityStruct& InGameAbilityStruct)
{
}

void UEastRimWorldGameplayAbility::ConstructionSummon(const TMap<FName, int32>& SummonMap)
{
}

void UEastRimWorldGameplayAbility::ConstructionProjectile(AActor * TargetActor)
{
}

void UEastRimWorldGameplayAbility::SpawnProjectile(const FAbilityProjectileStruct& AbilityProjectile,AActor * TargetActor)
{
	
}

void UEastRimWorldGameplayAbility::AbilitySpawnSummon_Implementation()
{
	
}

void UEastRimWorldGameplayAbility::AbilitySpawnProjectile_Implementation(const AActor* ProjectileOwner,const FProjectileStruct& ProjectileConfig, const TMap<ETargetClassType, FAllGameplayEffectSpecHandles>& InputMap)
{
}

void UEastRimWorldGameplayAbility::TriggerSpawnProjectileByEventTag(FGameplayTag EventTag,AActor * TargetActor)
{
}

void UEastRimWorldGameplayAbility::SetActivator(AActor* InActivator)
{
	Activator = InActivator;
}

void UEastRimWorldGameplayAbility::SetActionAbilityFinish()
{
	K2_SetActionAbilityFinish();
}

void UEastRimWorldGameplayAbility::AbortAction()
{
	IsAbort = true;
	SetActionAbilityFinish();
}

void UEastRimWorldGameplayAbility::RemoveWorkWarpTarget()
{
	K2_RemoveWorkWarpTarget();
}

float UEastRimWorldGameplayAbility::GetBeatBackTime()
{
	return 0.f;
}

float UEastRimWorldGameplayAbility::GetKnockAwayTime()
{
	return 0.f;
}

float UEastRimWorldGameplayAbility::GetStrikeToFlyTime()
{
	return 0.f;
}

float UEastRimWorldGameplayAbility::GetStrikeToFlyKnockAwayTime()
{
	return GetStrikeToFlyTime() * FlyKnockAwayCoefficient;
}

float UEastRimWorldGameplayAbility::GetStrikeToFlyDistance()
{
	int32 AwayTime = GetStrikeToFlyTime();
	float Distance = 500.f;
	for (int i = 0; i < AwayTime; ++i)
	{
		Distance += 500 * FMath::Pow(0.7,i); 
	}
	return Distance;
}

float UEastRimWorldGameplayAbility::GetStrikeToFlyHeight()
{
	return GetStrikeToFlyDistance() * 0.25;
}

void UEastRimWorldGameplayAbility::ContinuePlayAbilityAnimation()
{
	K2_ContinuePlayAbilityAnimation();
}

bool UEastRimWorldGameplayAbility::CanChangeActivationGroup(EEastRimWorldAbilityActivationGroup NewGroup) const
{
	return true;
}

bool UEastRimWorldGameplayAbility::ChangeActivationGroup(EEastRimWorldAbilityActivationGroup NewGroup)
{
	return true;
}

bool UEastRimWorldGameplayAbility::CheckCanAbortAction_Implementation()
{
	return true;
}