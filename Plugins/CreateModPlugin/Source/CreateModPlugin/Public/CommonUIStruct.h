#pragma once
#include "CoreMinimal.h"
#include "BaseDataStruct.h"
#include "Blueprint/UserWidget.h"
#include "Styling/SlateBrush.h"
#include "CommonUIStruct.generated.h"


USTRUCT(BlueprintType)
struct FModTabInfo :public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	//普通按钮状态
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FSlateBrush NormalBase;
	//普通按钮悬浮
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FSlateBrush NormalHovered;
	//普通按钮按下
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FSlateBrush NormalPressed;
	//对应的模块UIid
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> LabelModuleIds;
	//页签tip标题
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText TipTitle;
	//页签tip内容
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText LabelTipContent;
	//要添加的模块功能按钮id
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> FuncButtonIds;
};

UENUM(BlueprintType)
enum class EModTitleTypeEnum: uint8
{
	//固定文本
	Fixed,
	//物品名字
	ItemName,
	//建筑物名字
	BuildingName,
	// 角色名字
	CharacterName ,
	//未观察
	NotObserved,
	//房间名称
	RoomName,
	//组合名称
	CombinationBuildName,
	//大世界城镇名称
	WorldPlaceName,
	//大世界移动Actor类型
	WorldMapMoveName,
};

USTRUCT(BlueprintType)
struct FModCommonUIConfig :public FModDataBase
{
	GENERATED_USTRUCT_BODY()
	//界面标题类型
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModTitleTypeEnum TitleType = EModTitleTypeEnum::Fixed;
	//名称
	UPROPERTY(BlueprintReadWrite, EditAnywhere,meta = (EditConditionHides,EditCondition = "TitleType == EModTitleTypeEnum::Fixed"))
	FText TitleText;
	//标题小图标
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UTexture2D> LabelIcon;
	//大图
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UTexture2D> UIBigImg;
	//要添加的公共模块id
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> CommonModuleIds;
	//要添加的公共按钮id
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> CommonFuncButtonIds;
	//要添加的公共模块id(与CommonModuleIds的区别在一个在顶上一个在最下面,tab带的模块在中间)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> BottomCommonModuleIds;
	//要添加的页签
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FModTabInfo> TabInfos;
	//底部功能按钮
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> BottomFuncButtonIsd;
};

USTRUCT(BlueprintType)
struct FModModuleUIConfig :public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	//模块
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftClassPtr<UUserWidget> ModuleWidget;
};
