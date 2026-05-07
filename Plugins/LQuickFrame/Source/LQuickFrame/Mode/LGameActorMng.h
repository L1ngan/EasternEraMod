// Copyright 2024 liwei, Inc. All Rights Reserved.

#pragma once
#include "../Base/LComp.h"
#include "LGameActorMng.generated.h"

class ALActor;
UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LQUICKFRAME_API ULGameActorMng : public ULActorComp
{
	GENERATED_BODY()
	TMap<int32, TArray<ALActor*>> TypeSearchMap;
	TMap<FName, TArray<ALActor*>> NameSearchMap;
	TMap<UClass*, TArray<ALActor*>> ClassSearchMap;
	TMap<FGuid,AActor*> GuidSearchMap;
public:
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void OnClearData() override;
	
	//类型注册
	UFUNCTION(BlueprintCallable, Category = "GameActorMng")
	void RegistByType(ALActor* Actor, int32 ActType);
	//取消类型注册
	UFUNCTION(BlueprintCallable, Category = "GameActorMng")
	void UnRegistByType(ALActor* Actor, int32 ActType);
	//名字注册
	UFUNCTION(BlueprintCallable, Category = "GameActorMng")
	void RegistByName(ALActor* Actor, FName ActName);
	//取消名字注册
	UFUNCTION(BlueprintCallable, Category = "GameActorMng")
	void UnRegistByName(ALActor* Actor, FName ActName);
	//类注册
	UFUNCTION(BlueprintCallable, Category = "GameActorMng")
	void RegistByClass(ALActor* Actor, TSubclassOf<ALActor> Class = NULL);
	//取消类注册
	UFUNCTION(BlueprintCallable, Category = "GameActorMng")
	void UnRegistByClass(ALActor* Actor, TSubclassOf<ALActor> Class = NULL);
	//角色注册
	UFUNCTION(BlueprintCallable, Category = "GameActorMng")
	void RegisterByGuid(AActor* Actor,const FGuid & ActorGuid);
	//取消角色注册
	UFUNCTION(BlueprintCallable, Category = "GameActorMng")
	void UnRegisterByGuid(FGuid & ActorGuid);
	
	//通过类型查找所有目标(可实现IsFilterAll来筛选)
	UFUNCTION(BlueprintPure, Category = "GameActorMng", meta = (DeterminesOutputType = "Class", AdvancedDisplay = "FilterParam"))
	TArray<ALActor*> FindAllByType(int32 ActType, TSubclassOf<ALActor> Class = NULL, const FString& FilterParam=TEXT(""));
	//通过名字查找所有目标(可实现IsFilterAll来筛选)
	UFUNCTION(BlueprintPure, Category = "GameActorMng", meta = (DeterminesOutputType = "Class", AdvancedDisplay = "FilterParam"))
	TArray<ALActor*> FindAllByName(FName ActName, TSubclassOf<ALActor> Class = NULL, const FString& FilterParam=TEXT(""));
	//通过类查找所有目标(可实现IsFilterAll来筛选)
	UFUNCTION(BlueprintPure, Category = "GameActorMng", meta = (DeterminesOutputType = "Class", AdvancedDisplay = "FilterParam"))
	TArray<ALActor*> FindAllByClass(TSubclassOf<ALActor> ActClass, TSubclassOf<ALActor> Class = NULL, const FString& FilterParam=TEXT(""));
	//通过类型查找最近目标(可实现IsFilterNear来筛选)
	UFUNCTION(BlueprintPure, Category = "GameActorMng", meta = (DeterminesOutputType = "Class", AdvancedDisplay = "IgnoreActor,FilterParam"))
	ALActor* FindNearByType(int32 ActType, FVector Pos, TSubclassOf<ALActor> Class = NULL, ALActor* IgnoreActor = NULL, const FString& FilterParam=TEXT(""));
	template<class T> T* FindNearByType(int32 ActType, FVector Pos, ALActor* IgnoreActor = NULL, const FString& FilterParam=TEXT("")){
		return Cast<T>(FindNearByType(ActType, Pos, T::StaticClass(), IgnoreActor, FilterParam));
	}
	//通过名字查找最近目标(可实现IsFilterNear来筛选)
	UFUNCTION(BlueprintPure, Category = "GameActorMng", meta = (DeterminesOutputType = "Class", AdvancedDisplay = "IgnoreActor,FilterParam"))
	ALActor* FindNearByName(FName ActName, FVector Pos, TSubclassOf<ALActor> Class = NULL, ALActor* IgnoreActor = NULL, const FString& FilterParam=TEXT(""));
	template<class T> T* FindNearByName(FName ActName, FVector Pos, ALActor* IgnoreActor = NULL, const FString& FilterParam=TEXT("")){
		return Cast<T>(FindNearByName(ActName, Pos, T::StaticClass(), IgnoreActor, FilterParam));
	}
	//通过类查找最近目标(可实现IsFilterNear来筛选)
	UFUNCTION(BlueprintPure, Category = "GameActorMng", meta = (DeterminesOutputType = "Class", AdvancedDisplay = "IgnoreActor,FilterParam"))
	ALActor* FindNearByClass(TSubclassOf<ALActor> ActClass, FVector Pos, TSubclassOf<ALActor> Class = NULL, ALActor* IgnoreActor = NULL, const FString& FilterParam=TEXT(""));
	template<class T> T* FindNearByClass(TSubclassOf<ALActor> ActClass, FVector Pos,TSubclassOf<ALActor> Class = NULL, ALActor* IgnoreActor = NULL, const FString& FilterParam=TEXT("")){
		return Cast<T>(FindNearByClass(ActClass, Pos, T::StaticClass(), IgnoreActor, FilterParam));
	}

	//通过GUID查找一个Character
	UFUNCTION(BlueprintPure, Category = "GameActorMng")
	ACharacter* FindCharacterByGuid(const FGuid & CharacterGuid);

	UFUNCTION(BlueprintPure, Category = "GameActorMng", meta = (DeterminesOutputType = "Class"))
	AActor* FindActorByGuid(const FGuid& Guid, TSubclassOf<ALActor> Class = NULL);
	template<class T> T* FindActorByGuid(const FGuid & Guid){
		return Cast<T>(FindActorByGuid(Guid,T::StaticClass()));
	}

	UFUNCTION(BlueprintPure, Category = "GameActorMng", meta = (DeterminesOutputType = "Class", AdvancedDisplay = "FilterParam"))
	TArray<AActor*> GetAllRoles( TSubclassOf<AActor> Class = NULL, const FString& FilterParam=TEXT(""));
	//TArray<ALActor*> FindAllByType(int32 ActType, TSubclassOf<ALActor> Class = NULL, const FString& FilterParam=TEXT(""));
protected:
	//是否过滤单个
	UFUNCTION(BlueprintNativeEvent, Category="GameActorMng")
	bool IsFilterNear(const FVector& Pos, ALActor* Actor, const FString& FilterParam=TEXT(""));
	virtual bool IsFilterNear_Implementation(const FVector& Pos, ALActor* Actor,const FString& FilterParam=TEXT("")){ return false; }
	//是否过滤所有
	UFUNCTION(BlueprintNativeEvent, Category="GameActorMng")
	bool IsFilterAll(ALActor* Actor, const FString& FilterParam=TEXT(""));
	virtual bool IsFilterAll_Implementation(ALActor* Actor, const FString& FilterParam=TEXT("")){ return false; }
private:
	TArray<ALActor*> SearchAll(const TArray<ALActor*>& Ary, TSubclassOf<ALActor> Class, const FString& FilterParam);
	ALActor* SearchNearest(const TArray<ALActor*>& Ary, const FVector& Pos, TSubclassOf<ALActor> Class, ALActor* IgnoreActor, const FString& FilterParam);
};
