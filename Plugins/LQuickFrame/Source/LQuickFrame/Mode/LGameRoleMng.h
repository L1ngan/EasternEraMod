// Copyright 2024 liwei, Inc. All Rights Reserved.

#pragma once
#include "../Base/LComp.h"
#include "LGameRoleMng.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRegistedRoleChange,FGuid,Id,bool,bRegist);

class AController;
UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LQUICKFRAME_API ULGameRoleMng : public ULActorComp
{
	GENERATED_BODY()
	UPROPERTY()
	TMap<FGuid, AController*> RoleMap;
	UPROPERTY()
	TMap<FGuid, APawn*> PawnMap;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:
	UPROPERTY(BlueprintAssignable)
	FOnRegistedRoleChange OnRegistedRoleChange;
	//注册AI
	UFUNCTION(BlueprintCallable, Category = "GameRoleMng")
	void RegistRole(AController* AI, FGuid ID);
	//取消类型AI
	UFUNCTION(BlueprintCallable, Category = "GameRoleMng")
	void UnRegistRole(FGuid ID);
	/*
	//注册Pawn
	UFUNCTION(BlueprintCallable, Category = "GameRoleMng")
	void RegistRole(AController* AI, FGuid ID);
	//取消类型Pawn
	UFUNCTION(BlueprintCallable, Category = "GameRoleMng")
	void UnRegistRole(FGuid ID);
	*/
	//查找AI
	UFUNCTION(BlueprintPure, Category = "GameRoleMng", meta = (DeterminesOutputType = "Class"))
	AController* FindRole(FGuid ID, TSubclassOf<AController> Class = NULL);
	template<class T> T* FindRole(FGuid ID){ return Cast<T>(FindRole(ID, T::StaticClass())); }
	//查找所有AI
	UFUNCTION(BlueprintPure, Category = "GameRoleMng", meta = (DeterminesOutputType = "Class"))
	TArray<AController*> GetAllRoles(TSubclassOf<AController> Class = NULL);
};
