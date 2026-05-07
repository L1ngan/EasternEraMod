#pragma once
#include "CoreMinimal.h"
#include "BaseDataStruct.h"
#include "ItemDataStruct.h"
#include "BuffDataStruct.generated.h"

//Buff的类型
UENUM(BlueprintType)
enum class EModBuffType: uint8
{
	//永久
	ForEver,
	//固定时间
	FixedTime,
	//瞬时
	Instant,
};

//Buff的来源类型
UENUM(BlueprintType)
enum class EModBuffOriginType: uint8
{
	None,
	//建筑
	Building,
	//房间
	Room,
	//组合建筑
	CombinationBuilding,
	//新游戏
	NewGame,
	//伤势
	Injury,
	//天气
	Weather,
	//热源
	HeatSource,
	//建筑范围影响
	BuildingEffectRange,
};

//通用BUFF
USTRUCT(BlueprintType)
struct FModCommonBuff : public FModDataBase
{
	GENERATED_USTRUCT_BODY()
	//BUFF名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff")
	FText BuffName;
	//BUFF分类Tag
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff")
	FGameplayTagContainer BuffClassifyTag;
	//BUFF激活需要的标签
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff")
	FGameplayTagContainer ActivateMastHaveTags;
	//BUFF激活不能有的标签
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff")
	FGameplayTagContainer ActivateMastNotHaveTags;
	//BUFF图标
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff")
	TSoftObjectPtr<UTexture2D> BuffIcon;
	//BUFF展示
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff")
	bool bShow = false;
	//BUFF描述
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff")
	FText Describe;
	//格式化的 BUFF描述
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="CommonBuff")
	FModFormatText FormatDescribe;
	//BUFF的优先级 越大优先级越高
	UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff")
	int Priority = 0;
	//品质
	UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff")
	EModItemQuality Quality = EModItemQuality::None;
	//buff持续时间类型
	UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff")
	EModBuffType DurationType = EModBuffType::ForEver;
	//持续时间 秒数
	UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff")
	float Duration = 0.f;
	//效果Ge
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff")
	TArray<TSoftClassPtr<UGameplayEffect>> GameplayEffects;
	//效果中包含的属性
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "CommonBuff")
	TMap<FGameplayAttribute,float> Attributes;
	//为自身添加的tag
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "CommonBuff")
	FGameplayTagContainer GameplayTagContainer;
	//冲突的buff ID
	UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "CommonBuff")
	TArray<FName> ConflictBuffID;
	//相同的buff可叠加的次数 0 是无限制 1 默认
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "CommonBuff")
	int NumberOfSuperpositions = 1;
	//来源
	UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "CommonBuff")
	FGuid OriginGuid = FGuid();
	//来源类型
	UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "CommonBuff")
	EModBuffOriginType OriginType  = EModBuffOriginType::None;
	//每个buff独立的guid
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff")
	FGuid BuffGuid = FGuid();
	//buff在施加GE时显示的提示 与GE 一一对应
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff")
	TArray<FText> GameplayEffectText;
	//当前buff的激活状态
	UPROPERTY(SaveGame, BlueprintReadWrite, EditAnywhere, Category = "CommonBuff")
	bool bIsActivated = false;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "CommonBuff")
	bool bSave = true;
	
	FModCommonBuff() : bShow(false), Priority(0), Duration(0), bIsActivated(false), bSave(true)
	{
	}
};
