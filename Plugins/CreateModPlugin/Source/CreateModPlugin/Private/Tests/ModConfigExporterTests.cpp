#include "ModConfigExporter.h"

#include "BaseDataStruct.h"
#include "Dom/JsonObject.h"
#include "HAL/FileManager.h"
#include "Misc/AutomationTest.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"

#if WITH_DEV_AUTOMATION_TESTS

namespace ModConfigExporterTests
{
static TArray<TSharedPtr<FJsonValue>> MakeEntryArray(const FString& Key, const FString& Value)
{
	TSharedPtr<FJsonObject> Entry = MakeShared<FJsonObject>();
	Entry->SetStringField(Key, Value);
	return { MakeShared<FJsonValueObject>(Entry) };
}

static int32 GetArraySize(const TSharedPtr<FJsonObject>& JsonObject, const FString& FieldName)
{
	const TArray<TSharedPtr<FJsonValue>>* Array = nullptr;
	return JsonObject->TryGetArrayField(FieldName, Array) && Array ? Array->Num() : INDEX_NONE;
}

static bool SaveJsonObject(const TSharedPtr<FJsonObject>& JsonObject, const FString& FilePath)
{
	FString Output;
	const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Output);
	return FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer)
		&& FFileHelper::SaveStringToFile(Output, *FilePath);
}

static TSharedPtr<FJsonObject> LoadJsonObject(const FString& FilePath)
{
	FString Content;
	if (!FFileHelper::LoadFileToString(Content, *FilePath))
	{
		return nullptr;
	}

	TSharedPtr<FJsonObject> JsonObject;
	const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Content);
	return FJsonSerializer::Deserialize(Reader, JsonObject) ? JsonObject : nullptr;
}

static FString PrepareTestDirectory(const FString& TestName)
{
	const FString TestDirectory = FPaths::ConvertRelativePathToFull(
		FPaths::ProjectIntermediateDir() / TEXT("Automation/CreateModPlugin/ModConfigExporter") / TestName);
	IFileManager::Get().DeleteDirectory(*TestDirectory, false, true);
	IFileManager::Get().MakeDirectory(*(TestDirectory / TEXT("Config")), true);
	return TestDirectory;
}

static void CleanupTestDirectory(const FString& TestDirectory)
{
	IFileManager::Get().DeleteDirectory(*TestDirectory, false, true);
}
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FModConfigExporterApplyMetadataTest,
	"CreateModPlugin.ModConfigExporter.ApplyMetadata",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FModConfigExporterApplyMetadataTest::RunTest(const FString& Parameters)
{
	TSharedPtr<FJsonObject> JsonObject = MakeShared<FJsonObject>();
	JsonObject->SetArrayField(TEXT("DataTableConfigs"),
		ModConfigExporterTests::MakeEntryArray(TEXT("ConfigType"), TEXT("OldTable")));
	JsonObject->SetArrayField(TEXT("DataAssetConfigs"),
		ModConfigExporterTests::MakeEntryArray(TEXT("AssetType"), TEXT("OldAsset")));

	FModConfigExportResult DefaultEmptyResult;
	FModConfigExporter::ApplyExportMetadataToModInfoJson(JsonObject, DefaultEmptyResult);
	TestEqual(TEXT("A default empty result preserves DataTableConfigs"),
		ModConfigExporterTests::GetArraySize(JsonObject, TEXT("DataTableConfigs")), 1);
	TestEqual(TEXT("A default empty result preserves DataAssetConfigs"),
		ModConfigExporterTests::GetArraySize(JsonObject, TEXT("DataAssetConfigs")), 1);

	FModConfigExportResult AuthoritativeEmptyResult;
	AuthoritativeEmptyResult.bCanClearDataTableConfigs = true;
	AuthoritativeEmptyResult.bCanClearDataAssetConfigs = true;
	FModConfigExporter::ApplyExportMetadataToModInfoJson(JsonObject, AuthoritativeEmptyResult);
	TestEqual(TEXT("An authoritative empty result clears DataTableConfigs"),
		ModConfigExporterTests::GetArraySize(JsonObject, TEXT("DataTableConfigs")), 0);
	TestEqual(TEXT("An authoritative empty result clears DataAssetConfigs"),
		ModConfigExporterTests::GetArraySize(JsonObject, TEXT("DataAssetConfigs")), 0);

	FModConfigExportResult ReplacementResult;
	FModConfigJsonEntry TableEntry;
	TableEntry.ConfigType = TEXT("NewTable");
	TableEntry.JsonFile = TEXT("Config/NewTable.json");
	ReplacementResult.DataTableConfigs.Add(TableEntry);
	FModAssetJsonEntry AssetEntry;
	AssetEntry.AssetType = TEXT("NewAsset");
	AssetEntry.JsonFile = TEXT("Config/NewAsset.json");
	ReplacementResult.DataAssetConfigs.Add(AssetEntry);
	FModConfigExporter::ApplyExportMetadataToModInfoJson(JsonObject, ReplacementResult);
	TestEqual(TEXT("A non-empty result replaces DataTableConfigs"),
		ModConfigExporterTests::GetArraySize(JsonObject, TEXT("DataTableConfigs")), 1);
	TestEqual(TEXT("A non-empty result replaces DataAssetConfigs"),
		ModConfigExporterTests::GetArraySize(JsonObject, TEXT("DataAssetConfigs")), 1);

	const TArray<TSharedPtr<FJsonValue>>* AssetArray = nullptr;
	if (JsonObject->TryGetArrayField(TEXT("DataAssetConfigs"), AssetArray) && AssetArray && AssetArray->Num() == 1)
	{
		TestEqual(TEXT("The replacement entry is current"),
			(*AssetArray)[0]->AsObject()->GetStringField(TEXT("AssetType")), FString(TEXT("NewAsset")));
	}

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FModConfigExporterRestoreMetadataTest,
	"CreateModPlugin.ModConfigExporter.RestoreMetadata",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FModConfigExporterRestoreMetadataTest::RunTest(const FString& Parameters)
{
	using namespace ModConfigExporterTests;
	const FString TestDirectory = PrepareTestDirectory(TEXT("RestoreMetadata"));
	const FString ConfigDirectory = TestDirectory / TEXT("Config");

	TestTrue(TEXT("The DataAsset fixture is written"), FFileHelper::SaveStringToFile(
		TEXT("{\"AssetClass\":\"/Script/Engine.DataAsset\"}"),
		*(ConfigDirectory / TEXT("NewGameConfiguration.json"))));
	TestTrue(TEXT("The DataTable fixture is written"), FFileHelper::SaveStringToFile(
		TEXT("{\"StructName\":\"/Script/Engine.TableRowBase\",\"Rows\":{}}"),
		*(ConfigDirectory / TEXT("CharacterConfig.json"))));

	TSharedPtr<FJsonObject> ExplicitEmptyJson = MakeShared<FJsonObject>();
	ExplicitEmptyJson->SetArrayField(TEXT("DataTableConfigs"), TArray<TSharedPtr<FJsonValue>>());
	ExplicitEmptyJson->SetArrayField(TEXT("DataAssetConfigs"), TArray<TSharedPtr<FJsonValue>>());
	FModConfigExporter::RestoreConfigMetadataFromDiskIfMissing(TestDirectory, ExplicitEmptyJson);
	TestEqual(TEXT("An explicit empty DataTableConfigs array is authoritative"),
		GetArraySize(ExplicitEmptyJson, TEXT("DataTableConfigs")), 0);
	TestEqual(TEXT("An explicit empty DataAssetConfigs array is authoritative"),
		GetArraySize(ExplicitEmptyJson, TEXT("DataAssetConfigs")), 0);

	TSharedPtr<FJsonObject> MissingFieldsJson = MakeShared<FJsonObject>();
	FModConfigExporter::RestoreConfigMetadataFromDiskIfMissing(TestDirectory, MissingFieldsJson);
	TestEqual(TEXT("A missing DataTableConfigs field is restored"),
		GetArraySize(MissingFieldsJson, TEXT("DataTableConfigs")), 1);
	TestEqual(TEXT("A missing DataAssetConfigs field is restored"),
		GetArraySize(MissingFieldsJson, TEXT("DataAssetConfigs")), 1);

	CleanupTestDirectory(TestDirectory);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FModConfigExporterEmptyAssetSyncTest,
	"CreateModPlugin.ModConfigExporter.EmptyAssetSync",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FModConfigExporterEmptyAssetSyncTest::RunTest(const FString& Parameters)
{
	using namespace ModConfigExporterTests;
	const FString TestDirectory = PrepareTestDirectory(TEXT("EmptyAssetSync"));
	const FString ModInfoPath = TestDirectory / TEXT("ModInfo.json");

	TSharedPtr<FJsonObject> ExistingModInfo = MakeShared<FJsonObject>();
	ExistingModInfo->SetStringField(TEXT("ModId"), TEXT("EmptyAssetSync"));
	ExistingModInfo->SetArrayField(TEXT("DataTableConfigs"),
		MakeEntryArray(TEXT("ConfigType"), TEXT("OldTable")));
	ExistingModInfo->SetArrayField(TEXT("DataAssetConfigs"),
		MakeEntryArray(TEXT("AssetType"), TEXT("NewGameConfiguration")));
	TestTrue(TEXT("The initial ModInfo.json is written"), SaveJsonObject(ExistingModInfo, ModInfoPath));
	TestTrue(TEXT("The stale Config file is written"), FFileHelper::SaveStringToFile(
		TEXT("{\"AssetClass\":\"/Script/Engine.DataAsset\"}"),
		*(TestDirectory / TEXT("Config/NewGameConfiguration.json"))));

	UModInformationAsset* ModInfoAsset = NewObject<UModInformationAsset>();
	FModConfigExportResult ExportResult;
	FModConfigExporter::ExportFromModInformationAsset(ModInfoAsset, TestDirectory, ExportResult, true);
	TestTrue(TEXT("An empty DataTables list can clear old metadata"), ExportResult.bCanClearDataTableConfigs);
	TestTrue(TEXT("An empty DataAssets list can clear old metadata"), ExportResult.bCanClearDataAssetConfigs);

	const TSharedPtr<FJsonObject> UpdatedModInfo = LoadJsonObject(ModInfoPath);
	TestTrue(TEXT("The updated ModInfo.json can be read"), UpdatedModInfo.IsValid());
	if (UpdatedModInfo.IsValid())
	{
		TestEqual(TEXT("Saving an empty DataTables list clears its old metadata"),
			GetArraySize(UpdatedModInfo, TEXT("DataTableConfigs")), 0);
		TestEqual(TEXT("Saving an empty DataAssets list clears its old metadata"),
			GetArraySize(UpdatedModInfo, TEXT("DataAssetConfigs")), 0);
	}

	CleanupTestDirectory(TestDirectory);
	return true;
}

#endif
