---@class FInputComboStepData
---@field public ComboStepAction UInputAction @The action that must be completed (according to Combo Step Completion States) to progress the combo
---@field public ComboStepCompletionStates integer @Trigger events that will complete this step - what events from this action should progress the combo
---@field public TimeToPressKey number @Time to press the key before combo is cancelled - starts once the previous step in the combo is completed Note: This can be safely ignored for the first action in the combo
local FInputComboStepData = {}
