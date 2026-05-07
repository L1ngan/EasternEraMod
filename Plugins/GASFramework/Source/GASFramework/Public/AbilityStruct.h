#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "AbilityEnum.h"
#include "EastRimWorldAbilityTypes.h"
#include "ProjectileStruct.h"
#include "AbilityStruct.generated.h"

USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FControlEffectAnimMontage
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowedClasses = "/Script/Engine.AnimMontage"))
	TArray<FSoftObjectPath> AnimMontages;
	FControlEffectAnimMontage(){}
};

USTRUCT(BlueprintType)
struct FAbilityAllTags
{
	GENERATED_USTRUCT_BODY()
	//此能力包含这些标签(可通过此标签激活此能力)
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AbilityTagCategory")
    FGameplayTagContainer AbilityTags;
	//此能力激活时带有这些标签的能力会被取消。
    UPROPERTY(EditDefaultsOnly, Category = Tags, meta=(Categories="AbilityTagCategory"))
    FGameplayTagContainer CancelAbilitiesWithTag;
	//当此能力处于激活状态时，带有这些标签的技能将被阻止。
    UPROPERTY(EditDefaultsOnly, Category = Tags, meta=(Categories="AbilityTagCategory"))
    FGameplayTagContainer BlockAbilitiesWithTag;
	//当此能力处于激活状态时，赋予给拥有者的标签，能力结束后移除
    UPROPERTY(EditDefaultsOnly, Category = Tags, meta=(Categories="OwnedTagsCategory"))
    FGameplayTagContainer ActivationOwnedTags;
	//仅当激活参与者/组件具有所有这些标签时，才能激活此能力
    UPROPERTY(EditDefaultsOnly, Category = Tags, meta=(Categories="OwnedTagsCategory"))
    FGameplayTagContainer ActivationRequiredTags;
	//如果激活的参与者/组件具有以下任何标签，则此能力将被阻止
    UPROPERTY(EditDefaultsOnly, Category = Tags, meta=(Categories="OwnedTagsCategory"))
    FGameplayTagContainer ActivationBlockedTags;
	//仅当源参与者/组件具有所有这些标签时，才能激活此能力
    UPROPERTY(EditDefaultsOnly, Category = Tags, meta=(Categories="SourceTagsCategory"))
    FGameplayTagContainer SourceRequiredTags;
	//如果源参与者/组件具有以下任何标签，则此能力将被阻止
    UPROPERTY(EditDefaultsOnly, Category = Tags, meta=(Categories="SourceTagsCategory"))
    FGameplayTagContainer SourceBlockedTags;
	//仅当目标参与者/组件具有所有这些标签时，才能激活此能力
    UPROPERTY(EditDefaultsOnly, Category = Tags, meta=(Categories="TargetTagsCategory"))
    FGameplayTagContainer TargetRequiredTags;
	//如果目标参与者/组件具有以下任何标签，则此能将被阻止
    UPROPERTY(EditDefaultsOnly, Category = Tags, meta=(Categories="TargetTagsCategory"))
    FGameplayTagContainer TargetBlockedTags;
	//激活能力时会激活所有以下标签的能力
	UPROPERTY(EditDefaultsOnly, Category = Tags, meta=(Categories="TargetTagsCategory"))
	FGameplayTagContainer ActivationAbilityTags;
};

USTRUCT(BlueprintType)
struct FGameAbilityStruct: public FDataBase
{
	GENERATED_USTRUCT_BODY()
	/*********************************************************公共******************************************************/
	//此技能的唯一标签 用于查询技能信息
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AbilityTagCategory")
	FGameplayTagContainer UniqueGameplayTag;
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MustFill")
	TSoftClassPtr<UGameplayAbility> GameplayAbility;
	//距离目标最大可使用的距离
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="MustFill")
	float UseDistance = 0.0f;
	//技能标签
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MustFill")
	FAbilityAllTags AbilityAllTags;
	//技能类型枚举
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="MustFill")
	EEastRimWorldAbilityType AbilityType = EEastRimWorldAbilityType::GeneralAbility;
	//是否是普通攻击
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="MustFill",meta =  (EditConditionHides,EditCondition = " AbilityType == EEastRimWorldAbilityType::GeneralAbility"))
	EAbilityAttackType AbilityAttackType = EAbilityAttackType::NormalAttack;
	//是否更改目标为触发者
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="MustFill",meta =  (EditConditionHides,EditCondition = " AbilityType == EEastRimWorldAbilityType::TriggerSkill"))
	bool bTriggerToTarget = true;
	//被动触发的概率
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MustFill",meta =  (EditConditionHides,EditCondition = " AbilityType == EEastRimWorldAbilityType::TriggerSkill"))
	float TriggerProbability = 1.f;
	//触发的技能持续时间 -1为永久 0为瞬时
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="MustFill",meta =  (EditConditionHides,EditCondition = " AbilityType == EEastRimWorldAbilityType::TriggerSkill"))
	int32 TimeOfDuration = 0;
	//触发类技能效果类型
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="MustFill",meta =  (EditConditionHides,EditCondition = " AbilityType == EEastRimWorldAbilityType::TriggerSkill"))
	ETriggerAbilityEffectType TriggerAbilityEffectType = ETriggerAbilityEffectType::Normal;
	//减少cd的技能tag
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="MustFill",meta =  (EditConditionHides,EditCondition = " AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::ReduceCDs"))
	FGameplayTagContainer ReduceCDTags;
	//减少的时间
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="MustFill",meta =  (EditConditionHides,EditCondition = " AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::ReduceCDs"))
	float ReduceTime = 1.f;
	
	//持续叠加的GE
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="MustFill",meta = (EditConditionHides,EditCondition = "AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::ContinueApplyEffects"))
	TArray<TSubclassOf<UGameplayEffect>> ApplyEffects;
	//间隔时间
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="MustFill",meta = (EditConditionHides,EditCondition = "AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::ContinueApplyEffects"))
	float IntervalTime = 1.f;
	
	//反弹伤害GE
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="MustFill",meta = (EditConditionHides,EditCondition = "AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::CounterattackDamage"))
	TSubclassOf<UGameplayEffect> CounterattackDamageEffect;
	//反弹伤害的类型 如果不填则直接反弹受到的伤害
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="MustFill",meta = (EditConditionHides,EditCondition = "AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::CounterattackDamage"))
	EDamageType DamageType = EDamageType::None;
	//反弹伤害的比例
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="MustFill",meta = (EditConditionHides,EditCondition = "AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::CounterattackDamage"))
	float PercentageDamage = 0.1;

	//是否检查抵抗
	UPROPERTY(BlueprintReadWrite,EditAnywhere,meta =  (EditConditionHides,EditCondition = " AbilityType == EEastRimWorldAbilityType::BeingControlSkill "),Category="Projectile")
	bool bCanResistanceControl = false;
	
	//技能名字
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Common")
	FText SkillName;
	//技能图标ID
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Common")
	TSoftObjectPtr<UTexture2D> Icon;
	//技能介绍
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Common")
	FText SkillDescribe;
	//技能描述格式化文本
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Common")
	FFormatText FormatSkillDesc;
	//技能品质
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Common")
	EItemQuality Quality = EItemQuality::None;
	//此技能的使用场景
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Common")
	EAbilityUsageScenario AbilityUsageScenario = EAbilityUsageScenario::OtherAbility;
	//此技能使用需要的武器类型
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Common")
	TArray<EWeaponType> NeedWeaponTypes;
	//是否锁定目标方向释放
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Common")
	bool bLockTargetDirection = false;
	//是否能力结束后恢复其他能力动画 (例如：击飞能力后恢复眩晕动画）
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Common")
	bool bEndAbilityReplayOtherAbilityAnimation = false;
	//受到伤势的概率
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Common",meta=(ClampMin = 0.f,ClampMax = 1.f))
	float InjuredProbability = 1.0f;
	//技能提示
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Common")
	FText AbilityTips;
	/*****************************************************冷却**********************************************************/
	//是否有冷却
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="CoolDown")
	bool bHaveCoolDown = false;
	// 冷却时间
	UPROPERTY(BlueprintReadWrite, EditAnywhere,meta =  (EditConditionHides,EditCondition = " bHaveCoolDown == true"),Category="CoolDown")
	FScalableFloat CooldownDuration;
	// 冷却标签
	UPROPERTY(BlueprintReadWrite, EditAnywhere,meta =  (EditConditionHides,EditCondition = " bHaveCoolDown == true",Categories = "SetByCaller.CoolDown"),Category="CoolDown")
	FGameplayTagContainer CooldownTags;
	/*****************************************************动画**********************************************************/
	//是否有动画?!
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Montage")
	bool bHaveMontage = false;
	//动画蒙太奇
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Montage",meta =  (EditConditionHides, EditCondition = " bHaveMontage == true "))
	TSoftObjectPtr<UAnimMontage> Montage;
	//蒙太奇接收的事件标签
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Montage",meta =  (EditConditionHides,EditCondition = " bHaveMontage == true "))
	FGameplayTagContainer EventTags;
	//最大的播放速率 默认限制在十倍内
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Montage",meta =  (EditConditionHides,EditCondition = " bHaveMontage == true "))
	float MaxRate;
	//自定义播放倍率
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Montage",meta =  (EditConditionHides,EditCondition = " bHaveMontage == true "))
	float DefaultRate;
	//片段名	
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Montage",meta =  (EditConditionHides,EditCondition = " bHaveMontage == true "))
	TArray<FName> StartSections;
	//动画中触发的技能效果
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Montage",meta =  (EditConditionHides,EditCondition = " bHaveMontage == true "))
	TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> EffectContainerMap;
	/*****************************************************GamePlayEffect**********************************************************/
	//激活后马上给予自己的GEs;
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="GamePlayEffect")
	TArray<TSubclassOf<UGameplayEffect>> ActivateGetSelfGEs;
	//激活后给予自己友方包括自己的 （弃用直接用投射物实现）
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="GamePlayEffect")
	TArray<TSubclassOf<UGameplayEffect>> ActivateGetAllFriendlyGEs;
	//激活后给予目标的GEs（弃用直接用投射物实现）
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="GamePlayEffect")
	TArray<TSubclassOf<UGameplayEffect>> ActivateGetTargetGEs;
	/*****************************************************投射物**********************************************************/
	//不通过标签等额外方式，始终触发的投射物
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Projectile")
	bool bTriggerProjectile;
	//始终触发的投射物
	UPROPERTY(BlueprintReadWrite,EditAnywhere,meta =  (EditConditionHides,EditCondition = " bTriggerProjectile"),Category="Projectile")
	TArray<FAbilityProjectileStruct> ProjectileStructs;
	//动画是否会触发投射物 首先需要动画配置对应标签
	UPROPERTY(BlueprintReadWrite,EditAnywhere,meta =  (EditConditionHides,EditCondition = " bHaveMontage"),Category="Animation Projectile")
	bool bAnimationTriggerProjectile = false; 
	//标签触发的投射物
	UPROPERTY(BlueprintReadWrite,EditAnywhere,meta =  (EditConditionHides,EditCondition = " bHaveMontage && bAnimationTriggerProjectile"),Category="Animation Projectile")
	TMap<FGameplayTag,FAbilityProjectileStruct> AnimationSpawnProjectiles;
	/*****************************************************召唤物**********************************************************/
	//是否会触发额外召唤
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Summon")
	bool bTriggerSummon;
	//触发后召唤物的数组 召唤物行命名，召唤物数量
	UPROPERTY(BlueprintReadWrite,EditAnywhere,meta = (EditConditionHides,EditCondition = " bTriggerSummon"),Category="Summon")
	TMap<FName,int32> SummonMap;
	//是否显示在傀儡技能UI中
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Summon")
	bool bShowInSummonSkill;

	friend inline bool operator==(const FGameAbilityStruct& A, const FGameAbilityStruct& B)
	{
		return A.ID==B.ID;
	}
	FGameAbilityStruct(): MaxRate(0), DefaultRate(0), bTriggerProjectile(false), bTriggerSummon(false),bShowInSummonSkill(false)
	{
	}
	
	/*****************************************************攻击对身体部位的影响**********************************************************/

	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Organs & Attacked")
	//<身体部位id,增加的命中概率权重>（攻击可能对身体多个部位造成伤害，但最终只会有一个部位受伤。按权重随机。）[伤害分摊是在确定伤害部位之后进行的]
	TMap<FName, int> AddOrgansAttackedWeightMap;
};