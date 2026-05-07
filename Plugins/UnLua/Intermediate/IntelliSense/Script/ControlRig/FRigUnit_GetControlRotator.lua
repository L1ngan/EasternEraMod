---GetControlRotator is used to retrieve a single Rotator from a hierarchy.
---@class FRigUnit_GetControlRotator : FRigUnit
---@field public Control string @The name of the Control to retrieve the Rotator for.
---@field public Space ERigVMTransformSpace @Defines if the Control's Rotator should be retrieved in local or global space.
---@field public Rotator FRotator @The current value of the control.
---@field public Minimum FRotator @The minimum value of the control.
---@field public Maximum FRotator @The maximum value of the control.
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_GetControlRotator = {}
