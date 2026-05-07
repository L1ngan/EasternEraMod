---@class FStateTreeDelayTaskInstanceData
---@field public Duration number @Delay before the task ends.
---@field public RandomDeviation number @Adds random range to the Duration.
---@field public bRunForever boolean @If true the task will run forever until a transition stops it.
local FStateTreeDelayTaskInstanceData = {}
