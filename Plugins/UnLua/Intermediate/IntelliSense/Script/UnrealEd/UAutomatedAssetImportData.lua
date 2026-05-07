---Contains data for a group of assets to import
---@class UAutomatedAssetImportData : UObject
---@field public GroupName string @Display name of the group. This is for logging purposes only.
---@field public Filenames TArray<string> @Filenames to import
---@field public DestinationPath string @Content path in the projects content directory where assets will be imported
---@field public FactoryName string @Name of the factory to use when importing these assets. If not specified the factory type will be auto detected
---@field public bReplaceExisting boolean @Whether or not to replace existing assets
---@field public bSkipReadOnly boolean @Whether or not to skip importing over read only assets that could not be checked out
---@field public Factory UFactory @Pointer to the factory currently being used
---@field public LevelToLoad string @Full path to level to load before importing this group (only matters if importing assets into a level)
local UAutomatedAssetImportData = {}

