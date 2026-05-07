---State change type. Passed to EnterState() and ExitState() to indicate how the state change affects the state and Evaluator or Task is on.
---@class EStateTreeStateChangeType
---@field public None integer
---@field public Changed integer
---@field public Sustained integer
---@field public EStateTreeStateChangeType_MAX integer
local EStateTreeStateChangeType = {}
