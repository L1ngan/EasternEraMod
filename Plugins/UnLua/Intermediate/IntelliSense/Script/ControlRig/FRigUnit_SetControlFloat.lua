---SetControlFloat is used to perform a change in the hierarchy by setting a single control's float value.
---@class FRigUnit_SetControlFloat : FRigUnitMutable
---@field public Control string @The name of the Control to set the transform for.
---@field public Weight number @The weight of the change - how much the change should be applied
---@field public FloatValue number @The transform value to set for the given Control.
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used control index
local FRigUnit_SetControlFloat = {}
