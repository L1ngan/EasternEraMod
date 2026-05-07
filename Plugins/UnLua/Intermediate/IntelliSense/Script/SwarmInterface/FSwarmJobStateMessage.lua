---@class FSwarmJobStateMessage
---@field public Guid FGuid @The Job GUID used for identifying the Job
---@field public State integer @The current state and arbitrary message
---@field public Message string
---@field public ExitCode integer @Various stats, including run time, exit codes, etc.
---@field public RunningTime number
local FSwarmJobStateMessage = {}
