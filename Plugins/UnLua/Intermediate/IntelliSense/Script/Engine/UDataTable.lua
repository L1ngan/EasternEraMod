---Imported spreadsheet table.
---@class UDataTable : UObject
---@field public RowStruct UScriptStruct @Structure to use for each row of the table, must inherit from FTableRowBase
---@field public bStripFromClientBuilds boolean @Set to true to not cook this data table into client builds. Useful for sensitive tables that only servers should know about.
---@field public bIgnoreExtraFields boolean @Set to true to ignore extra fields in the import data, if false it will warn about them
---@field public bIgnoreMissingFields boolean @Set to true to ignore any fields that are expected but missing, if false it will warn about them
---@field public bPreserveExistingValues boolean @Set to true to preserve existing values for any fields that are expected but missing in the CSV file. If false, missing fields will be populated with default values.
---@field public ImportKeyField string @Explicit field in import data to use as key. If this is empty it uses Name for JSON and the first field found for CSV
---@field public AssetImportData UAssetImportData @The file this data table was imported from, may be empty
---@field public RowStructPathName FTopLevelAssetPath @The name of the RowStruct we were using when we were last saved
---@field protected RowsSerializedWithTags TArray<integer> @When RowStruct is being modified, row data is stored serialized with tags
---@field protected TemporarilyReferencedObjects TSet<UObject>
local UDataTable = {}

