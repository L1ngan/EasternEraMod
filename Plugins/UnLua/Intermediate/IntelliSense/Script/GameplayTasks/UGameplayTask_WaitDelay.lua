---@class UGameplayTask_WaitDelay : UGameplayTask
---@field public OnFinish MulticastDelegate
local UGameplayTask_WaitDelay = {}

---Wait specified time. This is functionally the same as a standard Delay node.
---@param TaskOwner TScriptInterface_UGameplayTaskOwnerInterface_
---@param Time number
---@param Priority integer @[opt] 
---@return UGameplayTask_WaitDelay
function UGameplayTask_WaitDelay.TaskWaitDelay(TaskOwner, Time, Priority) end

function UGameplayTask_WaitDelay:TaskDelayDelegate__DelegateSignature() end

