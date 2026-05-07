// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
#include "GameplayTagContainer.h"
#include "SmartObjectRuntime.h"
#include "EastRimWorldAbilityTypes.h"
#include "UObject/Interface.h"
#include "EastRimWorldCommonInterface.generated.h"

UENUM(BlueprintType)
enum class EFindAttackTargetRule : uint8
{
	//取第一个
	None,
	//距离最近的目标
	ShortDistance,
	//随机
	Random,
};

//选择技能的规则
UENUM(BlueprintType)
enum class ESelectBattleAbilityRule : uint8
{
	//最短释放距离
	MinimumReleaseDistance,
	//最长释放距离
	MaximumReleaseDistance,
	//最短释放距离且距离范围内
	MinimumReleaseDistanceAndDistanceRange,
	//最长释放距离且距离范围内
	MaximumReleaseDistanceAndDistanceRange,
};

// This class does not need to be modified.
UINTERFACE(MinimalAPI,BlueprintType)
class UEastRimWorldCommonInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class EASTRIMWORLD_API IEastRimWorldCommonInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/** Returns the ability system component to use for this actor. It may live on another actor, such as a Pawn using the PlayerState's component */
	//获取世界坐标
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	bool GetWorldLocation(FVector & OutVector) const;
	//获取效果
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> GetObjectEffectContainer() const;
	//获得当前的攻击目标
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	AActor * GetAbilityReleaseTarget();
	//获得取一个攻击目标
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	AActor * FindAttackTarget(EFindAttackTargetRule FindAttackTargetRule = EFindAttackTargetRule::ShortDistance);
	//只获得攻击者
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	AActor * FindTargetOnlyAttacker();

	//设置一个攻击目标
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetAbilityReleaseTarget(AActor * TargetActor);
	
	//获取感知到的actors
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	TArray<AActor*> GetHostilePerceiveActors();
	//选择一个战斗技能
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool SelectCanActivateBattleAbility(const ESelectBattleAbilityRule & SelectBattleAbilityRule,float InDistance,FGameAbilityStruct & OutGameAbilityStruct);
	//获取当前选择的技能
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	FGameplayAbilitySpec GetCurSelectAbilitySpec();
	//获取当前选择的前置技能
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	FGameplayAbilitySpec GetSelectPreRequisiteAbilitySpec();
	//尝试激活当前选择的技能
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	bool TryActivateAbilityBySpec(const FGameplayAbilitySpec & GameplayAbilitySpec);
	//获取当前选择的技能信息
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	bool GetCurSelectGameAbilityStruct(FGameAbilityStruct & GameAbilityStruct,float & OutRemainingCooling);
	//获取剩余时间最小的技能信息
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	bool FindMinimumRemainingCoolingTimeAbilityStruct(FGameAbilityStruct & GameAbilityStruct,float & OutRemainingCooling);
	//获取进攻的位移技能
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	bool FindOffensiveDisplacementAbility(FGameAbilityStruct & GameAbilityStruct);
	//获取远离位移技能
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	bool FindKeepAwayFromAbility(FGameAbilityStruct & GameAbilityStruct);
	//切换武器
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	bool ChangeWeaponToAbility(const FGameAbilityStruct & GameAbilityStruct);
	//获取SmartObject目标
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	bool GetSmartObjectTarget(FSmartObjectRequestResult& Target,FSmartObjectClaimHandle& ClaimHandle);
	//根据阵营更新行为树
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void UpdateBehaviorTreeByTeam();
	//是否可以战斗
	virtual bool CheckCanBattle(){return true;};
	//设置选中状态
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void SetSelectState(bool bSelect);
	//设置悬浮状态
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void SetHoveringState(bool bHovering);
	//检查是否是相同类型
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	bool CheckIdentical(UObject * InObject);
	//检查是否是相同类型
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	bool CheckObservedID(UObject * InObject);
	//获取通用界面ID
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	FName GetCommonWidgetID();
	//获取对象的ID
    UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
    FName GetObjectID();
	//获取对象的名字
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	FText GetObjectInfoName();
	//根据模型名称获取一个ISM组件和其对应的实例index
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	UInstancedStaticMeshComponent* GetISMComponentByMesh(const TSoftObjectPtr<UStaticMesh>& InStaticMesh,int32& OutIndex);
	//将一个ISM实例索引放入缓存
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void PutISMInstanceToCache(UInstancedStaticMeshComponent * InstancedStaticMeshComponent, const TSoftObjectPtr<UStaticMesh>& InStaticMesh,const int32& InIndex);
	//获取目标进度
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	float GetTargetSchedule();
	//增加观察进度
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	float AddObserveSchedule(const float& InWorkload,const FGuid& CharacterId);
	//获取观察进度
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	float GetObserveSchedule();
	//删除建筑
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void DestoryBuildingAtor();
	//获取点击对象的音效
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	FName GetObjectSound(const FGameplayTag & GameplayTag);
	//被抱起
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void BePickedUp();
	//被放下
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void BeLayDown();
	//获取对象的guid
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	FGuid GetObjectGuid();
	//检查是否可以攻击
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	bool CheckCanDamage(bool bIgnoreInvincibility = false);
	//获取对象的语音
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	FName GetObjectVoice();
};
