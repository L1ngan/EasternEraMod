// Copyright 2024 liwei, Inc. All Rights Reserved.

#include "LQuickTools.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"
#include "../Mode/LGameInst.h"
#include "../Mode/LGameMode.h"
#include "../Role/LPlayerCtrl.h"
#include "GameFramework/HUD.h"
#include "LQuickFrame/Base/LBaseValue.h"

TMap<UClass*, UObject*> ULQuickTools::Cache_;

ULGameInst* ULQuickTools::GetGameInst(const UObject* Context, TSubclassOf<ULGameInst> Class)
{
	/*
	UObject** Obj = Cache_.Find(ULGameInst::StaticClass());
	if(Obj) return TSubClassOfCastTo<ULGameInst>(Cast<ULGameInst>(*Obj), Class);
	*/
	UWorld* world = Context ? Context->GetWorld() : GWorld;
	if (!world)
	{
		return nullptr;
	}
	ULGameInst* gameInst = world->GetGameInstance<ULGameInst>();
	//Cache_.Add(ULGameInst::StaticClass(), gameInst);
	return TSubClassOfCastTo<ULGameInst>(gameInst, Class);
}

ALGameMode* ULQuickTools::GetGameMode(const UObject* Context, TSubclassOf<ALGameMode> Class)
{
	/*
	UObject** Obj = Cache_.Find(ALGameMode::StaticClass());
	if (Obj)
	{
		return TSubClassOfCastTo<ALGameMode>(Cast<ALGameMode>(*Obj), Class);
	}
	*/
	UWorld* world = Context ? Context->GetWorld() : GWorld;
	if (!world)
	{
		return nullptr;
	}
	ALGameMode* gameMode = world->GetAuthGameMode<ALGameMode>();
	//Cache_.Add(ALGameMode::StaticClass(), gameMode);
	return TSubClassOfCastTo<ALGameMode>(gameMode, Class);
}

ALPlayerCtrl* ULQuickTools::GetPlayerCtrl(const UObject* Context, TSubclassOf<ALPlayerCtrl> Class)
{
	/*
	UObject** Obj = Cache_.Find(ALPlayerCtrl::StaticClass());
	if(Obj) return TSubClassOfCastTo<ALPlayerCtrl>(Cast<ALPlayerCtrl>(*Obj), Class);
	*/
	UWorld* world = Context ? Context->GetWorld() : GWorld;
	if (!world)
	{
		return nullptr;
	}
	ALPlayerCtrl* playerCtrl = world->GetFirstPlayerController<ALPlayerCtrl>();
	//Cache_.Add(ALPlayerCtrl::StaticClass(), playerCtrl);
	return TSubClassOfCastTo<ALPlayerCtrl>(playerCtrl, Class);
}

APawn* ULQuickTools::GetPlayerPawn(const UObject* Context, TSubclassOf<APawn> Class)
{
	return TSubClassOfCastTo(GetPlayerCtrl(Context)->GetPawn().Get(), Class);
}

UActorComponent* ULQuickTools::GetActorComp(AActor* Actor, TSubclassOf<UActorComponent> Class)
{
	check(Actor && Class.Get());
	return Actor->FindComponentByClass(Class);
}

bool ULQuickTools::ScreenTraceChannel(const UObject* Context, const FVector2D& Pos, ETraceTypeQuery Channel, bool bComplex, const TArray<AActor*>& ActorsToIgnore,FHitResult& Result, bool bIgnoreSelf)
{
	FVector wp, wd;
	APlayerController* ctrl = GetPlayerCtrl(Context);
	if (UGameplayStatics::DeprojectScreenToWorld(ctrl, Pos, wp, wd)) {
		return UKismetSystemLibrary::LineTraceSingle(Context, wp, wp + wd * ctrl->HitResultTraceDistance, Channel, bComplex, ActorsToIgnore, EDrawDebugTrace::None, Result, bIgnoreSelf);
	}
	return false;
}

bool ULQuickTools::ScreenTraceObjects(const UObject* Context, const FVector2D& Pos, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bComplex, const TArray<AActor*>& ActorsToIgnore, FHitResult& Result, bool bIgnoreSelf)
{
	FVector wp, wd;
	APlayerController* ctrl = GetPlayerCtrl(Context);
	if (UGameplayStatics::DeprojectScreenToWorld(ctrl, Pos, wp, wd)) {
		return UKismetSystemLibrary::LineTraceSingleForObjects(Context, wp, wp + wd * ctrl->HitResultTraceDistance, ObjectTypes, bComplex, ActorsToIgnore, EDrawDebugTrace::None, Result, bIgnoreSelf);
	}
	return false;
}

int32 ULQuickTools::StrCompare(const FString& Str1, const FString& Str2)
{
	for (int i = 0; i < FMath::Min(Str1.Len(), Str2.Len()); i++) {
		if((*Str1)[i] == (*Str2)[i]) continue;
		return ((*Str1)[i] > (*Str2)[i]) ? 1 : -1;
	}
	if (Str1.Len() == Str2.Len()) return 0;
	return (Str1.Len() > Str2.Len()) ? 1 : -1;
}

bool ULQuickTools::CustomSplit(const FString& SourceString, const FString& InStr, FString& LeftS, FString& RightS, bool bLogError, ESearchCase::Type SearchCase, ESearchDir::Type SearchDir)
{
	if (SourceString.Split(InStr, &LeftS, &RightS, SearchCase, SearchDir)) return true;
	if(bLogError) GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, FString::Printf(TEXT("%s 没有分隔符 %s"),*SourceString, *InStr));
	LeftS = SourceString;
	return false;
}

void ULQuickTools::Clear()
{
	Cache_.Empty();
}

AHUD* ULQuickTools::GetPlayerHUD(const UObject* Context, TSubclassOf<AHUD> Class)
{
	/*
	UObject** Obj = Cache_.Find(AHUD::StaticClass());
	if(Obj)
	{
		return TSubClassOfCastTo<AHUD>(Cast<AHUD>(*Obj), Class);
	}

	*/
	UWorld* world = Context ? Context->GetWorld() : GWorld;
	AHUD* playerHUD = world->GetFirstPlayerController()->GetHUD();
	//Cache_.Add(AHUD::StaticClass(), playerHUD);
	return TSubClassOfCastTo<AHUD>(playerHUD, Class);
}

ULevelStreaming* ULQuickTools::GetLevelStreamingObject(UObject* Context, const TSoftObjectPtr<UWorld>& Level)
{
	return GetLevelStreamingObjectByName(Context,*Level.GetAssetName());
}

ULevelStreaming* ULQuickTools::GetLevelStreamingObjectByName(UObject* Context, FName LevelName)
{
	return FStreamLevelAction::FindAndCacheLevelStreamingObject(LevelName,Context->GetWorld());
}

ULevel* ULQuickTools::GetLevelObject(UObject* Context, const TSoftObjectPtr<UWorld>& Level)
{
	if (auto LevelStreaming = GetLevelStreamingObject(Context,Level))
	{
		return LevelStreaming->GetLoadedLevel();
	}
	return nullptr;
}

ULevel* ULQuickTools::GetLevelObjectByName(UObject* Context, FName LevelName)
{
	if (auto LevelStreaming = GetLevelStreamingObjectByName(Context,LevelName))
    {
    	return LevelStreaming->GetLoadedLevel();
    }
    return nullptr;
}
