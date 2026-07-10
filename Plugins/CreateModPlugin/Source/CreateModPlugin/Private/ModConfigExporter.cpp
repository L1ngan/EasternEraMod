#include "ModConfigExporter.h"

#include "BaseDataStruct.h"
#include "Dom/JsonObject.h"
#include "Engine/DataTable.h"
#include "HAL/PlatformFileManager.h"
#include "JsonObjectConverter.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "UObject/Package.h"
#include "UObject/SoftObjectPath.h"

namespace ModConfigExporterPrivate
{
static FString GetEnumValueName(UEnum* Enum, int64 Value)
{
	if (!Enum)
	{
		return FString();
	}

	const int32 Index = Enum->GetIndexByValue(Value);
	if (Index == INDEX_NONE)
	{
		return FString();
	}

	FString Name = Enum->GetNameStringByIndex(Index);
	const int32 ScopeIndex = Name.Find(TEXT("::"));
	if (ScopeIndex != INDEX_NONE)
	{
		Name = Name.Mid(ScopeIndex + 2);
	}
	return Name;
}

static bool SaveJsonObjectToFile(const TSharedPtr<FJsonObject>& JsonObject, const FString& FilePath)
{
	FString OutputString;
	const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	if (!FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer))
	{
		return false;
	}

	const FString Directory = FPaths::GetPath(FilePath);
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	if (!PlatformFile.DirectoryExists(*Directory))
	{
		PlatformFile.CreateDirectoryTree(*Directory);
	}

	return FFileHelper::SaveStringToFile(OutputString, *FilePath);
}

static bool ExportDataTableToJsonFile(UDataTable* DataTable, const FString& StructName, const FString& FilePath)
{
	if (!DataTable)
	{
		return false;
	}

	const UScriptStruct* RowStruct = DataTable->GetRowStruct();
	if (!RowStruct)
	{
		UE_LOG(LogTemp, Warning, TEXT("ModConfigExporter: DataTable has no RowStruct: %s"), *FilePath);
		return false;
	}

	TSharedPtr<FJsonObject> RootObject = MakeShared<FJsonObject>();
	RootObject->SetStringField(TEXT("StructName"), StructName.IsEmpty() ? RowStruct->GetPathName() : StructName);

	TSharedPtr<FJsonObject> RowsObject = MakeShared<FJsonObject>();
	for (const TPair<FName, uint8*>& RowPair : DataTable->GetRowMap())
	{
		TSharedPtr<FJsonObject> RowJson = MakeShared<FJsonObject>();
		if (FJsonObjectConverter::UStructToJsonObject(RowStruct, RowPair.Value, RowJson.ToSharedRef(), 0, 0))
		{
			RowsObject->SetObjectField(RowPair.Key.ToString(), RowJson);
		}
	}
	RootObject->SetObjectField(TEXT("Rows"), RowsObject);

	return SaveJsonObjectToFile(RootObject, FilePath);
}

static bool ExportDataAssetToJsonFile(UDataAsset* DataAsset, const FString& FilePath)
{
	if (!DataAsset)
	{
		return false;
	}

	TSharedPtr<FJsonObject> RootObject = MakeShared<FJsonObject>();
	RootObject->SetStringField(TEXT("AssetClass"), DataAsset->GetClass()->GetPathName());
	if (!FJsonObjectConverter::UStructToJsonObject(DataAsset->GetClass(), DataAsset, RootObject.ToSharedRef(), 0, 0))
	{
		UE_LOG(LogTemp, Warning, TEXT("ModConfigExporter: Failed to serialize DataAsset: %s"), *FilePath);
		return false;
	}

	return SaveJsonObjectToFile(RootObject, FilePath);
}

static TSharedPtr<FJsonObject> CreateDefaultModInfoJsonObject(const FString& ModFolderPath, const UModInformationAsset* ModInfoAsset)
{
	const FString ModId = FPaths::GetCleanFilename(ModFolderPath);

	TSharedPtr<FJsonObject> JsonObject = MakeShared<FJsonObject>();
	JsonObject->SetStringField(TEXT("ModId"), ModId);
	JsonObject->SetStringField(TEXT("ModName"), ModId);
	JsonObject->SetStringField(TEXT("Version"), TEXT("1.0.0"));
	JsonObject->SetStringField(TEXT("Author"), TEXT(""));
	JsonObject->SetStringField(TEXT("Description"), TEXT(""));
	JsonObject->SetStringField(TEXT("Icon"), TEXT(""));
	JsonObject->SetStringField(TEXT("MainLuaFile"), TEXT("Main.lua"));
	JsonObject->SetBoolField(TEXT("NewGameLoad"), false);
	JsonObject->SetStringField(TEXT("MinGameVersion"), TEXT("0.1"));
	JsonObject->SetBoolField(TEXT("IncludeGameplayTags"), false);
	JsonObject->SetStringField(TEXT("GameplayTagsIniFile"), TEXT(""));
	JsonObject->SetArrayField(TEXT("AdditionalAssets"), TArray<TSharedPtr<FJsonValue>>());
	JsonObject->SetArrayField(TEXT("Dependencies"), TArray<TSharedPtr<FJsonValue>>());

	if (ModInfoAsset)
	{
		JsonObject->SetStringField(TEXT("ModInformationAssetPath"), FSoftObjectPath(ModInfoAsset).ToString());
	}

	return JsonObject;
}
} // namespace ModConfigExporterPrivate

static bool ModInfoJsonArrayIsEmpty(const TSharedPtr<FJsonObject>& JsonObject, const FString& FieldName)
{
	const TArray<TSharedPtr<FJsonValue>>* ArrayField = nullptr;
	return !JsonObject.IsValid()
		|| !JsonObject->TryGetArrayField(FieldName, ArrayField)
		|| !ArrayField
		|| ArrayField->Num() == 0;
}

void FModConfigExporter::RestoreConfigMetadataFromDiskIfMissing(const FString& ModFolderPath, const TSharedPtr<FJsonObject>& JsonObject)
{
	if (!JsonObject.IsValid())
	{
		return;
	}

	const FString ConfigDir = ModFolderPath / TEXT("Config");
	if (!FPaths::DirectoryExists(ConfigDir))
	{
		return;
	}

	TArray<FString> JsonFileNames;
	IFileManager::Get().FindFiles(JsonFileNames, *(ConfigDir / TEXT("*.json")), true, false);
	if (JsonFileNames.Num() == 0)
	{
		return;
	}

	const bool bNeedDataTables = ModInfoJsonArrayIsEmpty(JsonObject, TEXT("DataTableConfigs"));
	const bool bNeedDataAssets = ModInfoJsonArrayIsEmpty(JsonObject, TEXT("DataAssetConfigs"));
	if (!bNeedDataTables && !bNeedDataAssets)
	{
		return;
	}

	TArray<TSharedPtr<FJsonValue>> DataTableArray;
	TArray<TSharedPtr<FJsonValue>> DataAssetArray;

	for (const FString& FileName : JsonFileNames)
	{
		const FString AbsPath = ConfigDir / FileName;
		FString FileContent;
		if (!FFileHelper::LoadFileToString(FileContent, *AbsPath))
		{
			continue;
		}

		TSharedPtr<FJsonObject> RootObject;
		const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(FileContent);
		if (!FJsonSerializer::Deserialize(Reader, RootObject) || !RootObject.IsValid())
		{
			continue;
		}

		const FString RelativeJsonPath = FString::Printf(TEXT("Config/%s"), *FileName);
		const FString BaseName = FPaths::GetBaseFilename(FileName);

		if (RootObject->HasField(TEXT("AssetClass")))
		{
			if (!bNeedDataAssets)
			{
				continue;
			}

			TSharedPtr<FJsonObject> EntryObj = MakeShared<FJsonObject>();
			EntryObj->SetStringField(TEXT("AssetType"), BaseName);
			EntryObj->SetStringField(TEXT("JsonFile"), RelativeJsonPath);
			EntryObj->SetBoolField(TEXT("bOverrideData"), false);
			DataAssetArray.Add(MakeShared<FJsonValueObject>(EntryObj));
		}
		else if (RootObject->HasField(TEXT("Rows")))
		{
			if (!bNeedDataTables)
			{
				continue;
			}

			TSharedPtr<FJsonObject> EntryObj = MakeShared<FJsonObject>();
			EntryObj->SetStringField(TEXT("ConfigType"), BaseName);
			EntryObj->SetStringField(TEXT("JsonFile"), RelativeJsonPath);
			if (RootObject->HasField(TEXT("StructName")))
			{
				EntryObj->SetStringField(TEXT("StructName"), RootObject->GetStringField(TEXT("StructName")));
			}
			EntryObj->SetBoolField(TEXT("bOverrideData"), false);
			DataTableArray.Add(MakeShared<FJsonValueObject>(EntryObj));
		}
	}

	if (bNeedDataTables && DataTableArray.Num() > 0)
	{
		JsonObject->SetArrayField(TEXT("DataTableConfigs"), DataTableArray);
		UE_LOG(LogTemp, Log, TEXT("ModConfigExporter: Restored %d DataTableConfigs from %s"), DataTableArray.Num(), *ConfigDir);
	}
	if (bNeedDataAssets && DataAssetArray.Num() > 0)
	{
		JsonObject->SetArrayField(TEXT("DataAssetConfigs"), DataAssetArray);
		UE_LOG(LogTemp, Log, TEXT("ModConfigExporter: Restored %d DataAssetConfigs from %s"), DataAssetArray.Num(), *ConfigDir);
	}
}

FString FModConfigExporter::GetModContentFolderFromAsset(const UModInformationAsset* ModInfoAsset)
{
	if (!ModInfoAsset)
	{
		return FString();
	}

	const UPackage* Package = ModInfoAsset->GetOutermost();
	if (!Package)
	{
		return FString();
	}

	const FString PackageName = Package->GetName();
	if (!PackageName.StartsWith(TEXT("/Game/")))
	{
		return FString();
	}

	// 包名含资产文件名（如 /Game/Mods/MyMod/DA_ModDataAsset），取父路径才是 Mod 根目录
	FString RelativeToContent = PackageName.Mid(6);
	RelativeToContent.ReplaceCharInline(TEXT('\\'), TEXT('/'));
	FString ModRootRelative = FPaths::GetPath(RelativeToContent);
	if (ModRootRelative.IsEmpty())
	{
		ModRootRelative = RelativeToContent;
	}

	FString ModFolder = FPaths::Combine(FPaths::ProjectContentDir(), ModRootRelative);
	FPaths::NormalizeDirectoryName(ModFolder);
	return ModFolder;
}

bool FModConfigExporter::ExportFromModInformationAsset(UModInformationAsset* ModInfoAsset, const FString& ModFolderPath,
	FModConfigExportResult& OutResult, bool bUpdateModInfoJson)
{
	OutResult = FModConfigExportResult();
	if (!ModInfoAsset)
	{
		return false;
	}

	FString NormalizedModFolder = ModFolderPath;
	FPaths::NormalizeDirectoryName(NormalizedModFolder);
	if (FPaths::IsRelative(NormalizedModFolder))
	{
		NormalizedModFolder = FPaths::ConvertRelativePathToFull(NormalizedModFolder);
		FPaths::NormalizeDirectoryName(NormalizedModFolder);
	}

	OutResult.ModFolderPathAbs = NormalizedModFolder;
	const FString ConfigRelativeDir = TEXT("Config");
	OutResult.ConfigDirectoryAbs = NormalizedModFolder / ConfigRelativeDir;
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	PlatformFile.CreateDirectoryTree(*OutResult.ConfigDirectoryAbs);

	UEnum* ModConfigEnum = StaticEnum<EModConfigType>();
	UEnum* ModAssetEnum = StaticEnum<EModDataAssetType>();

	for (const FModConfig& ModConfig : ModInfoAsset->DataTables)
	{
		if (ModConfig.ModConfigType == EModConfigType::None || ModConfig.DataTable.IsNull())
		{
			continue;
		}

		UDataTable* DataTable = Cast<UDataTable>(ModConfig.DataTable.LoadSynchronous());
		if (!DataTable)
		{
			UE_LOG(LogTemp, Warning, TEXT("ModConfigExporter: Failed to load DataTable for %d"), (int32)ModConfig.ModConfigType);
			continue;
		}

		const FString ConfigTypeName = ModConfigExporterPrivate::GetEnumValueName(ModConfigEnum, static_cast<int64>(ModConfig.ModConfigType));
		if (ConfigTypeName.IsEmpty())
		{
			continue;
		}

		const FString JsonRelativePath = ConfigRelativeDir / (ConfigTypeName + TEXT(".json"));
		const FString JsonAbsPath = NormalizedModFolder / JsonRelativePath;
		FString StructName = ModConfig.StructName;
		if (StructName.IsEmpty() && DataTable->GetRowStruct())
		{
			StructName = DataTable->GetRowStruct()->GetPathName();
		}

		FModConfigJsonEntry Entry;
		Entry.ConfigType = ConfigTypeName;
		Entry.JsonFile = JsonRelativePath;
		Entry.StructName = StructName;
		Entry.bOverrideData = ModConfig.bOverrideData;
		OutResult.DataTableConfigs.Add(Entry);

		if (ModConfigExporterPrivate::ExportDataTableToJsonFile(DataTable, StructName, JsonAbsPath))
		{
			OutResult.bExportedAny = true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ModConfigExporter: Failed to export DataTable: %s"), *JsonAbsPath);
		}
	}

	for (const FModAsset& ModAsset : ModInfoAsset->DataAssets)
	{
		if (ModAsset.ModDataAssetType == EModDataAssetType::None || ModAsset.DataAsset.IsNull())
		{
			continue;
		}

		UDataAsset* DataAsset = ModAsset.DataAsset.LoadSynchronous();
		if (!DataAsset)
		{
			UE_LOG(LogTemp, Warning, TEXT("ModConfigExporter: Failed to load DataAsset for %d"), (int32)ModAsset.ModDataAssetType);
			continue;
		}

		const FString AssetTypeName = ModConfigExporterPrivate::GetEnumValueName(ModAssetEnum, static_cast<int64>(ModAsset.ModDataAssetType));
		if (AssetTypeName.IsEmpty())
		{
			continue;
		}

		const FString JsonRelativePath = ConfigRelativeDir / (AssetTypeName + TEXT(".json"));
		const FString JsonAbsPath = NormalizedModFolder / JsonRelativePath;
		FModAssetJsonEntry Entry;
		Entry.AssetType = AssetTypeName;
		Entry.JsonFile = JsonRelativePath;
		Entry.bOverrideData = ModAsset.bOverrideData;
		OutResult.DataAssetConfigs.Add(Entry);

		if (ModConfigExporterPrivate::ExportDataAssetToJsonFile(DataAsset, JsonAbsPath))
		{
			OutResult.bExportedAny = true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ModConfigExporter: Failed to export DataAsset: %s"), *JsonAbsPath);
		}
	}

	if (bUpdateModInfoJson)
	{
		FModConfigExporter::SyncExportResultToModInfoJson(NormalizedModFolder, OutResult, ModInfoAsset);
	}

	return OutResult.bExportedAny;
}

bool FModConfigExporter::ExportFromModFolder(const FString& ModFolderPath, FModConfigExportResult& OutResult)
{
	OutResult = FModConfigExportResult();

	FString NormalizedModFolder = ModFolderPath;
	FPaths::NormalizeDirectoryName(NormalizedModFolder);
	if (FPaths::IsRelative(NormalizedModFolder))
	{
		NormalizedModFolder = FPaths::ConvertRelativePathToFull(NormalizedModFolder);
		FPaths::NormalizeDirectoryName(NormalizedModFolder);
	}

	const FString ModInfoJsonPath = NormalizedModFolder / TEXT("ModInfo.json");
	if (!FPaths::FileExists(ModInfoJsonPath))
	{
		UE_LOG(LogTemp, Warning, TEXT("ModConfigExporter: ModInfo.json not found: %s"), *ModInfoJsonPath);
		return false;
	}

	FString JsonContent;
	if (!FFileHelper::LoadFileToString(JsonContent, *ModInfoJsonPath))
	{
		return false;
	}

	TSharedPtr<FJsonObject> JsonObject;
	const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonContent);
	if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
	{
		return false;
	}

	if (!JsonObject->HasField(TEXT("ModInformationAssetPath")))
	{
		return false;
	}

	const FString ModInformationAssetPath = JsonObject->GetStringField(TEXT("ModInformationAssetPath"));
	if (ModInformationAssetPath.IsEmpty())
	{
		return false;
	}

	UModInformationAsset* ModInfoAsset = Cast<UModInformationAsset>(FSoftObjectPath(ModInformationAssetPath).TryLoad());
	if (!ModInfoAsset)
	{
		return false;
	}

	return ExportFromModInformationAsset(ModInfoAsset, NormalizedModFolder, OutResult, true);
}

bool FModConfigExporter::SyncExportResultToModInfoJson(const FString& ModFolderPath, const FModConfigExportResult& ExportResult,
	const UModInformationAsset* ModInfoAsset)
{
	FString NormalizedModFolder = ModFolderPath;
	FPaths::NormalizeDirectoryName(NormalizedModFolder);
	if (FPaths::IsRelative(NormalizedModFolder))
	{
		NormalizedModFolder = FPaths::ConvertRelativePathToFull(NormalizedModFolder);
		FPaths::NormalizeDirectoryName(NormalizedModFolder);
	}

	const FString ModInfoJsonPath = NormalizedModFolder / TEXT("ModInfo.json");
	TSharedPtr<FJsonObject> JsonObject;

	FString JsonContent;
	if (FFileHelper::LoadFileToString(JsonContent, *ModInfoJsonPath))
	{
		const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonContent);
		if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
		{
			UE_LOG(LogTemp, Warning, TEXT("ModConfigExporter: Failed to parse ModInfo.json: %s"), *ModInfoJsonPath);
			JsonObject.Reset();
		}
	}

	if (!JsonObject.IsValid())
	{
		JsonObject = ModConfigExporterPrivate::CreateDefaultModInfoJsonObject(NormalizedModFolder, ModInfoAsset);
	}

	ApplyExportMetadataToModInfoJson(JsonObject, ExportResult);
	FModConfigExporter::RestoreConfigMetadataFromDiskIfMissing(NormalizedModFolder, JsonObject);
	if (ModInfoAsset)
	{
		JsonObject->SetStringField(TEXT("ModInformationAssetPath"), FSoftObjectPath(ModInfoAsset).ToString());
	}

	FString OutputString;
	const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	if (!FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer))
	{
		UE_LOG(LogTemp, Warning, TEXT("ModConfigExporter: Failed to serialize ModInfo.json"));
		return false;
	}

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	const FString Directory = FPaths::GetPath(ModInfoJsonPath);
	if (!PlatformFile.DirectoryExists(*Directory))
	{
		PlatformFile.CreateDirectoryTree(*Directory);
	}

	if (!FFileHelper::SaveStringToFile(OutputString, *ModInfoJsonPath))
	{
		UE_LOG(LogTemp, Warning, TEXT("ModConfigExporter: Failed to save ModInfo.json: %s"), *ModInfoJsonPath);
		return false;
	}

	UE_LOG(LogTemp, Log, TEXT("ModConfigExporter: Synced %d DataTable(s), %d DataAsset(s) to ModInfo.json"),
		ExportResult.DataTableConfigs.Num(), ExportResult.DataAssetConfigs.Num());
	return true;
}

void FModConfigExporter::ApplyExportMetadataToModInfoJson(const TSharedPtr<FJsonObject>& JsonObject, const FModConfigExportResult& ExportResult)
{
	if (!JsonObject.IsValid())
	{
		return;
	}

	// 导出结果为空时不覆盖已有条目，避免 PreSave/失败导出把 ModInfo 里的 JSON 配置清掉
	if (ExportResult.DataTableConfigs.Num() > 0)
	{
		TArray<TSharedPtr<FJsonValue>> DataTableArray;
		for (const FModConfigJsonEntry& Entry : ExportResult.DataTableConfigs)
		{
			TSharedPtr<FJsonObject> EntryObj = MakeShared<FJsonObject>();
			EntryObj->SetStringField(TEXT("ConfigType"), Entry.ConfigType);
			EntryObj->SetStringField(TEXT("JsonFile"), Entry.JsonFile);
			EntryObj->SetStringField(TEXT("StructName"), Entry.StructName);
			EntryObj->SetBoolField(TEXT("bOverrideData"), Entry.bOverrideData);
			DataTableArray.Add(MakeShared<FJsonValueObject>(EntryObj));
		}
		JsonObject->SetArrayField(TEXT("DataTableConfigs"), DataTableArray);
	}

	if (ExportResult.DataAssetConfigs.Num() > 0)
	{
		TArray<TSharedPtr<FJsonValue>> DataAssetArray;
		for (const FModAssetJsonEntry& Entry : ExportResult.DataAssetConfigs)
		{
			TSharedPtr<FJsonObject> EntryObj = MakeShared<FJsonObject>();
			EntryObj->SetStringField(TEXT("AssetType"), Entry.AssetType);
			EntryObj->SetStringField(TEXT("JsonFile"), Entry.JsonFile);
			EntryObj->SetBoolField(TEXT("bOverrideData"), Entry.bOverrideData);
			DataAssetArray.Add(MakeShared<FJsonValueObject>(EntryObj));
		}
		JsonObject->SetArrayField(TEXT("DataAssetConfigs"), DataAssetArray);
	}
}

void FModConfigExporter::CopyConfigFilesToOutput(const FModConfigExportResult& ExportResult, const FString& OutputDir)
{
	if (!ExportResult.bExportedAny || ExportResult.ModFolderPathAbs.IsEmpty())
	{
		return;
	}

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	auto CopyEntry = [&](const FString& RelativeJsonFile)
	{
		const FString SourceFile = ExportResult.ModFolderPathAbs / RelativeJsonFile;
		const FString DestFile = OutputDir / RelativeJsonFile;
		const FString DestDir = FPaths::GetPath(DestFile);
		if (!DestDir.IsEmpty())
		{
			PlatformFile.CreateDirectoryTree(*DestDir);
		}
		if (FPaths::FileExists(SourceFile) && PlatformFile.CopyFile(*DestFile, *SourceFile))
		{
			UE_LOG(LogTemp, Log, TEXT("ModConfigExporter: Copied config JSON to: %s"), *DestFile);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ModConfigExporter: Failed to copy config JSON from %s to %s"), *SourceFile, *DestFile);
		}
	};

	for (const FModConfigJsonEntry& Entry : ExportResult.DataTableConfigs)
	{
		CopyEntry(Entry.JsonFile);
	}
	for (const FModAssetJsonEntry& Entry : ExportResult.DataAssetConfigs)
	{
		CopyEntry(Entry.JsonFile);
	}
}
