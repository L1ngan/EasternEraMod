// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "StructUtils/InstancedStruct.h"
#include "EastRimWorldAbilityTypes.generated.h"


class UEastRimWorldTargetType;
//作用类型
UENUM(BlueprintType)
enum class  EEastRimWorldTargetType : uint8
{
	//敌人
	Enemies,
	//仅自己
	Owner,
	//投射物
	Projectile,
	//队友
	Teammate,
};


//伤害类型
UENUM(BlueprintType)
enum class EDamageType : uint8
{
	None,
	//穿刺伤害
	PierceDamage,
	//切割伤害
	SlashDamage,
	//钝器伤害
	BluntDamage,
	//毒气伤害
	PoisonDamage,
	//真气伤害
	TrueQiDamage,
};



USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FGameplayEffect_SetByCaller
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UGameplayEffect> GameplayEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FGameplayTag,float> Value;
};

USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FAbilityInit : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Effect")
	FGameplayEffect_SetByCaller GameplayEffect_InitAttribute;
};




USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FEastRimWorldGameplayEffectContainer
{
	GENERATED_BODY()

public:
	FEastRimWorldGameplayEffectContainer() {}

	/** Sets the way that targeting happens */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer)
	TSubclassOf<UEastRimWorldTargetType> TargetType;

	/** List of gameplay effects to apply to the targets */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer)
	TArray<TSubclassOf<UGameplayEffect>> TargetGameplayEffectClasses;

};



/** A "processed" version of RPGGameplayEffectContainer that can be passed around and eventually applied */
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FEastRimWorldGameplayEffectContainerSpec
{
	GENERATED_BODY()

public:
	FEastRimWorldGameplayEffectContainerSpec() {}

	/** 计算目标数据 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer)
	FGameplayAbilityTargetDataHandle TargetData;

	/** 适用于目标的游戏效果列表 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer)
	TArray<FGameplayEffectSpecHandle> TargetGameplayEffectSpecs;

	//作用类型
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = GameplayEffectContainer)
	EEastRimWorldTargetType Type = EEastRimWorldTargetType::Enemies;
	
	/** 如果有任何的效果 */
	bool HasValidEffects() const;

	/** Returns true if this has any valid targets */
	bool HasValidTargets() const;

	/** Adds new targets to target data */
	void AddTargets(const TArray<FHitResult>& HitResults, const TArray<AActor*>& TargetActors);
};

USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FProjectileHitEventData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = 0.f;
	//碰撞点
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector HitLocation = FVector::ZeroVector;
	//方向
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Direction = FVector::ZeroVector;
	//需要读取的基础属性
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FGameplayAttribute Attribute;
	//对应的属性抗性
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FGameplayAttribute ResistanceAttribute;
	//目标
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TWeakObjectPtr<AActor> TargetActor;
	//附带信息
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FInstancedStruct ExtraneousData;
	//投射物所处的位置
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FVector ProjectileLocation = FVector::ZeroVector;
	//起始位置
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FTransform StartTransform;
	//剩余时间
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeRemaining = -1.f;
	//伤害量
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float DamageValue = 0.f;
	//伤害类型
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	EDamageType DamageType = EDamageType::None;
	void Empty()
	{
		Value = 0.f;
		HitLocation = FVector::ZeroVector;
		TimeRemaining = -1.f;
	}
};
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FProjectileHitTargetData : public FGameplayAbilityTargetData
{
	GENERATED_BODY()

	FProjectileHitEventData HitData;

	// 重写必要的虚函数
	virtual UScriptStruct* GetScriptStruct() const override
	{
		return FProjectileHitTargetData::StaticStruct();
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FProjectileHitTargetData"));
	}
};
//控制效果数据
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FControlEffectData
{
	GENERATED_USTRUCT_BODY()
	//控制效果Tag
	UPROPERTY(BlueprintReadWrite,EditAnywhere,meta = (Categories = "Status.ControlEffect"))
	FGameplayTag Tag;
	//没有则填0  最终值为发起者基础值 + 额外值
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float AttributeValue = 0.f;
	//需要读取的基础属性
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FGameplayAttribute Attribute;
	//对应的属性抗性
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FGameplayAttribute ResistanceAttribute;
	//持续时间 -1为其他效果决定
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float TimeOfDuration = -1.f;
};

UENUM(BlueprintType)
enum class EEastRimWorldAbilityType : uint8
{
	//被动技能
	PassiveAbility,
	//主动技能
	GeneralAbility,
	//引导技能
	ChannelAbility,
	//开关类技能
	ToggleAbility,
	//激活类技能
	ActivateAbility,
	//触发技能
	TriggerSkill,
	//战略技能
	StratagemSkill,
	//被控制技能
	BeingControlSkill,
	
};

//技能攻击类型
UENUM(BlueprintType)
enum class EAbilityAttackType : uint8
{
	NormalAttack = 0,
	SkillAttack = 1,
	None = 2,
};

//触发技能的效果类型
UENUM(BlueprintType)
enum class ETriggerAbilityEffectType : uint8
{
	//正常的技能效果
	Normal = 0,
	//减少cd
	ReduceCDs = 1,
	//持续给自身施加GE
	ContinueApplyEffects = 2,
	//反伤
	CounterattackDamage = 3,
};

UENUM(BlueprintType)
enum class EAbilityUsageScenario : uint8
{
	//战斗
	BattleGeneralAbility,
	//其他技能
	OtherAbility,
	//进攻位移技能
	OffensiveDisplacementAbility,
	//远离位移技能
	KeepAwayFromAbility,
};
