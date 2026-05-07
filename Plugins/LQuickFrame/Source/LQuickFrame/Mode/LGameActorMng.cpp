// Copyright 2024 liwei, Inc. All Rights Reserved.

#include "LGameActorMng.h"
#include "../Base/LActor.h"
#include "GameFramework/Character.h"

void ULGameActorMng::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	OnClearData();
	Super::EndPlay(EndPlayReason);
}

void ULGameActorMng::OnClearData()
{
	Super::OnClearData();
	TypeSearchMap.Reset();
	NameSearchMap.Reset();
	ClassSearchMap.Reset();
}

void ULGameActorMng::RegistByType(ALActor* Actor, int32 ActType)
{
	TypeSearchMap.FindOrAdd(ActType).Add(Actor);
}

void ULGameActorMng::UnRegistByType(ALActor* Actor, int32 ActType)
{
	TypeSearchMap.FindOrAdd(ActType).RemoveSwap(Actor);
}

void ULGameActorMng::RegistByName(ALActor* Actor, FName ActName)
{
	NameSearchMap.FindOrAdd(ActName).Add(Actor);
}

void ULGameActorMng::UnRegistByName(ALActor* Actor, FName ActName)
{
	NameSearchMap.FindOrAdd(ActName).RemoveSwap(Actor);
}

void ULGameActorMng::RegistByClass(ALActor* Actor, TSubclassOf<ALActor> Class)
{
	if(Class.Get() == NULL) Class = ALActor::StaticClass();
	ClassSearchMap.FindOrAdd(Class.Get()).Add(Actor);
}

void ULGameActorMng::UnRegistByClass(ALActor* Actor, TSubclassOf<ALActor> Class)
{
	if(Class.Get() == NULL) Class = ALActor::StaticClass();
	ClassSearchMap.FindOrAdd(Class.Get()).RemoveSwap(Actor);
}

void ULGameActorMng::RegisterByGuid(AActor* Actor, const FGuid& ActorGuid)
{
	GuidSearchMap.Add(ActorGuid, Actor);
}

void ULGameActorMng::UnRegisterByGuid(FGuid& ActorGuid)
{
	GuidSearchMap.Remove(ActorGuid);
}
TArray<ALActor*> ULGameActorMng::FindAllByType(int32 ActType, TSubclassOf<ALActor> Class, const FString& FilterParam)
{
	return SearchAll(TypeSearchMap.FindOrAdd(ActType), Class, FilterParam);
}

TArray<ALActor*> ULGameActorMng::FindAllByName(FName ActName, TSubclassOf<ALActor> Class, const FString& FilterParam)
{
	return SearchAll(NameSearchMap.FindOrAdd(ActName), Class, FilterParam);
}

TArray<ALActor*> ULGameActorMng::FindAllByClass(TSubclassOf<ALActor> ActClass, TSubclassOf<ALActor> Class, const FString& FilterParam)
{
	if(ActClass.Get() == NULL) ActClass = ALActor::StaticClass();
	return SearchAll(ClassSearchMap.FindOrAdd(ActClass.Get()), Class, FilterParam);
}

ALActor* ULGameActorMng::FindNearByType(int32 ActType, FVector Pos, TSubclassOf<ALActor> Class, ALActor* IgnoreActor, const FString& FilterParam)
{
	return SearchNearest(TypeSearchMap.FindOrAdd(ActType), Pos, Class, IgnoreActor, FilterParam);
}

ALActor* ULGameActorMng::FindNearByName(FName ActName, FVector Pos, TSubclassOf<ALActor> Class, ALActor* IgnoreActor, const FString& FilterParam)
{
	return SearchNearest(NameSearchMap.FindOrAdd(ActName), Pos, Class, IgnoreActor, FilterParam);
}
	
ALActor* ULGameActorMng::FindNearByClass(TSubclassOf<ALActor> ActClass, FVector Pos, TSubclassOf<ALActor> Class, ALActor* IgnoreActor, const FString& FilterParam)
{
	if(ActClass.Get() == NULL) ActClass = ALActor::StaticClass();
	return SearchNearest(ClassSearchMap.FindOrAdd(ActClass.Get()), Pos, Class, IgnoreActor, FilterParam);
}

ACharacter* ULGameActorMng::FindCharacterByGuid(const FGuid& CharacterGuid)
{
	if (GuidSearchMap.Contains(CharacterGuid))
	{
		return Cast<ACharacter>(*GuidSearchMap.Find(CharacterGuid));
	}
	return nullptr;
}

AActor* ULGameActorMng::FindActorByGuid(const FGuid& Guid, TSubclassOf<ALActor> Class)
{
	if (GuidSearchMap.Contains(Guid))
	{
		return *GuidSearchMap.Find(Guid);
	}
	return nullptr;
}

TArray<ALActor*> ULGameActorMng::SearchAll(const TArray<ALActor*>& Ary, TSubclassOf<ALActor> Class, const FString& FilterParam)
{
	UClass* cls = Class.Get();
	if(!cls || cls == ALActor::StaticClass()) return Ary;
	TArray<ALActor*> acts;
	for (ALActor* Actor : Ary) {
		if(Actor->IsA(cls) && !IsFilterAll(Actor,FilterParam)) acts.Add(Actor);
	}
	return acts;
}

ALActor* ULGameActorMng::SearchNearest(const TArray<ALActor*>& Ary, const FVector& Pos, TSubclassOf<ALActor> Class, ALActor* IgnoreActor, const FString& FilterParam)
{
	float dist, MinDist = 0;
	ALActor* MinActor = NULL;
	if(Class.Get() == NULL) Class = ALActor::StaticClass();
	for (ALActor* Actor : Ary) {
		if(Actor == IgnoreActor || !Actor->IsA(Class.Get())) continue;
		dist = FVector::Distance(Pos, Actor->GetActorLocation());
		if (!MinActor || dist < MinDist) {
			if(IsFilterNear(Pos, Actor, FilterParam)) continue;
			MinActor = Actor;
			MinDist = dist;
		}
	}
	return MinActor;
}

TArray<AActor*> ULGameActorMng::GetAllRoles( TSubclassOf<AActor> Class, const FString& FilterParam)
{
	if(Class.Get() == NULL) Class = AActor::StaticClass();
	
	TArray<AActor*> ActorsArray;
	GuidSearchMap.GenerateValueArray(ActorsArray);
	if(Class.Get() == NULL) return ActorsArray;
	
	TArray<AActor*> acts;
	for (AActor* Actor : ActorsArray) {
		if(Actor->IsA(Class) ) acts.Add(Actor);
	}
	return acts;
}