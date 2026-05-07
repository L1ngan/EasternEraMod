---Input space to World space conversion
---Auto-converts axes within the Input Action Value into world space     allowing the result to be directly plugged into functions that take world space values.
---E.g. For a 2D input axis up/down is mapped to world X (forward), whilst axis left/right is mapped to world Y (right).
---@class UInputModifierToWorldSpace : UInputModifier
local UInputModifierToWorldSpace = {}

