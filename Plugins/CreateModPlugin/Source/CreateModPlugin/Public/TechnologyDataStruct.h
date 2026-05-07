#pragma once
#include "CoreMinimal.h"
#include "BaseDataStruct.h"
#include "TechnologyDataStruct.generated.h"

//科技解锁内容类型
UENUM(BlueprintType)
enum class EModTechUnlockItemType : uint8
{
	//解锁建筑
	Building,
	//解锁建筑材料,
	BuildingMaterial,
	//解锁配方
	Recipe,
	//解锁种植物
	Plant,
	//解锁功能
	Function,
	//解锁PlayerBuff(对玩家的所有角色生效的Buff)
	PlayerTeamBuff,
	//解锁小兵
	Dogface,
	//解锁战略技能
	StrategicAbility,
	//解锁防御塔
	TowerDefense,
	//解锁的门派服饰
	ForceApparel,
};

//科技类型
UENUM(BlueprintType)
enum class EModTechCategory : uint8
{
	//食物
	Food,
	//工业,
	Industrial,
	//发展
	Develop,
	//医疗
	Medical,
	//服装
	Clothing,
	//装饰
	Decoration,
	//修炼
	Practice,
};

//科技等级
UENUM(BlueprintType)
enum class EModTechLevel : uint8
{
	//初级
	Beginner,
	//中级
	Intermediate,
	//高级
	Advanced,
};

//科技点数类型
UENUM(BlueprintType)
enum class EModTechPointType : uint8
{
	//初级科技点数
	BasTechPoint,
	//中级科技点数,
	MidTechPoint,
	//高级科技点数
	AdvTechPoint,
};
// 科技解锁物品配置表结构
USTRUCT(BlueprintType)
struct FModTechUnlockItemConigStruct: public FModDataBase
{
	GENERATED_BODY()
	// 显示物品
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FText DisplayName;
	
	// 描述(格式化)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FModFormatText FormatItemDesc;

	// 显示的图标
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TSoftObjectPtr<UTexture2D> Icon;
	
	// 解锁物品类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	EModTechUnlockItemType UnlockType = EModTechUnlockItemType::Building;

	// 解锁物品Ids
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TArray<FName> UnlockItemsIds;

	// 解锁物品数量(he )
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TArray<int32> UnlockItemsNums;
};

// 科技配置表结构
USTRUCT(BlueprintType)
struct FModTechnologyConfigStruct: public FModDataBase
{
	GENERATED_BODY()
	
	// 科技名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FText TechName;

	// UI上显示的图标
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TSoftObjectPtr<UTexture2D> Icon;

	//科技分类
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	EModTechCategory Category = EModTechCategory::Food;

	//科技等级
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	EModTechLevel DifficultyLevel = EModTechLevel::Beginner;

	// 前置科技ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TArray<FName> PrevTechIds;

	// 解锁物品
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TArray<FName> UnlockItemIds;

	// 需要的科技点数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TMap<EModTechPointType,int32> NeedTechPoints;

	//研究需要消耗的资源
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TMap<FName,int32> NeedResources;

	//需要的势力等级
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	int32 NeedForceLevel = 0;

	// 科技元素在UI上的位置X
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	int32 UIX { 0 };

	// 科技元素在UI上的位置Y
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	int32 UIY { 0 };

	// 科技的描述文字（逐渐停用）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FText TechDesc;

	// 科技的描述文字(格式化)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FModFormatText FormatItemTechDesc;
	
	// 科技的是否开放可用
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	bool Enable = true;
	
	FModTechnologyConfigStruct(){}
};