#include "CreateModPlugin.h"

#include "GameplayTagsManager.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

#define LOCTEXT_NAMESPACE "FCreateModPluginModule"

void FCreateModPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	UGameplayTagsManager& TagsManager = UGameplayTagsManager::Get();
	
	FString ContentDir = FPaths::ProjectContentDir();
	FPaths::NormalizeDirectoryName(ContentDir);

	if (FPaths::IsRelative(ContentDir))
	{
		ContentDir = FPaths::ConvertRelativePathToFull(ContentDir);
		FPaths::NormalizeDirectoryName(ContentDir);
	}
	FString ModsDir = ContentDir / TEXT("Mods");
	FPaths::NormalizeDirectoryName(ModsDir);
	TagsManager.AddTagIniSearchPath(ModsDir);

	// Steam Workshop (example: D:/SteamLibrary/steamapps/workshop/content/3446240)
	// Derive from current ContentDir (example: .../steamapps/common/<Game>/Content)
	const FString SteamCommonMarker = TEXT("/steamapps/common/");
	const int32 SteamCommonIndex = ContentDir.Find(SteamCommonMarker, ESearchCase::IgnoreCase, ESearchDir::FromStart);
	if (SteamCommonIndex != INDEX_NONE)
	{
		FString SteamLibraryRoot = ContentDir.Left(SteamCommonIndex);
		FPaths::NormalizeDirectoryName(SteamLibraryRoot);

		FString WorkshopDir = SteamLibraryRoot / TEXT("steamapps/workshop/content/3446240");
		FPaths::NormalizeDirectoryName(WorkshopDir);

		if (IFileManager::Get().DirectoryExists(*WorkshopDir))
		{
			TagsManager.AddTagIniSearchPath(WorkshopDir);
		}
	}
}

void FCreateModPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCreateModPluginModule, CreateModPlugin)

