// Copyright 2024 liwei, Inc. All Rights Reserved.

#include "LLog.h"
#include "LFile.h"
#include "LQuickFrameSetting.h"
#include "Kismet/KismetSystemLibrary.h"
DEFINE_LOG_CATEGORY_STATIC(LLogCateGory, Log, All);

static FCriticalSection lock_;
class LQUICKFRAME_API FLCrashError : public FOutputDeviceError
{
	FOutputDeviceError* oldDevice_;
public:
	FLCrashError(FOutputDeviceError* InOldDevice) :oldDevice_(InOldDevice) {}
	
	virtual void HandleError() override {
		static int32 CallCount = 0;
		int32 NewCallCount = FPlatformAtomics::InterlockedIncrement(&CallCount);
		if (NewCallCount != 1) return;
		GErrorHist[UE_ARRAY_COUNT(GErrorHist)-1] = 0;
		ULLog::LoggerError(GErrorHist);
	}

	virtual void Serialize(const TCHAR* V, ELogVerbosity::Type Verbosity, const FName& Category) override {
		oldDevice_->Serialize(V, Verbosity, Category);
		if (!GIsGuarded) HandleError();
	}
};

ULLog* ULLog::GetLogger()
{
	static ULLog* log_ = nullptr;
	if (!log_) {
		if(!GEngine || IsGarbageCollecting()) return nullptr;
		log_ = GetMutableDefault<ULLog>();
		log_->FilePath = ULFile::GetSavePath(TEXT("log.txt"));
		const ULQuickFrameSetting* Setting = GetDefault<ULQuickFrameSetting>();
		log_->LogLevel = (uint8)Setting->LogLevel;
		log_->bShowScreen = Setting->bLogScreen;
		log_->ShowTime = Setting->LogShowTime;
		if (IFileManager::Get().FileExists(*log_->FilePath)) {
			IFileManager::Get().Move(*ULFile::GetSavePath(TEXT("log_backup.txt")),*log_->FilePath);
		}
		static FLCrashError crash(GError);
		GError = &crash;
	}
	return log_;
}

void ULLog::Logger(const FString& Content)
{
	ULLog* log = GetLogger();
	if(log && log->LogLevel == 3){
		if (log->bShowScreen) {
			UKismetSystemLibrary::PrintString(GWorld, Content, true, true, FColor::White, log->ShowTime);
		}else {
			UE_LOG(LLogCateGory, Log, TEXT("%s"), *Content);
		}
		FScopeLock ScopeLock(&lock_);
		FFileHelper::SaveStringToFile(FString::Printf(TEXT("[log]%s\n"),*Content), *log->FilePath, FFileHelper::EEncodingOptions::ForceUTF8, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
	}else {
		UE_LOG(LLogCateGory, Log, TEXT("%s"), *Content);
	}
}

void ULLog::LoggerWarning(const FString& Content)
{
	ULLog* log = GetLogger();
	if (log && log->LogLevel > 1) {
		if (log->bShowScreen) {
			UKismetSystemLibrary::PrintString(GWorld, Content, true, true, FColor::Yellow, log->ShowTime);
		}else {
			UE_LOG(LLogCateGory, Warning, TEXT("%s"), *Content);
		}
		FScopeLock ScopeLock(&lock_);
		FFileHelper::SaveStringToFile(FString::Printf(TEXT("[warn]%s\n"),*Content), *log->FilePath, FFileHelper::EEncodingOptions::ForceUTF8, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
	}else {
		UE_LOG(LLogCateGory, Warning, TEXT("%s"), *Content);
	}
}
	
void ULLog::LoggerError(const FString& Content)
{
	ULLog* log = GetLogger();
	if (log && log->LogLevel > 0) {
		if (log->bShowScreen) {
			UKismetSystemLibrary::PrintString(GWorld, Content, true, true, FColor::Red, log->ShowTime);
		}else {
			UE_LOG(LLogCateGory, Error, TEXT("%s"), *Content);
		}
		FString stackInfo = TEXT("");
		TArray<FProgramCounterSymbolInfo> stacks = FPlatformStackWalk::GetStack(1, 5);
		for (FProgramCounterSymbolInfo& info : stacks) {
			stackInfo += FString::Printf(TEXT("%s (%s Line:%d \r\n\t"),ANSI_TO_TCHAR(info.FunctionName),ANSI_TO_TCHAR(info.Filename),info.LineNumber);
		}
		FScopeLock ScopeLock(&lock_);
		FFileHelper::SaveStringToFile(FString::Printf(TEXT("[error]%s\n%s"),*Content,*stackInfo), *log->FilePath, FFileHelper::EEncodingOptions::ForceUTF8, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
	}else {
		UE_LOG(LLogCateGory, Error, TEXT("%s"), *Content);
	}
}