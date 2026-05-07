---@class FSwarmTaskStateMessage
---@field public Guid FGuid @The Task GUID used for identifying the Task
---@field public State integer @The current state and arbitrary message
---@field public Message string
---@field public ExitCode integer @Various stats, including run time, exit codes, etc.
---@field public RunningTime number
local FSwarmTaskStateMessage = {}
