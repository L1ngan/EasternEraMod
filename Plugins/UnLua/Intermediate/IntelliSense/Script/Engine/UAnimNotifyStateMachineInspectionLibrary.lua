---A library of commonly used functionality for Notifies related to state machines, exposed to blueprint.
---@class UAnimNotifyStateMachineInspectionLibrary : UBlueprintFunctionLibrary
local UAnimNotifyStateMachineInspectionLibrary = {}

---Get whether the notify was triggered from the specified state machine
---@param EventReference FAnimNotifyEventReference
---@param AnimInstance UAnimInstance
---@param StateMachineName string
---@return boolean
function UAnimNotifyStateMachineInspectionLibrary.IsTriggeredByStateMachine(EventReference, AnimInstance, StateMachineName) end

---Get whether a particular state in a specific state machine triggered the notify
---@param EventReference FAnimNotifyEventReference
---@param AnimInstance UAnimInstance
---@param StateMachineName string
---@param StateName string
---@return boolean
function UAnimNotifyStateMachineInspectionLibrary.IsTriggeredByStateInStateMachine(EventReference, AnimInstance, StateMachineName, StateName) end

---Get whether a state with the given name in any state machine triggered the notify
---@param EventReference FAnimNotifyEventReference
---@param AnimInstance UAnimInstance
---@param StateName string
---@return boolean
function UAnimNotifyStateMachineInspectionLibrary.IsTriggeredByState(EventReference, AnimInstance, StateName) end

