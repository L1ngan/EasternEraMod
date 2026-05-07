---Base class for managing gameplay tasks
---Since AITask doesn't have any kind of success/failed results, default implemenation will only return EBTNode::Succeeded
---In your ExecuteTask:
---- use NewBTAITask() helper to create task
---- initialize task with values if needed
---- use StartGameplayTask() helper to execute and get node result
---@class UBTTask_GameplayTaskBase : UBTTaskNode
---@field protected bWaitForGameplayTask FValueOrBBKey_Bool @if set, behavior tree task will wait until gameplay tasks finishes
local UBTTask_GameplayTaskBase = {}

