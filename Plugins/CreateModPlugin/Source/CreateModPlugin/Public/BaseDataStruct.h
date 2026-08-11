#pragma once

#include "CoreMinimal.h"
#include "EastRimWorldTargetType.h"
#include "BaseDataStruct.generated.h"

/**
 * Mod 数据结构
 */
//Mod配置类型
UENUM(BlueprintType)
enum class EModConfigType : uint8
{
	None = 0,
	InventoryItem = 1,
	//角色配置表
	CharacterConfig = 2,
	//建筑物显示UI
	BuildingUI = 3,
	//建筑物数据
	BuildConfig = 4,
	//地图配置
	WorldPlaceConfig = 5,
	//角色外观预制
	CharacterAppearancePreset = 6,
	CharacterAnatomyProfiles = 7,
	//通用buff
	CommonBuff = 8,
	//武器配置
	WeaponConfig = 9,
	//装备配置
	EquipmentConfig =10,
	//配方配置
	FormulaData =11,
	//制造装备数据
	FabricateEquipmentData,
	//装备品质池
	EquipmentQualityRange,
	//装备生成表
	GenerateEquipmentData,
	//装备属性
	EquipmentAttributes,
	//科技：科技项详细配置
	TechnologyConfig,
	//工具
	ToolConfig,
	//掉落集
	DropSetConfig,
	//科技：科技解锁物品配置
	TechUnlockItemConig,
	//动物配置
	AnimalConfig,
	//技能
	GameAbility,
	//投射物
	Projectile,
	//UI模块
	ModuleUI,
	//通用UI
	CommonUI,
	//对话组
	DialogueGroup,
	//对话信息
	DialogueInfoConfig,
	//对话选项
	DialogueOptionConfig,
	//世界任务
	WorldTaskInfo,
	//任务条件
	ConditionInfo,
	// 动物行为能力
	AnimalActionAbility,
	//敌对势力袭击配置
	EnemyAttackGenerationConfig,
	//怪物生成配置
	MonsterGenerationConfig,
	//威胁池信息
	ThreatPoolInfo,
	//武学书籍
	MartialArtsBook,
	//武学书籍种类
	MartialArtsBookCategory,
	//境界信息
	RealmData,
	//武学词条
	MartialArtsEntries,
	//突破技能池
	BreakThroughSkill,
	//突破天赋特性
	BreakThroughCharacteristicInfo,
	//技能词条配置
	SkillEntryConfig,
	//技能词条池配置
	SkillEntryPoolConfig,
	//技能词条条件配置
	SkillEntryCondition,
	//建筑Tab
	BuildTabConfig,
	//建筑分类
	BuildListCategorizeConfig,
};

//Mod资产类型
UENUM(BlueprintType)
enum class EModDataAssetType : uint8
{
	None = 0,
	NewGameConfiguration = 1,
};

//Mod数据表
USTRUCT(BlueprintType)
struct FModConfig
{
	GENERATED_BODY()
	//配置类型
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	EModConfigType ModConfigType = EModConfigType::None;
	//配置表
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	TSoftObjectPtr<UDataTable> DataTable;
	//结构名称
	UPROPERTY()
	FString StructName;
	//勾选后Map或Array则直接覆盖原来的数据，不勾选则在原有的基础增加。其他类型的属性如果是默认值则不生效
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	bool bOverrideData = false;
};

//Mod资产
USTRUCT(BlueprintType)
struct FModAsset
{
	GENERATED_BODY()
	//配置类型
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	EModDataAssetType ModDataAssetType = EModDataAssetType::None;
	//配置表
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	TSoftObjectPtr<UDataAsset> DataAsset;
	//勾选后Map或Array则直接覆盖原来的数据，不勾选则在原有的基础增加。其他类型的属性如果是默认值则不生效
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	bool bOverrideData = false;
};
UCLASS(BlueprintType)
class UModInformationAsset: public UDataAsset
{
	GENERATED_BODY()
public:
	//Mod的配置项 
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	TArray<FModConfig> DataTables;
	//Mod的配置项
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	TArray<FModAsset> DataAssets;
#if WITH_EDITOR
	// 在保存前更新StructName
	virtual void PreSave(FObjectPreSaveContext SaveContext) override;
#endif
};

//Mod数据表基类
USTRUCT()
struct CREATEMODPLUGIN_API FModDataBase : public FTableRowBase
{
	GENERATED_BODY()
	//模板id，用于原表中没有的条目时获取此模板来增加新的数据
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName TemplateID;
	//此条数据的id 必须与行命名相同
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName ID;
};

UENUM(BlueprintType)
enum class EModCharacterBehaviorState : uint8
{
	//普通状态
	None,
	//战斗中
	InBattle,
	//执行动作中
	InAction,
	//闲逛状态
	InStroll,
	//骑乘状态
	InRide,
	//死亡状态
	Death,
	//进攻
	Assault,
	//被控制状态
	InControlled,
	//搬运资源建造
	Construct,
	//在地上睡觉
	Sleep_Ground,
	//在床上睡
	Sleep_Bed,
	//在地铺睡
	Sleep_Mat,
	//坐着进食
	Eat_Sit,
	//站着进食
	Eat_Stand,
	//获取物品
	GetItem,
	//搬运物品
	TransItem,
	//砍伐
	Logging,
	//割除
	CutOff,
	//采石
	Quarrying,
	//采矿
	Excavate,
	//搜刮
	SearchBox,
	//存储物资
	Transport,
	//放松坐
	Happy_MasterChair,
	//采集
	CollectPlant,
	//收割
	Havest_Wheat,
	//种植作物
	PlantCrops,
	//织布
	Work_Weaving,
	//打铁
	Work_Forge,
	//缝纫
	Work_SewingTable,
	//制作简餐
	Work_CookSimple,
	//下厨
	Work_Cook,
	//研究
	Research,
	//手工
	Work_Make,
	//劈柴
	ChopFirewood,
	//酿酒
	MakeWine,
	//推磨
	GrindTheMill,
	//制药
	MakeMedicine,
	//动物睡觉
	Animal_Sleep,
	//动物吃素食
	AnimalEat_Vege,
	//初级熔炼
	SimpleMelting,
	//高级熔炼
	DelicateMelting,
	//练功
	Practice_WoodenDummy,
	//沐冰
	Meditation,
	//药浴
	MedicatedBath,
	//抑郁闲逛（崩溃）
	DepressionIdle,
	//穿装备
	EquipEquipment,
	//读书
	Reading,
	//坐着读书
	Read_Sit,
	//抄录
	Write_Copy,
	//正在建造
	BuildStruct,
	//观察
	Observe,
	//探索
	Explore,
	//治疗
	Work_Doctor,
	//等待治疗
	WaitBeTreat,
	//搜刮尸体
	SearchBody,
	//屠宰
	ButcherBody,
	//在地上疗养
	Recuperate_Ground,
	//在床上疗养
	Recuperate_Bed,
	//在地铺疗养
	Recuperate_Mat,
	//狩猎
	Hunting,
	//拆除建筑
	DestoryBuilding,
	//管理xx建筑
	ManageBuildings,
	//社交聊天
	SocializeChat,
	//参加仪式
	JoinCeremony,
	//写作
	Write_Self,
	//待机恢复状态
	Standby,
	//在维修建筑恢复状态
	InBuildingRecovery,
	//停止状态
	Stop,
	//维修机器人
	RepaiRobot,
	//激活机关人
	ActiveRobot,
	//改装傀儡
	RefitPuppet,
	//医疗搬运
	PhysicianCarry,
	//返回医疗点
	ReturnMedicalPoint,
	//重伤
	SeriousInjury,
	//感悟
	RecoverInspiration,
	//启动设备工作
	OpenFabricateWork,
	//获取产物
	CollectTheProducts,
	//驯服中
	Taming,
	//被驯服中
	BeTamed,
	//战斗前展示
	PreBattleDisplay,
	//巡逻中
	OnPatrol,
	//跟随中
	Following,
	//战斗胜利展示
	VictoryDisplay,
	//战斗失败展示
	DefeatedDisplay,
	//等待被屠宰
	WaitingButcher,
	//突破
	Breakthrough,
	//繁育
	Breeding,
	//等待繁育
	WaitingBreeding,
	//动物生产中
	SpawnBaby,
	//驿站切磋
	ExchangeMartialArts,
	//被击倒
	KnockDown,
	//强制撤退到目标点
	ForceRetreat,
};

USTRUCT(BlueprintType)
struct FModGameplayEffectContainer
{
	GENERATED_BODY()

public:
	FModGameplayEffectContainer() {}

	/** Sets the way that targeting happens */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer)
	TSubclassOf<UEastRimWorldTargetType> TargetType;

	/** List of gameplay effects to apply to the targets */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer)
	TArray<TSubclassOf<UGameplayEffect>> TargetGameplayEffectClasses;

};

//可替换文本结构
USTRUCT(BlueprintType)
struct FModFormatText
{
	GENERATED_USTRUCT_BODY()

	//主文本
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText TextMain;
	//替换变量文本
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FString, FText> TextParams;
};

// 物品类型
UENUM(BlueprintType)
enum class EModGroundInventoryType : uint8
{
	None,
	//平常的物品
	NormalItem,
	//采集物
	Collect,
	//功能建筑
	FunctionalBuilding,
	//装备
	Equipment,
	//傀儡装备
	PuppetEquipment,
	//书籍
	Book,
};

//掉落物品信息
USTRUCT(BlueprintType)
struct FModDropItemInfo
{
	GENERATED_USTRUCT_BODY()
	// 权重
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Weight{1};

	// 数量
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Num {0};

	// 类型
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModGroundInventoryType ItemType = EModGroundInventoryType::NormalItem;
};

//掉落配置
USTRUCT(BlueprintType)
struct FModDropSetConfig: public FModDataBase
{
	GENERATED_USTRUCT_BODY()
	//物品类型掉落最小数量 既选取DropSet最少多少个
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 MinAwardNum = 1;
	//物品类型掉落最大数量 既选取DropSet最多多少个
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 MaxAwardNum = 1;
	//掉落合集 key 道具ID Value 权重
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FName,FModDropItemInfo> DropSet;
	//必定额外掉落 key 道具ID value 数量
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FName,FModDropItemInfo> MustDrop;
	//是否在随机多次时，随机到后不在参与随机（去重）
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	bool bRemoveDuplicate = false;
	//奖励图标
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> AwardImage;
	//奖励描述
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Describe;
	FModDropSetConfig(){}
};

//角色类型
UENUM(BlueprintType)
enum class EModCharacterType : uint8
{
	None,
	//人类
	Human,
	//召唤物
	Summons,
	//动物
	Animal,
	//机关人
	Robot,
};

//提示类型
UENUM(BlueprintType)
enum class EModTipsType : uint8
{	//默认空值（不处理）
	None,
	//事件生成
	EventPawn,
	//事件重生
	EventRebirth,
	//事件关闭
	EventClose,
	//弟子即将死亡
	DeathAhead,

	//////////////////////////以下为世界地图提示//////////////////////////
	
	//研究完成以及成果
	TechDevFinish,
	//天气变换
	WeatherChange,
	//灾害天气发生
	WeatherDisaster,
	//缺少床位
	NeedBed,
	//角色空闲、无事可做
	CharacterIdle,
	//科技闲置
	TechDevIdle,
	//角色死亡
	CharacterDeath,
	//观察植物完成
	ObservePlantComplete,	
	//观察动物完成
	ObserveAnimalComplete,
	//角色受伤（生命值50-100%）
	CharacterGetHurt,
	//角色濒死（生命值小于50%）
	CharacterDying,
	//角色需要武器
	CharacterNeedWeapon,
	//建筑缺失材料
	BuildNeedMaterial,
	//角色需要服饰
	CharacterNeedClothes,
	//驯服成功
	TameSuccessed,
	//驯服失败
	TameFaild,
	//缺少材料
	NoneMaterial,
	//近期入库的道具
	RecentStorageTool,
	//观察完成以及成果
	//储存空间不足、储备物品不足
	StorageSpaceInsufficient,
	//发现新材料
	FindNewMaterial,
	//未装备
	NotEquipped,
	//预警
	EarlyWarning,
	//袭击
	Assault,
	//请求加入
	RequestToJoin,
	//门派战预警
	EncounterWarningOfSectWar,
	//弟子饥饿
	DiscipleHungry,
	//弟子崩溃
	DepressionIdle,
	//江湖人士到达驿站
	ChivalrousArrived,
	//商贩到达驿站
	PeddlerArrived,
	//敌对势力袭击
	ForceAssault,
	//敌对势力袭击撤退
	ForceAssaultRetreat,
	//////////////////////////世界地图提示结束//////////////////////////
	//突破境界
	BreakThrough,
	//比武大会可报名
	TourCanSignup,
	//切磋开始
	ExchangeMartialArtsStart,
	//切磋获胜
	ExchangeMartialArtsWin,
	//切磋失败
	ExchangeMartialArtsFailed,
	//可招募NPC
	CanRecruitNPC,
	//切磋开始时间超时
	ExchangeMartialArtsOutStartTime,

	//需要疗养床救助
	NeedBedRescue,
	//需要感悟建筑
	NeedInspirationBuilding,
};
