---SetControlRotator is used to perform a change in the hierarchy by setting a single control's Rotator value.
---@class FRigUnit_SetControlRotator : FRigUnitMutable
---@field public Control string @The name of the Control to set the transform for.
---@field public Weight number @The weight of the change - how much the change should be applied
---@field public Rotator FRotator @The transform value to set for the given Control.
---@field public Space ERigVMTransformSpace @Defines if the bone's transform should be set in local or global space.
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_SetControlRotator = {}
