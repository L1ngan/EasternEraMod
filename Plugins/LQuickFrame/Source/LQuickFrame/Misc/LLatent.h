// Copyright 2023 liwei, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "LatentActions.h"
#include "LLatent.generated.h"

//响应1
UENUM()
enum class ELatentRespOne : uint8
{
	ELR_None UMETA(Hidden),
	Exec  
};

//响应2
UENUM()
enum class ELatentRespTwo : uint8
{
	ELR_None UMETA(Hidden),
	Success,
	Faild
};

struct LQUICKFRAME_API FSimpleLatentAction : public FPendingLatentAction
{
	int8* State;//0等待，4删除
	FLatentActionInfo Info;
	FSimpleLatentAction():State(NULL){}
	FSimpleLatentAction(int8* InState,const FLatentActionInfo& InInfo);
	virtual void UpdateOperation(FLatentResponse& Response) override;
};

struct LQUICKFRAME_API FLatentMng
{
private:
	static TArray<TSharedPtr<FSimpleLatentAction>> latents_;
public:
	//创建延迟调用
	template<typename T> static int32 CreateLatent(T* State, const FLatentActionInfo& InInfo);
	//触发延迟调用
	static void TriggerLatentOne(int32& LatentId, bool bFinish = true);
	static void TriggerLatentTwo(int32& LatentId, bool bSuccess, bool bFinish = true);
	//移除
	static void Remove(int32& LatentId);
	//清理
	static void Clear();
};