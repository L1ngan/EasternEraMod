#pragma once
#include "CoreMinimal.h"
#include "AbilityEnum.generated.h"


// 物品品质枚举
UENUM(BlueprintType)
enum class EItemQuality : uint8
{
	None,
	//白色
	White,
	//绿色
	Green,
	//蓝色
	Blue,
	//紫色
	Purple,
	//橙色
	Orange,
	//金色
	Golden,
	//红色
	Red,
	//炫彩
	Colorful,
};


UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	None,
	//弓
	Bow,
	//剑
	Sword,
	//刃刺
	Blade,
	//枪戟
	Spear,
	//斧头
	Ax,
	//锤
	Hammer,
	//拳头
	Fist,
	//暗器
	HiddenWeapon,
	//火器
	Firearm,
};

//可替换文本结构
USTRUCT(BlueprintType)
struct FFormatText
{
	GENERATED_USTRUCT_BODY()

	//主文本
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText TextMain;
	//替换变量文本
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FString, FText> TextParams;
};