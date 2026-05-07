// Copyright 2024 liwei, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "LLog.generated.h"

UCLASS()
class LQUICKFRAME_API ULLog : public UObject
{
	GENERATED_BODY()
	FString FilePath;
	uint8 LogLevel; //0 none 1 error, 2 warning, 3 all
	bool bShowScreen;
	float ShowTime;
	static ULLog* GetLogger();
public:
	UFUNCTION(BlueprintCallable, Category = "LLOG", meta = (DisplayName = "LLOG"))
	static void Logger(const FString& Content);
	UFUNCTION(BlueprintCallable, Category = "LLOG", meta = (DisplayName = "LLOGW"))
	static void LoggerWarning(const FString& Content);
	UFUNCTION(BlueprintCallable, Category = "LLOG", meta = (DisplayName = "LLOGE"))
	static void LoggerError(const FString& Content);
};
