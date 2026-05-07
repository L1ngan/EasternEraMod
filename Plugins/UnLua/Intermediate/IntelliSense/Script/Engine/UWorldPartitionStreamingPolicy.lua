---@class UWorldPartitionStreamingPolicy : UObject
---@field private CurrentState FWorldPartitionUpdateStreamingCurrentState @Current streaming state
---@field private CurrentStreamingPerformance EWorldPartitionStreamingPerformance @Current streaming performance
---@field private bCurrentBlockOnSlowStreaming boolean @Current block on slow streaming
---@field private TargetState FWorldPartitionUpdateStreamingTargetState @Target state
---@field private AsyncTaskCurrentState FWorldPartitionUpdateStreamingCurrentState @Asynchronous update task input payload
---@field private AsyncTaskTargetState FWorldPartitionUpdateStreamingTargetState @Asynchronous update task output payload
---@field private bShouldMergeStreamingSourceInfo boolean
local UWorldPartitionStreamingPolicy = {}

