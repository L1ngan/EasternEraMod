---Rules for when a sync point's task will be activated/dispatched during a frame. Execution will also need to wait on any task dependencies
---@class ESyncPointActivationRules
---@field public Invalid integer
---@field public AlwaysActivate integer
---@field public WaitForTrigger integer
---@field public WaitForAllWork integer
---@field public ActivateForAnyWork integer
---@field public ESyncPointActivationRules_MAX integer
local ESyncPointActivationRules = {}
