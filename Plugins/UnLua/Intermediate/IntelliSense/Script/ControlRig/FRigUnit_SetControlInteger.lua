---SetControlInteger is used to perform a change in the hierarchy by setting a single control's int32 value.
---@class FRigUnit_SetControlInteger : FRigUnitMutable
---@field public Control string @The name of the Control to set the transform for.
---@field public Weight integer @The weight of the change - how much the change should be applied
---@field public IntegerValue integer @The transform value to set for the given Control.
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_SetControlInteger = {}
