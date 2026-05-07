// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "AbilitySystemComponent.h"
#include "EastRimWorldAttributeSet.h"

#include "EastRimWorldGrowUpSet.generated.h"

UCLASS(BlueprintType)
class UEastRimWorldGrowUpSet : public UEastRimWorldAttributeSet
{
	GENERATED_BODY()

public:

	UEastRimWorldGrowUpSet();

	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, GlobalExperienceBonus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, CombatLevel);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, CombatExperience);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, CombatExperienceBonus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, ConstructionLevel);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, ConstructionExperience);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, ConstructionExperienceBonus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, MiningLevel);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, MiningExperience);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, MiningExperienceBonus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, CookingLevel);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, CookingExperience);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, CookingExperienceBonus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, FarmingLevel);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, FarmingExperience);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, FarmingExperienceBonus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, AnimalLevel);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, AnimalTamingSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, AnimalExperience);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, AnimalExperienceBonus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, AnimalTrainingLevel);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, AnimalTrainingExperience);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, AnimalTrainingBonus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, MakeLevel);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, MakeExperience);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, MakeExperienceBonus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, ArtLevel);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, ArtExperience);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, ArtExperienceBonus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, CureLevel);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, CureExperience);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, CureExperienceBonus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, SocialContactLevel);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, SocialContactExperience);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, SocialContactExperienceBonus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, IntelligenceLevel);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, IntelligenceExperience);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, IntelligenceExperienceBonus);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, DanTianExperience);
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, DanTianExperienceBonus);
	//阴性
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, YinExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, YinExperienceBonus)
	//中正
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, NeutralExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, NeutralExperienceBonus);
	//阳性
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, PositiveExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, PositiveExperienceBonus)
	//轻功
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, LightSkillExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, LightSkillExperienceBonus)
	//硬功
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, HardSkillExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, HardSkillExperienceBonus)
	//内劲
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, InternalStrengthExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, InternalStrengthExperienceBonus)
	//刃刺
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, BladeStabsExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, BladeStabsExperienceBonus)
	//枪戟
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, SpearAndHalberdExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, SpearAndHalberdExperienceBonus)
	//刀剑
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, SwordsExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, SwordsExperienceBonus)
	//斧棒
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, AxeClubsExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, AxeClubsExperienceBonus)
	//拳掌
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, FistsAndPalmsExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, FistsAndPalmsExperienceBonus)
	//锤锏
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, HammersAndMacesExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, HammersAndMacesExperienceBonus)
	//暗器
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, HiddenWeaponsExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, HiddenWeaponsExperienceBonus)
	//远程
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, LongRangeExperience)
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, LongRangeExperienceBonus)
	//悟性
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, Comprehension)
	//资质
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, Aptitude)
	//内功循环
	ATTRIBUTE_ACCESSORS(UEastRimWorldGrowUpSet, InternalEnergyCirculation)

private:
	//全局经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData GlobalExperienceBonus;
	//战斗等级
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CombatLevel;
	//战斗经验
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CombatExperience;
	//战斗经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CombatExperienceBonus;
	//建造等级
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ConstructionLevel;
	//建造经验
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ConstructionExperience;
	//建造经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ConstructionExperienceBonus;
	//采矿等级
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MiningLevel;
	//采矿经验
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MiningExperience;
	//采矿经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MiningExperienceBonus;
	//烹饪等级
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CookingLevel;
	//烹饪经验
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CookingExperience;
	//烹饪经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CookingExperienceBonus;
	//农业等级
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FarmingLevel;
	//农业经验
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FarmingExperience;
	//农业经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FarmingExperienceBonus;
	//动物相关等级
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AnimalLevel;
	//驯服动物的能力（驯服每次增加的进度）
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AnimalTamingSpeed;
	//动物相关经验
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AnimalExperience;
	//动物相关经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AnimalExperienceBonus;
	//动物训练经验
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AnimalTrainingExperience;
	//动物训练等级
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AnimalTrainingLevel;
	//动物训练经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AnimalTrainingBonus;
	//制作等级
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MakeLevel;
	//制作经验
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MakeExperience;
	//制作经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MakeExperienceBonus;
	//艺术等级
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ArtLevel;
	//艺术经验
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ArtExperience;
	//艺术经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ArtExperienceBonus;
	//治疗等级
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CureLevel;
	//治疗经验
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CureExperience;
	//治疗经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CureExperienceBonus;
	//社交等级
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SocialContactLevel;
	//社交经验
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SocialContactExperience;
	//社交经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SocialContactExperienceBonus;
	//智力等级
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData IntelligenceLevel;
	//智力经验
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData IntelligenceExperience;
	//智力经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData IntelligenceExperienceBonus;
	//丹田经验值
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DanTianExperience;
	//丹田经验加成
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DanTianExperienceBonus;
	//阴性
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData YinExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData YinExperienceBonus;
	//中正
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData NeutralExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData NeutralExperienceBonus;
	//阳性
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PositiveExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PositiveExperienceBonus;
	//轻功
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LightSkillExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LightSkillExperienceBonus;
	//硬功
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HardSkillExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HardSkillExperienceBonus;
	//内劲
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData InternalStrengthExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData InternalStrengthExperienceBonus;
	//刃刺
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BladeStabsExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BladeStabsExperienceBonus;
	//枪戟
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SpearAndHalberdExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SpearAndHalberdExperienceBonus;
	//刀剑
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SwordsExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SwordsExperienceBonus;
	//斧棒
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AxeClubsExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AxeClubsExperienceBonus;
	//拳掌
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FistsAndPalmsExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FistsAndPalmsExperienceBonus;
	//锤锏
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HammersAndMacesExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HammersAndMacesExperienceBonus;
	//暗器
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HiddenWeaponsExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HiddenWeaponsExperienceBonus;
	//远程
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LongRangeExperience;
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LongRangeExperienceBonus;
	//悟性
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Comprehension;
	//资质
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Aptitude;
	//内功循环
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|GrowUp", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData InternalEnergyCirculation;
};
