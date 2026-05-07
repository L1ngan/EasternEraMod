---@class UHierarchicalLODSettings : UDeveloperSettings
---@field public bForceSettingsInAllMaps boolean @If enabled will force the project set HLOD level settings to be used across all levels in the project when Building Clusters
---@field public bSaveLODActorsToHLODPackages boolean @If enabled, will save LOD actors descriptions in the HLOD packages
---@field public DefaultSetup TSoftClassPtr<UHierarchicalLODSetup> @When set in combination with
---@field public DirectoriesForHLODCommandlet TArray<FDirectoryPath>
---@field public MapsToBuild TArray<FFilePath>
---@field public BaseMaterial TSoftObjectPtr<UMaterialInterface> @Base material used for creating a Constant Material Instance as the Proxy Material
local UHierarchicalLODSettings = {}

