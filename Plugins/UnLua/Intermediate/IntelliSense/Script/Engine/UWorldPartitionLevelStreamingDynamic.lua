---@class UWorldPartitionLevelStreamingDynamic : ULevelStreamingDynamic
---@field private RuntimeLevel ULevel
---@field private bShouldBeAlwaysLoaded boolean
---@field private bShouldPerformStandardLevelLoading boolean
---@field private UnsavedActorsContainer UActorContainer
---@field private StreamingCell TWeakObjectPtr<UWorldPartitionRuntimeLevelStreamingCell>
---@field private OuterWorldPartition TSoftObjectPtr<UWorldPartition>
local UWorldPartitionLevelStreamingDynamic = {}

