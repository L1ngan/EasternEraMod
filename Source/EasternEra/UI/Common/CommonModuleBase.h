// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "StructUtils/InstancedStruct.h"
#include "CommonModuleBase.generated.h"

/**
 * 
 */
UCLASS()
class EASTRIMWORLD_API UCommonModuleBase : public UCommonUserWidget
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	FInstancedStruct InputModuleInfo;
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	TObjectPtr<UObject> InputObject;
	//初始化模块信息
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void InitModuleInfo(const FInstancedStruct & InInputModuleInfo);
	//初始化模块通过object
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void InitModuleInfoByObject(UObject * InObject);
	//更新模块信息
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateModuleInfo();
	
};
