---@class UWorldPartitionConvertOptions : UObject
---@field public CommandletClass TSubclassOf<UWorldPartitionConvertCommandlet>
---@field public bInPlace boolean @Wether the conversion should create a new map with a _WP suffix or overwrite the source map
---@field public bDeleteSourceLevels boolean
---@field public bGenerateIni boolean
---@field public bReportOnly boolean
---@field public bVerbose boolean
---@field public bSkipStableGUIDValidation boolean
---@field public bOnlyMergeSubLevels boolean
---@field public bSaveFoliageTypeToContentFolder boolean
local UWorldPartitionConvertOptions = {}

