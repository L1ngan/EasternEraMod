---@class AWorldPartitionHLOD : AActor
---@field private SourceActors UWorldPartitionHLODSourceActors
---@field private InputStats FHLODBuildInputStats
---@field private HLODBounds FBox
---@field private MinVisibleDistance number
---@field private HLODHash integer
---@field private HLODStats TMap<string, integer>
---@field private LODLevel integer
---@field private bRequireWarmup boolean
---@field private SourceCellGuid FGuid
---@field private StandaloneHLODGuid FGuid
local AWorldPartitionHLOD = {}

