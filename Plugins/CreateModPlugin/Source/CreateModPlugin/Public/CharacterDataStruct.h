#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "BaseDataStruct.h"
#include "GameplayTagContainer.h"
#include "CharacterDataStruct.generated.h"


//受击类型
UENUM(BlueprintType)
enum class EModHitType : uint8
{
	None,
	//普通左边受击
	NormalLeftHit,
	//普通右边受击
	NormalRightHit,
	//普通后方受击
	NormalBackHit,
	//普通前方受击
	NormalFrontHit,
};

UENUM(BlueprintType)
enum class EModArmorType : uint8
{
	None = 0,
	//头盔
	Helmet,
	//护腕（未使用了，暂时未删除）
	Bracer,
	//盔甲
	Armor,
	//裤子
	Pants,
	//鞋
	Shoes,
	//眼
	Eyes,
	//标记末位
	Max UMETA(Hidden),
};

USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModHumanData:public FModDataBase
{
	GENERATED_BODY()
	//捏人数据的id
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization")
	FString CustomizationId;
	/** 身高 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Customization", meta = (DisplayName = "Height", ClampMin = "100", ClampMax = "250"))
	int32 Height = 180;
	/** 体重 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Customization", meta = (DisplayName = "Weight", ClampMin = "30", ClampMax = "200"))
	int32 Weight = 120;
	/** 背景故事 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Customization", meta = (DisplayName = "Background Story", MultiLine = true))
	FText BackgroundStory;
	//投靠时拒绝文本
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization")
	FText RefuseText;
	//投靠时接受文本
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization")
	FText AcceptText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization")
	FText JoinText;
	//初始特性
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	TArray<FName> InitCharacteristicIds;
	//角色名字
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	FText CharacterName;
	//角色姓氏
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	FText CharacterFirstName;
	//角色性别 true 男：false 女
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	bool Sex = false;
	//角色年龄
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	int32 Age = 0;
	//死亡动画，死亡时释放GA，GA从死亡动画数组里面取动画
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage"))
	FSoftObjectPath DeathAnimMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TArray<FName> DeathMontageSection;
	//头像
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base", meta = (AllowedClasses = "/Script/Engine.Texture2D"))
	FSoftObjectPath Avatar;
	//半身立绘
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base", meta = (AllowedClasses = "/Script/Engine.Texture2D"))
	FSoftObjectPath Half_Avatar;
	//比武半身立绘
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base", meta = (AllowedClasses = "/Script/Engine.Texture2D"))
	FSoftObjectPath Half_TourAvatar;
	//比武五人对战立绘
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base", meta = (AllowedClasses = "/Script/Engine.Texture2D"))
	FSoftObjectPath SmallTourAvatar;
	//UI显示半身立绘
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base", meta = (AllowedClasses = "/Script/Engine.Texture2D"))
	FSoftObjectPath Half_UIAvatar;
	//受击动画
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage"))
	TMap<EModHitType,FSoftObjectPath> HitAnimMontage;
	//初始的武器
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	FName InitWeapon = NAME_None;
	//初始的防具
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	TMap<EModArmorType,FName>InitArmor;
	//视线范围
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float SightRadius = 1000;
	//丢失视线范围
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float LoseSightRadius = 1100;
	//团队感知的范围
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float ReportTeamTeamRadius = 3000.f;
	//基础的愈合速度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	float BaseHealingRate = 0.f;
	//能否被治疗
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	bool bCanBeTreat = false;
	//创建游戏时是否可以被选为队员
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	bool bCanChooseNewGame = true;
	//控制效果蒙太奇
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage"))
	TMap<FGameplayTag,FSoftObjectPath> ControlEffectAnimMontage;
	//初始的内功
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	FName InitInternalStrength = NAME_None;
	//携带的招式 在解锁丹田后自动携带
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	TArray<FName> InitMoves;
	//携带的被动 在解锁丹田后自动携带
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	TArray<FName> InitPassive;
	//属性
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes")
	TMap<FName,float> Attributes;
	FModHumanData() : Height(180), Weight(120), Sex(false), Age(0), BaseHealingRate(0)
	                  , bCanBeTreat(false)
	{
	}
};

//动物成长阶段
UENUM(BlueprintType)
enum class EModAnimalAgeStage : uint8
{
	None UMETA(DisplayName = "无"),
	Childhood UMETA(DisplayName = "幼年"),
	Adulthood UMETA(DisplayName = "成年"),
	Oldhood UMETA(DisplayName = "老年"),
};

//动物体型
UENUM(BlueprintType)
enum class EModAnimalBodyType : uint8
{
	Normal UMETA(DisplayName = "中型"),
	Big UMETA(DisplayName = "大型"),
	Small UMETA(DisplayName = "小型"),
	Huge UMETA(DisplayName = "巨型"),
	Mini UMETA(DisplayName = "迷你"),
};

UENUM(BlueprintType)
enum class EModSpeciesType : uint8
{
	//人类
	Human,
	//走兽
	Beast,
	//禽类
	Birds,
	//机关人
	RobotHuman,
	//机关兽
	RobotBeast,
	//机关鸟
	RobotBirds,
};

/**
 * 资源产出数据
 */
USTRUCT(BlueprintType)
struct FModOutputData
{
	GENERATED_USTRUCT_BODY()

	// 产出物品ID(对应DT_InventoryItem表行名)
	UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame)
	FName ID;

	// 产出物品类型
	UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame)
	EModGroundInventoryType ItemType = EModGroundInventoryType::None;

	// 产出数量
	UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame)
	int32 Num { 0 };

	// 对应角色行为,只有这些行为能产出此项物品(对应GOAP_Action_Data表行名)
	UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame)
	TArray<FName> Actions;

	//权重值
	UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame)
	int32 WeightValue = 0;

	//获取一次消耗的积分
	UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame)
	int32 ExpendCredits = 0;

	//最大可采集的次数
	UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame)
	int32 MaxValue = 0;
};

USTRUCT(BlueprintType)
struct FModOutputDatas
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	TArray<FModOutputData> Datas; 
};

USTRUCT(BlueprintType)
struct FModIDs
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite , EditAnywhere)
	TArray<FName> IDs;
};

USTRUCT(BlueprintType)
struct FModAllTypeItemDrop
{
	GENERATED_USTRUCT_BODY()
	//掉落物的类型
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	EModGroundInventoryType ItemType = EModGroundInventoryType::None;
	//掉落物的数量
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	int32 DropNum = 0;
};

//动物升级可获得的功能
UENUM(BlueprintType)
enum class EModAnimalFunc : uint8
{
	Follow UMETA(DisplayName = "跟随"),
	Patrol UMETA(DisplayName = "巡逻"),
	BeControlled UMETA(DisplayName = "被控制"),
};

USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModAnimalData:public FModDataBase
{
	GENERATED_USTRUCT_BODY()
	//角色名字
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	FText CharacterName;
	//角色姓氏
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	FText CharacterFirstName;
	//角色性别 true 男：false 女
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	bool Sex = false;
	//角色年龄
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	int32 Age = 0;
	//角色分组，用于不同骨骼的角色用不同的动画
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	int32 AnimGroup = 0;
	//属性 key 为角色属性表 id 不是属性名字
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes")
	TMap<FName,float> Attributes;
	//物种，用于获取身体器官
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	EModSpeciesType Species = EModSpeciesType::Beast;
	//死亡动画，死亡时释放GA，GA从死亡动画数组里面取动画
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage"))
	FSoftObjectPath DeathAnimMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	TArray<FName> DeathMontageSection;
	//受击动画
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage"))
	TMap<EModHitType,FSoftObjectPath> HitAnimMontage;
	//初始的武器
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	FName InitWeapon = NAME_None;
	//初始的防具
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	TMap<EModArmorType,FName>InitArmor;
	//默认防具 在没有装备时生效
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	TMap<EModArmorType,FName> DefaultArmor;
	//默认武器 在没有装备武器时生效
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	FName DefaultWeapon = NAME_None;
	//死亡产出
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	FModOutputDatas Output;
	//视线范围
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float SightRadius = 0.f;
	//丢失视线范围
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float LoseSightRadius = 0.f;
	//团队感知的范围
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	float ReportTeamTeamRadius = 0.f;
	//基础的愈合速度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	float BaseHealingRate = 0.f;
	//屠宰需要工作总量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	float ButcherWorkLoad = 0.f;
	//能否被治疗
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	bool bCanBeTreat = false;
	//能否被击倒
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base")
	bool bCanBeKnockDown = true;
	//创建游戏时是否可以被选为队员
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	bool bCanChooseNewGame = true;
	//动物体型（体型大小）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase")
	EModAnimalBodyType AnimalBodyType = EModAnimalBodyType::Normal;
	//初始成长值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase")
	float InitGrowth = 0.f;
	//最大成长值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase")
	float MaxGrowth = 0.f;
	//必须死亡的成长值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase")
	float MustDieGrowth = 0.f;
	//每小时增加的成长值
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase")
    float AddGrowthValueEveryHour = 0.f;
	//动物模型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh",meta = (AllowedClasses = "SkeletalMesh"))
	FSoftObjectPath AnimalMesh;
	//胶囊体 x 为半径 y 为 高度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capsule")
	FVector2D CapsuleSize = FVector2D(1,1);
	//模型大小
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
	FVector MeshScale = FVector::Zero();
	//模型偏移
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
	FVector MeshLocationOffset = FVector::Zero();
	//动物行走混合空间1d
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta = (AllowedClasses = "BlendSpace1D"))
	FSoftObjectPath AnimalBlendSpace;
	// 能吃的对象ID
	// TMap<配置表类型 , 对应的ID>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
	TMap<EModConfigType , FModIDs> EatItems;
	// 进食时间(秒)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
	float NutritionTimer { 0.f };
	//是否可以驯服
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming")
	bool bCanTame = false;
	//基础驯服机率
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame"))
	float TameRate = 0.f;
	//驯服动物失败后多久不能再次驯服：单位秒
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame"))
	float TameCD = 0.f;
	//驯服的工作量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame"))
	float TameSchedule = 0.f;
	//驯服需要的等级d
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame"))
	int32 TameLevel = 0;
	//是否可以训练
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame"))
	bool bCanTraining = false;
	//训练的CD
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", meta = (EditConditionHides = "bCanTraining"))
	float TrainingCD = 0.f;

	//是否有产出
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taming")
	bool bHaveOutput = false;
	//产出副产品周期
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taming", meta = (EditConditionHides = "bHaveOutput"))
	float OutPutPeriod = 0.f;
	//饥饿度影响产出副产品周期
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taming", meta = (EditConditionHides = "bHaveOutput"))
	TMap<FName , float> NutritionInfluenceOutPeriod;
	//产出的副产品
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taming", meta = (EditConditionHides = "bHaveOutput"))
	TMap<FName , FModAllTypeItemDrop>OutputProducts;
	//心情影响产出
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", meta = (EditConditionHides = "bCanTame"))
	TMap<float , float> MoodInfluenceOutPut;
	//达到多少级可以获得的功能
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", meta = (EditConditionHides = "bCanTame"))
	TMap<int32 , EModAnimalFunc> GetFuncWhenReachLevel;
	//达到多少级可以获得的技能(关联技能表)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", meta = (EditConditionHides = "bCanTame"))
	TMap<int32 , FName> GetAbilityWhenReachLevel;
	//初始的能力通过配置表获取
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
	TArray<FName> InitGameplayAbilityByID;
	//观察前名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe")
	FText BeforeObserveName;
};

USTRUCT(BlueprintType)
struct FModCharacterActionAbilityAnimSections
{
	GENERATED_USTRUCT_BODY()
	//开始的动画蒙太奇片段名字
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	TArray<FName> BehaviorStartSections;
	//循环动画蒙太奇片段名字
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	TArray<FName> BehaviorLoopSections;
	//结束动画蒙太奇片段名字
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	TArray<FName> BehaviorEndSections;
	//区分性别
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	bool bDistinguishSex = false;
	//开始的动画蒙太奇片段名字
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bDistinguishSex"))
	TArray<FName> WomanBehaviorStartSections;
	//循环动画蒙太奇片段名字
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bDistinguishSex"))
	TArray<FName> WomanBehaviorLoopSections;
	//结束动画蒙太奇片段名字
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bDistinguishSex"))
	TArray<FName> WomanBehaviorEndSections;
};
/**
 * 动物ActionAbility配置表结构
 */
USTRUCT(BlueprintType)
struct FModAnimalActionAbility : public FModDataBase
{
	GENERATED_USTRUCT_BODY()
	
	//动画蒙太奇
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	TMap<int32, TSoftObjectPtr<UAnimMontage>> BehaviorStartAnimMontage;
	//动画蒙太奇片段
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	TMap<int32,FModCharacterActionAbilityAnimSections> BehaviorAnimSections;
};