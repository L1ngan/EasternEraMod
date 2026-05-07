---@class FMassProcessorExecutionOrder
---@field public ExecuteInGroup string @Determines which processing group this processor will be placed in. Leaving it empty ("None") means "top-most group for my ProcessingPhase"
---@field public ExecuteBefore TArray<string>
---@field public ExecuteAfter TArray<string>
local FMassProcessorExecutionOrder = {}
