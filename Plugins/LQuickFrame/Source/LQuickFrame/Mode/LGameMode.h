// Copyright 2024 liwei, Inc. All Rights Reserved.

#pragma once
#include "GameFramework/GameModeBase.h"
#include "LGameMode.generated.h"

UCLASS()
class LQUICKFRAME_API ALGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	ALGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	//获取GameMode组件
	UFUNCTION(BlueprintPure, Category = "GameMode", meta = (WorldContext = "Context", DeterminesOutputType = "Class"))
	static class UActorComponent* GetModeComp(const UObject* Context, TSubclassOf<class UActorComponent> Class);
	template<class T> static T* GetModeComp(const UObject* Context) { return Cast<T>(GetModeComp(Context,T::StaticClass())); }

	UFUNCTION()
	virtual void OnSubLevelLoaded();
};
