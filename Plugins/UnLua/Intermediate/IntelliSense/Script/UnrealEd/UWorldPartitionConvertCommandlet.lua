---@class UWorldPartitionConvertCommandlet : UCommandlet
---@field protected EditorHashClass TSubclassOf<UWorldPartitionEditorHash>
---@field protected RuntimeHashClass TSubclassOf<UWorldPartitionRuntimeHash>
---@field protected ExcludedLevels TArray<string> @Levels excluded from conversion.
---@field protected bConvertActorsNotReferencedByLevelScript boolean
---@field protected WorldOrigin FVector
---@field protected WorldExtent FVector
---@field protected DefaultHLODLayerAsset FTopLevelAssetPath
---@field protected FoliageTypePath string
---@field protected HLODLayersForActorClasses TArray<FHLODLayerActorMapping>
---@field protected LandscapeGridSize integer
---@field protected DataLayerAssetFolder string
---@field protected DataLayerFactory UDataLayerFactory
local UWorldPartitionConvertCommandlet = {}

