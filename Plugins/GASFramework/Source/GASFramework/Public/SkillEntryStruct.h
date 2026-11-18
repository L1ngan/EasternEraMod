// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "AttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "LQuickFrame/Base/LBaseValue.h"
#include "AbilityStruct.h"
#include "SkillEntryStruct.generated.h"

/**
 * 技能词条（Skill Entry）主动效果：主类型与大类型枚举。
 * 与 DataTable 一行上的 Payload 对应；标签类前置条件见 ApplicableAbilityTags、RequiredCasterTags；
 * 血量/距离/弹道/事件等扩展条件见 FSkillEntryEffect::EntryConditions（按 Priority 排序后由执行层解释）。
 */
UENUM(BlueprintType)
enum class ESkillEntryEffectType : uint8
{
	None UMETA(DisplayName = "无"),

	/** 改变技能主体配置（冷却、距离、触发率、激活 GE 等） */
	ChangeAbilityParam UMETA(DisplayName = "改变技能主体配置"),

	/** 修改伤害/治疗执行相关计算公式中的 Tag→数值 */
	ChangeDamageExecutionParam UMETA(DisplayName = "修改计算公式数值"),

	/** 改变投射物/生成物参数（缩放、碰撞、生命周期、特效等） */
	ChangeProjectileParam UMETA(DisplayName = "改变生成物（投射物）"),

	/** 改变 GameplayEffect 层数值（Modifier、时长、周期、层数等） */
	ChangeGEParam UMETA(DisplayName = "改变GE数值"),

	/** 按配置定位投射物后，增删 GE 或控制效果 */
	ChangeProjectileGE UMETA(DisplayName = "改变生成物GE"),

	/** 基于受击等上下文，Begin/Delay/Find 生成同款或新款投射物 */
	CreateNewProjectileByProject UMETA(DisplayName = "生成物生成投射物"),

	/** 技能判定区创建时生成同款或新款投射物 */
	CreateNewProjectileBySkill UMETA(DisplayName = "判定区生成投射物"),

	/** 额外授予技能或替换已有技能 */
	GiveAbilitys UMETA(DisplayName = "赋予或替换技能"),

	/** 无条件或激活时授予额外 GameplayEffect */
	GiveGameEffects UMETA(DisplayName = "赋予额外效果"),

	/** 轻功/强力移动：距离、速度、瞬移、碰撞点生成物、施法 Tag+GE */
	ChangeLightSkillParam UMETA(DisplayName = "轻功/强力移动参数"),
};

// ----- 子类型：ChangeAbilityParam -----
UENUM(BlueprintType)
enum class ESkillEntryChangeAbilityParamSubType : uint8
{
	None UMETA(DisplayName = "无"),
	CDChange UMETA(DisplayName = "冷却变更"),
	UseDistanceChange UMETA(DisplayName = "释放距离变更"),
	TriggerRateChange UMETA(DisplayName = "触发率变更"),
	/** 技能启动时额外对自身施加的 GE（累加至 ActivateGetSelfGEs） */
	ActivateHasEffectChange UMETA(DisplayName = "额外给自身GE"),
	/** 技能启动时额外对目标施加的 GE（累加至 ActivateGetTargetGEs） */
	ActivateGetTargetGEChange UMETA(DisplayName = "额外给目标GE"),
	/** 携带者完成击杀后，减少身上对应技能的冷却（秒数与按冷却总时长的比例可同时生效） */
	KillReduceCooldown UMETA(DisplayName = "击杀后减冷却"),
};

/** KillReduceCooldown：减少哪些技能的冷却 */
UENUM(BlueprintType)
enum class ESkillEntryKillReduceCooldownScope : uint8
{
	/** 携带该词条的招式书当前生效技能（被词条替换时为替换后的技能） */
	ThisAbility UMETA(DisplayName = "此招式"),
	/** 携带者全部已装备招式书的技能 */
	AllEquippedMoves UMETA(DisplayName = "全部已装备招式"),
	/** 按 KillReduceCooldownTags 匹配冷却标签（含子标签） */
	SpecifiedTags UMETA(DisplayName = "指定冷却标签"),
};

// ----- 子类型：ChangeDamageExecutionParam（与策划表「小类型/tag」列一一对应） -----
UENUM(BlueprintType)
enum class ESkillEntryChangeDamageExecutionParamSubType : uint8
{
	None UMETA(DisplayName = "无"),
	DamageTypeChangeValue UMETA(DisplayName = "改变伤害类型"),
	HitRateChangeValue UMETA(DisplayName = "命中率变更"),
	PierceDamageChangeValue UMETA(DisplayName = "穿刺伤害固定加成"),
	PierceDamageChangePercent UMETA(DisplayName = "穿刺伤害百分比加成"),
	SlashDamageChangeValue UMETA(DisplayName = "劈砍伤害固定加成"),
	SlashDamageChangePercent UMETA(DisplayName = "劈砍伤害百分比加成"),
	RemoteDamageChangeValue UMETA(DisplayName = "远程伤害固定加成"),
	RemoteDamageChangePercent UMETA(DisplayName = "远程伤害百分比加成"),
	BluntDamageChangeValue UMETA(DisplayName = "钝击伤害固定加成"),
	BluntDamageChangePercent UMETA(DisplayName = "钝击伤害百分比加成"),
	PersonDamageChangeValue UMETA(DisplayName = "真气伤害固定加成"),
	PersonDamageChangePercent UMETA(DisplayName = "真气伤害百分比加成"),
	PoisonDamageChangeValue UMETA(DisplayName = "毒素伤害固定加成"),
	PoisonDamageChangePercent UMETA(DisplayName = "毒素伤害百分比加成"),
	SkillBaseDamageChangeValue UMETA(DisplayName = "技能基础攻击固定加成"),
	SkillBaseDamageChangePercent UMETA(DisplayName = "技能基础攻击百分比加成"),
	FinalDamageToShieldBonusChangePercent UMETA(DisplayName = "罡气伤害百分比加成"),
	FinalDamageToBodyBonusChangePercent UMETA(DisplayName = "部位最终伤害百分比加成"),
	CritRateChangeValue UMETA(DisplayName = "暴击率变更"),
	CritIncreaseChangeValue UMETA(DisplayName = "暴击伤害加成变更"),
	IgnoreDefenceChangeValue UMETA(DisplayName = "无视防御固定值"),
	IgnoreDefenceChangePercent UMETA(DisplayName = "无视防御百分比"),
	/** 每100距离伤害加成百分比*/
	DamageBonusByDistanceChangePercent UMETA(DisplayName = "每100距离伤害加成百分比"),
	/** 距离伤害加成百分比上限 */
	DamageBonusByDistanceMaxPercent UMETA(DisplayName = "距离伤害加成百分比上限"),
	HealingShieldChangeValue UMETA(DisplayName = "罡气治疗固定加成"),
	HealingShieldChangePercent UMETA(DisplayName = "罡气治疗百分比加成"),
};

// ----- 子类型：ChangeProjectileParam -----
UENUM(BlueprintType)
enum class ESkillEntryChangeProjectileParamSubType : uint8
{
	None UMETA(DisplayName = "无"),
	ReplaceProjectile UMETA(DisplayName = "替换投射物"),
	ProjectileScaleChange UMETA(DisplayName = "投射物特效缩放变更(必须为配置表中的特效)"),
	ProjectileCollisionScaleChange UMETA(DisplayName = "碰撞体积变更"),
	ProjectileCollisionOffsetChange UMETA(DisplayName = "碰撞偏移变更"),
	ProjectileLifeTimeChange UMETA(DisplayName = "生命周期变更"),
	ProjectileDotFrequencyChange UMETA(DisplayName = "持续伤害频率变更"),
	ProjectileFlySpeedChange UMETA(DisplayName = "飞行速度变更"),
	ProjectileConsumeCountChange UMETA(DisplayName = "消耗次数变更"),
	ProjectileBounceCountChange UMETA(DisplayName = "弹跳次数变更"),
	ProjectileHomingChange UMETA(DisplayName = "变更为追踪类型"),
	ProjectileBounceTypeChange UMETA(DisplayName = "弹道类型变更"),
	ProjectileActivationFXReplace UMETA(DisplayName = "替换发射特效"),
	ProjectileActivationFXAdd UMETA(DisplayName = "追加发射特效"),
	ProjectileTrailFXReplace UMETA(DisplayName = "替换拖尾特效"),
	ProjectileTrailFXAdd UMETA(DisplayName = "追加拖尾特效"),
};

/** 投射物数值类词条：覆盖 / 增加 / 减少（消耗次数 -1 表示穿透） */
UENUM(BlueprintType)
enum class ESkillEntryNumericModifyMode : uint8
{
	Override UMETA(DisplayName = "覆盖"),
	Add UMETA(DisplayName = "增加"),
	Subtract UMETA(DisplayName = "减少"),
};

// ----- 子类型：ChangeGEParam -----
UENUM(BlueprintType)
enum class ESkillEntryChangeGEParamSubType : uint8
{
	None UMETA(DisplayName = "无"),
	GEDurationAndPeriodChange UMETA(DisplayName = "持续时间与周期变更"),
	GEStackChange UMETA(DisplayName = "层数变更"),
};

/** ChangeGEParam 过滤模式：决定一条 Param 命中哪些 GE / Modifier */
UENUM(BlueprintType)
enum class ESkillEntryChangeGEParamFilterMode : uint8
{
	/** 任意 GE 任意 Modifier 都会被命中 */
	Any UMETA(DisplayName = "全部 GE"),
	/** GE 中存在 Modifier 的 Attribute 与 FilterAttribute 相同时整张 GE 命中 */
	ByAttribute UMETA(DisplayName = "按 Attribute 命中"),
	/** GE 的 AssetTags 至少包含 FilterRequiredGETags 全部 Tag 时命中；GE 内同类型 Modifier 全部生效 */
	ByGETag UMETA(DisplayName = "按 GE AssetTag 命中"),
	/** Attribute 与 GE AssetTags 同时命中 */
	AttributeAndGETag UMETA(DisplayName = "Attribute 与 GE AssetTag 同时命中"),
};

// ----- 子类型：ChangeProjectileGE -----
UENUM(BlueprintType)
enum class ESkillEntryChangeProjectileGESubType : uint8
{
	None UMETA(DisplayName = "无"),
	ProjectileGEIdTargetTypeAddGE UMETA(DisplayName = "按配置与目标类型添加GE"),
	ProjectileGEIdTargetTypeAddControl UMETA(DisplayName = "按配置与目标类型添加控制"),
	ProjectileNewTargetTypeAddGE UMETA(DisplayName = "新目标类型映射添加GE"),
	ProjectileNewTargetTypeAddControl UMETA(DisplayName = "新目标类型映射添加控制"),
	/** 清空技能配置表内该目标类型的全部 GE，保留其他词条追加的 GE */
	ProjectileRemoveGE UMETA(DisplayName = "移除配置表内全部GE"),
	/** 清空技能配置表内该目标类型的全部控制，保留其他词条追加的控制 */
	ProjectileRemoveControl UMETA(DisplayName = "移除配置表内全部控制"),
};

/** 在技能配置中定位「哪一条投射物」再套用词条（与 ChangeProjectileGE / ChangeProjectileParam 共用） */
UENUM(BlueprintType)
enum class ESkillEntryProjectileLocatorType : uint8
{
	None UMETA(DisplayName = "无"),
	ByProjectileRow UMETA(DisplayName = "按投射物表行名"),
	ByMontageEffectTag UMETA(DisplayName = "按蒙太奇事件标签"),
};

// ----- 子类型：CreateNewProjectileByProject -----
UENUM(BlueprintType)
enum class ESkillEntryCreateNewProjectileByProjectSubType : uint8
{
	None UMETA(DisplayName = "无"),
	BeginCreateSameProjectile UMETA(DisplayName = "动画标签触发时，概率额外生成同款投射物"),
	DelayCreateSameProjectile UMETA(DisplayName = "动画标签触发后延迟，概率在原始位置生成同款投射物（需当前目标）"),
	EndCreateSameProjectile UMETA(DisplayName = "生成物结束时，概率在当前位置生成1个同款投射物"),
	BeginCreateNewProjectile UMETA(DisplayName = "动画标签触发时，概率生成新投射物"),
	DelayCreateNewProjectile UMETA(DisplayName = "动画标签触发后延迟，概率生成新投射物"),
	EndCreateNewProjectile UMETA(DisplayName = "生成物结束时，概率在当前位置生成新投射物"),
};

// ----- 子类型：CreateNewProjectileBySkill -----
UENUM(BlueprintType)
enum class ESkillEntryCreateNewProjectileBySkillSubType : uint8
{
	None UMETA(DisplayName = "无"),
	CreateSameProjectile UMETA(DisplayName = "生成同款投射物"),
	CreateNewProjectile UMETA(DisplayName = "生成新投射物"),
};

// ----- 触发条件：CreateNewProjectileBySkill -----
/**
 * 词条大类型为 CreateNewProjectileBySkill 时，决定何时触发生成新投射物 / 添加 Tag。
 * OnReleaseSourceRageLE/GT 会与 SourceRagePercentThreshold 一起判定罡气占上限百分比。
 */
UENUM(BlueprintType)
enum class ESkillEntryCreateBySkillTriggerType : uint8
{
	None UMETA(DisplayName = "无"),
	OnReleaseSourceRageLE UMETA(DisplayName = "技能主体释放，自身当前罡气 <= 阈值% 总罡气"),
	OnReleaseSourceRageGT UMETA(DisplayName = "技能主体释放，自身当前罡气 > 阈值% 总罡气"),
	OnRelease UMETA(DisplayName = "技能主体释放"),
	OnHit UMETA(DisplayName = "技能主体命中后"),
	OnKill UMETA(DisplayName = "技能主体完成击杀后"),
	OnCrit UMETA(DisplayName = "技能主体造成暴击后"),
	OnBreakShield UMETA(DisplayName = "技能主体清空敌人罡气后"),
};

// ----- 子类型：GiveAbilitys -----
UENUM(BlueprintType)
enum class ESkillEntryGiveAbilitysSubType : uint8
{
	None UMETA(DisplayName = "无"),
	GiveNewAbilitys UMETA(DisplayName = "授予新技能"),
	ReplaceOldAbilitys UMETA(DisplayName = "替换基础技能"),
};

/** GiveGameEffects：表格中小类型与主项同名，预留枚举便于后续拆分 */
UENUM(BlueprintType)
enum class ESkillEntryGiveGameEffectsSubType : uint8
{
	None UMETA(DisplayName = "无"),
	GiveGameEffects UMETA(DisplayName = "授予游戏效果"),
};

// ----- 子类型：ChangeLightSkillParam -----
UENUM(BlueprintType)
enum class ESkillEntryChangeLightSkillParamSubType : uint8
{
	None UMETA(DisplayName = "无"),
	LightSkillDistanceChange UMETA(DisplayName = "轻功距离变更"),
	LightSkillSpeedChange UMETA(DisplayName = "轻功速度变更"),
	TeleportToFront UMETA(DisplayName = "瞬移至目标前方"),
	TeleportToBack UMETA(DisplayName = "瞬移至目标后方"),
	LightSkillBeginPlaceCreateProjectile UMETA(DisplayName = "起点生成投射物"),
	LightSkillLastPlaceCreateProjectile UMETA(DisplayName = "终点生成投射物"),
	LightSkillCollisionCreateProjectile UMETA(DisplayName = "碰撞处生成投射物"),
	LightSkillCastingAddTagAndGE UMETA(DisplayName = "施法中添加标签与GE"),
};

// ============================== 词条生效条件（策划表：条件类型 + 优先级数组） ==============================

/** 数值比较符（血量/怒气百分比、距离、击中次数等共用） */
UENUM(BlueprintType)
enum class ESkillEntryNumericCompareOp : uint8
{
	None UMETA(DisplayName = "无"),
	LessOrEqual UMETA(DisplayName = "<="),
	Less UMETA(DisplayName = "<"),
	Equal UMETA(DisplayName = "=="),
	NotEqual UMETA(DisplayName = "!="),
	GreaterOrEqual UMETA(DisplayName = ">="),
	Greater UMETA(DisplayName = ">"),
};

/** 条件中的角色侧：Source 施法者 / Target 受击或技能目标 */
UENUM(BlueprintType)
enum class ESkillEntryConditionRole : uint8
{
	Source UMETA(DisplayName = "Source（施法/来源）"),
	Target UMETA(DisplayName = "Target（目标）"),
};

/** 用于「当前值占上限百分比」类条件的资源种类 */
UENUM(BlueprintType)
enum class ESkillEntryConditionAttributeKind : uint8
{
	Health UMETA(DisplayName = "健康/生命"),
	Rage UMETA(DisplayName = "罡气"),
};

/**
 * 单条词条生效条件的主类型。
 * 执行层约定：同一 TArray 内按 Priority 数值从小到大依次判定；是否「命中一条即停止」由逻辑单独处理。
 */
UENUM(BlueprintType)
enum class ESkillEntryConditionType : uint8
{
	None UMETA(DisplayName = "无"),

	/** 指定 Role 的当前 Health 或 Rage 占其上限的百分比，与阈值比较（<= / > nn%） */
	AttributePercentVsCap UMETA(DisplayName = "属性占上限百分比(Source/Target)"),

	/** Target 与 Source 的罡气「占上限百分比」相比较（如目标罡气% > 自身罡气%） */
	AttributePercentTargetVsSource UMETA(DisplayName = "双方罡气百分比对比(Target vs Source)"),

	/** GE 施加时 Source 与 Target 距离与阈值比较（UE 距离单位，通常为 cm） */
	DistanceSourceToTarget UMETA(DisplayName = "Source 与 Target 距离"),

	/** GE 施加时被施加者(Target) 与生成物当前位置距离与阈值比较 */
	DistanceTargetToProjectile UMETA(DisplayName = "被施加者与生成物距离"),

	/** Target 是否持有任意/全部给定 GameplayTag（眩晕、流血等状态用） */
	TargetGameplayTags UMETA(DisplayName = "目标标签(任意/全部)"),

	/** 弹道击中次数与阈值比较 */
	ProjectileHitCount UMETA(DisplayName = "弹道击中数量"),
};

/** 单条技能词条扩展条件（与 DataTable 中「条件结构」一行对应） */
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryCondition : public FDataBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件")
	ESkillEntryConditionType ConditionType = ESkillEntryConditionType::None;

	/** 本条满足后的生效权重/概率系数 0~1（可与词条其它概率字段组合，具体乘法顺序由执行层定义） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float ApplyChanceMultiplier = 1.f;

	// ----- AttributePercentVsCap -----
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件|属性百分比",meta = (EditCondition = "ConditionType == ESkillEntryConditionType::AttributePercentVsCap", EditConditionHides))
	ESkillEntryConditionRole AttrPercentRole = ESkillEntryConditionRole::Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件|属性百分比",meta = (EditCondition = "ConditionType == ESkillEntryConditionType::AttributePercentVsCap", EditConditionHides))
	ESkillEntryConditionAttributeKind AttrPercentKind = ESkillEntryConditionAttributeKind::Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件|属性百分比",meta = (EditCondition = "ConditionType == ESkillEntryConditionType::AttributePercentVsCap", EditConditionHides))
	ESkillEntryNumericCompareOp AttrPercentCompare = ESkillEntryNumericCompareOp::None;

	/** 阈值百分比 0~100（相对上限） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件|属性百分比",meta = (EditCondition = "ConditionType == ESkillEntryConditionType::AttributePercentVsCap", EditConditionHides, ClampMin = "0.0", ClampMax = "100.0"))
	float AttrPercentThreshold = 0.f;

	// ----- AttributePercentTargetVsSource (固定比较罡气百分比) -----
	/** 语义：(Target 当前罡气% ) Compare (Source 当前罡气% ) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件|双方罡气%",meta = (EditCondition = "ConditionType == ESkillEntryConditionType::AttributePercentTargetVsSource", EditConditionHides))
	ESkillEntryNumericCompareOp AttrCrossCompare = ESkillEntryNumericCompareOp::None;

	// ----- DistanceSourceToTarget -----
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件|距离",meta = (EditCondition = "ConditionType == ESkillEntryConditionType::DistanceSourceToTarget", EditConditionHides))
	ESkillEntryNumericCompareOp DistanceCompare = ESkillEntryNumericCompareOp::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件|距离",meta = (EditCondition = "ConditionType == ESkillEntryConditionType::DistanceSourceToTarget", EditConditionHides))
	float DistanceThresholdUU = 0.f;

	// ----- DistanceTargetToProjectile -----
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件|距离",meta = (EditCondition = "ConditionType == ESkillEntryConditionType::DistanceTargetToProjectile", EditConditionHides))
	ESkillEntryNumericCompareOp ProjectileDistanceCompare = ESkillEntryNumericCompareOp::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件|距离",meta = (EditCondition = "ConditionType == ESkillEntryConditionType::DistanceTargetToProjectile", EditConditionHides))
	float ProjectileDistanceThresholdUU = 0.f;

	// ----- TargetGameplayTags -----
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件|标签",meta = (EditCondition = "ConditionType == ESkillEntryConditionType::TargetGameplayTags", EditConditionHides))
	bool bTargetRequireAllTags = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件|标签",meta = (EditCondition = "ConditionType == ESkillEntryConditionType::TargetGameplayTags", EditConditionHides))
	FGameplayTagContainer ConditionGameplayTags;

	// ----- ProjectileHitCount -----
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件|弹道",meta = (EditCondition = "ConditionType == ESkillEntryConditionType::ProjectileHitCount", EditConditionHides))
	ESkillEntryNumericCompareOp ProjectileHitCompare = ESkillEntryNumericCompareOp::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|条件|弹道",meta = (EditCondition = "ConditionType == ESkillEntryConditionType::ProjectileHitCount", EditConditionHides))
	int32 ProjectileHitThreshold = 0;
};

// ============================== Payload ==============================

/** ChangeAbilityParam 载荷 */
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryChangeAbilityParam
{
	GENERATED_BODY()

	/** 本条载荷生效的具体子类型，决定下方哪个字段参与运算 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条")
	ESkillEntryChangeAbilityParamSubType SubType = ESkillEntryChangeAbilityParamSubType::None;

	/** 冷却时间实数增量（秒）。与 CooldownDurationPercentDelta 共同满足：最终 = (表基础 + 各词条实数之和) * Π(1+各词条百分比)。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeAbilityParamSubType::CDChange", EditConditionHides))
	float CooldownDurationDelta = 0.f;

	/** 冷却时间百分比增量（小数，如 0.2 表示 +20%，累乘 (1+本值)） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeAbilityParamSubType::CDChange", EditConditionHides))
	float CooldownDurationPercentDelta = 0.f;

	/** 释放距离实数增量 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeAbilityParamSubType::UseDistanceChange", EditConditionHides))
	float UseDistanceDelta = 0.f;

	/** 释放距离百分比增量（小数，累乘 (1+本值)） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeAbilityParamSubType::UseDistanceChange", EditConditionHides))
	float UseDistancePercentDelta = 0.f;

	/** 生效概率增量（与 TriggerSkill 的 TriggerProbability 对齐：原值 + 增量，结果钳制到 [0,1]） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeAbilityParamSubType::TriggerRateChange", EditConditionHides))
	float TriggerRateDelta = 0.f;
	
	/** 追加的自身 GE 列表 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeAbilityParamSubType::ActivateHasEffectChange", EditConditionHides))
	TArray<TSubclassOf<UGameplayEffect>> ExtraActivateGetSelfGEs;
	
	/** 追加的对目标 GE 列表 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeAbilityParamSubType::ActivateGetTargetGEChange", EditConditionHides))
	TArray<TSubclassOf<UGameplayEffect>> ExtraActivateGetTargetGEs;

	/** 击杀后减冷却：作用范围 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeAbilityParamSubType::KillReduceCooldown", EditConditionHides))
	ESkillEntryKillReduceCooldownScope KillReduceCooldownScope = ESkillEntryKillReduceCooldownScope::ThisAbility;

	/** 击杀后减冷却：范围为“指定冷却标签”时匹配的冷却标签 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeAbilityParamSubType::KillReduceCooldown && KillReduceCooldownScope == ESkillEntryKillReduceCooldownScope::SpecifiedTags", EditConditionHides))
	FGameplayTagContainer KillReduceCooldownTags;

	/** 击杀后减冷却：固定减少秒数（0 表示不按秒减） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeAbilityParamSubType::KillReduceCooldown", EditConditionHides, ClampMin = "0.0"))
	float KillReduceCooldownSeconds = 0.f;

	/** 击杀后减冷却：按冷却总时长的比例减少（小数，0.3 表示减总时长的 30%，1 表示清空） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeAbilityParamSubType::KillReduceCooldown", EditConditionHides, ClampMin = "0.0", ClampMax = "1.0"))
	float KillReduceCooldownPercent = 0.f;
};

/** ChangeDamageExecutionParam 载荷：SubType 指定公式分支，Value / TagToValueDelta 为数值 */
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryChangeDamageExecutionParam
{
	GENERATED_BODY()

	/** 伤害/治疗执行修正的具体子类型（与策划表 tag 列对应） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条")
	ESkillEntryChangeDamageExecutionParamSubType SubType = ESkillEntryChangeDamageExecutionParamSubType::None;

	/** 定位技能配置中哪一条投射物（与 ChangeProjectileGE / ChangeGEParam 共用） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式")
	ESkillEntryProjectileLocatorType LocatorType = ESkillEntryProjectileLocatorType::None;

	/** 投射物配置表行名 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式", meta = (EditCondition = "LocatorType == ESkillEntryProjectileLocatorType::ByProjectileRow", EditConditionHides))
	FName ProjectileConfigRow = NAME_None;

	/** 蒙太奇投射物生成事件标签 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式", meta = (EditCondition = "LocatorType == ESkillEntryProjectileLocatorType::ByMontageEffectTag", EditConditionHides))
	FGameplayTag MontageSpawnEffectTag;
	
	/** SubType 对应数值（改变伤害类型用 DamageTypeOverride；*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType != ESkillEntryChangeDamageExecutionParamSubType::None && SubType != ESkillEntryChangeDamageExecutionParamSubType::DamageTypeChangeValue", EditConditionHides))
	float Value = 0.f;

	/** 覆盖伤害类型（仅 DamageTypeChangeValue） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeDamageExecutionParamSubType::DamageTypeChangeValue", EditConditionHides))
	EDamageType DamageTypeOverride = EDamageType::None;
};

/** ChangeProjectileParam 载荷：先 Locator 再按 SubType 取字段 */
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryChangeProjectileParam
{
	GENERATED_BODY()

	/** 投射物参数修改的具体子类型 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条")
	ESkillEntryChangeProjectileParamSubType SubType = ESkillEntryChangeProjectileParamSubType::None;

	/** 如何在技能配置里找到目标投射物条目 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式")
	ESkillEntryProjectileLocatorType LocatorType = ESkillEntryProjectileLocatorType::None;

	/** 投射物配置表（如 DT_Projectile）行名 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式", meta = (EditCondition = "LocatorType == ESkillEntryProjectileLocatorType::ByProjectileRow", EditConditionHides))
	FName ProjectileConfigRow = NAME_None;

	/** 技能蒙太奇/动画事件中用于生成投射物的 GameplayTag */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式", meta = (EditCondition = "LocatorType == ESkillEntryProjectileLocatorType::ByMontageEffectTag", EditConditionHides))
	FGameplayTag MontageSpawnEffectTag;

	/** 替换后的投射物配置表行名（仅改 ProjectileName，保留 TargetTypeMap / GE） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileParamSubType::ReplaceProjectile", EditConditionHides))
	FName ReplacementProjectileName = NAME_None;

	/** 数值修改方式（缩放/碰撞/生命周期/速度/消耗/弹跳等子类型共用） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileParamSubType::ProjectileScaleChange || SubType == ESkillEntryChangeProjectileParamSubType::ProjectileCollisionScaleChange || SubType == ESkillEntryChangeProjectileParamSubType::ProjectileCollisionOffsetChange || SubType == ESkillEntryChangeProjectileParamSubType::ProjectileLifeTimeChange || SubType == ESkillEntryChangeProjectileParamSubType::ProjectileDotFrequencyChange || SubType == ESkillEntryChangeProjectileParamSubType::ProjectileFlySpeedChange || SubType == ESkillEntryChangeProjectileParamSubType::ProjectileConsumeCountChange || SubType == ESkillEntryChangeProjectileParamSubType::ProjectileBounceCountChange", EditConditionHides))
	ESkillEntryNumericModifyMode NumericModifyMode = ESkillEntryNumericModifyMode::Add;

	/** 浮点覆盖值或增减幅度（秒、速度、缩放等） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileParamSubType::ProjectileScaleChange || SubType == ESkillEntryChangeProjectileParamSubType::ProjectileLifeTimeChange || SubType == ESkillEntryChangeProjectileParamSubType::ProjectileDotFrequencyChange || SubType == ESkillEntryChangeProjectileParamSubType::ProjectileFlySpeedChange", EditConditionHides))
	float FloatValue = 0.f;

	/** 整型覆盖值或增减幅度（消耗次数 -1 穿透；弹跳次数待投射物字段落地） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileParamSubType::ProjectileConsumeCountChange || SubType == ESkillEntryChangeProjectileParamSubType::ProjectileBounceCountChange", EditConditionHides))
	int32 IntValue = 0;

	/** 向量覆盖值或增减幅度（碰撞体积/偏移） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileParamSubType::ProjectileCollisionScaleChange || SubType == ESkillEntryChangeProjectileParamSubType::ProjectileCollisionOffsetChange", EditConditionHides))
	FVector VectorValue = FVector::ZeroVector;

	/** 弹道/弹跳行为覆盖（与投射物 MoveType 对齐），对应 ProjectileBounceTypeChange */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileParamSubType::ProjectileBounceTypeChange", EditConditionHides))
	EProjectileMoveType ProjectileMoveTypeOverride = EProjectileMoveType::Scattering;

	/** 替换投射物发射时特效资源 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileParamSubType::ProjectileActivationFXReplace", EditConditionHides))
	TSoftObjectPtr<UFXSystemAsset> ProjectileActivationFXReplace;

	/** 在现有配置上追加发射特效（不移除原特效时由逻辑叠加） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileParamSubType::ProjectileActivationFXAdd", EditConditionHides))
	TSoftObjectPtr<UFXSystemAsset> ProjectileActivationFXAdd;

	/** 替换拖尾特效资源 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileParamSubType::ProjectileTrailFXReplace", EditConditionHides))
	TSoftObjectPtr<UFXSystemAsset> ProjectileTrailFXReplace;

	/** 追加拖尾特效资源 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileParamSubType::ProjectileTrailFXAdd", EditConditionHides))
	TSoftObjectPtr<UFXSystemAsset> ProjectileTrailFXAdd;
};

/** ChangeGEParam 载荷：通过 Attribute / GE AssetTag 过滤命中后按 SubType 修改 GE 数值 */
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryChangeGEParam
{
	GENERATED_BODY()

	/** GE 数值修改子类型（时长周期 / 层数等） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条")
	ESkillEntryChangeGEParamSubType SubType = ESkillEntryChangeGEParamSubType::None;

	/** GE 过滤方式：决定本条 Param 在哪一类 GE 上生效 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|过滤")
	ESkillEntryChangeGEParamFilterMode FilterMode = ESkillEntryChangeGEParamFilterMode::Any;

	/** ByAttribute / AttributeAndGETag 用：被过滤命中的 Attribute */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|过滤", meta = (EditCondition = "FilterMode == ESkillEntryChangeGEParamFilterMode::ByAttribute || FilterMode == ESkillEntryChangeGEParamFilterMode::AttributeAndGETag", EditConditionHides))
	FGameplayAttribute FilterAttribute;

	/** ByGETag / AttributeAndGETag 用：要求 GE 的 AssetTags 至少包含这些 Tag */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|过滤", meta = (EditCondition = "FilterMode == ESkillEntryChangeGEParamFilterMode::ByGETag || FilterMode == ESkillEntryChangeGEParamFilterMode::AttributeAndGETag", EditConditionHides))
	FGameplayTagContainer FilterRequiredGETags;

	/** 定位技能配置中哪一条投射物（与 ChangeProjectileGE / ChangeProjectileParam 共用） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式")
	ESkillEntryProjectileLocatorType LocatorType = ESkillEntryProjectileLocatorType::None;

	/** 投射物配置表行名 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式", meta = (EditCondition = "LocatorType == ESkillEntryProjectileLocatorType::ByProjectileRow", EditConditionHides))
	FName ProjectileConfigRow = NAME_None;

	/** 蒙太奇投射物生成事件标签 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式", meta = (EditCondition = "LocatorType == ESkillEntryProjectileLocatorType::ByMontageEffectTag", EditConditionHides))
	FGameplayTag MontageSpawnEffectTag;

	/** GE 持续时间固定增量（秒） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeGEParamSubType::GEDurationAndPeriodChange", EditConditionHides))
	float DurationDeltaSeconds = 0.f;

	/** GE 持续时间百分比增量 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeGEParamSubType::GEDurationAndPeriodChange", EditConditionHides))
	float DurationChangePercent = 0.f;

	/** 周期性 GE 的周期固定增量（秒） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeGEParamSubType::GEDurationAndPeriodChange", EditConditionHides))
	float PeriodDeltaSeconds = 0.f;

	/** 周期性 GE 的周期百分比增量 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeGEParamSubType::GEDurationAndPeriodChange", EditConditionHides))
	float PeriodChangePercent = 0.f;

	/** 叠加层数增量（具体封顶仍受 GE 自身 StackLimit 约束） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeGEParamSubType::GEStackChange", EditConditionHides))
	int32 StackCountDelta = 0;
};

/** ChangeProjectileGE 载荷：Locator + SubType 决定增删 GE/控制 */
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryChangeProjectileGE
{
	GENERATED_BODY()

	/** 对投射物 GE/控制做增删改的具体操作类型 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条")
	ESkillEntryChangeProjectileGESubType SubType = ESkillEntryChangeProjectileGESubType::None;

	/** 定位技能配置中哪一条投射物 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式")
	ESkillEntryProjectileLocatorType LocatorType = ESkillEntryProjectileLocatorType::None;

	/** 投射物配置表行名 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式", meta = (EditCondition = "LocatorType == ESkillEntryProjectileLocatorType::ByProjectileRow", EditConditionHides))
	FName ProjectileConfigRow = NAME_None;

	/** 蒙太奇投射物生成事件标签 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式", meta = (EditCondition = "LocatorType == ESkillEntryProjectileLocatorType::ByMontageEffectTag", EditConditionHides))
	FGameplayTag MontageSpawnEffectTag;

	/** 按 ID 定位时作用的「目标分类」（敌人/友军/锁定目标等） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileGESubType::ProjectileGEIdTargetTypeAddGE || SubType == ESkillEntryChangeProjectileGESubType::ProjectileGEIdTargetTypeAddControl || SubType == ESkillEntryChangeProjectileGESubType::ProjectileRemoveGE || SubType == ESkillEntryChangeProjectileGESubType::ProjectileRemoveControl", EditConditionHides))
	ETargetClassType AffectedTargetType = ETargetClassType::None;

	/** 向该目标类型追加应用的 GE 类 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileGESubType::ProjectileGEIdTargetTypeAddGE", EditConditionHides))
	TSubclassOf<UGameplayEffect> GameplayEffectToAdd;

	/** 向该目标类型追加的控制效果列表 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileGESubType::ProjectileGEIdTargetTypeAddControl", EditConditionHides))
	TArray<FControlEffectData> ControlEffectsToAdd;

	/** 整表替换/追加 TargetType → FProjectileGEConfig（用于 NewTargetType 系列子类型） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileGESubType::ProjectileNewTargetTypeAddGE || SubType == ESkillEntryChangeProjectileGESubType::ProjectileNewTargetTypeAddControl", EditConditionHides))
	TMap<ETargetClassType, FProjectileGEConfig> NewTargetTypeProjectileGE;

	/** 可选：仅移除配置表中的单个 GE；留空则移除该目标类型下配置表内全部 GE */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileGESubType::ProjectileRemoveGE", EditConditionHides))
	TSubclassOf<UGameplayEffect> GameplayEffectToRemove;

	/** 可选：仅移除配置表中的单个控制 Tag；留空则移除该目标类型下配置表内全部控制 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeProjectileGESubType::ProjectileRemoveControl", EditConditionHides))
	FGameplayTag ControlEffectTagToRemove;
};

/** CreateNewProjectileByProject 单条槽位 */
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryCreateNewProjectileByProjectSlot
{
	GENERATED_BODY()

	/** 生成物生成/延迟/结束时生成投射物的时机与是否沿用原弹道配置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条")
	ESkillEntryCreateNewProjectileByProjectSubType SubType = ESkillEntryCreateNewProjectileByProjectSubType::None;

	/** 定位技能配置中哪一条投射物（与 ChangeProjectileGE / ChangeProjectileParam 共用） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式")
	ESkillEntryProjectileLocatorType LocatorType = ESkillEntryProjectileLocatorType::None;

	/** 投射物配置表行名 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式", meta = (EditCondition = "LocatorType == ESkillEntryProjectileLocatorType::ByProjectileRow", EditConditionHides))
	FName ProjectileConfigRow = NAME_None;

	/** 蒙太奇投射物生成事件标签 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|定位方式", meta = (EditCondition = "LocatorType == ESkillEntryProjectileLocatorType::ByMontageEffectTag", EditConditionHides))
	FGameplayTag MontageSpawnEffectTag;

	/** 触发概率（策划 Probability_Creat / Probability_Project，0~1） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (ClampMin = "0", ClampMax = "1"))
	float SpawnProbability = 1.f;

	/** Delay 类子类型：相对生成点的延迟（秒） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryCreateNewProjectileByProjectSubType::DelayCreateSameProjectile || SubType == ESkillEntryCreateNewProjectileByProjectSubType::DelayCreateNewProjectile", EditConditionHides))
	float DelaySeconds = 0.f;

	/** NewProjectile 子类型：要生成的投射物完整配置（行名 + 各目标类型的 GE 映射） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryCreateNewProjectileByProjectSubType::BeginCreateNewProjectile || SubType == ESkillEntryCreateNewProjectileByProjectSubType::DelayCreateNewProjectile || SubType == ESkillEntryCreateNewProjectileByProjectSubType::EndCreateNewProjectile", EditConditionHides))
	FAbilityProjectileStruct NewProjectile;
};

/** CreateNewProjectileBySkill：按 TriggerType 时机触发 + 可选授予 Tag */
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryCreateNewProjectileBySkill
{
	GENERATED_BODY()

	/** 判定区生成同款或新款投射物 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条")
	ESkillEntryCreateNewProjectileBySkillSubType SubType = ESkillEntryCreateNewProjectileBySkillSubType::None;

	/** 何时触发本词条（释放/命中/击杀/暴击/清空敌人罡气） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|触发条件")
	ESkillEntryCreateBySkillTriggerType TriggerType = ESkillEntryCreateBySkillTriggerType::None;

	/** TriggerType 为 OnReleaseSourceRageLE/GT 时使用：自身罡气占上限百分比阈值（0~100） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|触发条件",
		meta = (EditCondition = "TriggerType == ESkillEntryCreateBySkillTriggerType::OnReleaseSourceRageLE || TriggerType == ESkillEntryCreateBySkillTriggerType::OnReleaseSourceRageGT",
			EditConditionHides, ClampMin = "0.0", ClampMax = "100.0"))
	float SourceRagePercentThreshold = 0.f;

	/** CreateNewProjectile 时填写；Same 时可留空由逻辑复制当前技能投射物 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryCreateNewProjectileBySkillSubType::CreateNewProjectile", EditConditionHides))
	FAbilityProjectileStruct Projectile;

	/** 是否在生成时为相关 Actor 授予 TagsToGrant */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条")
	bool bGrantTags = false;

	/** bGrantTags 为 true 时授予的标签容器 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "bGrantTags", EditConditionHides))
	FGameplayTagContainer TagsToGrant;
};

/** GiveAbilitys：额外授予技能，或替换武学 BaseAbility（均为 GameAbility 表行名 FName） */
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryGiveAbilitys
{
	GENERATED_BODY()

	/** 授予新技能或替换武学 BaseAbility */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条")
	ESkillEntryGiveAbilitysSubType SubType = ESkillEntryGiveAbilitysSubType::None;

	/** GiveNewAbilitys：额外授予的技能 ID 列表（与 DT GameAbility 行名一致） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryGiveAbilitysSubType::GiveNewAbilitys", EditConditionHides))
	TArray<FName> NewAbilityIDs;

	/** ReplaceOldAbilitys：替换武学 BaseAbility 的技能 ID（仅一个） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryGiveAbilitysSubType::ReplaceOldAbilitys", EditConditionHides))
	FName ReplacementAbilityID = NAME_None;
};

USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryGiveGameplayEffects
{
	GENERATED_BODY()

	/** 当前固定为授予 GE，预留枚举便于扩展 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条")
	ESkillEntryGiveGameEffectsSubType SubType = ESkillEntryGiveGameEffectsSubType::GiveGameEffects;

	/** 直接附加给携带者的 GameplayEffect 类（等级使用武学等级） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryGiveGameEffectsSubType::GiveGameEffects", EditConditionHides))
	TArray<TSubclassOf<UGameplayEffect>> EffectClasses;
};

/** ChangeLightSkillParam：轻功位移、瞬移偏移、轨迹点/碰撞生成物、施法 Tag+GE */
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryChangeLightSkillParam
{
	GENERATED_BODY()

	/** 轻功/位移相关修改子类型 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条")
	ESkillEntryChangeLightSkillParamSubType SubType = ESkillEntryChangeLightSkillParamSubType::None;

	/** 轻功位移距离增量（单位与角色移动一致） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeLightSkillParamSubType::LightSkillDistanceChange", EditConditionHides))
	float LightSkillDistanceDelta = 0.f;

	/** 轻功过程移动速度增量 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeLightSkillParamSubType::LightSkillSpeedChange", EditConditionHides))
	float LightSkillSpeedDelta = 0.f;

	/** 瞬移至目标前/后方时的偏移距离（沿朝向，厘米） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeLightSkillParamSubType::TeleportToFront || SubType == ESkillEntryChangeLightSkillParamSubType::TeleportToBack", EditConditionHides))
	float TeleportOffsetDistance = 0.f;

	/** 轻功起点、终点或碰撞点生成的投射物配置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeLightSkillParamSubType::LightSkillBeginPlaceCreateProjectile || SubType == ESkillEntryChangeLightSkillParamSubType::LightSkillLastPlaceCreateProjectile || SubType == ESkillEntryChangeLightSkillParamSubType::LightSkillCollisionCreateProjectile", EditConditionHides))
	FAbilityProjectileStruct ProjectileToSpawn;

	/** 施法持续期间授予自身的标签 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeLightSkillParamSubType::LightSkillCastingAddTagAndGE", EditConditionHides))
	FGameplayTagContainer CastingTagsToGrant;

	/** 施法持续期间对自身应用的 GE（如无敌、霸体） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeLightSkillParamSubType::LightSkillCastingAddTagAndGE", EditConditionHides))
	TSubclassOf<UGameplayEffect> CastingGameplayEffect;

	/** CastingGameplayEffect 的应用等级 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条", meta = (EditCondition = "SubType == ESkillEntryChangeLightSkillParamSubType::LightSkillCastingAddTagAndGE", EditConditionHides))
	float CastingEffectLevel = 1.f;
};
//技能词条效果
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryEffect
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条")
	ESkillEntryEffectType EntryEffectType = ESkillEntryEffectType::None;
	/**
	 * 扩展生效条件（血量/怒气%、间距、标签、弹道次数与运动类型、死亡与受控等触发）。
	 * 按 Priority 升序；是否与 AcceptChangeId、生效概率联动由执行层实现。
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|生效条件")
	TArray<FName> EntryConditionsIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|改变技能主体配置", meta = (EditCondition = "EntryEffectType == ESkillEntryEffectType::ChangeAbilityParam", EditConditionHides))
	FSkillEntryChangeAbilityParam ChangeAbilityParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|修改计算公式数值", meta = (EditCondition = "EntryEffectType == ESkillEntryEffectType::ChangeDamageExecutionParam", EditConditionHides))
	FSkillEntryChangeDamageExecutionParam ChangeDamageExecutionParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|改变生成物", meta = (EditCondition = "EntryEffectType == ESkillEntryEffectType::ChangeProjectileParam", EditConditionHides))
	FSkillEntryChangeProjectileParam ChangeProjectileParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|改变GE数值", meta = (EditCondition = "EntryEffectType == ESkillEntryEffectType::ChangeGEParam", EditConditionHides))
	FSkillEntryChangeGEParam ChangeGEParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|改变生成物GE", meta = (EditCondition = "EntryEffectType == ESkillEntryEffectType::ChangeProjectileGE", EditConditionHides))
	FSkillEntryChangeProjectileGE ChangeProjectileGE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|生成物生成投射物", meta = (EditCondition = "EntryEffectType == ESkillEntryEffectType::CreateNewProjectileByProject", EditConditionHides))
	TArray<FSkillEntryCreateNewProjectileByProjectSlot> CreateNewProjectileByProjectSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|判定区生成投射物", meta = (EditCondition = "EntryEffectType == ESkillEntryEffectType::CreateNewProjectileBySkill", EditConditionHides))
	FSkillEntryCreateNewProjectileBySkill CreateNewProjectileBySkill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|赋予或替换技能", meta = (EditCondition = "EntryEffectType == ESkillEntryEffectType::GiveAbilitys", EditConditionHides))
	FSkillEntryGiveAbilitys GiveAbilitys;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|赋予额外效果", meta = (EditCondition = "EntryEffectType == ESkillEntryEffectType::GiveGameEffects", EditConditionHides))
	FSkillEntryGiveGameplayEffects GiveGameplayEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|轻功强力移动", meta = (EditCondition = "EntryEffectType == ESkillEntryEffectType::ChangeLightSkillParam", EditConditionHides))
	FSkillEntryChangeLightSkillParam ChangeLightSkillParam;
};

/**
 * 技能词条 DataTable 行（继承 FDataBase）。
 * 仅启用与 EntryEffectType 匹配的 Payload，其余保持默认即可。
 */
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryConfig : public FDataBase
{
	GENERATED_BODY()
	/** 施法者需持有的标签 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|标签条件")
	FGameplayTagContainer RequiredCasterTags;
	/** 互斥的词条行 ID（同表 RowName） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|互斥")
	TArray<FName> MutuallyExclusiveEntryIds;
	/** 参悟时回溯到此词条（保留此旧词条）消耗的回溯点数 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "技能词条|参悟")
	int32 RetraceCost = 0;
	//词条效果
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSkillEntryEffect> EntryEffects;
	//词条描述
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFormatText FormatEntryDescribe;
	//词条品质
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemQuality EntryQuality = EItemQuality::None;
};

//技能词条池子
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FSkillEntryPoolConfig : public FDataBase
{
	GENERATED_BODY()
	//词条权重
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName,int32> SkillEntryWeight;
	//词条名字
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PoolName;
	//词条描述
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PoolDesc;
	FSkillEntryPoolConfig()
	{
		
	}
};
//等级对应得技能词条
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FLevelSkillEntry : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	//等级
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	int Level = 0;
	//词条池
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	TArray<FName> SkillEntryPools;
	//词条描述
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	FFormatText FormatEntryDescribe;
};