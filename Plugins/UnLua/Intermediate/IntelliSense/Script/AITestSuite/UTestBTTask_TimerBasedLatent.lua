---@class UTestBTTask_TimerBasedLatent : UBTTaskNode
---@field public LogIndexExecuteStart integer
---@field public LogIndexExecuteFinish integer
---@field public LogIndexAbortStart integer
---@field public LogIndexAbortFinish integer
---@field public NumTicksExecuting integer @Num of ticks from 'execute start' to 'execute finish'
---@field public NumTicksAborting integer @Num of ticks from 'abort start' to 'abort finish'
---@field public LogResult integer
local UTestBTTask_TimerBasedLatent = {}

