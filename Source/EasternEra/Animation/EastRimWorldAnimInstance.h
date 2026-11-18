// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Animation/AnimInstance.h"
#include "GameplayEffectTypes.h"
#include "EastRimWorldAnimInstance.generated.h"

class UBlendSpace1D;

/**
 * UEastRimWorldAnimInstance
 *
 *	The base game animation instance class used by this project.
 */
UCLASS(Config = Game)
class UEastRimWorldAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UEastRimWorldAnimInstance(const FObjectInitializer& ObjectInitializer);

	//写入当前鞋子要求的脚部变换：根骨抬高（厘米）、脚掌下压角与脚趾上翘角（度）；全 0 表示不处理。由换装出口按当前鞋子写入
	UFUNCTION(BlueprintCallable, Category = "Character|Apparel")
	void SetShoeFootTransforms(float InRootOffset, float InFootRotation, float InBallRotation);

protected:

	// Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.
	// These should be used instead of manually querying for the gameplay tags.
	UPROPERTY(EditDefaultsOnly, Category = "GameplayTags")
	FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;

	UPROPERTY(BlueprintReadOnly, Category = "Character State Data")
	float GroundDistance = -1.0f;

	//鞋子要求的根骨抬高（厘米）：整副骨架沿组件 Z 轴上移，让鞋底落在地面上
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Character|Apparel")
	float ShoeRootOffset = 0.f;
	//脚掌下压角（度）：正值脚跟抬起、脚尖朝下，以脚踝为支点绕脚的左右轴转脚掌骨
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Character|Apparel")
	float ShoeFootRotation = 0.f;
	//脚趾上翘角（度）：正值脚趾往上折回，在脚掌转完后的朝向上以脚趾根为支点转脚趾骨
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Character|Apparel")
	float ShoeBallRotation = 0.f;
	//脚掌骨（左、右），脚掌下压角作用的骨骼
	UPROPERTY(EditDefaultsOnly, Category = "Character|Apparel")
	TArray<FName> ShoeFootBones;
	//脚趾骨，与 ShoeFootBones 按下标一一对应，脚趾上翘角作用的骨骼
	UPROPERTY(EditDefaultsOnly, Category = "Character|Apparel")
	TArray<FName> ShoeBallBones;
public:
	//设置召唤物的待机行走混合空间
	UFUNCTION(BlueprintImplementableEvent)
	void SetIdleAndRunBlendSpace(const TSoftObjectPtr<UBlendSpace1D> & NewBlendSpace);
	//设置角色的骑乘的动画
	UFUNCTION(BlueprintImplementableEvent)
	void SetCharacterRideAnim(const TSoftObjectPtr<UAnimSequence> & NewRideAnim,bool bRide);
};
