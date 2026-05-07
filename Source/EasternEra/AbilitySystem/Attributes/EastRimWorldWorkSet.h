// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "AbilitySystemComponent.h"
#include "EastRimWorldAttributeSet.h"

#include "EastRimWorldWorkSet.generated.h"

class UObject;
struct FFrame;

UCLASS(BlueprintType)
class UEastRimWorldWorkSet : public UEastRimWorldAttributeSet
{
	GENERATED_BODY()

public:

	UEastRimWorldWorkSet();

	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, GlobalWorkAddition);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, OrdinaryWorkingSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, MiningExtraOutput);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, MiningSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, QualityOfTreatment);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, SpeedOfTreatment);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, RateOfConstruction);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, SuccessRateOfConstruction);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, SuccessRateOfRepair);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, ReadingSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, PlantsHarvestExtraYield);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, PlantingSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, CookingSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, CookingToxicityProbability);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, SlaughterSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, ExtraSlaughterYield);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, DrugMakingSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, BrewingSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, AnimalCollectionSuppliesExtraOutput);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, AnimalCollectionSuppliesSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, MeltingSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, HuntingCover);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, ResearchRate);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, SurgerySpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, SurgerySuccessRate);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, TamingProbability);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, TrainingProbability);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, CollectionSuccessRate);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, FarmingSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, FarmingExtraOutput);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, ArtProductionSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, ManufacturingSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, SpeedOfMaintain);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, DisassemblySpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, DisassemblyIncome);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, ObserveSpeed);
	ATTRIBUTE_ACCESSORS(UEastRimWorldWorkSet, ObserveEfficiency);
private:

	//全局工作加成 包含各种属性途径增加
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData GlobalWorkAddition;
	//普通工作速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData OrdinaryWorkingSpeed;
	//采矿额外产生倍率
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MiningExtraOutput;
	//采矿速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MiningSpeed;
	//治疗质量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData QualityOfTreatment;
	//治疗速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SpeedOfTreatment;
	//建造速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RateOfConstruction;
	//建造成功率
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SuccessRateOfConstruction;
	//修理成功率
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SuccessRateOfRepair;
	//阅读速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ReadingSpeed;
	//植物的收获额外产量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PlantsHarvestExtraYield;
	//种植速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PlantingSpeed;
	//烹饪速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CookingSpeed;
	//烹饪有毒率
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CookingToxicityProbability;
	//屠宰速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SlaughterSpeed;
	//屠宰额外产量
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ExtraSlaughterYield;
	//制药速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DrugMakingSpeed;
	//酿酒速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BrewingSpeed;
	//动物收集物资额外产出
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AnimalCollectionSuppliesExtraOutput;
	//动物收集物资速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AnimalCollectionSuppliesSpeed;
	//熔炼速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MeltingSpeed;
	//狩猎隐蔽率
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HuntingCover;
	//研究速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ResearchRate;
	//手术速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SurgerySpeed;
	//手术成功率
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SurgerySuccessRate;
	//务农额外产出
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FarmingExtraOutput;
	//务农速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FarmingSpeed;
	//采集成功率
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CollectionSuccessRate;
	//驯服几率
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData TamingProbability;
	//训练几率
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData TrainingProbability;
	//艺术制造速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ArtProductionSpeed;
	//制造速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ManufacturingSpeed;
	//维修速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SpeedOfMaintain;
	//拆解速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DisassemblySpeed;
	//拆解收益
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DisassemblyIncome;
	//观察速度
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ObserveSpeed;
	//观察效率
	UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Work", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ObserveEfficiency;
};
