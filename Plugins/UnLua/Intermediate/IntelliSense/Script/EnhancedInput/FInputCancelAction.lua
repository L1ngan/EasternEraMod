---@class FInputCancelAction
---@field public CancelAction UInputAction @The action that must be completed (according to Cancellation States) to cancel the combo
---@field public CancellationStates integer @Trigger events for this action that will cancel the combo - what events from this action should cancel the combo
local FInputCancelAction = {}
