#include "ModInfoEditorData.h"
#include "Misc/Paths.h"
#include "UObject/UnrealType.h"

#if WITH_EDITOR
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#endif

#define LOCTEXT_NAMESPACE "ModInfoEditorData"

FString UModInfoData::MakeGameplayTagsIniFileName(const FString& InModId)
{
	return InModId + TEXT("GameplayTags.ini");
}

FString UModInfoData::GetModContentRootForGameplayTags() const
{
	FString ContentDir = FPaths::ProjectContentDir();
	FPaths::NormalizeDirectoryName(ContentDir);
	if (FPaths::IsRelative(ContentDir))
	{
		ContentDir = FPaths::ConvertRelativePathToFull(ContentDir);
		FPaths::NormalizeDirectoryName(ContentDir);
	}
	if (ModId.IsEmpty())
	{
		return TEXT("");
	}
	if (!ModFolderPath.IsEmpty())
	{
		return FPaths::ConvertRelativePathToFull(ContentDir / ModFolderPath);
	}
	// 创建 Mod 向导中尚未有 ModFolderPath 时
	return FPaths::ConvertRelativePathToFull(ContentDir / FString::Printf(TEXT("Mods/%s"), *ModId));
}

FString UModInfoData::GetDefaultGameplayTagsIniFullPath() const
{
	if (ModId.IsEmpty())
	{
		return TEXT("");
	}
	const FString BaseDir = GetModContentRootForGameplayTags();
	if (BaseDir.IsEmpty())
	{
		return TEXT("");
	}
	FString FullPath = FPaths::ConvertRelativePathToFull(BaseDir / MakeGameplayTagsIniFileName(ModId));
	FPaths::NormalizeFilename(FullPath);
	return FullPath;
}

#if WITH_EDITOR
void UModInfoData::WriteDefaultGameplayTagsIniContent(const FString& IniPath) const
{
	if (ModId.IsEmpty() || IniPath.IsEmpty())
	{
		return;
	}
	FString IniContent;
	IniContent += TEXT("; ============================================\n");
	IniContent += TEXT("; GameplayTags Configuration\n");
	IniContent += TEXT("; Mod ID: ") + ModId + TEXT("\n");
	IniContent += TEXT("; ============================================\n");
	IniContent += TEXT("\n");
	IniContent += TEXT("[/Script/GameplayTags.GameplayTagsList]\n");
	IniContent += TEXT("\n");
	FFileHelper::SaveStringToFile(IniContent, *IniPath);
}

void UModInfoData::EnsureDefaultGameplayTagsIni()
{
	if (ModId.IsEmpty())
	{
		return;
	}
	const FString FileName = MakeGameplayTagsIniFileName(ModId);
	const FString BaseDir = GetModContentRootForGameplayTags();
	if (BaseDir.IsEmpty())
	{
		return;
	}
	IPlatformFile& PF = FPlatformFileManager::Get().GetPlatformFile();
	PF.CreateDirectoryTree(*BaseDir);
	const FString FullPath = GetDefaultGameplayTagsIniFullPath();
	if (FullPath.IsEmpty())
	{
		return;
	}
	if (!FPaths::FileExists(FullPath))
	{
		WriteDefaultGameplayTagsIniContent(FullPath);
	}
	GameplayTagsIniFile = FileName;
}

void UModInfoData::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	const FName Name = PropertyChangedEvent.GetPropertyName();
	const EPropertyChangeType::Type ChangeType = PropertyChangedEvent.ChangeType;
	if (Name == GET_MEMBER_NAME_CHECKED(UModInfoData, bIncludeGameplayTags))
	{
		if (bIncludeGameplayTags)
		{
			if (ModId.IsEmpty())
			{
				bIncludeGameplayTags = false;
				PostEditChange();
				FNotificationInfo Info(LOCTEXT("NeedModIdForGameplayTags", "请先在「Basic」中填写 Mod ID，再勾选「Include Gameplay Tags」。"));
				Info.ExpireDuration = 4.0f;
				Info.bFireAndForget = true;
				FSlateNotificationManager::Get().AddNotification(Info);
			}
			else
			{
				EnsureDefaultGameplayTagsIni();
			}
		}
	}
	else if (Name == GET_MEMBER_NAME_CHECKED(UModInfoData, ModId) && bIncludeGameplayTags)
	{
		if (ModId.IsEmpty())
		{
			return;
		}
		if (ChangeType == EPropertyChangeType::Interactive)
		{
			return;
		}
		EnsureDefaultGameplayTagsIni();
	}
}
#endif // WITH_EDITOR

#undef LOCTEXT_NAMESPACE
