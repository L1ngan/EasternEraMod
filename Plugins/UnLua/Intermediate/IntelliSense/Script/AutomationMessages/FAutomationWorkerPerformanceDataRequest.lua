---Implements a message to request the performance data for this hardware.
---@class FAutomationWorkerPerformanceDataRequest : FAutomationWorkerMessageBase
---@field public Platform string
---@field public Hardware string
---@field public TestName string
---@field public DataPoints TArray<number>
local FAutomationWorkerPerformanceDataRequest = {}
