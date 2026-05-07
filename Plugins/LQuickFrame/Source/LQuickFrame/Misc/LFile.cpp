// Copyright 2024 liwei, Inc. All Rights Reserved.

#include "LFile.h"
#include "ImageUtils.h"
#include "Engine/Canvas.h"
#include "HighResScreenshot.h"
#include "Engine/AssetManager.h"
#include "Engine/LevelStreaming.h"
#include "Kismet/GameplayStatics.h"
#include "Framework/Notifications/NotificationManager.h"

#pragma region  --- ULFile ---
FString ULFile::GetSavePath(const FString& RelativePath)
{
	static const FString path = FString::Printf(TEXT("%sSaveGames/"), *FPaths::ProjectSavedDir());
	return path / RelativePath;
}

FString ULFile::GetProjPath(const FString& RelativePath)
{
	static const FString projPath = FPaths::ProjectDir();
	return projPath / RelativePath;
}

bool ULFile::CaptureScreen(const int32 Width, const FString& FullPath)
{
	if (!GEngine || !GEngine->GameViewport) return false;
	if (FViewport* Viewport = GEngine->GameViewport->Viewport) {
		if (!GIsEditor) FSlateNotificationManager::Get().SetAllowNotifications(false);
		IFileManager& fileMng = IFileManager::Get();
		if (fileMng.FileExists(*FullPath)) {
			fileMng.Delete(*FullPath);
		}
		FHighResScreenshotConfig& HighResScreenshotConfig = GetHighResScreenshotConfig();
		HighResScreenshotConfig.SetHDRCapture(false);
		HighResScreenshotConfig.FilenameOverride = FullPath;
		FIntPoint vp = Viewport->GetSizeXY();
		GScreenshotResolutionX = Width;
		GScreenshotResolutionY = vp.Y * Width * 1.0f /vp.X;
		Viewport->TakeHighResScreenShot();
		return true;
	}
	return false;
}

UClass* ULFile::LoadClassPath(const FSoftClassPath& Path)
{
	return UAssetManager::GetStreamableManager().LoadSynchronous<UClass>(Path);
}

UObject* ULFile::LoadObjectPath(const FSoftObjectPath& Path)
{
	return UAssetManager::GetStreamableManager().LoadSynchronous<UObject>(Path);
}
#pragma endregion

#pragma region  --- ULAsyncFile ---
int32 ULAsyncFile::taskIdx = 0;
ULAsyncFile* ULAsyncFile::AsyncLoadObject(const FSoftObjectPath& Path)
{
	ULAsyncFile* fp = NewObject<ULAsyncFile>();
	fp->AddToRoot(); fp->state_ = 1;
	fp->Handle = UAssetManager::GetStreamableManager().RequestAsyncLoad(Path, FStreamableDelegate::CreateUObject(fp, &ULAsyncFile::OnLoaded));
	return fp;
}

ULAsyncFile* ULAsyncFile::AsyncLoadClass(const FSoftClassPath& Path)
{
	ULAsyncFile* fp = NewObject<ULAsyncFile>();
	fp->AddToRoot(); fp->state_ = 2;
	fp->Handle = UAssetManager::GetStreamableManager().RequestAsyncLoad(Path, FStreamableDelegate::CreateUObject(fp, &ULAsyncFile::OnLoaded));
	return fp;
}

ULAsyncFile* ULAsyncFile::AsyncLoadAndUnloadStreamings(const TArray<FString>& Loads, const TArray<FString>& Unloads)
{
	if(taskIdx > 100000) taskIdx = 0;
	ULAsyncFile* fp = NewObject<ULAsyncFile>();
	fp->AddToRoot(); fp->state_ = 3;
	fp->taskNum_ = Loads.Num()+Unloads.Num();
	TArray<FString> AllLevelNames;
	const TArray<ULevelStreaming*>& Levels = GWorld->GetStreamingLevels();
	for (const ULevelStreaming* Level : Levels) {
		FString LevelName = Level->GetWorldAssetPackageName();
		if (Level->GetWorld()->IsPlayInEditor()){
			LevelName = UWorld::RemovePIEPrefix(LevelName);
		}
		AllLevelNames.Add(LevelName);
	}
	for (const FString& name : Unloads) {
		FLatentActionInfo LatentInfo;
		LatentInfo.CallbackTarget = fp;
		LatentInfo.ExecutionFunction = "OnLoaded";
		LatentInfo.UUID = ++taskIdx;
		LatentInfo.Linkage = 1;
		UGameplayStatics::UnloadStreamLevel(GWorld, FName(name), LatentInfo, false);
	}
	for (const FString& name : Loads) {
		FLatentActionInfo LatentInfo;
		LatentInfo.CallbackTarget = fp;
		LatentInfo.ExecutionFunction = "OnLoaded";
		LatentInfo.UUID = ++taskIdx;
		LatentInfo.Linkage = 1;
		checkf(AllLevelNames.Contains(name), TEXT("请在Window/Levels添加 %s 关卡!"), *name);
		UGameplayStatics::LoadStreamLevel(GWorld, FName(name), true, false, LatentInfo);
	}
	return fp;
}

void ULAsyncFile::OnLoaded()
{
	switch (state_) {
	case 1:
		if (Handle->HasLoadCompleted()) {
			if (UObject* Object = Handle->GetLoadedAsset()) {
				RemoveFromRoot();
				Success.Broadcast(Object); return;
			}
		}
		break;
	case 2:
		if (Handle->HasLoadCompleted()) {
			TArray<FSoftObjectPath> Assets;
			Handle->GetRequestedAssets(Assets);
			if (Assets.IsValidIndex(0)) {
				const FSoftClassPath AssetAsClass = FSoftClassPath(Assets[0].ToString());
				if (UClass* Class = AssetAsClass.ResolveClass()) {
					RemoveFromRoot();
					Success.Broadcast(Class); return;
				}
			}
		}
		break;
	case 3:
		if (--taskNum_ < 1) {
			RemoveFromRoot();
			Success.Broadcast(nullptr); 
		}
		return;
	default: break;
	}
	Failed.Broadcast(nullptr);
}
#pragma endregion