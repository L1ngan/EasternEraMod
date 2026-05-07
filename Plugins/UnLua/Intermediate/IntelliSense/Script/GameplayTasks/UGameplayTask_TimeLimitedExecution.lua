---Adds time limit for running a child task
---- child task needs to be created with UGameplayTask_TimeLimitedExecution passed as TaskOwner
---- activations are tied together and when either UGameplayTask_TimeLimitedExecution or child task is activated, other one starts as well
---- OnFinished and OnTimeExpired are mutually exclusive
---@class UGameplayTask_TimeLimitedExecution : UGameplayTask
---@field public OnFinished MulticastDelegate @called when child task finishes execution before time runs out
---@field public OnTimeExpired MulticastDelegate @called when time runs out
local UGameplayTask_TimeLimitedExecution = {}

function UGameplayTask_TimeLimitedExecution:TaskFinishDelegate__DelegateSignature() end

