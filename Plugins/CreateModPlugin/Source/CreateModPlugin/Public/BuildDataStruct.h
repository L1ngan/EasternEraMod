#pragma once

#include "CoreMinimal.h"
#include "BaseDataStruct.h"
#include "GameplayTagContainer.h"
#include "SmartObjectDefinition.h"
#include "BuildDataStruct.generated.h"

/**
 * 格子坐标位置
 */
USTRUCT(BlueprintType)
struct FModGridPosition
{
	GENERATED_USTRUCT_BODY()

	// 行
	UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame)
	int32 Row;

	// 列
	UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame)
	int32 Column;
	
	FModGridPosition()
		: Row(-1)
		, Column(-1)
	{ }

	FModGridPosition(int32 Row , int32 Column)
		: Row(Row)
		, Column(Column)
	{ }

	FModGridPosition(const FModGridPosition& GridPos)
		: Row(GridPos.Row)
		, Column(GridPos.Column)
	{ }

	void Reset(int32 r , int32 c)
	{
		Row = r;
		Column = c;
	}

	bool IsValid() const
	{
		return Row >= 0 && Column >= 0;
	}

	bool operator == (const FModGridPosition& GridPos) const
	{
		return Row == GridPos.Row && Column == GridPos.Column;
	}
	
	bool operator != (const FModGridPosition& GridPos) const
	{
		return Row != GridPos.Row || Column != GridPos.Column;
	}

	FModGridPosition& operator += (const FModGridPosition& GridPos)
	{
		Row += GridPos.Row;
		Column += GridPos.Column;
		return *this;
	}

	FString ToString() const
	{
		return FString::Printf(TEXT("Row=%d Column=%d") , Row , Column);
	}
};
/**
 * 物体的相对格子坐标
 */
USTRUCT(BlueprintType)
struct FModRelativeGridPoses
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame)
	TArray<FModGridPosition> GridPoses;
};

// 五行类型
UENUM(BlueprintType)
enum class EModFiveElementType : uint8
{
	None,
	// 火
	Fire,
	// 金
	Metal,
	// 土
	Earth,
	// 木
	Wood,
	// 水
	Water
};

/**
 * 九宫格枚举类型
 */
UENUM(BlueprintType)
enum class EModAutoTileType : uint8
{
	// 平面
	Flat ,
	// 直边
	Edge ,
	// 拐角边
	CornerEdge ,
	// 镜像拐角边
	CornerEdge_Mirror ,
	// 外拐角
	Corner ,
	// 外拐角切角
	CornerCut ,
	// 占位符
	COUNT UMETA(Hidden) ,
};

/**
 * 九宫格模型配置数据结构
 */
USTRUCT(BlueprintType)
struct FModAutoTileMeshConfigData
{
	GENERATED_USTRUCT_BODY()

	// 九宫格类型
	UPROPERTY(BlueprintReadWrite , EditAnywhere)
	EModAutoTileType AutoTileType { EModAutoTileType::Flat };

	// 静态模型
	UPROPERTY(BlueprintReadWrite , EditAnywhere)
	UStaticMesh* StaticMesh { nullptr };
};

/**
 * 屋顶部位类型
 */
UENUM(BlueprintType)
enum class EModRoofPartType : uint8
{
	// 非屋顶
	None ,
	// 角
	Corner ,
	// 斜面
	Bevel ,
	// 平面
	Flat ,
	// 墙
	Wall ,
	// 脊角
	RidgeCorner ,
	// 攒尖
	PyramidalRoof ,
	// 预设屋顶(特殊类型)
	PresetRoof ,
	// 占位符
	COUNT UMETA(Hidden) ,
};

/**
 * 嵌入式墙体类型
 */
UENUM(BlueprintType)
enum class EModEmbeddedWallType : uint8
{
	// 非嵌入式墙体
	None ,
	// 门
	Door ,
	// 宽门
	DoorWide ,
	// 窗
	Window ,
	// 宽窗
	WindowWide ,
};

/**
 * 建筑光源配置数据
 */
USTRUCT(BlueprintType)
struct FModBuildLightSourceData
{
	GENERATED_USTRUCT_BODY()

	// 光源类型
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	TSubclassOf<class UPointLightComponent> LightType;

	// 强度单位
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	ELightUnits IntensityUnits { ELightUnits::Lumens };
	
	// 光源偏移位置
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	FVector OffsetPosition = FVector::ZeroVector;

	// 光源旋转
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	FRotator Rotation = FRotator::ZeroRotator;

	// 光源强度
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	float Intensity { 0.f };

	// 衰减半径
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	float AttenuationRadius { 0.f };
	
	// 内锥体角度
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	float InnerConeAngle { 0.f };
	
	// 外锥体角度
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	float OuterConeAngle { 0.f };

	// 光源颜色
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	FColor LightColor = FColor::White;

	// 光照半径
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	float Radius { 0.f };
	
	// 是否投影
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	bool CastShadow { true };
};

//能源类型
UENUM(BlueprintType)
enum class EModEnergyType : uint8
{
	//跟能源没有关联
	None,
	//传输能源
	TransmissionEnergy,
	//能源储存
	EnergyStorage,
	//控制能源
	ControlEnergy,
	//生产能源
	GenerateEnergy,
	//耗能
	ConsumeEnergy,
};

//供能建筑故障类型
UENUM(BlueprintType)
enum class EModGenerateBuildingFaultType: uint8
{
	//建筑自身受损，扣除少量耐久
	DamageSelf,
	//发生巨型爆炸
	OccurGiantExplosion,
	//发生大型爆炸
	OccurBigExplosion,
	//发生中型爆炸
	OccurMediumExplosion,
	//发生小型爆炸
	OccurSmallExplosion,
};

//mod建筑物
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModBuildData:public FModDataBase
{
	GENERATED_BODY()
	// 占格子尺寸(Z为占高度尺寸)
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	FIntVector Size = FIntVector::ZeroValue;
	// 建造资源(item--数量)
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	TMap<FName , int32> BuildResource;
	// 建造工作量
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	int32 Workload { 0 };
	// 拆除工作量
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	int32 DestoryWorkload {0};
	// 拆除返还建造资源的百分比(0~1)
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	float DestoryReturnPrecent {0.f};
	// 需求建造技能等级
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	int32 SkillLevel { 0 };
	// 拥有者数量
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	int32 OwnerNum { 0 };
	// 建筑入口的格子坐标(相对格子坐标)
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	TArray<FModRelativeGridPoses> EntranceGridPoses;
	// 耐久度
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	int32 Durability { -1 };
	// 美观度
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	int32 Aesthetic { 0 };
	//五行属性
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	TMap<EModFiveElementType,float> FiveElementScore;
	// 防御
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	int32 Defense { 0 };
	// 材质系数 计算公式为（攻击 - 防御 ） * （1 - 材质系数）当系数为1时 无法被攻击 
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base",meta=(ClampMin = 0.f,ClampMax = 1.f))
	float MaterialCoefficient { 0 };
	//玩家方的群BUff 关联Buff表
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	TArray<FName> PlayerTeamBuffIDs;
	// 九宫格模型
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh")
	TArray<FModAutoTileMeshConfigData> AutoTileMeshes;
	// 普通建筑模型(有多个则随机选择)
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh")
	TArray<TSoftObjectPtr<UStaticMesh>> StaticMeshes;
	// 屋顶每个部位对应的模型
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh")
	TMap<EModRoofPartType , TSoftObjectPtr<UStaticMesh>> RoofMeshes;
	// 墙体接缝柱(墙专用)
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Wall")
	TSoftObjectPtr<UStaticMesh> PillarForWall;
	// 带洞的墙模型(墙专用)
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Wall")
	TMap<EModEmbeddedWallType , TSoftObjectPtr<UStaticMesh>> WallWithHole;
	// 额外变量(值: 说明文本) 仓库：第一个参数 初始高度 第二个参数 每层的间隔高度 第三个参数 总共层数
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Parameter")
	TMap<int32 , FString> Parameter;
	// 设备交互定义
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "SmartObject")
	TSoftObjectPtr<USmartObjectDefinition> InterActionDefine;
	//是否使用骨骼网格体
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "SmartObject")
	bool bUseSkeletalMesh = false;
	//骨骼网格体
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SmartObject",meta=(EditConditionHides,EditCondition = "bUseSkeletalMesh"))
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
	//设施交互动画
	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "SmartObject",meta=(EditConditionHides,EditCondition = "bUseSkeletalMesh"))
	TSubclassOf<UAnimInstance> AnimInstance;
	// 灯具相关配置参数
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Light")
	TArray<FModBuildLightSourceData> LightParams;
	//仓库是否显示存放物模型
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse")
	bool bWarehouseShowItemMesh = true;
	//仓库禁止放置物品分类标签
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse")
	FGameplayTagContainer CanNotPlaceItemTag;
	//是否使用仓库温度（WarehouseTemperature）影响存放物的温度
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse", meta=(InlineEditConditionToggle))
	bool bUseWarehouseTemperature = false;
	//仓库的温度(修改存放物的温度为这个值)
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse", meta=(Editcondition="bUseWarehouseTemperature" ))
	int32 WarehouseTemperature = 15;
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "HeatSource")
	bool IsHeatSource = false;
	//热源影响值
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "HeatSource", meta=( editcondition="IsHeatSource" ))
	int32 HeatSourceTemperatureEffect = 0;
	//是否光源
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "LightSource")
	bool IsLightSource = false;
	//光源影响值
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "LightSource", meta=( editcondition="IsLightSource" ))
	int32 LightSourceTemperatureEffect = 0;
	//是否有影响范围
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize")
	bool HaveEffectSize=false;
	//影响范围(基于建筑尺寸的加值)(X行，Y列，Z高)
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" ))
	FIntVector BuildingEffectSize = FIntVector::ZeroValue;
	//影响范围偏移
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" ))
	FIntVector BuildingEffectSizeOffset = FIntVector::ZeroValue;
	//在影响范围内为角色添加的tag
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" ))
	FGameplayTagContainer BuildingEffectTags;
	//在影响范围内为角色添加的buff
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" ))
	TArray<FName> BuildingEffectBuffIDs;
	//离开影响范围为角色添加的buff
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" ))
	TArray<FName> LeaveEffectRangeBuffIDs;
	//是否是需要消耗燃料的建筑
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	bool bNeedFuel = false;
	//建筑总燃料
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel"))
	float TotalFuel = 0.f;
	//建筑每次消耗的燃料
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel"))
	float OneTimeExpendFuel = 0.f;
	//建筑消耗燃料的时间间隔
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel"))
	float ExpendFuelInterval = 0.f;
	//建筑的燃料ID
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel"))
	TArray<FGameplayTag> SelectableFuelTag;
	// 能源类型
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy")
	EModEnergyType EnergyType = EModEnergyType::None;
	//角色感知控制方式的范围长
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy")
	float RolePerceptionlength = 0.f;
	//角色感知控制方式的范围宽
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy")
	float RolePerceptionwidth = 0.f;
	//供能建筑故障类型及其权重
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy")
	TMap<EModGenerateBuildingFaultType,int32> GenerateBuildingFaultInfo;
	//能源消耗单位时间最大消耗的能源
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides, Editcondition="EnergyType == EModEnergyType::ConsumeEnergy"))
	int32 MaxConsumeEnergyValue = 0;
	//连线特效高度
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides, Editcondition="EnergyType != EModEnergyType::None"))
	int32 SpecialEffectHeight = 0;
	// 打开的建筑物主界面ID
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "UI")
	FName OpenBuildingWidgetID;
	//建筑价值(实际财富点数)
	UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base")
	float ItemPrice = 0.1f;
};

//mod建筑物UI
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModBuildUIData:public FModDataBase
{
	GENERATED_BODY()
	
	//建造类别(对应BuildTabConfig表行名)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Category;
	//显示名称（界面显示）
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;
	//UI图标
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D * Icon = nullptr;
	//描述
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Desc;
};

//mod建筑Tab
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModBuildTabStruct : public FModDataBase
{
	GENERATED_BODY()

	//Tab名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText TabName;
	//排序
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Sort = 0;
	//建筑分类
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Category;
};

//mod建筑分类
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModBuildListCategorizeStruct : public FModDataBase
{
	GENERATED_BODY()

	//显示名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;
	//排序
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Sort = 0;
	//图标
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UTexture2D*> Icon;
};

