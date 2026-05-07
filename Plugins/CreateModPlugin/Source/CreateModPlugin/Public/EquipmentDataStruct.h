#pragma once

#include "CoreMinimal.h"
#include "AbilityEnum.h"
#include "BaseDataStruct.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "Animation/BlendSpace.h"
#include "ItemDataStruct.h"
#include "EquipmentDataStruct.generated.h"


UENUM(BlueprintType)
enum class EModEquipmentType : uint8
{
	None,
	//武器
	Weapon,
	//防具,
	Armor,
	//工具
	Tool,
};

//角色装备
USTRUCT(BlueprintType)
struct FModCharacterEquipment:public FModInventoryGeneralData
{
	GENERATED_USTRUCT_BODY()
	//装备的类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base")
	EModEquipmentType EquipmentType = EModEquipmentType::None;
	//此装备的主属性(EquipmentAttribute表）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base")
	TArray<FName> MainAttributes;
	//此装备的次属性(EquipmentAttribute表）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base")
	TArray<FName> SubAttributes;
	//此装备自带的技能
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base")
	TArray<FName> EquipmentAbility;
	//傀儡改装耐久度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Puppet Equipment")
	float RefitDurability = 500.f;
	FModCharacterEquipment() = default;
};

USTRUCT(BlueprintType)
struct FModCharacterTool:public FModCharacterEquipment
{
	GENERATED_USTRUCT_BODY()
	//采集掉耐久
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	float CollectLossDurability = 0.f;
	
	FModCharacterTool() : CollectLossDurability(0)
	{
	}
};

// Mod 武器结构
USTRUCT(BlueprintType)
struct FModCharacterWeapon: public FModCharacterEquipment
{
	GENERATED_BODY()

	//武器类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	uint8 WeaponType = 0;
	//装备此武器的能力
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	FName EquipWeaponAbility;
	//卸载此武器的能力
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	FName DemountWeaponAbility;
	// 手持武器的插槽
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	FName HandParentSocket = NAME_None;
	// 携带武器的插槽
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	FName CarryParentSocket = NAME_None;
	//武器的模型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	TSoftObjectPtr<UStaticMesh> WeaponStaticMesh;
	//伤害类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	FText WeaponInjuryType;
	//是否有第二个武器
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	bool bSecondaryWeapon = false;
	//第二手持武器的插槽
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	FName SecondaryHandParentSocket = NAME_None;
	//第二携带武器的插槽
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	FName SecondaryCarryParentSocket = NAME_None;
	//第二武器模型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	TSoftObjectPtr<UStaticMesh> SecondaryWeaponStaticMesh;

	//武器对应的混合空间
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	TSoftObjectPtr<UBlendSpace> BattleBlendSpace;

	//使用技能时减少的武器耐久
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	float AttackLossDurability = 0.f;
	
	FModCharacterWeapon() {}
};

// Mod 防具结构
USTRUCT(BlueprintType)
struct FModCharacterApparel : public FModCharacterEquipment
{
	GENERATED_BODY()

	//防具类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel")
	uint8 ArmorType = 0;

	//男外观数据资产引用
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel")
	TSoftObjectPtr<UPrimaryDataAsset> ApparelMaleDataAsset;

	//女外观数据资产引用
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel")
	TSoftObjectPtr<UPrimaryDataAsset> ApparelFemaleDataAsset;

	//数据资产里外观材质的索引
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel")
	int32 MaterialVariantsIndex = -1;

	//外观材质的颜色
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel")
	TMap<FName, FLinearColor> MaterialColor;

	//被攻击时减少的耐久度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel")
	float BeAttakedLossDurability = 0.f;

	FModCharacterApparel() {}
};

UENUM(BlueprintType)
enum class EModCommonButtonType: uint8
{
	None,
	AddResource UMETA(ToolTip = "添加材料按钮"),
	CloseFacility UMETA(ToolTip = "关闭设备按钮"),
	OpenFacility UMETA(TolllTip = "开启设备按钮"),
	CopyList UMETA(ToolTip = "复制列表"),
	MakeMenu UMETA(ToolTip = "制造菜单"),
	PasteList UMETA(ToolTip = "粘贴列表"),
	AllotmentOwner UMETA(ToolTip = "分配拥有者"),
	Fell UMETA(ToolTip = "砍伐"),
	CutOff UMETA(ToolTip = "割除"),
	Harvest UMETA(ToolTip = "收割"),
	Pick UMETA(ToolTip = "采摘"),
	Explore UMETA(ToolTip = "搜刮"),
	MoveBuilding UMETA(ToolTip = "移动建筑"),
	DestoryBuilding UMETA(ToolTip = "拆除建筑"),
	RebuildBuilding UMETA(ToolTip = "重建建筑"),
	CancelBuild UMETA(ToolTip = "取消建造"),
	KeepClear UMETA(ToolTip = "保持清空"),
	AllSelect UMETA(ToolTip = "全选"),
	CancelAllSelect  UMETA(ToolTip = "取消全选"),
	CopyLimit  UMETA(ToolTip = "复制限制"),
	PasteLimit  UMETA(ToolTip = "粘贴限制"),
	BackButton  UMETA(ToolTip = "返回按钮"),
	CancelChoose UMETA(ToolTip = "取消选择按钮"),
	ConfirmButton  UMETA(ToolTip = "确定按钮"),
	Digging  UMETA(ToolTip = "挖掘"),
	CatchAndHunt  UMETA(ToolTip = "捕猎"),
	HuntTogether UMETA(ToolTip = "共同捕猎"),
	ButcherBody  UMETA(ToolTip = "屠宰"),
	SearchBody  UMETA(toolTip = "搜刮"),
	ProhibitUsage  UMETA(ToolTip = "禁止使用"),
	Disassemble  UMETA(ToolTip = "拆解"),
	Extinguish  UMETA(ToolTip = "熄灭"),
	Mining  UMETA(ToolTip = "开采"),
	CookSimpleFood UMETA(ToolTip = "烹饪简易食物"),
	CookHomemadeFood UMETA(ToolTip = "烹饪家常食物"),
	CookExquisiteFood UMETA(ToolTip = "烹饪精致食物"),
	ChoppingWood UMETA(ToolTip = "劈柴"),
	Grinding UMETA(ToolTip = "磨面"),
	Brewing UMETA(ToolTip = "酿酒"),
	Smelting UMETA(ToolTip = "熔炼"),
	Refining UMETA(ToolTip = "精炼"),
	MakeWeapons UMETA(ToolTip = "制作武器"),
	Handcrafting UMETA(ToolTip = "手工制作"),
	SewHat UMETA(ToolTip = "缝制帽子"),
	SewBracers UMETA(ToolTip = "缝制腕甲"),
	SewShirt UMETA(ToolTip = "缝制上衣"),
	SewPants UMETA(ToolTip = "缝制裤子"),
	SewShoes UMETA(ToolTip = "缝制鞋子"),
	ResearchTechnology UMETA(ToolTip = "研究科技"),
	Pharmaceuticals UMETA(ToolTip = "制药"),
	Weaving UMETA(ToolTip = "织布"),
	AssignAnimals UMETA(ToolTip = "分配动物"),
	ProhibitPlanting UMETA(ToolTip = "禁止种植"),
	CancelOrder UMETA(ToolTip = "取消命令"),
	ReadBook UMETA(ToolTip = "阅读书籍"),
	ExpandFarmland UMETA(ToolTip = "扩展农田"),
	ReduceFarmland UMETA(ToolTip = "缩小农田"),
	RemoveFarmland UMETA(ToolTip = "移除农田"),
	ChangePlant UMETA(ToolTip = "变更作物"),
	HarvestFarmland UMETA(ToolTip = "收割农田"),
	PracticeMartialArts UMETA(ToolTip = "修炼武学"),
	Observe UMETA(ToolTip = "观察"),
	MakeTea UMETA(ToolTip = "煮茶"),
	ProhibitTreatSelf UMETA(ToolTip = "禁止自我治疗"),
	BeControlled UMETA(ToolTip = "被控制"),
	BuildingAutoAddFuel UMETA(ToolTip = "建筑是否自动添加燃料"),
	SwitchRoomType UMETA(ToolTip = "切换房间类型"),
	SetBuildTimedSwitch UMETA(ToolTip = "自动化控件设置定时开关"),
	SetBuildTemperatureSwitch UMETA(TooleTip = "自动化控件设置温度范围"),
	SetBuildEnergySwitch UMETA(ToolTip = "自动化控件设置能量储量范围"),
	SetBuildPipelineGroup UMETA(ToolTip = "设置设备管道分配"),
	SetBuildWhenOpenedControlPipelineGroup UMETA(ToolTip = "设置开启时控制的管道分组"),
	SetBuildWhenClosedControlPipelineGroup UMETA(ToolTip = "设置关闭时控制的管道分组"),
	ChooseConsumeBuildings UMETA(ToolTip = "选择能量网中所有耗能建筑"),
	ChooseGenerateEnergyBuildings UMETA(ToolTip = "选择能量网中所有产能建筑"),
	ChooseControlBuildings UMETA(ToolTip = "选择能量网中所有控制建筑"),
	ActivateMachine UMETA(ToolTip = "激活机关"),
	ChangeRobotWork UMETA(ToolTip = "切换机关角色工作类型"),
	ChangeRobotState UMETA(ToolTip = "改变机关角色运行状态"),
	WriteCopy UMETA(ToolTip = "抄录"),
	RobotChoosePatrolPoint UMETA(Tool = "机器人选择巡逻点"),
	SetRobotProtectTarget UMETA(Tool = "设置机器人保护对象"),
	ApplyCeremony UMETA(ToolTip = "申请仪式"),
	ToEatFood UMETA(ToolTip = "指定角色去吃指定食物"),
	Exchange UMETA(ToolTip = "交流"),
	Travel UMETA(ToolTip = "游历"),
	SettleIn UMETA(ToolTip = "入驻"),
	Enter UMETA(ToolTip = "进入"),
	GiveUp UMETA(ToolTip = "放弃"),
	WorldPlaceExploration UMETA(ToolTip = "地点探索"),
	WorldPlaceManagement UMETA(ToolTip = "管理"),
	WorldPlaceAttack UMETA(ToolTip = "进攻"),
	AddPuppet UMETA(ToolTip = "添加傀儡"),
	ConfirmAddPuppet UMETA(ToolTip = "确认添加傀儡"),
	GetOutOfTheJam UMETA(ToolTip = "脱离卡死"),
	Tame UMETA(ToolTip = "驯服动物"),
	Letter UMETA(ToolTip = "信笺"),
	ButcherTamedAnimal UMETA(ToolTip = "屠宰"),
	WaitingButcher UMETA(ToolTip = "等待被屠宰"),
	Dialogue UMETA(ToolTip = "对话"),
	Trade UMETA(ToolTip = "交易"),
	ImmediatelyExecute UMETA(ToolTip = "立即执行"),
	Kill UMETA(ToolTip = "击杀"),
	Imprison UMETA(ToolTip = "关押"),
	ReleasePrisoner UMETA(ToolTip = "释放囚犯"),
	ExecutePrisoner UMETA(ToolTip = "处决囚犯"),
	TorturePrisoner UMETA(ToolTip = "拷打囚犯"),
	RecruitPrisoner UMETA(ToolTip = "招募囚犯"),
	ImprisonBack UMETA(ToolTip = "关押囚犯回监狱"),
	OpenTreasureList UMETA(ToolTip = "打开珍宝阁"),
	ProhibitionUse UMETA(ToolTip = "禁止取出"),
	OpenBackPack UMETA(ToolTip = "打开背包"),
	CopySetting UMETA(ToolTip = "复制"),
	PasteSetting UMETA(ToolTip = "粘贴"),
	ReplicateBuild UMETA(ToolTip = "建筑复制"),
	DestroyResources UMETA(ToolTip = "摧毁资源"),
	BatchAllSelect UMETA(ToolTip = "批量全选"),
	BatchCancelAllSelect  UMETA(ToolTip = "批量取消全选"),
};


// Mod 配方数据结构
USTRUCT(BlueprintType)
struct FModFormulaData : public FModDataBase
{
	GENERATED_BODY()

	//配方名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FText Name;

	// 对应GOAP Action的ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FName ActionID;

	// 如果建筑物是自动制造 开始action
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FName StartActionID;

	// 对应GOAP目标的ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FName GoalID;

	// 配方在UI上显示的图标
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TSoftObjectPtr<UTexture2D> FormulaIcon;

	// 格式化后的描述
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	FFormatText FormatDescription;

	//需要的属性值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TMap<FGameplayAttribute, int32> RequiredAttributes;

	//耗时（界面显示使用，不参与实际功能）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float ConsumingTime = 0.f;

	//必须消耗的资源
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TMap<FName, int32> NecessityConsumingResource;

	//总共需要的可选资源数量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	int32 SelectableResourceNumber = 0;

	//可选的资源标签
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FGameplayTag SelectableResourceTag;

	//最多可选择的种类数量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	int32 SelectableTypeNumber = 1;

	//产出的资源类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	EModGroundInventoryType OutputResourceType = EModGroundInventoryType::None;

	//产出的ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FName OutputItemID;

	//产出的数量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	int32 OutputItemNumber = 1;

	//制造完成后给制造者添加的属性 获得的经验
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TMap<FGameplayAttribute, float> AddToMakerAttributes;

	//是否需要人提供工作量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	bool bNeedPeople = true;

	//需要的工作量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float RequiredWorkload = 0.f;

	//产出物品所属的分组，用于检查库存
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FGameplayTag GameplayTag;

	//关联的建筑物ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FName BuildingID;

	//关联的建筑物上个按钮类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	EModCommonButtonType CommonButtonType = EModCommonButtonType::None;

	//解锁需要的物品大类
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FGameplayTagContainer GameplayTags;

	//是否可以通过获取物品解锁配方
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool CanUnlockByItem = false;

	//解锁必须要获取的物品的TAG（满足任意一，就可以解锁）
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FGameplayTag> UnlockItemTags;

	//解锁必须要获取的物品描述内容
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText UnlockItemDesc;

	//格式化的解锁必须要获取的物品描述内容
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	FText FormatUnlockItemDesc;

	//配方是否可以使用
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsUnLock = false;
	
	//Comment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FString Comment;

	FModFormulaData() {}
};

// Mod 制造装备数据结构
USTRUCT(BlueprintType)
struct FModFabricateEquipmentData : public FModDataBase
{
	GENERATED_BODY()

	//包含的装备随机池
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TArray<FName> EquipmentRandomPools;
	
	//Comment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FString Comment;

	FModFabricateEquipmentData() {}
};

// Mod 装备品质区间结构
USTRUCT(BlueprintType)
struct FModEquipmentQualityRange : public FModDataBase
{
	GENERATED_BODY()

	//最小品质值 都是包含
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float MinQualityValue = 0.f;

	//最大品质值 包含
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float MaxQualityValue = 0.f;

	//副属性的数量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	int32 SubAttributesNumber = 1;

	//技能的数量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	int32 AbilityNumber = 1;

	//此区间属于什么品质
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	uint8 Quality = 0;

	//装备的ID（关联DT_GenerateEquipmentData）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TArray<FName> GenerateEquipmentID;
	
	//Comment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FString Comment;

	FModEquipmentQualityRange() {}
};

// Mod 生成装备数据结构
USTRUCT(BlueprintType)
struct FModGenerateEquipmentData : public FModDataBase
{
	GENERATED_BODY()

	//此池子产出的装备类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	uint8 EquipmentType = 0;

	//装备名字
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FText EquipmentName;

	//对应的装备ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	FName EquipmentID;

	//此装备的主属性(EquipmentAttribute表）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	TArray<FName> MainAttributes;

	//此装备的次属性(EquipmentAttribute表）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	TArray<FName> SubAttributes;

	//此装备自带的技能
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	TArray<FName> EquipmentAbility;
	
	//Comment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FString Comment;

	FModGenerateEquipmentData() {}
};

// Mod 装备属性结构
USTRUCT(BlueprintType)
struct FModEquipmentAttribute : public FModDataBase
{
	GENERATED_BODY()

	//属性信息
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Attribute")
	FDataTableRowHandle AttributeInfo;

	//属性值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Attribute")
	float AttributeValue = 0.f;
	
	//Comment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	FString Comment;

	FModEquipmentAttribute() {}
};