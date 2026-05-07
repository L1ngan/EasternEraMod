// Copyright 2024 liwei, Inc. All Rights Reserved.

#include "LGameInst.h"

#include "AsyncLoadingScreenLibrary.h"
#include "GameFramework/Pawn.h"
#include "Engine/LevelStreaming.h"
#include "../Base/LActor.h"
#include "../Role/LAICtrl.h"
#include "../Misc/LLatent.h"
#include "../Misc/LQuickTools.h"
#include "../Role/LPlayerCtrl.h"
#include "../Base/LBaseValue.h"
#include "Engine/AssetManager.h"
#include "Kismet/GameplayStatics.h"

ULGameInst::ULGameInst(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
	
}

void ULGameInst::Shutdown()
{
	OnClear();
	Super::Shutdown();
}

void ULGameInst::Init()
{
	OnClear();
	Super::Init();
}

template<class T> AActor* SearchTempActor(TArray<T*>& ary, UClass* cls) {
	for(int32 i=0; i<ary.Num(); i++){ 
		if(cls == ary[i]->GetClass()){ 
			AActor* Actor = ary[i];
			if(ILBaseInterface* Inter = Cast<ILBaseInterface>(Actor))
			{
				Inter->SetOnObjectPool(false);
			}
			ary.RemoveAtSwap(i); 
			return Actor;
		}
	}
	return nullptr;
}

AActor* ULGameInst::GetActor(TSubclassOf<AActor> Class, const FTransform& Trans,ESpawnActorCollisionHandlingMethod InSpawnCollisionHandlingOverride, ULevel* Level)
{
	UClass* cls = Class.Get();
	if (cls->IsChildOf<ALPlayerCtrl>() || cls->IsChildOf<ALAICtrl>() || cls->IsChildOf<APawn>())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid class: %s is a subclass of forbidden base types!"), *cls->GetName());
		checkf(false, TEXT("Invalid class: %s should not be a subclass of ALPlayerCtrl, ALAICtrl, or APawn"), *cls->GetName());
		return nullptr;
	}
	bool bIsActor = true;
	AActor* Actor = nullptr;
	auto MapName = WorldName;
	if (!IsValid(Level))
	{
		Level = ULQuickTools::GetLevelObject(GetWorld(),CurSubLevel);
	}
	const ULevelStreaming * LevelStreaming = ULevelStreaming::FindStreamingLevel(Level);
	if (IsValid(LevelStreaming))
	{
		MapName = LevelStreaming->GetWorldAsset().GetAssetName();
	}
	if (cls->IsChildOf<ALActor>())
	{
		auto & Pool = PoolActor.FindOrAdd(MapName);
		Actor = SearchTempActor(Pool, cls);
	}
	if (Actor)
	{
		if (bIsActor)
		{
			Actor->SetActorHiddenInGame(false);
			Actor->SetActorEnableCollision(true);
		}
	}
	else
	{
		static FActorSpawnParameters params = FActorSpawnParameters();
		params.SpawnCollisionHandlingOverride = InSpawnCollisionHandlingOverride;
		params.OverrideLevel = Level;
		Actor = GetWorld()->SpawnActor<AActor>(cls,params);
	}
	if (Actor)
	{
		Actor->GetRootComponent()->SetWorldTransform(Trans);
		Actor->SetActorTickEnabled(true);
		if(ILBaseInterface* Inter = Cast<ILBaseInterface>(Actor))
		{
			Inter->OnInitData();
		}
	}
	return Actor;
}

APawn * ULGameInst::GetPawn(TSubclassOf<class APawn> Class, const FTransform& Trans,ESpawnActorCollisionHandlingMethod InSpawnCollisionHandlingOverride, ULevel* Level)
{
	if (!IsValid(Level))
	{
		Level = ULQuickTools::GetLevelObject(GetWorld(),CurSubLevel);
	}
	static FActorSpawnParameters params = FActorSpawnParameters();
	params.SpawnCollisionHandlingOverride = InSpawnCollisionHandlingOverride;
	params.OverrideLevel = Level;
	auto Pawn = GetWorld()->SpawnActor<APawn>(Class, params);
	if (IsValid(Pawn))
	{
		Pawn->GetRootComponent()->SetWorldTransform(Trans);
		auto AIController = GetWorld()->SpawnActor<AAIController>(Pawn->AIControllerClass, params);
		AIController->GetRootComponent()->SetWorldTransform(Trans);
		AIController->SetActorTickEnabled(true);
		AIController->Possess(Pawn);
		return Pawn;
	}
	return nullptr;
}

void ULGameInst::PutToPool(AActor* Actor)
{
	auto MapName = WorldName;
	const ULevelStreaming * LevelStreaming = ULevelStreaming::FindStreamingLevel(Actor->GetLevel());
	if (IsValid(LevelStreaming))
	{
		MapName = LevelStreaming->GetWorldAsset().GetAssetName();
	}
	if(ILBaseInterface* Inter = Cast<ILBaseInterface>(Actor))
	{
		Inter->OnClearData();
		Inter->SetOnObjectPool(true);
	}
	Actor->SetActorTickEnabled(false);
	if (AAIController* ctrl = Cast<AAIController>(Actor))
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid class: %s is a subclass of forbidden base types!"), *ctrl->GetName());
		checkf(false, TEXT("Invalid class: %s should not be a subclass of ALPlayerCtrl, ALAICtrl, or APawn"), *ctrl->GetName());
	}
	else
	{
		if (APawn* pawn = Cast<APawn>(Actor))
		{
			UE_LOG(LogTemp, Error, TEXT("Invalid class: %s is a subclass of forbidden base types!"), *pawn->GetName());
			checkf(false, TEXT("Invalid class: %s should not be a subclass of ALPlayerCtrl, ALAICtrl, or APawn"), *pawn->GetName());
		}
		else if(ALActor* act = Cast<ALActor>(Actor))
		{
			Actor->SetActorHiddenInGame(true);
			Actor->SetActorEnableCollision(false);
			auto & Pool = PoolActor.FindOrAdd(MapName);
			Pool.Add(act);
		}
	}
}

void ULGameInst::CloseLoadingScreen(float DelayTime)
{
	K2_CloseLoadingScreen(DelayTime);
}

void ULGameInst::LoadSubLevel(const TSoftObjectPtr<UWorld> & Level,bool bReadSlotFile)
{
	LLOG("-----加载子关卡----");
	CurSubLevel = Level;
	K2_LoadSubLevel(Level,bReadSlotFile);
}

void ULGameInst::SaveSubLevel(const TSoftObjectPtr<UWorld>& Level, bool bCloseLevel,bool bSaveSlotFile)
{
	LLOG("-----保存子关卡----");
	K2_SaveSubLevel(Level, bCloseLevel,bSaveSlotFile);
}

void ULGameInst::CloseSubLevel(const TSoftObjectPtr<UWorld>& Level,bool bSaveSlotFile)
{
	LLOG("-----关闭子关卡----");
	K2_CloseSubLevel(Level,bSaveSlotFile);
}

void ULGameInst::ChangeSubLevel(const TSoftObjectPtr<UWorld>& Level, const TSoftObjectPtr<UWorld>& CurLevel, bool bCloseCurSubLevel, bool bSaveCurSubLevel,bool bReadSlotFile)
{
	if (Level == CurLevel)
	{
		LLOGW("-----切换想同的子关卡:%s",*Level.GetAssetName());
		return;
	}
	LLOG("-----切换子关卡:%s,当前关卡： %s-----",*Level.GetAssetName(),*CurLevel.GetAssetName());
	K2_ChangeSubLevel(Level,CurLevel,bCloseCurSubLevel,bSaveCurSubLevel,bReadSlotFile);
}

void ULGameInst::AfterSaveLevelAndBeforeSaveLevel(FName LevelName)
{
	
}

void ULGameInst::RemoveAllPoolByLevel(FName LevelName)
{
	FString MapName = LevelName.ToString();
	PoolActor.Remove(MapName);
}

bool ULGameInst::SetGamePlaySpeed(int InSpeedIndex)
{
	if (bOpenLoading)
	{
		return false;
	}
	auto GameSpeed = GamePlaySpeed.Find(InSpeedIndex);
	if (GameSpeed == nullptr)
	{
		return false;
	}
	ALPlayerCtrl *PlayerCtrl = ULQuickTools::GetPlayerCtrl(GetWorld());
	if (FMath::IsNearlyEqual(*GameSpeed, 1.0f, 0.0001f)) {
		if (PlayerCtrl)
		{
			PlayerCtrl->SetPause(false);
			PlayerCtrl->CustomTimeDilation = *GameSpeed;
			if (auto Pawn = PlayerCtrl->GetPawn())
			{
				Pawn->CustomTimeDilation = *GameSpeed;
			}
		}
		UGameplayStatics::SetGlobalTimeDilation(GetWorld(), *GameSpeed);
	}else
	{
		if (PlayerCtrl)
		{
			PlayerCtrl->SetPause(false);
			PlayerCtrl->CustomTimeDilation = 1.f/ *GameSpeed;
			if (auto Pawn = PlayerCtrl->GetPawn())
			{
				Pawn->CustomTimeDilation = 1.f/ *GameSpeed;
			}
		}
		UGameplayStatics::SetGlobalTimeDilation(GetWorld(), *GameSpeed);
	}
	CurGamePlaySpeedIndex = InSpeedIndex;
	OnUpdateGamePlaySpeed.Broadcast(*GameSpeed);
	return true;
}

int ULGameInst::GetGamePlaySpeedIndex()
{
	return CurGamePlaySpeedIndex;
}

void ULGameInst::PauseGamePlay(bool bPauseGame)
{
	if (bPauseGame)
	{
		BackGamePlaySpeedIndex = CurGamePlaySpeedIndex;
		SetGamePlaySpeed(0);
	}
	else
	{
		CurGamePlaySpeedIndex = BackGamePlaySpeedIndex;
		SetGamePlaySpeed(CurGamePlaySpeedIndex);
	}
}

ULevel* ULGameInst::GetCurLevel()
{
	FString LevelPackageName = FPackageName::GetShortName(CurSubLevel.GetAssetName());
	if (UWorld* CurrentWorld = GetWorld())
	{
		for (ULevelStreaming* StreamingLevel : CurrentWorld->GetStreamingLevels())
		{
			if (StreamingLevel && StreamingLevel->GetWorldAssetPackageName().Contains(LevelPackageName))
			{
				UE_LOG(LogTemp, Warning, TEXT("Found StreamingLevel: %s"), *StreamingLevel->GetName());
            
				// 获取实际加载的 ULevel 实例
				return StreamingLevel->GetLoadedLevel();
			}
		}
	}
	return nullptr;
}

void ULGameInst::SetOpenLoadingState(bool bNewLoadingState)
{
	bOpenLoading = bNewLoadingState;
}

bool ULGameInst::CheckLowerThanVersion(FString InVersion)
{
	TArray<FString> InVersionParts;
	InVersion.ParseIntoArray(InVersionParts, TEXT("."), true);
	if (InVersionParts.Num() < 2)
	{
		return false;
	}
	TArray<FString> GameVersionParts;
	GameVersion.ParseIntoArray(GameVersionParts, TEXT("."), true);
	if (GameVersionParts.Num() < 2)
	{
		return false;
	}
	int32 InMajorVersion = FCString::Atoi(*InVersionParts[0]);
	int32 GameMajorVersion = FCString::Atoi(*GameVersionParts[0]);
	if (InMajorVersion < GameMajorVersion)
	{
		return true;
	}
	else if (InMajorVersion > GameMajorVersion)
	{
		return false;
	}
	int32 InMinorVersion = FCString::Atoi(*InVersionParts[1]);
	int32 GameMinorVersion = FCString::Atoi(*GameVersionParts[1]);
	
	return InMinorVersion < GameMinorVersion;
}

void ULGameInst::OnClear()
{
	PoolActor.Reset();
	FLatentMng::Clear();
	ULQuickTools::Clear();
}

void ULGameInst::OpenGameMainLevel(const TSoftObjectPtr<UWorld> Level, FString Options, EEnterGameMode NewEnterGameMode)
{
	LLOG("-----开始加载永久关卡----");
	EnterGameMode = NewEnterGameMode;
	OnClear();
	FSoftObjectPath LevelPath = Level.ToSoftObjectPath();
	UGameplayStatics::OpenLevelBySoftObjectPtr(this, Level, true, Options);
}

void ULGameInst::ShowLoadingScreen(FName LevelName)
{
	SetGamePlaySpeed(1);
	SetOpenLoadingState(true);
	K2_ShowLoadingScreen(LevelName);
}
