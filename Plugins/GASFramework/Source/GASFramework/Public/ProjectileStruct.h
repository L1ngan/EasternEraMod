// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EastRimWorldAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "RHS_CollisionShape.h"
#include "RHS_ProjectileBase.h"
#include "Engine/DataTable.h"
#include "Particles/ParticleSystem.h"
#include "LQuickFrame/Base/LBaseValue.h"
#include "ProjectileStruct.generated.h"

enum class ERootMotionFinishVelocityMode : uint8;
//投射物的移动方式
UENUM(BlueprintType)
enum class EProjectileMoveType : uint8
{
	//按角度分布，直线发射
	Scattering,
	//围绕发出者旋转
	RotationBySelf,
	// 发射位置生成 自身不会移动
	Idle,
	//在目标位置直接生成投射物
	TargetLocationByTarget,
	//追踪
	Tracking,
	//抛物线锁定目标
	ParabolicByTarget,
	//发动到指定位置后停止后返回或者返回
	LaunchIdleAndBack,
	//抛物线朝方向移动
	ParabolicByDirection,
	//围绕目标旋转
	RotationByTarget,

};

UENUM(BlueprintType)
enum class EBattle : uint8
{
	// 锁定目标
	LockDestination,
	//持续伤害
	Dot,
};


//投射物的目标类型
UENUM(BlueprintType)
enum class EProjectileTargetType : uint8
{
	//施加给敌人
	Emeny,
	//施加给队友
	Player,
	//施加给双方
	Both,
};


// 决定生成物何时去生成
UENUM(BlueprintType)
enum class EProjectileGenerateType : uint8
{
	// 配置在动画蓝图里的通知起始点
	ProjectileAnimNotifyBegin,
	// 配置在动画蓝图里的固定通知点
	ProjectileAnimNotifyCustom,
	// 不准爆 追溯某个生成物的爆点
	// ProjectileExplosivePoint
};


//投射物生成方式
UENUM(BlueprintType)
enum class EProjectileSpawnType : uint8
{
	None,
	//从盒体内随机生成
	RandomBoundingBox,
	//沿着一条矢量生成
	EvenlyAlongVector,
	//沿着圆形生成
	EvenlyInCircle,
};

//预警的枚举 感觉不会加了所以直接枚举定死
UENUM(BlueprintType)
enum class EEarlyWarningType :uint8
{
	Straight,
	Circle,
};

UENUM(BlueprintType)
enum class ESimulationType : uint8 
{
	None,
	Bezier,
	PhysicalSimulation,
};

//投射物的作用类型
UENUM(BlueprintType)
enum class ETargetClassType : uint8
{
	//空
	None,
	//所有敌人
	AllEnemy,
	//锁定敌人
	LockEnemy,
	//所有友方包括自己
	AllFriendly,
	//除了友方的其他单位
	OtherThanFriends,
};


//生成召唤物的信息
USTRUCT(BlueprintType)
struct GASFRAMEWORK_API FGenerateSummonInfo
{
	GENERATED_USTRUCT_BODY()
	//生成的召唤物id
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SummonID = NAME_None;
	//给予的GE
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TSubclassOf<class UGameplayEffect>> ApplyGEs;
	//存活的时间
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Lifetime = 10;
	//生成数量
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 GenerateNumber = 1;
	
	FGenerateSummonInfo(){}
};

//基础力的配置
USTRUCT(BlueprintType)
struct FRootMotionConstantForce
{
	GENERATED_BODY()
	//实例名字
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FName TaskInstanceName;

	//力的方向
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FVector WorldDirection = FVector::Zero();

	//力的大小
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float Strength;

	//力的持续时间
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float Duration;

	//添加还是覆盖
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	bool IsAdditive;

	//力和距离的关系
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	UCurveFloat * StrengthOverTime;

	//结束时的速度设置
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	ERootMotionFinishVelocityMode FinishVelocityMode;

	/** 当结束模式被选定为 “设置速度“后，当根运动结束时角色速度被设置为这个值 */
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FVector FinishSetVelocity = FVector::Zero();

	/** 当结束模式被选定为 “限制速度”后，当运动结束后角色速度会被限制在这个值 */
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float FinishClampVelocity;
	FRootMotionConstantForce(): Strength(0), Duration(0), IsAdditive(false), StrengthOverTime(nullptr),
	                            FinishVelocityMode(),
	                            FinishClampVelocity(0)
	{
	}
};



//径向力的配置
USTRUCT(BlueprintType)
struct FRootMotionRadialForce
{
	GENERATED_BODY()
	//实例名字
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FName TaskInstanceName;

	//力的方向
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FVector WorldDirection = FVector::Zero();

	//力的大小
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float Strength;

	//力的持续时间
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float Duration;

	//添加还是覆盖
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	bool IsAdditive;

	//力和距离的关系
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	UCurveFloat* StrengthOverTime;

	//结束时的速度设置
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	ERootMotionFinishVelocityMode FinishVelocityMode;

	/** 当结束模式被选定为 “设置速度“后，当根运动结束时角色速度被设置为这个值 */
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FVector FinishSetVelocity = FVector::Zero();

	/** 当结束模式被选定为 “限制速度”后，当运动结束后角色速度会被限制在这个值 */
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float FinishClampVelocity;
	FRootMotionRadialForce(): Strength(0), Duration(0), IsAdditive(false), StrengthOverTime(nullptr),
	                          FinishVelocityMode(),
	                          FinishClampVelocity(0)
	{
	}
};


USTRUCT(BlueprintType)
struct FSpawnTypeSet
{
	GENERATED_BODY()

	// //刷出类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Setup")
	EProjectileSpawnType SpawnType = EProjectileSpawnType::None;
	/*
	 * 绘制图形的整体旋转偏移
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Setup")
	FRotator  RotationOffset = FRotator::ZeroRotator;

	// 绘制图形的整体位置偏移
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Setup")
	FVector LocationOffset = FVector::ZeroVector;
	/*
	 * 当类型为box类型时 代表盒子的长宽高 随机生成在构成的盒子范围
	 * 当类型为直线时，以x y z 除以 2 形成的2个点做直线
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Setup", meta = (UIMin = 0, ClampMin = 0, EditConditionHides, EditCondition = "SpawnType != EProjectileSpawnType::EvenlyInCircle"))
	FVector SpawnLocationVariance = FVector(64.f, 0.f, 0.f);

	/*
	 * 仅当沿着圆形生成类型 时有效;
	 * 圆的半径.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Setup", meta = (UIMin = 0, ClampMin = 0, EditConditionHides, EditCondition = "SpawnType == EProjectileSpawnType::EvenlyInCircle"))
	float CircleRadius = 64.f;
	/*
	 * 仅当沿着圆形生成类型 时有效;
	 * 最大圆的角度.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Setup", meta = (UIMin = 0, UIMax = 360, ClampMin = 0, ClampMax = 360,EditConditionHides,EditCondition = "SpawnType == EProjectileSpawnType::EvenlyInCircle"))
	float MaxCircleAngle = 92.f;
	FSpawnTypeSet()
	{
		SpawnType = EProjectileSpawnType::EvenlyAlongVector;
	}
};



USTRUCT(BlueprintType)
struct FProjectileSpawnSetting
{
	GENERATED_BODY()
public:
	// 移动方式
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting")
	EProjectileMoveType MoveType = EProjectileMoveType::Scattering;
	//是否使用生成方向作为旋转方向和发射方向
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting")
	bool bUsePointDirectionToRotation = false;
	// 投射物发射方向及自身旋转偏移
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting")
	FRotator DirectionOffset = FRotator::ZeroRotator;
	// 一次性生成的数量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting")
	uint8 AmountToSpawnAtOnce = 1;
	//投射物的生命周期
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting", meta = (EditConditionHides, EditCondition = "MoveType != EProjectileMoveType::LaunchIdleAndBack"))
	float LifeTime = 0.f;
	//生成物扩大倍率 默认值为0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting")
	float ProjectileVolume = 0.0f;
	//是否附加到拥有者
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Attach setting")
	bool bAttachOwner = false;
	// 跟随骨骼插槽点
	UPROPERTY(EditAnywhere, Category = "Attach setting",meta=(EditConditionHides, EditCondition = "bAttachOwner"),BlueprintReadOnly)
	FName ParentSocket = NAME_None;
	//附加到插槽的规则
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Attach setting", meta = (EditConditionHides, EditCondition = "bAttachOwner"))
	EAttachmentRule AttachmentRule = EAttachmentRule::KeepRelative;
	//延迟发射的时间
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Attach setting", meta = (EditConditionHides, EditCondition = "MoveType != EProjectileMoveType::Idle"))
	float DelayLaunchTime = 0.0f;
	//发射前是否脱离父节点
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Attach setting", meta = (EditConditionHides, EditCondition = "bAttachOwner"))
	bool bSeparation = false;
	//碰撞盒子类型
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Collision" )
	TSubclassOf<URHS_CollisionShape> ShapeType = nullptr;
	//碰撞盒大小
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Collision")
	FVector CollisionShapeInfo = FVector::ZeroVector;
	//投射物的碰撞通道
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision")
	TEnumAsByte<ECollisionChannel> CollisionChannel = ECollisionChannel::ECC_GameTraceChannel2;
	//碰撞
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision")
	FName CollisionProfileName = FName(TEXT("Projectile"));
	//碰撞旋转偏移
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision")
	FVector CollisionOffset = FVector::ZeroVector;
	//碰撞框的旋转是否基于碰撞框父节点
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision")
	bool bRotatorToParent = false;
	//碰撞旋转偏移
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision")
	FRotator CollisionRotatorOffset = FRotator::ZeroRotator;
	//是否生成其他投射物
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SpawnSetting")
	bool bSpawnOtherProjectile = false;
	//碰撞时是否需要判断是否应用效果
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting")
	bool bCheckApplyEffect = true;
	//生成额外投射物ID
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "SpawnSetting",meta = (EditConditionHides,EditCondition = "bSpawnOtherProjectile"))
	FName ParabolicSpawnProjectileID;
	// 角速度大小
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditConditionHides,EditCondition = "MoveType == EProjectileMoveType::RotationBySelf"), Category = "Projectile Setup")
	float SurroundAngularSpeed = 0.0f;
	// 围绕的半径大小
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditConditionHides,EditCondition = "MoveType == EProjectileMoveType::RotationBySelf"), Category = "Projectile Setup")
	float SurroundRadiusSize = 0.0f;
	// 弹道速度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting",meta = (EditConditionHides,EditCondition = "MoveType != EProjectileMoveType::RotationBySelf && MoveType != EProjectileMoveType::Idle && MoveType != EProjectileMoveType::TargetLocationByTarget"))
	float ProjectileSpeed = 300.f;
	//延迟追踪目标，先按照发射方向移动
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Attach setting", meta = (EditConditionHides, EditCondition = "MoveType == EProjectileMoveType::Tracking"))
	float DelayHomingTarget = 0.0f;
	//投射物飞行时间
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting",meta = (EditConditionHides, EditCondition = "MoveType == EProjectileMoveType::LaunchIdleAndBack"))
	float FlyTime = 0.f;
	//投射物停留时间
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting", meta = (EditConditionHides, EditCondition = "MoveType == EProjectileMoveType::LaunchIdleAndBack"))
	float IdleTime = 0.f;
	//投射物是否返回释放位置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting", meta = (EditConditionHides, EditCondition = "MoveType == EProjectileMoveType::LaunchIdleAndBack"))
	bool bBackSource = false;
	//不能返回目标或目标死亡投射物存活的时间
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting", meta = (EditConditionHides, EditCondition = "bBackSource"))
	float NoSourceLifeTime = 0.0f;
	FProjectileSpawnSetting(){}
};


//投射物特效配置
USTRUCT(BlueprintType)
struct FProjectileVFXConfig: public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	//投射物发出 类型
	UPROPERTY(EditAnywhere, Category = "Projectile VFX", BlueprintReadWrite)
	TSoftObjectPtr<UFXSystemAsset> ActivationVFX;
	//投射物拖尾 类型
	UPROPERTY(EditAnywhere, Category = "Projectile VFX", BlueprintReadWrite)
	TSoftObjectPtr<UFXSystemAsset> TrailVFX;
	//投射物爆点 类型
	UPROPERTY(EditAnywhere, Category = "Projectile VFX", BlueprintReadWrite)
	TSoftObjectPtr<UFXSystemAsset> ImpactVFX;
	//投射物发出 尺寸
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	FVector ActivationScale{1.0,1.0,1.0};
	//投射物拖尾 尺寸
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	FVector TrailScale{1.0,1.0,1.0};
	//投射物爆点 尺寸
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	FVector ImpactScale{1.0,1.0,1.0};
	//投射物发出 音效
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	TSoftObjectPtr<USoundBase> ActivationSFX;
	//投射物拖尾 音效
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	TSoftObjectPtr<USoundBase> TrailSFX;
	//投射物爆点 音效
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	TSoftObjectPtr<USoundBase> ImpactSFX;
	//投射物发出音效延迟
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	float ActivationSoundDelayTime = 0.f;
	//投射物拖尾音效延迟
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	float TrailSoundDelayTime = 0.f;
	//投射物爆点延迟
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	float ImpactSoundDelayTime = 0.f;
	//初始特效的 偏移
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	FVector ActivationOffset = FVector::ZeroVector;
	//拖尾特效的 偏移
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	FVector TrailOffset = FVector::ZeroVector;
	//拖尾特效的旋转
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	FRotator TrailRotatorOffset = FRotator::ZeroRotator;
	//初始特效的旋转
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	FRotator ActivationRotatorOffset = FRotator::ZeroRotator;
	//爆点特效的旋转
	UPROPERTY(EditAnywhere, Category = "Projectile SFX", BlueprintReadWrite)
	FRotator RotatorOffset = FRotator::ZeroRotator;
};

USTRUCT(BlueprintType)
struct FProjectileStruct : public FDataBase
{
	GENERATED_USTRUCT_BODY()
public:
	//表明该投射物是什么类型的
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Base")
	FGameplayTag UniqueTag;
	//表明该投射物是什么类型的
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Base")
	FGameplayTagContainer TypeTags;
	//是否只会命中选定目标
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Base")
	bool OnlyTheTargetHit = false;
	//最大的攻击数量 (为-1时使用生成物数量选取目标)
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Base")
	int MaxTargetNumber = -1;
	// 生成物的对应蓝图类 
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Base")
	TSoftClassPtr<ARHS_ProjectileBase> ProjectileClass;
	// 是否为持续伤害型？
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	bool bDot = false;
	//伤害频率 
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage",meta=(EditConditionHides,EditCondition = "bDot"))
    float DamageFrequency = 0.5f;
	//伤害生效的延迟
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Damage")
	float DamageDelay = 0.0f;
	//生效次数 0为当前投射物可对同一个目标反复触发无数次 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	int TriggerCount = 0;
	//投射物伤害次数，消耗殆尽就会被摧毁，-1为穿透
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	int32 ConsumeCount = -1;
	// 生成方式类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Spawn Type",Category = "Projectile")
	FSpawnTypeSet SpawnTypeSet;
	// 生成物设置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Spawn Setting",Category = "Projectile")
	FProjectileSpawnSetting ProjectileSpawnSetting;
	// 特效配置
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName = "Vfx",Category = "Projectile")
	FProjectileVFXConfig VfxConfig;
	// 调试模式设置
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Debugging")
	bool bDrawDebugsInGame = false;
	//调试线条粗细
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Debugging",meta=(EditConditionHides,EditCondition = "bDrawDebugsInGame"))
	float Thickness = 5.f;
	//调试线条颜色
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Debugging",meta=(EditConditionHides,EditCondition = "bDrawDebugsInGame"))
	FColor Color =FColor(223, 25, 157, 255);
	//召唤物
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Summon")
	TArray<FGenerateSummonInfo> GenerateSummon;
	FProjectileStruct(){}
};


//技能投射物结构体
USTRUCT(BlueprintType)
struct FProjectileGEConfig
{
	GENERATED_BODY()
	//该投射物的效果组
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TSubclassOf<UGameplayEffect>> ProjectileGEs;
	//控制效果的类型
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="ControlEffect")
	TArray<FControlEffectData> ControlEffect;
	//建筑物伤害
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BuildingDamage = 0.f;
};

//技能投射物结构体
USTRUCT(BlueprintType)
struct FAbilityProjectileStruct
{
	GENERATED_BODY()
	//链接ProjectileConfig这个表的RowName
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName ProjectileName;
	//指明作用对象类型，指明施加那些GE
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<ETargetClassType,FProjectileGEConfig> TargetTypeMap;
	FAbilityProjectileStruct()
	{
	}
};