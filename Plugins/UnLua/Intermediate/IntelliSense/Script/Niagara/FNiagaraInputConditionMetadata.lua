---Defines options for conditionally editing and showing script inputs in the UI.
---@class FNiagaraInputConditionMetadata
---@field public InputName string @The name of the input to use for matching the target values.
---@field public TargetValues TArray<string> @The list of target values which will satisfy the input condition.  If this is empty it's assumed to be a single value of "true" for matching bool inputs.
local FNiagaraInputConditionMetadata = {}
