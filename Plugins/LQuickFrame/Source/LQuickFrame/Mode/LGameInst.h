// Copyright 2024 liwei, Inc. All Rights Reserved.

#pragma once
#include "Engine/GameInstance.h"
#include "CommonGameInstance.h"
#include "LQuickFrame/Base/LBaseValue.h"
#include "LGameInst.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateGamePlaySpeed,float,NewSpeed);
UCLASS()
class LQUICKFRAME_API ULGameInst : public UCommonGameInstance
{
	GENERATED_BODY()
	FString WorldName = FString("Game");
	//内存池
	TMap<FString,TArray<class ALActor*>>PoolActor;
	UPROPERTY()
	TMap<int,float> GamePlaySpeed{
		{0,0.0001},
		{1,1.f},
		{2,2.f},
		{3,3.0f}};
	//当前游戏速度
	UPROPERTY()
	int CurGamePlaySpeedIndex = 1;
	UPROPERTY()
	int BackGamePlaySpeedIndex = 1;

	UPROPERTY()
	bool bOpenLoading = false;
	
public:
	ULGameInst(const FObjectInitializer& ObjectInitializer);
	virtual void Shutdown() override;
	virtual void Init() override;
	//当前的所在子关卡
	UPROPERTY(BlueprintReadWrite, Category = "LGameInst")
	TSoftObjectPtr<UWorld> CurSubLevel;
	//进入游戏的模式
	UPROPERTY(BlueprintReadWrite, Category = "LGameInst")
	EEnterGameMode EnterGameMode = EEnterGameMode::None;
	UPROPERTY(BlueprintAssignable, Category = "LGameInst")
	FOnUpdateGamePlaySpeed OnUpdateGamePlaySpeed;
	//版本号
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FString GameVersion = TEXT("0.1");
public:
	//获得Actor（内存池）默认会创建到当前子关卡中 如需跨关卡需传入永久关卡
	UFUNCTION(BlueprintPure, Category = "LGameInst", meta = (DeterminesOutputType = "Class",AdvancedDisplay="Transform,Level"))
	class AActor* GetActor(TSubclassOf<class AActor> Class, const FTransform& Trans=FTransform(),ESpawnActorCollisionHandlingMethod InSpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ULevel* Level = nullptr);
	template<class T> T* GetActor(const FTransform& Trans=FTransform(),ESpawnActorCollisionHandlingMethod InSpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn,ULevel* Level = nullptr) { return Cast<T>(GetActor(T::StaticClass(), Trans, InSpawnCollisionHandlingOverride,Level)); }
	//获取pawn添加控制器 并初始化
	UFUNCTION(BlueprintPure, Category = "LGameInst", meta = (DeterminesOutputType = "Class",AdvancedDisplay="Transform,Level"))
	class APawn * GetPawn(TSubclassOf<class APawn> Class, const FTransform& Trans=FTransform(),ESpawnActorCollisionHandlingMethod InSpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ULevel* Level = nullptr);
	template<class T> T* GetPawn(const FTransform& Trans=FTransform(),ESpawnActorCollisionHandlingMethod InSpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn,ULevel* Level = nullptr) { return Cast<T>(GetPawn(T::StaticClass(), Trans, InSpawnCollisionHandlingOverride,Level)); }
	//加入Actor 到内存池(AI会自动把Pawn加入到内存池)
	UFUNCTION(BlueprintCallable, Category = "LGameInst")
	void PutToPool(AActor* Actor); 
	//关闭Loading界面
	UFUNCTION(BlueprintCallable)
	virtual void CloseLoadingScreen(float DelayTime);
	UFUNCTION(BlueprintImplementableEvent,DisplayName="CloseLoadingScreen")
	void K2_CloseLoadingScreen(float DelayTime);
	//清理
	UFUNCTION(BlueprintCallable)
	virtual void OnClear();
	//打开游戏主关卡
	UFUNCTION(BlueprintCallable)
	void OpenGameMainLevel(const TSoftObjectPtr<UWorld> Level,FString Options,EEnterGameMode NewEnterGameMode);
	//显示loading 界面
	UFUNCTION(BlueprintCallable)
	virtual void ShowLoadingScreen(FName LevelName);
	UFUNCTION(BlueprintImplementableEvent,DisplayName="ShowLoadingScreen")
	void K2_ShowLoadingScreen(FName LevelName);
	//加载子关卡
	UFUNCTION(BlueprintCallable)
	void LoadSubLevel(const TSoftObjectPtr<UWorld> & Level,bool bReadSlotFile);
	UFUNCTION(BlueprintImplementableEvent,DisplayName="LoadSubLevel")
	void K2_LoadSubLevel(const TSoftObjectPtr<UWorld> & Level,bool bReadSlotFile);
	//保存子关卡
	UFUNCTION(BlueprintCallable)
	void SaveSubLevel(const TSoftObjectPtr<UWorld> & Level,bool bCloseLevel,bool bSaveSlotFile);
	UFUNCTION(BlueprintImplementableEvent,DisplayName="SaveSubLevel")
	void K2_SaveSubLevel(const TSoftObjectPtr<UWorld> & Level,bool bCloseLevel,bool bSaveSlotFile);
	//关闭子关卡
	UFUNCTION(BlueprintCallable)
	void CloseSubLevel(const TSoftObjectPtr<UWorld> & Level,bool bSaveSlotFile);
	UFUNCTION(BlueprintImplementableEvent,DisplayName="CloseSubLevel")
	void K2_CloseSubLevel(const TSoftObjectPtr<UWorld> & Level,bool bSaveSlotFile);
	//切换子关卡
	UFUNCTION(BlueprintCallable)
	void ChangeSubLevel(const TSoftObjectPtr<UWorld>& ChangeToLevel, const TSoftObjectPtr<UWorld>& CurLevel,bool bCloseCurSubLevel,bool bSaveCurSubLevel,bool bReadSlotFile);
	UFUNCTION(BlueprintImplementableEvent,DisplayName="ChangeSubLevel")
	void K2_ChangeSubLevel(const TSoftObjectPtr<UWorld>& Level, const TSoftObjectPtr<UWorld>& CurLevel, bool bCloseCurSubLevel,bool bSaveCurSubLevel,bool bReadSlotFile);
	//保存存档后切换关卡前
	UFUNCTION(BlueprintCallable,DisplayName = "AfterSaveLevelAndBeforeSaveLevel")
	virtual void AfterSaveLevelAndBeforeSaveLevel(FName LevelName);
	//移除所有对应关卡的对象
	UFUNCTION(BlueprintCallable)
	void RemoveAllPoolByLevel(FName LevelName);
	
	UFUNCTION(BlueprintCallable)
	virtual bool SetGamePlaySpeed(int InSpeedIndex);
	//获取游戏速度下标
	UFUNCTION(BlueprintCallable)
	int GetGamePlaySpeedIndex();
	UFUNCTION(BlueprintCallable)
	float GetGamePlaySpeed() const {return GamePlaySpeed.FindRef(CurGamePlaySpeedIndex);};
	//游戏中暂停或恢复
	UFUNCTION(BlueprintCallable)
	void PauseGamePlay(bool bPauseGame = true);
	
	UFUNCTION(BlueprintCallable)
	ULevel * GetCurLevel();
	UFUNCTION(BlueprintCallable)
	void SetOpenLoadingState(bool bNewLoadingState);
	//检查是否低于游戏版本
	UFUNCTION(BlueprintCallable)
	bool CheckLowerThanVersion(FString InVersion);
};
