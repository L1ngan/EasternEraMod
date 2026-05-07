---@class UTestBTTask_LatentWithFlags : UBTTaskNode
---@field public LogIndexExecuteStart integer
---@field public LogIndexExecuting integer
---@field public LogIndexExecuteFinish integer
---@field public LogIndexAbortStart integer
---@field public LogIndexAborting integer
---@field public LogIndexAbortFinish integer
---@field public ExecuteHalfTicks integer @Num of ticks before 'execute start' and `set execute flag` and then the same num of ticks before `execute finish`
---@field public AbortHalfTicks integer @Num of ticks before 'abort start' and `set abort flag` and then the same num of ticks before `abort finish`
---@field public KeyNameExecute string
---@field public KeyNameAbort string
---@field public ChangeFlagBehavior EBTTestChangeFlagBehavior
---@field public LogResult integer
local UTestBTTask_LatentWithFlags = {}

