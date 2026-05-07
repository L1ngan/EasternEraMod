---@class FSwarmTaskRequestSpecificationMessage
---@field public TaskGuid FGuid @The GUID used for identifying the Task being referred to
---@field public Parameters string @The Task's parameter string specified with AddTask
---@field public Flags integer @Flags used to control the behavior of the Task, subject to overrides from the containing Job
---@field public Cost integer @The Task's cost, relative to all other Tasks in the same Job, used for even distribution and scheduling
---@field public Dependencies TArray<string> @Any additional Task dependencies
local FSwarmTaskRequestSpecificationMessage = {}
