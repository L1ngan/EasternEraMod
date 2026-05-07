---@class UWorldPartitionEditorSettings : UDeveloperSettings
---@field public CommandletClass TSubclassOf<UWorldPartitionConvertCommandlet> @Commandlet class to use for World Partition conversion
---@field public InstancedFoliageGridSize integer @Editor grid size used for instance foliage actors in World Partition worlds
---@field public MinimapLowQualityWorldUnitsPerPixelThreshold integer @Threshold from which minimap generates a warning if its WorldUnitsPerPixel is above this value
---@field public bEnableLoadingInEditor boolean @Whether to enable dynamic loading in the editor through loading regions
---@field public bEnableStreamingGenerationLogOnPIE boolean @Whether to enable streaming generation log on PIE
---@field public bShowHLODsInEditor boolean @Whether to show HLODs in the editor
---@field public bShowHLODsOverLoadedRegions boolean @Control display of HLODs in case actors are loaded
---@field public bEnableAdvancedHLODSettings boolean @Enable advanced HLODs settings
---@field public HLODMinDrawDistance number @Minimum distance at which HLODs should be displayed in editor
---@field public HLODMaxDrawDistance number @Maximum distance at which HLODs should be displayed in editor
local UWorldPartitionEditorSettings = {}

