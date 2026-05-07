---@class UAsyncRegisterAndExecuteTask : UBlueprintAsyncActionBase
---@field public OnFinished MulticastDelegate
local UAsyncRegisterAndExecuteTask = {}

---@param Task UEditorUtilityTask
---@param OptionalParentTask UEditorUtilityTask @[opt] 
---@return UAsyncRegisterAndExecuteTask
function UAsyncRegisterAndExecuteTask.RegisterAndExecuteTask(Task, OptionalParentTask) end

