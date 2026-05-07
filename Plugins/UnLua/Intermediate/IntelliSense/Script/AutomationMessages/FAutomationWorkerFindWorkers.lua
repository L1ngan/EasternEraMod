---Implements a message that is published to find automation workers.
---@class FAutomationWorkerFindWorkers : FAutomationWorkerMessageBase
---@field public Changelist integer @Holds the change list number to find workers for.
---@field public GameName string @The name of the game.
---@field public ProcessName string @The name of the process.
---@field public SessionId FGuid @Holds the session identifier to find workers for.
local FAutomationWorkerFindWorkers = {}
