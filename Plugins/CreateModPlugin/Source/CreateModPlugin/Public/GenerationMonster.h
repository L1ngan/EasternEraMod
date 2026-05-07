#pragma once

#include "CoreMinimal.h"
#include "BaseDataStruct.h"
#include "GenerationMonster.generated.h"

//威胁类型
UENUM(BlueprintType)
enum class EModThreatType : uint8
{
	None,
	//山贼进攻
	BanditAttack,
	//敌对门派进攻
	HostileSectAttack,
	//机关术
	MechanismAttack,
	//僵尸复生
	ZombieRebirth,
	//鬼新娘
	GhostBride,
	//动物迁徙
	AnimalMigration,
	//烈阳灼日
	SearingSun,
	//冻土
	FrozenSoil,
	//瘟疫
	Plague,
	//龙卷风
	Tornado,
	//伐木机关人
	LoggingAutomaton,
	//采矿机关人
	MiningAutomaton,
};

USTRUCT(BlueprintType)
struct FModNameIDArray
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> IDs;
};
//威胁池信息
USTRUCT(BlueprintType)
struct FModThreatPoolInfo : public FModDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	//威胁类型
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	EModThreatType ThreatPoolType = EModThreatType::None;
	//袭击点数(必须为整数，随机有用)
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	int32 RaidPoints = 0;
	//冷却时间(秒)
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	float CooldownTime = 9600.f;
	//创建生成的配置ID<地图名称,生成配置ID数组>创建怪物IDs(调用 DT_MonsterGenerationConfig ) /敌对势力袭击IDs （调用 DT_EnemyAttackGenerationConfig）
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	TMap<FName,FModNameIDArray> GenerationIDsMap;
	//是否启用此威胁
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	bool SetModEnabled = true;
};

USTRUCT(BlueprintType)
struct FModGenerationData:public FModDataBase
{
	GENERATED_USTRUCT_BODY()
	//生成的位置 如果是战场小兵模板则不填
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FName,FVector> GenerationPosition;
	//生成的ID 最终生成的数量是 配置的ID * Number 字段(如果GenerationActorType配置为SpawnPostStationChivalrousByPresetID这里填预设角色表id)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> CharacterIDs;
	//生成的数量
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Number = 1;
	//角色类型
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModCharacterType CharacterType = EModCharacterType::Human;
	//新增的Goals
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> AddGoals;
	//生成时应用的GE
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftClassPtr<UGameplayEffect>> GameplayEffects;
	//闲逛时移动的范围 以出生点为中心
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MovingRange = 0.f;
	friend uint32 GetTypeHash(FModGenerationData const & This)
	{
		return GetTypeHash(This.ID);
	}
	bool operator == (const FModGenerationData& Other) const
	{
		return Other.ID == ID;
	}
};

//生成的信息
USTRUCT(BlueprintType)
struct FModGenerationSetData
{
	GENERATED_USTRUCT_BODY()
	//生成对应数据的权重
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TMap<FModGenerationData,int32> GenerationData;
	//一次生成时取多少个配置生成
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	int32 GenerationNumber = 1;
	//团队ID
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	int32 TeamID = 255;
};
//生成的规则类型
UENUM(BlueprintType)
enum class EModGenerationRuleType : uint8
{
	None,
	//固定
	Fixed,
	//概率
	Probability,
};
//影响的类型
UENUM(BlueprintType)
enum class EModInfluenceType : uint8
{
	None,
	//缺少玩家角色数量
	LackCharacterNumber,
};
//生成的概率影响
USTRUCT(BlueprintType)
struct FModGenerationProbabilityInfluence
{
	GENERATED_USTRUCT_BODY()
	//影响的类型
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModInfluenceType InfluenceType = EModInfluenceType::None;
	//概率变化
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Probability = 0.1f;
	//最大人数
	UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "InfluenceType == EModInfluenceType::LackCharacterNumber"))
	int32 MaxCharacterNumber = 0;
};
//生成的规则
USTRUCT(BlueprintType)
struct FModGenerationRuleData
{
	GENERATED_USTRUCT_BODY()
	//生成规则类型
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModGenerationRuleType GenerationRule = EModGenerationRuleType::Fixed;
	//基础概率
	UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "GenerationRule == EModGenerationRuleType::Probability"))
	float BaseProbability = 1.f;
	//概率的影响配置
	UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "GenerationRule == EModGenerationRuleType::Probability"))
	TArray<FModGenerationProbabilityInfluence> ProbabilityInfluence;
};

//生成的类型
UENUM(BlueprintType)
enum class EModGenerationActorType : uint8
{
	None,
	//招募 招募模式固定在招募后会去重
	Recruit,
	//刷新怪物
	SpawnMonster,
	//刷新营地怪物
	SpawnMonsterNest,
	//刷新驿站江湖人士
	SpawnPostStationChivalrous,
	//刷新驿站商人
	SpawnPostStationPeddler,
	//通过DT_CharacterPresetConfig表ID刷新驿站江湖人士
	SpawnPostStationChivalrousByPresetID,
};

//怪物生成
USTRUCT(BlueprintType)
struct FModMonsterGenerationConfig: public FModDataBase
{
	GENERATED_USTRUCT_BODY();
	//激活倒计时
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ActivateCountDown = 0.f;
	//生成怪物的延迟
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 GenerationDelay = 0;
	//生成设置
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FModGenerationSetData> GenerationSetData;
	//生成的次数 -1 为无限次
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 GenerationTimes = -1;
	//生成的间隔
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 GenerationInterval = 0;
	//此生成配置 生成的单位最多同时存在多少个 -1 为无限制 
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 GenerationMaxNumber = -1;
	//提示 激活提示
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModTipsType ActivateTips = EModTipsType::None;
	//提示 生成提示
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModTipsType GenerationTips = EModTipsType::None;
	//生成规则
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FModGenerationRuleData GenerationRule;
	//生成actor的类型
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModGenerationActorType GenerationActorType = EModGenerationActorType::SpawnMonster;
	FModMonsterGenerationConfig(){}
};
