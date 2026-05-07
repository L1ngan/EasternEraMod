---@class FRuntimePartitionStreamingData
---@field protected Name string @Name of the runtime partition, currently maps to target grids.
---@field protected DebugName string
---@field protected LoadingRange integer
---@field protected SpatiallyLoadedCells TArray<UWorldPartitionRuntimeCell>
---@field protected NonSpatiallyLoadedCells TArray<UWorldPartitionRuntimeCell>
local FRuntimePartitionStreamingData = {}
