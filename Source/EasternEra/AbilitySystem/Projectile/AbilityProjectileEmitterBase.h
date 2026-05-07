
#pragma once

#include "CoreMinimal.h"
#include "ProjectileStruct.h"
#include "EastRimWorldAbilityTypes.h"
#include "AbilityProjectileEmitterBase.generated.h"


struct FControlEffectData;
class ARHS_ProjectileBase;
struct FGameplayEffectSpecHandle;

USTRUCT(BlueprintType)
struct FAllGameplayEffectSpecHandles
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TArray<FGameplayEffectSpecHandle> GameplayEffectSpecHandles;
	UPROPERTY()
	TArray<FControlEffectData> ControlEffect;
	//发起者
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TWeakObjectPtr<AActor> InstigatorActor = nullptr;
	//建筑物伤害
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BuildingDamage = 0.f;
	//目标
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TWeakObjectPtr<AActor> Target = nullptr;
	//发起者GUID
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FGuid InstigatorGuid;
	FAllGameplayEffectSpecHandles()
	{
	}
};

/**
 * 发射器
 */
UCLASS(Blueprintable)
class EASTRIMWORLD_API AAbilityProjectileEmitterBase : public AActor
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	AAbilityProjectileEmitterBase();
	//发射器的配置
	UPROPERTY(BlueprintReadWrite,meta=(ExposeOnSpawn = true))
	FProjectileStruct ProjectileStruct;
	//投射物的效果
	UPROPERTY(BlueprintReadWrite,meta=(ExposeOnSpawn = true))
	TMap<ETargetClassType,FAllGameplayEffectSpecHandles> ProjectileSpecHandles;
	//获取多个目标
	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetMultipleTargets(int TargetNumber);
	//主要的攻击目标
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<AActor> MainAttackTarget;
public:
	UFUNCTION(BlueprintCallable)
	void AbilityProjectileEmitterEnd();
	UFUNCTION(BlueprintImplementableEvent,meta=(DisplayName="AbilityProjectileEmitterEnd"))
	void K2_AbilityProjectileEmitterEnd();
	//初始化发射器
	UFUNCTION(BlueprintCallable)
	void InitProjectileEmitter(const FTransform & InTransform,const FProjectileStruct & InProjectileStruct,const TMap<ETargetClassType,FAllGameplayEffectSpecHandles> & InProjectileSpecHandles,AActor * InMainAttackTarget = nullptr);
	
	UFUNCTION(BlueprintCallable)
	void EmitterStartLaunch();
	UFUNCTION(BlueprintImplementableEvent,meta=(DisplayName="EmitterStartLaunch"))
	void K2_EmitterStartLaunch();
};
