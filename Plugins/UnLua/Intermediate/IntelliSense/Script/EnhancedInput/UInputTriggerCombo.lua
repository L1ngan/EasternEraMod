---UInputTriggerCombo
---All actions in the combo array must be completed (based on combo completion event specified - triggered, completed, etc.) to trigger the action this trigger is on.
---Actions must also be completed in the order specified by the combo actions array (starting at index 0).
---Note: This will only trigger for one frame before resetting the combo trigger's progress
---@class UInputTriggerCombo : UInputTrigger
---@field protected CurrentComboStepIndex integer @Keeps track of what action we're currently at in the combo
---@field protected CurrentTimeBetweenComboSteps number @Time elapsed between last combo InputAction trigger and current time
---@field public ComboActions TArray<FInputComboStepData> @List of input actions that need to be completed (according to Combo Step Completion States) to trigger this action. Input actions must be triggered in order (starting at index 0) to count towards the triggering of the combo.
---@field public InputCancelActions TArray<FInputCancelAction> @Actions that will cancel the combo if they are completed (according to Cancellation States)
local UInputTriggerCombo = {}

