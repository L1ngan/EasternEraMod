---UWorldPartitionSubsystem
---@class UWorldPartitionSubsystem : UTickableWorldSubsystem
local UWorldPartitionSubsystem = {}

---@param QueryState EWorldPartitionRuntimeCellState
---@param QuerySources TArray_FWorldPartitionStreamingQuerySource_
---@param bExactState boolean
---@return boolean
function UWorldPartitionSubsystem:IsStreamingCompleted(QueryState, QuerySources, bExactState) end

---Returns true if world partition is done streaming levels, adding them to the world or removing them from the world.
---@return boolean
function UWorldPartitionSubsystem:IsAllStreamingCompleted() end

