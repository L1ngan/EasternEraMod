---Implements a message that handles both storing and requesting ground truth data.
---for the first time this test is run, it might need to store things, or get things.
---@class FAutomationWorkerTestDataRequest : FAutomationWorkerMessageBase
---@field public DataType string @The category of the data, this is purely to bucket and separate the ground truth data we store into different directories.
---@field public DataPlatform string
---@field public DataTestName string
---@field public DataName string
---@field public JsonData string
local FAutomationWorkerTestDataRequest = {}
