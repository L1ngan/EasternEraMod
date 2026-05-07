---SetControlVector2D is used to perform a change in the hierarchy by setting a single control's Vector2D value.
---@class FRigUnit_SetControlVector2D : FRigUnitMutable
---@field public Control string @The name of the Control to set the transform for.
---@field public Weight number @The weight of the change - how much the change should be applied
---@field public Vector FVector2D @The transform value to set for the given Control.
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_SetControlVector2D = {}
