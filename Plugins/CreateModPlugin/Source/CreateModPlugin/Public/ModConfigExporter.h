#pragma once

#include "CoreMinimal.h"

class UModInformationAsset;

struct CREATEMODPLUGIN_API FModConfigJsonEntry
{
	FString ConfigType;
	FString JsonFile;
	FString StructName;
	bool bOverrideData = false;
};

struct CREATEMODPLUGIN_API FModAssetJsonEntry
{
	FString AssetType;
	FString JsonFile;
	bool bOverrideData = false;
};

struct CREATEMODPLUGIN_API FModConfigExportResult
{
	bool bExportedAny = false;
	TArray<FModConfigJsonEntry> DataTableConfigs;
	TArray<FModAssetJsonEntry> DataAssetConfigs;
	FString ModFolderPathAbs;
	/** Mod 下的 Config 目录绝对路径（JSON 输出目录） */
	FString ConfigDirectoryAbs;
};

/** 从 DA_ModDataAsset 导出配置表/资产为 JSON；可选同步 ModInfo.json */
class CREATEMODPLUGIN_API FModConfigExporter
{
public:
	/** 根据资产包路径解析 Mod 的 Content 目录，例如 /Game/Mods/MyMod -> Content/Mods/MyMod */
	static FString GetModContentFolderFromAsset(const UModInformationAsset* ModInfoAsset);

	static bool ExportFromModInformationAsset(UModInformationAsset* ModInfoAsset, const FString& ModFolderPath,
		FModConfigExportResult& OutResult, bool bUpdateModInfoJson = true);

	static bool ExportFromModFolder(const FString& ModFolderPath, FModConfigExportResult& OutResult);

	static void ApplyExportMetadataToModInfoJson(const TSharedPtr<FJsonObject>& JsonObject, const FModConfigExportResult& ExportResult);

	/** ModInfo 缺少 DataTableConfigs/DataAssetConfigs 时，根据 Config/*.json 补全（不覆盖已有条目） */
	static void RestoreConfigMetadataFromDiskIfMissing(const FString& ModFolderPath, const TSharedPtr<FJsonObject>& JsonObject);

	/** 将导出结果写入 Mod 根目录 ModInfo.json（不存在则创建基础条目） */
	static bool SyncExportResultToModInfoJson(const FString& ModFolderPath, const FModConfigExportResult& ExportResult,
		const UModInformationAsset* ModInfoAsset);

	static void CopyConfigFilesToOutput(const FModConfigExportResult& ExportResult, const FString& OutputDir);
};
