---Normalized Smooth Delta
---Produces a smoothed normalized delta of the current(new) and last(old) input value.
---Boolean input values will be returned as is.
---@class UInputModifierSmoothDelta : UInputModifier
---@field public SmoothingMethod ENormalizeInputSmoothingType
---@field public Speed number @Speed, or Alpha. If the speed given is 0, then jump to the target.
---@field public EasingExponent number @For ease functions, this controls the degree of the curve. This only affects the Interp_Ease_In, Interp_Ease_Out, and Interp_Ease_In_Out smoothing methods
local UInputModifierSmoothDelta = {}

