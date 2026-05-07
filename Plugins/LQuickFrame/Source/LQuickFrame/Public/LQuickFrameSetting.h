// Copyright 2024 liwei, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "LQuickFrameSetting.generated.h"

//日志等级
UENUM(BlueprintType)
enum class ELLogLevel :uint8
{
	ELLOG_LEVEL_NONE UMETA(DisplayName = "无"),
	ELLOG_LEVEL_ERROR UMETA(DisplayName = "错误"),
	ELLOG_LEVEL_Warning UMETA(DisplayName = "警告"),
	ELLOG_LEVEL_All UMETA(DisplayName = "所有"),
};

UCLASS(defaultconfig, config = Game, meta = (DisplayName = "LQuickFrame"))
class LQUICKFRAME_API ULQuickFrameSetting : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Base", Config)
	TSubclassOf<UUserWidget> LoadingWidget;
	//等待视频
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Base", Config)
	TArray<FString> LoadingMovies;
	//日志等级
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "LLog", Config)
	ELLogLevel LogLevel = ELLogLevel::ELLOG_LEVEL_All;
	//是否显示在屏幕上
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "LLog", Config)
	bool bLogScreen = true;
	//显示屏幕上的时间
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "LLog", Config, meta=(EditCondition="bLogScreen",EditConditionHides))
	float LogShowTime = 5.f;
};