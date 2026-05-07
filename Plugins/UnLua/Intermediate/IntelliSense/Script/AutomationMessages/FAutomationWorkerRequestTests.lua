---Implements a message for requesting available automation tests from a worker.
---@class FAutomationWorkerRequestTests : FAutomationWorkerMessageBase
---@field public DeveloperDirectoryIncluded boolean @Holds a flag indicating whether the developer directory should be included.
---@field public RequestedTestFlags integer @Holds a flag indicating which tests we'd like to request.
local FAutomationWorkerRequestTests = {}
