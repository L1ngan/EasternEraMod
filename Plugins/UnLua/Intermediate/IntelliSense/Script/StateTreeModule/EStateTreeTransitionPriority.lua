---Transition priority. When multiple transitions trigger at the same time, the first transition of highest priority is selected.
---@class EStateTreeTransitionPriority
---@field public None integer
---@field public Low integer
---@field public Normal integer
---@field public Medium integer
---@field public High integer
---@field public Critical integer
---@field public EStateTreeTransitionPriority_MAX integer
local EStateTreeTransitionPriority = {}
