---@class UGameplayTask : UObject
---@field protected InstanceName string @This name allows us to find the task later so that we can end it.
---@field protected ResourceOverlapPolicy ETaskResourceOverlapPolicy
---@field protected ChildTask UGameplayTask @child task instance
local UGameplayTask = {}

---Called to trigger the actual task once the delegates have been set up
function UGameplayTask:ReadyForActivation() end

function UGameplayTask:GenericGameplayTaskDelegate__DelegateSignature() end

---Called explicitly to end the task (usually by the task itself). Calls OnDestroy.
---    @@NOTE: you need to call EndTask before sending out any "on completed" delegates.
---    If you don't the task will still be in an "active" state while the event receivers may
---    assume it's already "finished"
function UGameplayTask:EndTask() end

