// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilityStruct.h"
#include "EastRimWorldAbilityTypes.h"
#include "Abilities/GameplayAbility.h"
#include "LQuickFrame/Base/LBaseValue.h"
#include "EasternEra/EastRimWorldAbilitySourceInterface.h"
#include "EastRimWorldGameplayAbility.generated.h"


/**
 * EEastRimWorldAbilityActivationGroup
 *
 *	Defines how an ability activates in relation to other abilities.
 */
UENUM(BlueprintType)
enum class EEastRimWorldAbilityActivationGroup : uint8
{
	// Ability runs independently of all other abilities.
	Independent,

	// Ability is canceled and replaced by other exclusive abilities.
	Exclusive_Replaceable,

	// Ability blocks all other exclusive abilities from activating.
	Exclusive_Blocking,

	MAX	UMETA(Hidden)
};

/** Failure reason that can be used to play an animation montage when a failure occurs */
USTRUCT(BlueprintType)
struct FEastRimWorldAbilityMontageFailureMessage
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<APlayerController> PlayerController = nullptr;

	// All the reasons why this ability has failed
	UPROPERTY(BlueprintReadWrite)
	FGameplayTagContainer FailureTags;

	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<UAnimMontage> FailureMontage = nullptr;
};


/**
 * 
 */

USTRUCT(BlueprintType)
struct FBuffTagInfo:public FDataBase
{
	GENERATED_USTRUCT_BODY()
	//Buff的唯一Tag
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag BuffTag;
	//Buff的图标
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Icon;
	//Buff名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText BuffName;
	//描述
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;
	FBuffTagInfo(){}
};

UCLASS(Abstract, HideCategories = Input, Meta = (ShortTooltip = "The base gameplay ability class used by this project."))
class EASTRIMWORLD_API UEastRimWorldGameplayAbility : public UGameplayAbility,public IEastRimWorldAbilitySourceInterface
{
	GENERATED_BODY()
	friend class UEastRimWorldAbilitySystemComponent;
public:

	UEastRimWorldGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	

	EEastRimWorldAbilityActivationGroup GetActivationGroup() const { return ActivationGroup; }
	
	// Returns true if the requested activation group is a valid transition.
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "EastRimWorld|Ability", Meta = (ExpandBoolAsExecs = "ReturnValue"))
	bool CanChangeActivationGroup(EEastRimWorldAbilityActivationGroup NewGroup) const;

	// Tries to change the activation group.  Returns true if it successfully changed.
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "EastRimWorld|Ability", Meta = (ExpandBoolAsExecs = "ReturnValue"))
	bool ChangeActivationGroup(EEastRimWorldAbilityActivationGroup NewGroup);
	
	void OnAbilityFailedToActivate(const FGameplayTagContainer& FailedReason) const
	{
		NativeOnAbilityFailedToActivate(FailedReason);
		ScriptOnAbilityFailedToActivate(FailedReason);
	}

protected:

	// Called when the ability fails to activate
	virtual void NativeOnAbilityFailedToActivate(const FGameplayTagContainer& FailedReason) const;

	// Called when the ability fails to activate
	UFUNCTION(BlueprintImplementableEvent)
	void ScriptOnAbilityFailedToActivate(const FGameplayTagContainer& FailedReason) const;

	//~UGameplayAbility interface
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const override;
	virtual void SetCanBeCanceled(bool bCanBeCanceled) override;
	virtual void CancelAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateCancelAbility) override;
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void OnRemoveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	virtual bool CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	virtual void ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;
	virtual FGameplayEffectContextHandle MakeEffectContext(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo) const override;
	virtual void ApplyAbilityTagsToGameplayEffectSpec(FGameplayEffectSpec& Spec, FGameplayAbilitySpec* AbilitySpec) const override;
	virtual bool DoesAbilitySatisfyTagRequirements(const UAbilitySystemComponent& AbilitySystemComponent, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	virtual void ApplyCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;
	//~End of UGameplayAbility interface
	virtual void OnPawnAvatarSet();

	virtual void GetAbilitySource(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, float& OutSourceLevel, const IEastRimWorldAbilitySourceInterface*& OutAbilitySource, AActor*& OutEffectCauser) const;
	
	/** Called when this ability is granted to the ability system component. */
	UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnAbilityAdded")
	void K2_OnAbilityAdded();

	/** Called when this ability is removed from the ability system component. */
	UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnAbilityRemoved")
	void K2_OnAbilityRemoved();

	/** Called when the ability system is initialized with a pawn avatar. */
	UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnPawnAvatarSet")
	void K2_OnPawnAvatarSet();
	
	UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnCancelAbility")
	void K2_OnCancelAbility();

	// 动作蒙太奇连续模式下，转发循环段内的 GameplayEvent；仅调用过 InitializeActionMontage 的动作蓝图会触发。
	UFUNCTION(BlueprintImplementableEvent, Category = "Action|Montage")
	void OnContinuousLoopEvent(FGameplayTag EventTag, FGameplayEventData EventData);

	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = Ability, DisplayName = "OnActionBegin")
	void K2_OnActionBegin();
	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = Ability, DisplayName = "OnActionLoop")
	void K2_OnActionLoop();
	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = Ability, DisplayName = "OnActionEnd")
	void K2_OnActionEnd();

	// 动作蒙太奇 Start→Loop→Loop 连续播放：识别连续段、管理首次循环初始化、循环事件转发与结束阶段防重入，供需要消除 Start/Loop 切换空档的动作蓝图（如 GA_StartLoopActionAbility）调用；不调用则对其他动作无影响。
	UFUNCTION(BlueprintCallable, Category = "Action|Montage", meta = (AutoCreateRefTerm = "EventTags"))
	void InitializeActionMontage(UAnimMontage* Montage, FName StartSection, FName LoopSection, const FGameplayTagContainer& EventTags);

	UFUNCTION(BlueprintCallable, Category = "Action|Montage")
	void BindActionMontageSectionChanged();

	UFUNCTION(BlueprintPure, Category = "Action|Montage")
	bool ShouldPlayActionLoopMontage() const;

	UFUNCTION(BlueprintCallable, Category = "Action|Montage")
	void HandleActionStartCompleted();

	UFUNCTION(BlueprintCallable, Category = "Action|Montage")
	void HandleActionMontageInterrupted();

	UFUNCTION(BlueprintCallable, Category = "Action|Montage")
	void BeginActionMontageEnd();

	/** Make gameplay effect container spec to be applied later, using the passed in container */
	UFUNCTION(BlueprintCallable, Category = Ability, meta=(AutoCreateRefTerm = "EventData"))
	virtual FEastRimWorldGameplayEffectContainerSpec MakeEffectContainerSpecFromContainer(const FEastRimWorldGameplayEffectContainer& Container, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);
	
	/** Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap */
	UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData"))
	virtual FEastRimWorldGameplayEffectContainerSpec MakeEffectContainerSpec(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);
	
	UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData"))
	virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainerSpecFormDynamicProperties(FGameplayTag ContainerTag,const TMap<FGameplayAttribute, float> & Attributes);
	/** Applies a gameplay effect container spec that was previously created */
	UFUNCTION(BlueprintCallable, Category = Ability)
	virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainerSpec(const FEastRimWorldGameplayEffectContainerSpec& ContainerSpec);

	/** Applies a gameplay effect container, by creating and then applying the spec */
	UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData"))
	virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainer(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);
	//应用额外的效果
	UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData"))
	virtual TArray<FActiveGameplayEffectHandle> ApplyMartialArtsEffectContainer(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);

public:
	//~UGameplayAbility interface
	virtual float GetCooldownTimeRemaining(const FGameplayAbilityActorInfo* ActorInfo) const override;
	//~End of UGameplayAbility interface

	// 重新设置技能的冷却时间 如果传入的值<=0 会直接移除冷却时间 放心大胆的调用即可 
	void SetCooldownTimeRemaining(float NewCooldownTimeRemaining);
	
	UPROPERTY(BlueprintAssignable)
	FOnActivateAbilityStateDelegate OnActivateAbilityStateDelegate;

	virtual FOnActivateAbilityStateDelegate * GetOnActivateAbilityStateDelegate() override
	{
		return &OnActivateAbilityStateDelegate;
	}
	//获取此技能的实例
	UFUNCTION(BlueprintCallable)
	static UGameplayAbility * GetOnActivateAbility(const FGameplayAbilitySpec & GameplayAbilitySpec);

	
protected:
	
	// Defines the relationship between this ability activating and other abilities activating.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EastRimWorld|Ability Activation")
	EEastRimWorldAbilityActivationGroup ActivationGroup;

	// Defines the relationship between this ability activating and other abilities activating.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EastRimWorld|Ability Activation")
	EEastRimWorldAbilityType AbilityType;
	
	UPROPERTY(BlueprintReadWrite, Category = "EastRimWorld|Ability Activation")
	float AbilityUseStateTime = 0.0f;
	
	// Map of failure tags to simple error messages
	UPROPERTY(EditDefaultsOnly, Category = "Advanced")
	TMap<FGameplayTag, FText> FailureTagToUserFacingMessages;

	// Map of failure tags to anim montages that should be played with them
	UPROPERTY(EditDefaultsOnly, Category = "Advanced")
	TMap<FGameplayTag, TObjectPtr<UAnimMontage>> FailureTagToAnimMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "EastRimWorld|Ability Activation")
	bool bCancelAbility = false;
	/** Map of gameplay tags to gameplay effect containers */
	UPROPERTY(BlueprintReadOnly, Category = GameplayEffects)
	TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> EffectContainerMap;

	//生成递给投射物的实例  Class->Spec
	UFUNCTION(BlueprintCallable,Category="Projectile")
	TMap<ETargetClassType,FAllGameplayEffectSpecHandles> GenerateSpecHandles(const TMap<ETargetClassType,FProjectileGEConfig> & InputMap,AActor * TargetActor);
public:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="AbilityStruct")
	FGameAbilityStruct GameAbilityStruct;

	/** 武学技能词条 ChangeAbilityParam：冷却实数增量之和，参与 (表基础秒数 + 本值) * MartialArtsSkillEntryCooldownPercentMultiplier。 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "AbilityStruct|SkillEntry")
	float MartialArtsSkillEntryCooldownValueDelta = 0.f;
	/** 武学技能词条：各 CD 百分比增量累乘 Π(1+小数百分比)。 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "AbilityStruct|SkillEntry")
	float MartialArtsSkillEntryCooldownPercentMultiplier = 1.f;

	// 是否被打断
	UPROPERTY(BlueprintReadWrite)
	bool IsAbort { false };
	// 读档时按存档的"结束"状态恢复：结束段的结算在存档前已经做过，恢复后不能再结算一次（控制器恢复技能状态时置位）
	UPROPERTY(BlueprintReadWrite)
	bool bRestoredInEndState { false };
	// 动作技能结束段是否跳过结算：被中止或被外部打断（IsAbort），或读档以结束状态恢复
	UFUNCTION(BlueprintPure, Category = "Action")
	bool ShouldSkipActionSettlement() const { return IsAbort || bRestoredInEndState; }
	//激活者
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<AActor> Activator;
	//投射物命中信息
	UPROPERTY(BlueprintReadOnly)
	FProjectileHitEventData ProjectileHitEventData;
	
	//动态的增加此能力的效果
	UFUNCTION(BlueprintCallable)
	void AddEffectContainerMap(const TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> & InEffectContainerMap);
	//通过配置初始化技能
	void InitEastRimWorldGameplayAbility(const FGameAbilityStruct & InGameAbilityStruct);
	//获取技能结构
	UFUNCTION(BlueprintCallable)
	FGameAbilityStruct & GetGameAbilityStruct()
	{
		return GameAbilityStruct;
	}
	//创建召唤物
	UFUNCTION(BlueprintCallable,Category = "Summon")
	void ConstructionSummon(const TMap<FName,int32>& SummonMap);
	//创建投射物
	UFUNCTION(BlueprintCallable,Category="Porjectile")
	void ConstructionProjectile(AActor * TargetActor);
	//生成投射物
	UFUNCTION(BlueprintCallable,Category="Porjectile")
	void SpawnProjectile(const FAbilityProjectileStruct & AbilityProjectile,AActor * TargetActor);
	//生成召唤物
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void AbilitySpawnSummon();
	void AbilitySpawnSummon_Implementation();
	//生成召唤物
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void AbilitySpawnProjectile(const AActor* ProjectileOwner,UPARAM(ref) const FProjectileStruct& ProjectileConfig,UPARAM(ref) const TMap<ETargetClassType,FAllGameplayEffectSpecHandles>& InputMap);
	void AbilitySpawnProjectile_Implementation(const AActor* ProjectileOwner,UPARAM(ref) const FProjectileStruct& ProjectileConfig,UPARAM(ref) const TMap<ETargetClassType,FAllGameplayEffectSpecHandles>& InputMap);
	//通过事件标签触发生成投射物
	UFUNCTION(BlueprintCallable)
	void TriggerSpawnProjectileByEventTag(FGameplayTag EventTag,AActor * TargetActor);
	//设置煽动者
	UFUNCTION()
	void SetActivator(AActor* InActivator);
	//设置动作能力完成
	UFUNCTION(BlueprintCallable,Category= "Action")
	void SetActionAbilityFinish();
	UFUNCTION(BlueprintImplementableEvent,Category= "Action",DisplayName = "SetActionAbilityFinish")
	void K2_SetActionAbilityFinish();
	//中断能力
	UFUNCTION(BlueprintCallable,Category = "Action")
	void AbortAction();
	//检查能否打断此能力
	UFUNCTION(BlueprintNativeEvent , BlueprintCallable)
	bool CheckCanAbortAction();
	UFUNCTION(BlueprintCallable,Category = "Action")
	void RemoveWorkWarpTarget();
	UFUNCTION(BlueprintImplementableEvent,Category = "Action",DisplayName= "RemoveWorkWarpTarget")
	void K2_RemoveWorkWarpTarget();
	//基础值
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "ContrlEffect")
	float BaseValue = 0.1f;
	//系数
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "ContrlEffect")
	float Coefficient = 1.f;
	//固定值
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "ContrlEffect")
	float FixedValue = 25.f;
	//固定值
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "ContrlEffect")
	float FlyKnockAwayCoefficient = 5.f;
	
	//获取击退时间
	UFUNCTION(BlueprintCallable,Category = "ContrlEffect")
	float GetBeatBackTime();
	//获取击倒时间
	UFUNCTION(BlueprintCallable,Category = "ContrlEffect")
	float GetKnockAwayTime();
	//获取击飞的时间
	UFUNCTION(BlueprintCallable,Category = "ContrlEffect")
	float GetStrikeToFlyTime();
	//获取击飞后倒地时间
	UFUNCTION(BlueprintCallable,Category = "ContrlEffect")
	float GetStrikeToFlyKnockAwayTime();
	//获取击飞的距离
	UFUNCTION(BlueprintCallable,Category = "ContrlEffect")
	float GetStrikeToFlyDistance();
	//获取击飞的高度
	UFUNCTION(BlueprintCallable,Category = "ContrlEffect")
	float GetStrikeToFlyHeight();
	//继续播放能力动画
	UFUNCTION()
	void ContinuePlayAbilityAnimation();
	UFUNCTION(BlueprintImplementableEvent,DisplayName="ContinuePlayAbilityAnimation")
	void K2_ContinuePlayAbilityAnimation();
};
