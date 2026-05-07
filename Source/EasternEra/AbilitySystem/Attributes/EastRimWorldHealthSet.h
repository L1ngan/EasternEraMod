// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "EastRimWorldAttributeSet.h"
#include "EastRimWorldHealthSet.generated.h"

struct FGameAbilityStruct;
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnCausesHealthChangedEvent, const FGameplayAttribute */*SourceAttribute*/,
                                     float /*ChangeValue*/);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnCausesDeathEvent,FText);

/**
 * 
 */
UCLASS(BlueprintType)
class EASTRIMWORLD_API UEastRimWorldHealthSet : public UEastRimWorldAttributeSet
{
	GENERATED_BODY()
public:
	UEastRimWorldHealthSet();

	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, Health);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurMaxHealth);
    ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, MaxHealth);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, BaseHeal);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, Healing);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, Damage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, MoveSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RunSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, SanitationInfluence);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, FreeWeight);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, ToxicResistance);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, MinPreferenceTemperature);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, MaxPreferenceTemperature);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, Immunity);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, BreakdownThresholdChangeValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, PainThreshold);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, ForagingAmount);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, FeedingSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, ReproductiveCapacity);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CrawlSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, NutritionValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, MaxNutritionValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, NutritionValueReduceSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, NutritionValueReduceSpeedPercent);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, NutritionValueIncreaseSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, NutritionValueIncreaseSpeedPercent);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, TiredValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, MaxTiredValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, TiredValueReduceSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, TiredValueReduceSpeedPercent);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, TiredValueIncreaseSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, TiredValueIncreaseSpeedPercent);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, HappyValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, MaxHappyValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, HappyValueReduceSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, HappyValueReduceSpeedPercent);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, HappyValueIncreaseSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, HappyValueIncreaseSpeedPercent);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, MoodValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, MoodTargetValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, OperationalStatus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, VisualStatus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, HearingStatus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, EatingStatus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LanguageStatus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, BreathingStatus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, MovingStatus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, ReproductiveStatus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, BloodFiltrationStatus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, DigestiveStatus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, PierceDamage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, SlashDamage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, BluntDamage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, PoisonDamage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, TrueQiDamage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, PierceCriticalDamage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, SlashCriticalDamage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, BluntCriticalDamage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, PerceptionTemperature);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, Inspiration);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, MaxInspiration);
	
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, DamageShield);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, DamageShieldMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, DamageShieldRecoverSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, DamageShieldRecoverSpeedPercent);

	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, Head);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurHeadMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, HeadMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LeftEye);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurLeftEyeMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LeftEyeMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RightEye);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurRightEyeMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RightEyeMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LeftEar);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurLeftEarMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LeftEarMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RightEar);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurRightEarMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RightEarMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, Nose);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurNoseMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, NoseMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, Mouth);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurMouthMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, MouthMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, Body);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurBodyMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, BodyMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, Viscera);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurVisceraMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, VisceraMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, Dantian);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurDantianMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, DantianMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, XiaYin);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurXiaYinMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, XiaYinMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LeftArm);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurLeftArmMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LeftArmMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RightArm);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurRightArmMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RightArmMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LeftLeg);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurLeftLegMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LeftLegMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RightLeg);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurRightLegMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RightLegMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LeftFoot);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurLeftFootMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LeftFootMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RightFoot);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CurRightFootMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RightFootMaxLife);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RobotEnergyMaxValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RobotEnergyCurValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RobotEnergyIntervalStanbyRecoveryValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RobotEnergyIntervalStanbyRecoverySpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RobotEnergyIntervalInBuildingRecoveryValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RobotEnergyIntervalInBuildingRecoverySpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RobotEnergyIntervalExpendValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RobotEnergyIntervalExpendSpeed);
	
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, AnimalMaxGrowthValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, AnimalCurGrowthValue);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, AnimalAddGrowthValue);

	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, BaseHealingRate);//基础治疗速度
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, BleedEffectValue);//流血效果数值
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, WeaknessEffectValue);//虚弱效果数值
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, SpoilEffectValue);//腐坏效果数值
	
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, ChangeATKAttribute);//改变攻击力属性
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, ChangeMAEffect);//武学
	
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, CanTreatCount);//一次可以医治的伤势数量
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, AntDrugResistance);//抗耐药性
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, InjuryOrgan);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, DamagePercentage);
	//部位血量百分比
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxHeadPercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxLeftEyePercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxRightEyePercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxLeftEarPercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxRightEarPercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxNosePercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxMouthPercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxBodyPercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxVisceraPercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxDantianPercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxXiaYinPercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxLeftArmPercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxRightArmPercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxLeftLegPercentage);
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, LossMaxRightLegPercentage);

	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, RotValue);//腐烂值，死亡后开始持续增加
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, MaxRotValue);//腐烂值，死亡后开始持续增加
	ATTRIBUTE_ACCESSORS(UEastRimWorldHealthSet, Species);//物种

private:
	
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Health;	//当前的生命值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurMaxHealth;//当前最大生命值 部位受伤后会改变
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxHealth;//部位计算的最大生命值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MoveSpeed;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RunSpeed;
	//卫生影响
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SanitationInfluence;
	//携带能力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FreeWeight;
	//毒抗
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ToxicResistance;
	//适宜的温度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MinPreferenceTemperature;
	//适宜的温度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxPreferenceTemperature;
	//免疫力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Immunity;
	//崩溃阈值变化值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BreakdownThresholdChangeValue;
	//疼痛阈值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PainThreshold;
	//觅食量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ForagingAmount;
	//进食速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FeedingSpeed;
	//繁育能力
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ReproductiveCapacity;
	//爬行速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CrawlSpeed;
	//营养值 
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData NutritionValue;
	//营养值上限
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxNutritionValue;
	//营养值减小速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData NutritionValueReduceSpeed;
	//营养值减小速度百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData NutritionValueReduceSpeedPercent;
	//营养值增加速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData NutritionValueIncreaseSpeed;
	//营养值增加速度百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData NutritionValueIncreaseSpeedPercent;
	//疲劳值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData TiredValue;
	//疲劳值上限
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxTiredValue;
	//疲劳值减小速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData TiredValueReduceSpeed;
	//疲劳值减小速度百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData TiredValueReduceSpeedPercent;
	//疲劳值增加速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData TiredValueIncreaseSpeed;
	//疲劳值增加速度百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData TiredValueIncreaseSpeedPercent;
	//娱乐值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HappyValue;
	//娱乐上限
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxHappyValue;
	//娱乐值减小速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HappyValueReduceSpeed;
	// 娱乐值减小速度百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HappyValueReduceSpeedPercent;
	//娱乐值增加速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HappyValueIncreaseSpeed;
	// 娱乐值增加速度百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HappyValueIncreaseSpeedPercent;
	// 心情值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MoodValue;
	//感悟值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Inspiration;

	//动物最大成长值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AnimalMaxGrowthValue;
	//动物当前成长值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AnimalCurGrowthValue;
	//动物增长速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AnimalAddGrowthValue;
	
	//最大感悟值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxInspiration;
	
	// 心情目标值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MoodTargetValue;
	
	UPROPERTY(BlueprintReadOnly, Category="EastRimWorld|Health", Meta=(AllowPrivateAccess=true))
	FGameplayAttributeData Healing;
	
	UPROPERTY(BlueprintReadOnly, Category="EastRimWorld|Health", Meta=(HideFromModifiers,AllowPrivateAccess=true))
	FGameplayAttributeData BaseHeal;
	//给予的普通伤害
	UPROPERTY(BlueprintReadOnly, Category="EastRimWorld|Health", Meta=(AllowPrivateAccess=true))
	FGameplayAttributeData Damage;
	//操作相关状况
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData OperationalStatus;
	//视觉相关状况
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData VisualStatus;
	//视觉相关状况
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HearingStatus;
	//进食相关状况
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData EatingStatus;
	//语言相关状况
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LanguageStatus;
	//呼吸相关状况
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BreathingStatus;
	//移动相关状况
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MovingStatus;
	//生育相关状况
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ReproductiveStatus;
	//血液过滤相关状况
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BloodFiltrationStatus;
	//消耗相关状况
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DigestiveStatus;
	// 穿刺伤害 不可直接配置
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PierceDamage;
	// 切割伤害 不可直接配置
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SlashDamage;
	// 钝器伤害 不可直接配置
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BluntDamage;
	// 毒气伤害 不可直接配置
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PoisonDamage;
	// 真气伤害 不可直接配置
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData TrueQiDamage;
	// 穿刺暴击伤害 不可直接配置
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (HideFromModifiers,AllowPrivateAccess = true))
	FGameplayAttributeData PierceCriticalDamage;
	// 切割暴击伤害 不可直接配置
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (HideFromModifiers,AllowPrivateAccess = true))
	FGameplayAttributeData SlashCriticalDamage;
	// 钝器暴击伤害 不可直接配置
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (HideFromModifiers,AllowPrivateAccess = true))
	FGameplayAttributeData BluntCriticalDamage;
	//体感温度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PerceptionTemperature;
	//罡气护盾
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DamageShield;
	//罡气护盾 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DamageShieldMaxLife;
	//罡气护盾 恢复速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DamageShieldRecoverSpeed;
	//罡气护盾 恢复速度百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DamageShieldRecoverSpeedPercent;
	//头
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Head;
	//头当前最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurHeadMaxLife;
	//头 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HeadMaxLife;
	//左眼睛
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LeftEye;
	//左眼睛
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurLeftEyeMaxLife;
	//左眼睛 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LeftEyeMaxLife;
	//右眼睛
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RightEye;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurRightEyeMaxLife;
	//右眼睛 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RightEyeMaxLife;
	//左耳朵
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LeftEar;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurLeftEarMaxLife;
	//左耳朵 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LeftEarMaxLife;
	//右耳朵
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RightEar;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurRightEarMaxLife;
	//右耳朵 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RightEarMaxLife;
	//鼻子
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Nose;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurNoseMaxLife;
	//鼻子 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData NoseMaxLife;
	//口
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Mouth;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurMouthMaxLife;
	//口 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MouthMaxLife;
	//躯干
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Body;
	//当前躯干血上限
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurBodyMaxLife;
	//躯干 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BodyMaxLife;
	//内脏
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Viscera;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurVisceraMaxLife;
	//内脏 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData VisceraMaxLife;
	//丹田
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Dantian;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurDantianMaxLife;
	//丹田 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DantianMaxLife;
	//下阴
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData XiaYin;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurXiaYinMaxLife;
	//下阴 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData XiaYinMaxLife;
	//左臂
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LeftArm;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurLeftArmMaxLife;
	//左臂 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LeftArmMaxLife;
	//右臂
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RightArm;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurRightArmMaxLife;
	//右臂 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RightArmMaxLife;
	//左腿
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LeftLeg;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurLeftLegMaxLife;
	//左腿 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LeftLegMaxLife;
	//右腿
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RightLeg;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurRightLegMaxLife;
	//右腿 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RightLegMaxLife;
	//左脚
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LeftFoot;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurLeftFootMaxLife;
	//左脚 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LeftFootMaxLife;
	//右脚
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RightFoot;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurRightFootMaxLife;
	//右脚 最大血量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RightFootMaxLife;

	//机关人最大能源
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RobotEnergyMaxValue;

	//机关人当前能源
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RobotEnergyCurValue;

	//机关人单位时间待机恢复的能源
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RobotEnergyIntervalStanbyRecoveryValue;

	//机关人单位时间待机恢复的能源速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RobotEnergyIntervalStanbyRecoverySpeed;
	//机关人单位时间在维修建筑恢复的能源
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RobotEnergyIntervalInBuildingRecoveryValue;
	//机关人单位时间在维修建筑恢复的能源速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RobotEnergyIntervalInBuildingRecoverySpeed;
	//机关人单位时间消耗的能源
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RobotEnergyIntervalExpendValue;
	//机关人单位时间消耗的能源速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RobotEnergyIntervalExpendSpeed;
	//基础愈合速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BaseHealingRate;

	//流血效果数值(部位每个小时失去的健康值)
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BleedEffectValue;

	//虚弱效果数值（角色攻击类属性降低）
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData WeaknessEffectValue;
	
	//腐坏效果数值（部位每天降低健康值）
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SpoilEffectValue;

	//改变攻击力属性
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ChangeATKAttribute;
	
	//改变武学值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ChangeMAEffect;
	
	//一次可以医治的伤势数量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CanTreatCount;

	//抗耐药性
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AntDrugResistance;
	
	//伤势部位
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData InjuryOrgan;
	//伤势百分比（目前用于伤害部位时的伤害百分比）
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DamagePercentage;
	//损失头部血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxHeadPercentage;
	//损失左眼睛血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxLeftEyePercentage;
	//损失右眼睛血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxRightEyePercentage;
	//损失左耳朵血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxLeftEarPercentage;
	//损失右耳朵血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxRightEarPercentage;
	//损失鼻子血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxNosePercentage;
	//损失口血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxMouthPercentage;
	//损失躯干血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxBodyPercentage;
	//损失内脏血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxVisceraPercentage;
	//损失丹田血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxDantianPercentage;
	//损失下阴血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxXiaYinPercentage;
	//损失左臂血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxLeftArmPercentage;
	//损失右臂血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxRightArmPercentage;
	//损失左腿血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxLeftLegPercentage;
	//损失右腿血量百分比
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LossMaxRightLegPercentage;
	//腐烂值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RotValue;
	 //最大腐烂值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxRotValue;
	//物种
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Species;
};
