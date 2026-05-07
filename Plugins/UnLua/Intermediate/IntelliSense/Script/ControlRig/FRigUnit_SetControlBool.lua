---SetControlBool is used to perform a change in the hierarchy by setting a single control's bool value.
---@class FRigUnit_SetControlBool : FRigUnitMutable
---@field public Control string @The name of the Control to set the bool for.
---@field public BoolValue boolean @The bool value to set for the given Control.
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_SetControlBool = {}
