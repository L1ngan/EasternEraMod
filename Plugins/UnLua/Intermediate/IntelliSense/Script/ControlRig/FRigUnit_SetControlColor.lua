---SetControlColor is used to change the control's color
---@class FRigUnit_SetControlColor : FRigUnitMutable
---@field public Control string @The name of the Control to set the color for.
---@field public Color FLinearColor @The color to set for the control
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_SetControlColor = {}
