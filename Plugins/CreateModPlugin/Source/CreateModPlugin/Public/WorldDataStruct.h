#pragma once
#include "CoreMinimal.h"
#include "BaseDataStruct.h"
#include "WorldDataStruct.generated.h"

class UBinkMediaPlayer;
class UCommonActivatableWidget;
//世界地点类型
UENUM(BlueprintType)
enum class EModWorldPlaceType : uint8
{
	None,
	//驻地
	Station,
	//中心城市
	CenterCity,
	//资源点
	ResourcePoint,
	//事件点
	EventPoint,
	//战场
	Battleground,
	//景观遗迹
	LandscapeRemains,
	//门派比武
	Tournament,
};

USTRUCT(BlueprintType)
struct FModWorldPlaceInfo :public FModDataBase
{
	GENERATED_USTRUCT_BODY()
public:

	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base")
	FName BattlePlaceID;
	//地点名字
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base")
	FText PlaceName;
	//地点描述
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base")
	FText PlaceDesc;
	//地点等级
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base")
	int32 PlaceLevel = 1;
	//地点等级对应的模型
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base")
	TMap<int32,TSoftObjectPtr<UStaticMesh>> PlaceMesh;
	//是否显示在地图上 (例如：战斗地图可能不会显示在地图上)
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base")
	bool bShowInMap = true;
	//地点繁荣度
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Prosperity")
	float Prosperity = 1;
	//地点最大繁荣度
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Prosperity")
	float MaxProsperity = 1;
	//地点每日繁荣度增长基础
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Prosperity")
	float ProsperityIncreaseBase = 1;
	//地点类型
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base")
	EModWorldPlaceType WorldPlaceType = EModWorldPlaceType::Station;
	//地点图标
	UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base")
	TSoftObjectPtr<UTexture2D> PlaceIcon;
	//地点缩略图
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowedClasses = "/Script/Engine.Texture2D"))
	TSoftObjectPtr<UTexture2D> PlaceThumbnail;
	//需要的地区探索度
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Exploration")
	float ExplorationDegree = 0.f;
	//基础温度
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Temperature")
	int BaseTemperature = 16;
	//处于世界地图的位置
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base")
	FTransform WorldMapPosition = FTransform::Identity;
	//该地区是否初始解锁迷雾
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base")
	bool bInitialUnlock = false;
	//该地区解锁迷雾的半径
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base")
	int32 FogRadius = 0;
	//是否会隐藏于迷雾中
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Fog",meta=(EditConditionHides, EditCondition = "bShowInMap"))
	bool bHideInFog = true;
	//探索前的UI  ID
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base")
	FName BeforeExploreUI;
	//探索完的UI  ID
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base")
	FName ExploreCompleteUI;
	//占领后的UI  ID
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base")
	FName AfterOccupationUI;
	//是否需要探索
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Exploration")
	bool bNeedExplore = true;
	//增加区域探索
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Exploration",meta=(EditCondition = "bNeedExplore",EditConditionHides))
	float AddAreaExplore = 10.f;
	//是否播放关卡序列
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "LevelSequence")
	bool bPlayLevelSequence = false;
	//是否每次进入时都会播放
	UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelSequence"),Category= "LevelSequence")
	bool bEnterEveryTimePlayLevelSequence = false;
	//此地点进入时播放的关卡序列
	UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelSequence"),Category= "LevelSequence")
	TSoftObjectPtr<class ULevelSequence> LevelSequence;
	//是否播放视频 视频总是会在关卡序列之前
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "BinkMedia")
	bool bPlayLevelVideos = false;
	//是否每次进入时都会播放
    UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia")
    bool bEnterEveryTimePlayVideos = false;
    //视频设置
    UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia")
	TSoftObjectPtr<UBinkMediaPlayer> BinkMediaPlayer;
	//视频资源路径
	UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia")
	FString BinkMediaPlayerUrl;
	//是否可以进入到此区域
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "EnterPlace")
	bool bCanEnterPlace = true;
	//地点地图
	UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace")
	TSoftObjectPtr<UWorld> PlaceMap;
	//此地点是否需要保存
	UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace")
	bool bSavePlace = true;
	//拥有当前地点时的pawn
	UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace")
	TSoftClassPtr<APawn> PossessPlayerPawn;
	//其他情况时使用的Pawn
	UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace")
	TSoftClassPtr<APawn> OtherPlayerPawn;
	//当前地点的界面UI
	UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace")
	TSoftClassPtr<UCommonActivatableWidget> MainWidgetUI;
	//进入此地点时的生成位置
	UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace")
	FTransform SpawnTransform = FTransform::Identity;
	//此地点包含的所有生成怪物设置 读取MonsterGenerationConfig 配置表
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Monster")
	TArray<FName> MonsterGeneration;
	//此地点包含的所有巢穴信息 读取 MonsterNestInfoConfig 配置表
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Monster")
	TArray<FName> MonsterNest;
	//初始人口
	UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base")
	int32 Population = 0;
	//最大人口
	UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base")
	int32 MaxPopulation = 999999.f;
	//初始钱币
	UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base")
	int32 InitCoin = 0;
	//钱币增长基础值
	UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base")
	int32 CoinIncreaseBase = 0;
	//第一次胜利增加的声望
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float FirstVictoryAddReputation = 0.f;
	//每日人口增长基础值
	UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base")
	int32 PopulationIncreaseBase = 0;
	//城镇可驻扎角色数量基础值
	UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base")
	int32 StationedCharacterNumBase = 999;
	//城主效果(对应DT_WorldPlaceEffectConfig)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TArray<FName> WorldPlaceEffects;
	//产出间隔(天)
	UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base")
	int32 PlaceOutPutInterval =3;
	//地点的模型便宜
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base")
	FVector MeshLocationOffset = FVector::Zero();
	//驿站位置
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "PostStation")
	FTransform PostStationTransform = FTransform::Identity;
	FModWorldPlaceInfo(): bInitialUnlock(false), FogRadius(0), StationedCharacterNumBase(0)
	{
	}
};