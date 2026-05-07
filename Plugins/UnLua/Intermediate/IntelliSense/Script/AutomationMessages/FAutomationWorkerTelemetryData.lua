---Implements a message that contains telemetry data.
---@class FAutomationWorkerTelemetryData : FAutomationWorkerMessageBase
---@field public Storage string
---@field public Configuration string
---@field public Platform string
---@field public TestName string
---@field public Items TArray<FAutomationWorkerTelemetryItem>
local FAutomationWorkerTelemetryData = {}
