---@class UImportAssetsCommandlet : UCommandlet
---@field private GlobalImportData UAutomatedAssetImportData @Settings used when an import settings file is not used or as a base to fallback on if settings are not overridden by the file
---@field private ImportDataList TArray<UAutomatedAssetImportData> @List of import data to import.  Each element in the list represents a list of assets using the same import settings
local UImportAssetsCommandlet = {}

