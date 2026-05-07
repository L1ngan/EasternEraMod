// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemDataStruct.h"
#include "ModNewGameStruct.generated.h"

USTRUCT(BlueprintType)
struct FModCharacteristicNumWeight
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32,int32> NumAndWeight;
};

// 新游戏流程配置资产
UCLASS(BlueprintType)
class UModNewGameConfigAsset: public UDataAsset
{
	GENERATED_BODY()
public:
	//主角预设信息ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ProtagonistPresetDataID;

	//女性主角头像
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UTexture2D>> ProtagonistFemaleAvatar;
	//女性主角半身立绘
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UTexture2D>> Half_ProtagonistFemaleAvatar;
	//女性比武半身立绘
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UTexture2D>> Half_TourFemaleAvatar;
	//女性比武小立绘
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UTexture2D>> Small_TourFemaleAvatar;
	//女性主角中心半身立绘
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UTexture2D>> Half_ProtagonistFemaleCenterAvatar;
	
	//男性主角头像
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UTexture2D>> ProtagonistMaleAvatar;
	//男性主角半身立绘
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UTexture2D>> Half_ProtagonistMaleAvatar;
	//男性比武半身立绘
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UTexture2D>> Half_TourMaleAvatar;
	//男性比武小立绘
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UTexture2D>> Small_TourMaleAvatar;
	//男性主角中心半身立绘
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UTexture2D>> Half_ProtagonistMaleCenterAvatar;

	//主角技能点数
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProtagonistSkillPoint = 0;

	//主角兴趣点数
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProtagonistFirePoint = 0;
	
	//每个技能最大添加的兴趣点
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerSkillMaxFirePoint = 0;
	
	//随机生成主角可选特性的总数
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProtagonistCharacteristicNum = 0;
	
	//初始同行成员数量
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InitNewGameTeamMemberNum = 0;

	//初始解锁的建筑id(在列表中是否可见)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> UnLockBuildingId;

	//初始解锁的配方id
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> UnlockFormulaId;

	//初始解锁的种植物id
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> UnlockPlantId;

	//新游戏功能ID
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<FName> UnlockGameFunction;

	//初始资源积分数量
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InitNewGameResourceCoinNum = 0;
	
	//初始剧本积分
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InitNewGameStoryCoinNum = 0;
	//主角特性随机
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModItemQuality, FModCharacteristicNumWeight> ProtagonistCharacteristicRand;
};
