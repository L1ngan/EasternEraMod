// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModCharacterAppearanceStruct.generated.h"

//mod角色外观配置资产
UCLASS(BlueprintType)
class UModCharacterAppearanceConfigAsset: public UDataAsset
{
	GENERATED_BODY()
public:
	//男性内衣CDA资产
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FSoftObjectPath MaleUnderwear;
	//女性内衣CDA资产
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FSoftObjectPath FemaleUnderwear;
	//女性上半身内衣CDA资产
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FSoftObjectPath FemaleUpperUnderwear;
};
