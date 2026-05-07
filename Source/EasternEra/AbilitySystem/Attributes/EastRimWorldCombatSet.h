// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "AbilitySystemComponent.h"
#include "EastRimWorldAttributeSet.h"

#include "EastRimWorldCombatSet.generated.h"

class UObject;
struct FFrame;

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnHitAction,float /*Value*/,FVector /*HitPoint*/);
/**
 * UEastRimWorldCombatSet
 *
 *  Class that defines attributes that are necessary for applying damage or healing.
 *	Attribute examples include: damage, healing, attack power, and shield penetrations.
 */
UCLASS(BlueprintType)
class UEastRimWorldCombatSet : public UEastRimWorldAttributeSet
{
	GENERATED_BODY()
public:
	UEastRimWorldCombatSet();
	
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, MinAttack);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, MaxAttack);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, CharacterAttackFrequency);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, WeaponAttackFrequency);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, AttackRange);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, AttackAccuracy);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, PierceIncrease);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, SlashIncrease);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, BluntIncrease);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, PoisonIncrease);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, TrueQiIncrease);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, PierceCritical);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, SlashCritical);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, BluntCritical);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, PierceResistance);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, SlashResistance);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, BluntResistance);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, PoisonResistance);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, TrueQiResistance);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, Recharging);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, InternalStrength);
	//ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, Stiffness);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, KnockBack);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, KnockDown);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, KnockUp);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, Dodge);
	//ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, StiffnessResistance);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, KnockBackResistance);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, KnockDownResistance);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, KnockUpResistance);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, SubjoinPoisonAttack);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, SubjoinTrueQiAttack);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, DamageShieldEnhanceDamage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, CriticalStrikeMinValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, CriticalStrikeMaxValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, DamageType);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, ResistanceSupplement);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, AttackIntensity);

	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, NeiGongEffect);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, QingGongEffect);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, YingGongEffect);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, NeiJinEffect);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, YuanChenEffect);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, JinZhanEffect);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, BuildingDamage);

	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, PierceFixedAttack);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, SlashFixedAttack);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, BluntFixedAttack);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, PoisonFixedAttack);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, TrueQiFixedAttack);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, CriticalIncreasedInjury);
	
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, FinalDamageIncrease);
	
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, Defense);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, DefenseSupplement);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, BaseCritical);
	ATTRIBUTE_ACCESSORS(UEastRimWorldCombatSet, BaseCriticalResistance);
	
	mutable FOnHitAction OnHitAction;
protected:
	
	virtual bool PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

private:
    // 最小攻击
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MinAttack;
    // 最大攻击
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MaxAttack;
    // 角色攻击频率
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData CharacterAttackFrequency;
	// 武器攻击频率
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData WeaponAttackFrequency;
    // 攻击射程
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData AttackRange;
    // 角色攻击命中
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData AttackAccuracy;
    // 穿刺增幅
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData PierceIncrease;
    // 切割增幅
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData SlashIncrease;
    // 钝器增幅
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData BluntIncrease;
    // 毒气增幅
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData PoisonIncrease;
    // 真气增幅
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData TrueQiIncrease;
    // 穿刺暴击
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData PierceCritical;
    // 切割暴击
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData SlashCritical;
    // 钝器暴击
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData BluntCritical;
	// 附加毒气攻击力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SubjoinPoisonAttack;
	// 附加真气攻击力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SubjoinTrueQiAttack;
	// 罡气增伤 对方有罡气 我方伤害增强
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DamageShieldEnhanceDamage;
    // 穿刺抗性
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData PierceResistance;
    // 切割抗性
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData SlashResistance;
    // 钝器抗性
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData BluntResistance;
    // 毒气抗性
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData PoisonResistance;
    // 真气抗性
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData TrueQiResistance;
    // 回气
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData Recharging;
    // 内力
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData InternalStrength;
    // 硬直点数
    //UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    //FGameplayAttributeData Stiffness;
    // 击退点数
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData KnockBack;
    // 倒地点数
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData KnockDown;
    // 击飞点数
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData KnockUp;
    // 闪避
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData Dodge;
    // 硬直抗性
    //UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    //FGameplayAttributeData StiffnessResistance;
    // 击退抗性
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData KnockBackResistance;
    // 倒地抗性
    UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData KnockDownResistance;
	// 击飞抗性
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData KnockUpResistance;
	// 暴击影响数值最小值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CriticalStrikeMinValue;
	// 暴击影响数值最大值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CriticalStrikeMaxValue;
	// 伤害类型
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DamageType;
	//伤害计算时抗性补正
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ResistanceSupplement;
	//攻击强度点数
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AttackIntensity;
	//内功效果
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData NeiGongEffect;
	//轻功效果
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData QingGongEffect;
	//硬功效果
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData YingGongEffect;
	//内劲效果
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData NeiJinEffect;
	//远程效果
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData YuanChenEffect;
	//近战效果
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData JinZhanEffect;
	//建筑物伤害
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BuildingDamage;
	// 穿刺增加的固定攻击力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PierceFixedAttack;
	// 切割增加的固定攻击力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SlashFixedAttack;
	// 钝器增加的固定攻击力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BluntFixedAttack;
	// 毒气增加的固定攻击力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PoisonFixedAttack;
	// 真气增加的固定攻击力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData TrueQiFixedAttack;
	// 增加的暴击伤害百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CriticalIncreasedInjury;
	//最终伤害增幅
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FinalDamageIncrease;
	//防御
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Defense;
	//防御修正
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DefenseSupplement;
	//基础暴击
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BaseCritical;
	//基础暴击抵抗
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BaseCriticalResistance;
};
