---Base class for building modifiers.
---@class UInputModifier : UObject
local UInputModifier = {}

---ModifyRaw
---Will be called by each modifier in the modifier chain
---@param PlayerInput UEnhancedPlayerInput
---@param CurrentValue FInputActionValue
---@param DeltaTime number
---@return FInputActionValue
function UInputModifier:ModifyRaw(PlayerInput, CurrentValue, DeltaTime) end

---Helper to allow debug visualization of the modifier.
---@param SampleValue FInputActionValue
---@param FinalValue FInputActionValue
---@return FLinearColor
function UInputModifier:GetVisualizationColor(SampleValue, FinalValue) end

