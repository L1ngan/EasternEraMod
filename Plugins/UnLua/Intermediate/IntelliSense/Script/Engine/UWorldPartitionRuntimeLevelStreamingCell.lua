---@class UWorldPartitionRuntimeLevelStreamingCell : UWorldPartitionRuntimeCell
---@field private Packages TArray<FWorldPartitionRuntimeCellObjectMapping>
---@field private LevelStreaming UWorldPartitionLevelStreamingDynamic
local UWorldPartitionRuntimeLevelStreamingCell = {}

function UWorldPartitionRuntimeLevelStreamingCell:OnLevelShown() end

function UWorldPartitionRuntimeLevelStreamingCell:OnLevelHidden() end

