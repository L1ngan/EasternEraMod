// Copyright 2024 liwei, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "LFile.generated.h"

//代码加载用LoadObject<T>(nullptr,Path),LoadClass，蓝图路径加 _C
UCLASS()
class LQUICKFRAME_API ULFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	//保存路径绝对路径
	UFUNCTION(BlueprintPure, Category = "LFile")
	static FString GetSavePath(const FString& RelativePath);
	//获取项目路径下的绝对路径
	UFUNCTION(BlueprintPure, Category = "LFile")
	static FString GetProjPath(const FString& RelativePath);
	//屏幕截屏
	UFUNCTION(BlueprintCallable, Category = "LFile")
	static bool CaptureScreen(int32 Width, const FString& FullPath);
	//加载class（同步）
	UFUNCTION(BlueprintPure, Category = "LFile")
	static UClass* LoadClassPath(const FSoftClassPath& Path);
	//加载Object（同步）
	UFUNCTION(BlueprintPure, Category = "LFile")
	static UObject* LoadObjectPath(const FSoftObjectPath& Path);
};

UCLASS()
class LQUICKFRAME_API ULAsyncFile : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	static int32 taskIdx;
	int taskNum_,state_;//1.object，2.class，3.streamings
	TSharedPtr<struct FStreamableHandle> Handle;
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLLoadObjectCall, UObject*, Out);
	UPROPERTY(BlueprintAssignable, Category = "LFile")
	FLLoadObjectCall Success;
	UPROPERTY(BlueprintAssignable, Category = "LFile")
	FLLoadObjectCall Failed;
public:
	UFUNCTION(BlueprintCallable, Category = "LFile", meta = (BlueprintInternalUseOnly = "true"))
	static ULAsyncFile* AsyncLoadObject(const FSoftObjectPath& Path);
	UFUNCTION(BlueprintCallable, Category = "LFile", meta = (BlueprintInternalUseOnly = "true"))
	static ULAsyncFile* AsyncLoadClass(const FSoftClassPath& Path);
	UFUNCTION(BlueprintCallable, Category = "LFile", meta = (BlueprintInternalUseOnly = "true"))
	static ULAsyncFile* AsyncLoadAndUnloadStreamings(const TArray<FString>& Loads, const TArray<FString>& Unloads);

	UFUNCTION()
	void OnLoaded();
};
