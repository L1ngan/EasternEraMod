// Copyright 2024 liwei, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LQuickTools.generated.h"

class ULGameInst;
class ALGameMode;
class ULInputComp;
class ALPlayerCtrl;
class ALPlayerState;
class UActorComponent;

UCLASS()
class LQUICKFRAME_API ULQuickTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	static TMap<UClass*, UObject*> Cache_;
public:
	//获取GameInstance
	UFUNCTION(BlueprintPure, Category = "LQuickTools", meta = (WorldContext = "Context", DeterminesOutputType = "Class", DisplayName = "GameInst"))
	static ULGameInst* GetGameInst(const UObject* Context, TSubclassOf<ULGameInst> Class = NULL);
	template<class T> static T* GetGameInst(const UObject* Context) { return Cast<T>(GetGameInst(Context)); }
	//获取GameMode
	UFUNCTION(BlueprintPure, Category = "LQuickTools", meta = (WorldContext = "Context", DeterminesOutputType = "Class", DisplayName = "GameMode"))
	static ALGameMode* GetGameMode(const UObject* Context, TSubclassOf<ALGameMode> Class = NULL);
	template<class T> static T* GetGameMode(const UObject* Context) { return Cast<T>(GetGameMode(Context)); }
	//获取PlayerCtrl
	UFUNCTION(BlueprintPure, Category = "LQuickTools", meta = (WorldContext = "Context", DeterminesOutputType = "Class",DisplayName="PlayerCtrl"))
	static ALPlayerCtrl* GetPlayerCtrl(const UObject* Context, TSubclassOf<ALPlayerCtrl> Class=NULL);
	template<class T> static T* GetPlayerCtrl(const UObject* Context) { return Cast<T>(GetPlayerCtrl(Context)); }
	//获取控制pawn
	UFUNCTION(BlueprintPure, Category = "LQuickTools", meta = (WorldContext = "Context", DeterminesOutputType = "Class", DisplayName = "PlayerPawn"))
	static class APawn* GetPlayerPawn(const UObject* Context, TSubclassOf<class APawn> Class = NULL);
	template<class T> static T* GetPlayerPawn(const UObject* Context) { return Cast<T>(GetPlayerPawn(Context)); }
	//获取Actor组件
	UFUNCTION(BlueprintPure, Category = "LQuickTools", meta = (DeterminesOutputType = "Class"))
	static UActorComponent* GetActorComp(AActor* Actor, TSubclassOf<UActorComponent> Class);
	template<class T> static T* GetActorComp(AActor* Actor) { return Cast<T>(GetActorComp(Actor,T::StaticClass())); }
	//射线检测(通道)
	UFUNCTION(BlueprintCallable, Category = "LQuickTools", meta = (bIgnoreSelf = "true", WorldContext = "Context", AutoCreateRefTerm = "ActorsToIgnore", ExpandEnumAsExecs="ReturnValue"))
	static bool ScreenTraceChannel(const UObject* Context, const FVector2D& Pos, ETraceTypeQuery Channel, bool bComplex, const TArray<AActor*>& ActorsToIgnore,FHitResult& Result, bool bIgnoreSelf);
	//射线检测(对象)
	UFUNCTION(BlueprintCallable, Category = "LQuickTools", meta = (bIgnoreSelf = "true", WorldContext = "Context", AutoCreateRefTerm = "ActorsToIgnore", ExpandEnumAsExecs = "ReturnValue"))
	static bool ScreenTraceObjects(const UObject* Context, const FVector2D& Pos,const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bComplex, const TArray<AActor*>& ActorsToIgnore, FHitResult& Result, bool bIgnoreSelf);
	//字符串比较(1大，0等，-1小)
	UFUNCTION(BlueprintPure, Category = "LQuickTools")
	static int32 StrCompare(const FString& Str1, const FString& Str2);
	//字符串裁剪
	UFUNCTION(BlueprintPure, Category = "LQuickTools")
	static bool CustomSplit(const FString& SourceString, const FString& InStr, FString& LeftS, FString& RightS, bool bLogError=true,ESearchCase::Type SearchCase = ESearchCase::IgnoreCase, ESearchDir::Type SearchDir = ESearchDir::FromStart);
	//清理
	static void Clear();
	//获取HUD
	UFUNCTION(BlueprintPure, Category = "LQuickTools", meta = (WorldContext = "Context", DeterminesOutputType = "Class", DisplayName = "PlayerHUD"))
	static class AHUD * GetPlayerHUD(const UObject* Context, TSubclassOf<class AHUD> Class = NULL);
	template<class T> static T* GetPlayerHUD(const UObject* Context) { return Cast<T>(GetPlayerHUD(Context)); }
	//获取的流关卡实例
	UFUNCTION(BlueprintCallable, Category = "LQuickTools")
	static ULevelStreaming * GetLevelStreamingObject(UObject* Context,const TSoftObjectPtr<UWorld> & Level);
	//获取指定名字的流关卡对象
	UFUNCTION(BlueprintCallable, Category = "LQuickTools")
	static ULevelStreaming * GetLevelStreamingObjectByName(UObject* Context,FName LevelName);
	//获取的关卡实例
	UFUNCTION(BlueprintCallable, Category = "LQuickTools")
	static ULevel * GetLevelObject(UObject* Context,const TSoftObjectPtr<UWorld> & Level);
	//获取指定名字的关卡对象
	UFUNCTION(BlueprintCallable, Category = "LQuickTools")
	static ULevel * GetLevelObjectByName(UObject* Context,FName LevelName);
};