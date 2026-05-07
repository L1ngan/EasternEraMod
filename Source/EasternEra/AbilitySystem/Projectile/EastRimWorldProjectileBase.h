// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilityProjectileEmitterBase.h"
#include "GenericTeamAgentInterface.h"
#include "ProjectileStruct.h"
#include "RHS_ProjectileBase.h"
#include "EasternEra/Interface/EastRimWorldCommonInterface.h"
#include "EasternEra/Teams/EastRimWorldTeamAgentInterface.h"

#include "EastRimWorldProjectileBase.generated.h"

struct FGameplayEffectSpecHandle;
class UAbilitySystemComponent;
enum class ETargetClassType : uint8;
struct FStreamableHandle;

UCLASS(Blueprintable)
class EASTRIMWORLD_API AEastRimWorldProjectileBase : public ARHS_ProjectileBase,public IEastRimWorldTeamAgentInterface,public IEastRimWorldCommonInterface
{
	GENERATED_BODY()
protected:
	//重叠到的actor
	UPROPERTY(BlueprintReadWrite)
	TArray<TObjectPtr<AActor>> OverlappedActors;
	//攻击目标
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<AActor> TargetActor;
	//周期性伤害定时器
	UPROPERTY()
	FTimerHandle PeriodicityApplyHandle;
	//发射器的配置 
	UPROPERTY(BlueprintReadWrite,meta=(ExposeOnSpawn = true))
	FProjectileStruct ProjectileStruct;
	//粒子的缩放
	UPROPERTY(BlueprintReadWrite)
	FVector ActivationVFXScale = FVector::One();
	//粒子的缩放
	UPROPERTY(BlueprintReadWrite)
	FVector TrailVFXScale = FVector::One();
	//粒子的缩放
	UPROPERTY(BlueprintReadWrite)
	FVector ImpactVFXScale = FVector::One();
	//资源加载
	TSharedPtr<FStreamableHandle> ProjectileStreamableHandle;
	//碰撞开启定时器
	UPROPERTY()
	FTimerHandle CollisionOpenDelayHandle;
	//延迟发射定时器
	UPROPERTY()
	FTimerHandle DelayLaunchHandle;
	//dot伤害定时器
	UPROPERTY()
	FTimerHandle DotHandle;
	//关闭碰撞定时器
	UPROPERTY()
	FTimerHandle CloseCollisionHandle;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FGenericTeamId MyTeamID;
	//投射物的伤害次数 -1为无限次数
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	int CalculateCount;
	//投射物的效果
	UPROPERTY(BlueprintReadWrite,meta=(ExposeOnSpawn = true))
	TMap<ETargetClassType,FAllGameplayEffectSpecHandles> ProjectileSpecHandles;
	//方向
	UPROPERTY(BlueprintReadWrite,meta=(ExposeOnSpawn = true))
	FVector Direction = FVector::Zero();

	//回收投射物
	UPROPERTY()
	FTimerHandle RecycleProjectileHandle;
	//是否初始化完成
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	bool InitializationComplete = false;
	
	//玩家阵营
	UPROPERTY()
	int32 PlayerTeamID = 1;

	//起始位置
	UPROPERTY()
	FTransform StartTransform;
	//dot已经伤害的时间
	UPROPERTY()
	float DotAlreadyDamageTime = 0.f;

public:

	AEastRimWorldProjectileBase();
	
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;
	virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override;
	virtual FGenericTeamId GetGenericTeamId() const override;
	virtual void Destroyed() override;
	//获得取一个攻击目标
	virtual AActor * FindAttackTarget_Implementation(EFindAttackTargetRule FindAttackTargetRule = EFindAttackTargetRule::ShortDistance) override;
private:
	//异步加载配置成功
	void AsynchronousLoadSucceed();
	//生效的次数
	TMap<FGuid,int> ActorEffectCount;
public:
	//初始化投射物
	UFUNCTION(BlueprintCallable)
	void InitProjectile(const FTransform & InTransform,const FProjectileStruct & InProjectileStruct,
		const TMap<ETargetClassType,FAllGameplayEffectSpecHandles> & InProjectileSpecHandles,
		const FVector & InDirection,
		AActor * InTargetActor);
	//加载投射物需要的信息
	UFUNCTION(BlueprintCallable)
	void LoadProjectileData();
	//设置投射物的速度
	UFUNCTION(BlueprintCallable)
	void SetProjectileSpeed(float InInitialSpeed,FVector InVelocity,bool bActivate = true);
	//设置追踪目标
	UFUNCTION(BlueprintCallable)
	void SetHomingTarget(USceneComponent * InHomingTargetComponent);
	//搜寻目标
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void SearchTarget();
	void SearchTarget_Implementation();
	//施加效果给目标
	UFUNCTION(BlueprintCallable)
	bool ApplyEffectToTarget(AActor * InTargetActor,const FVector & HitPoint,const FHitResult& HitResult);
	bool HitTheCharacter(AActor * InTargetActor,const FVector & HitPoint,const FHitResult& HitResult);
	bool HitTheBuilding(AActor * InTargetActor,const FVector & HitPoint,const FHitResult& HitResult);
	//设置碰撞显示
	UFUNCTION(BlueprintCallable)
	void SetCollisionAndVisibility();
	//设置碰撞关闭
	UFUNCTION(BlueprintCallable)
	void SetCloseCollision();
	//播放音效
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void PlaySound();
	void PlaySound_Implementation();
	//生成粒子特效和音效
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void StartSpawnVFXAndSFX();
	void StartSpawnVFXAndSFX_Implementation();
	//碰撞时生成特效和音效
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void OnHitSpawnVFXAndSFX(AActor* InTargetActor,const FVector & HitPoint);
	void OnHitSpawnVFXAndSFX_Implementation(AActor* InTargetActor,const FVector & HitPoint);
	//碰撞时生成其他投射物
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnHitSpawnOtherProjectile(const FVector & HitPoint);
	void OnHitSpawnOtherProjectile_Implementation(const FVector & HitPoint);
	UFUNCTION()
	void StartTheLaunch();
	//生成召唤物
	void GenerateSummon();
	//投射物发射
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void ProjectileLaunch();
	void ProjectileLaunch_Implementation();
	//计算发射的方向
	UFUNCTION(BlueprintCallable)
	FVector CalculateLaunchVelocity(FVector StartLocation, FVector EndLocation, float InitialSpeed);
	//投射物结束
	UFUNCTION(BlueprintCallable)
	void AbilityProjectileEnd();
	UFUNCTION(BlueprintCallable)
	void BeforeRecycleProjectile();
	//清理
	UFUNCTION(BlueprintCallable)
	void ClearProjectile();
	UFUNCTION()
	void OnOverlappedBeginActor(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnOverlappedEndActor(UPrimitiveComponent*OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	//dot伤害应用效果
	UFUNCTION(BlueprintCallable)
	void DotApplyEffect();
	//应用效果GE并设置信息
	UFUNCTION()
	void ApplyGameplayEffectSpecHandles(UAbilitySystemComponent* AbilitySystemComponent, const FAllGameplayEffectSpecHandles & AllGameplayEffectSpecHandles,const FVector & HitPoint,const FHitResult& HitResult,const FVector & InProjectileDirection);
	//回收投射物
	UFUNCTION()
	void ProjectileRecycle();
	//清理特效
	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)
	void ClearProjectileFx();
	virtual ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;
};
