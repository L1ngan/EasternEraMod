// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "LQuickFrame/Base/LBaseValue.h"
#include "SmartObjectsModule/Public/SmartObjectTypes.h"
#include "BuildingData.generated.h"

USTRUCT(BlueprintType)
struct EASTRIMWORLD_API FBuildingData : public FDataBase
{
	GENERATED_USTRUCT_BODY()
public:
	//类别
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 BuildingType = 0;
	//模型
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowedClasses = "StaticMesh"))
	FSoftObjectPath MeshPath;
	//蓝图
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (MetaClass = "BuildingBase"))
	FSoftClassPath BpClass;
	//座位数
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 SeatNum = 0;
	//服务时长
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ServiceTime = 0.f;
	//服务动画
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowedClasses = "AnimationAsset"))
	TArray<FSoftObjectPath> AnimPaths;
	//动画坐标
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowedClasses = "AnimationAsset"))
	TArray<FTransform> AnimTans;
	//goap动作
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FName> Actions;
	//goap世界状态
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FName, FLUniValue> GoapWorldStates;
};
static FBuildingData DefaultBuildingData;

USTRUCT(BlueprintType)
struct EASTRIMWORLD_API FFacilityDefineData :public FSmartObjectDefinitionData
{
	GENERATED_USTRUCT_BODY()
public:
	//交互动画
	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "Animation")
	TSoftObjectPtr<UAnimMontage> AnimMontage;
	//设施交互动画
	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "Animation")
	TSoftObjectPtr<UAnimMontage> FacilityAnimMontage;
};
