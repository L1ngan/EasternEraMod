#pragma once
#include "CoreMinimal.h"
#include "BaseDataStruct.h"
#include "GameplayTagContainer.h"
#include "AttributeSet.h"
#include "EastRimWorldAbilityTypes.h"
#include "ItemDataStruct.generated.h"


// 物品品质枚举
UENUM(BlueprintType)
enum class EModItemQuality : uint8
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

// 定义堆叠模型的结构体
USTRUCT(BlueprintType)
struct FModStackModel
{
	GENERATED_USTRUCT_BODY()

	// 最小容量百分比
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StackModel")
	float MinCapacity = 0.f;

	// 最大容量百分比
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StackModel")
	float MaxCapacity = 0.f;

	// 在容量范围内显示的模型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StackModel")
	TSoftObjectPtr<UStaticMesh> StackModel;
	FModStackModel()
	{
	}
};

//地面土质类型
UENUM(BlueprintType)
enum class EModGroundSoilType : uint8
{
	None,
	//砾土
	GravelSoil,
	//沙土
	SandySoil,
	//黏土
	Clay,
	//泥沙
	Silt,
	//沃土
	FatSoil,
};

// 温度与效率的关联  0<=T<=20 E=100%  21<=T<=40 E=50%  T无范围E=0 策划直接填
USTRUCT(BlueprintType)
struct FModEfficiencyByTemperature
{
	GENERATED_USTRUCT_BODY()
	//最小温度(包含)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grow")
	float MinTemperature = 0.f;
	//最大温度(包含)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grow")
	float MaxTemperature = 0.f;
	//效率
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grow")
	float Efficiency = 0.f;
};

UENUM(BlueprintType)
enum class EModStorageSpace:uint8
{
	None,
	OutDoor,
	UnderRoof,
	InDoor
};

USTRUCT(BlueprintType)
struct FModGroupCorrespondingAnim
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, TSoftObjectPtr<UAnimMontage>> AnimGroup;
};


// 物品总表结构体
USTRUCT(BlueprintType)
struct FModInventoryGeneralData: public FModDataBase
{
	GENERATED_USTRUCT_BODY()
	
	// 使用物品增加的时间 秒 目前 食用时生效
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Units = s),Category="Base")
	float ItemUseTime = 0.f;
	// 耐久度 为-1时没有耐久
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float MaxItemDurability = -1;
	// 物品的重量（单位KG，支持小数点）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float ItemWeight = false;
	//保质期过后（腐烂）的产物
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FName RotToItemID;
	//物品在各种存储空间下的保质期衰减率
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TMap<EModStorageSpace,float> StorageSpaceDecayRate;
	// 物品的保质期（游戏时间，秒） -1为没有保质期
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float ItemShelfLife = -1.f;
	//所处的地面影响保质期的衰减效率 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TMap<EModGroundSoilType,float> RateOfDecay;
	// 温度影响的相关效率(物品的保质期，植物的生成效率）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TArray<FModEfficiencyByTemperature> TemperatureThreshold;
	//此物品的原材料
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TArray<FName> RawMaterial;
	//需要的高度 0 为没有高度限制
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float NeedHight = 0.f;
	// 不同堆叠容量范围内的模型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TArray<FModStackModel> StackModels;
	//此物品放置在地格中时占用的小格子数量 目前只有 1 跟 4 既 四分之1格和 整格
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	int SmallGridCount = 1;
	// 物品在UI上显示的图标
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TSoftObjectPtr<UTexture2D> ItemIcon;
	// 物品出售/购买时的基础价格
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float ItemPrice =  0.f;
	// 判断物品是否能拆解，拆解后给出的材料
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	bool bCanBeDismantled = false;
	// 拆解后给予的道具与道具数量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TMap<FName,int32> DismantledMaterials;
	// 单个物品恢复值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	int32 RecoverValue { 0 };
	// 该物品在地面/建筑内可堆叠的最大数量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	int32 MaxStackSize = 1;
	// 物品品质，用于UI显示和筛选
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	EModItemQuality ItemQuality = EModItemQuality::None;
	// 物品在UI上显示的文字描述
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FText ItemDescription;
	//物品名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FText ItemName;
	// 物品的3D模型 例如拿着的模型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TSoftObjectPtr<UStaticMesh> ItemModel;
	//物品类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	EModGroundInventoryType GroundInventoryType = EModGroundInventoryType::None;
	// 格式化后的描述
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FModFormatText FormatItemDescription;
	//物品的品阶
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base")
	FText ItemGrade;
	//物品的替身类 在实际操作时会替换为此actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TSoftClassPtr<AActor> ItemSubstituteClass;
	//此物品的标签
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base",Meta = (Categories = "Inventory"))
	FGameplayTag GameplayTag;
	//观察前点击物品实例后显示的界面ID 关联DT_CommonUIConfig表
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe")
	FName BeforeObserveInformationWidget;
	//点击物品实例后显示的界面ID 关联DT_CommonUIConfig表
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FName InformationWidget;
	//悬浮后显示的tip界面ID 关联DT_CommonUIConfig表
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
    FName TipInformationWidget;
	//在与此物品交换时此物品附加的插槽
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TMap<EModCharacterBehaviorState,FName> SocketName;
	// 物品拥有的GOAP Action的ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TArray<FName> GOAPActions;
	//在与此物品交换时行为对应的动画(目前在拾取物品时使用）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TMap<EModCharacterBehaviorState,FModGroupCorrespondingAnim> BehaviorAnimation;
	//此物品拾取以后下一个action对应的混合动作 例如拾取原木后抱着原木行走的上半身混合动作
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TMap<EModCharacterBehaviorState,FModGroupCorrespondingAnim> BehaviorBlendAnimation;
	//在行为中时使用的模型 如果不配置则使用默认
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TMap<EModCharacterBehaviorState,TSoftObjectPtr<UStaticMesh>> BehaviorItemMesh;
	//物品相关的音效 key 为音效的播放tag value 音效的id  读取GameSoundInfo
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sound")
	TMap<FGameplayTag,FName> ItemSound;
    //使用此物品后会产生的效果 目前 食用时生效
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
    TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> EffectContainerMap;
	//对应的成长积分
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Base")
	float GrowScore = 0.f;
	//物品关联的配方id
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	FName ForMulaId;
	FModInventoryGeneralData(){}
};

// 物品分类枚举
UENUM(BlueprintType)
enum class EModItemType : uint8
{
	None,
	//食物
	Food,
	//材料
	Materials,
	//丹药
	Drug,
	// 垃圾
	Rubbish ,
	//动物食物
	AnimalFood,
};

// 食物分类枚举
UENUM(BlueprintType)
enum class EModFoodType : uint8
{
	None,
	//素食
	Vegetarian,
	//肉食
	Meat,
};

// 物品结构体
USTRUCT(BlueprintType)
struct FModInventoryItem: public FModInventoryGeneralData
{
	GENERATED_USTRUCT_BODY()
	//物品为激活机关人相关时，对应创建的机关人ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	FName RobotID;
	//是否记录角色对该药品使用过的数量（和耐药性有关）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	bool bSaveDrugEffect = false;
	//耐药性
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	float DrugResistance = 0.f;
	//增加属性
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	TMap<FGameplayAttribute,float> AddAttribute;
	//可作为燃料时的转化比
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	float FuelConversionRatio = 0.f;
	//使用这个物品后会添加的buff
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	TArray<FName> AddBuffByID;
	// 物品类型用于筛选和游戏中的互动
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	EModItemType ItemType = EModItemType::None;
	//物品使用效果描述
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	FText UseDescribte;
	//食物类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item", meta=( editcondition="ItemType == EModItemType::Food" ))
	EModFoodType FoodType = EModFoodType::None;
	
	FModInventoryItem()
	{
	}
};


