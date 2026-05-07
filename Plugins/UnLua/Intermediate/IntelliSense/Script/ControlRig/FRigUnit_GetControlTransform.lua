---GetControlTransform is used to retrieve a single transform from a hierarchy.
---@class FRigUnit_GetControlTransform : FRigUnit
---@field public Control string @The name of the Control to retrieve the transform for.
---@field public Space ERigVMTransformSpace @Defines if the Control's transform should be retrieved in local or global space.
---@field public Transform FTransform @The current value of the control.
---@field public Minimum FTransform @The minimum value of the control.
---@field public Maximum FTransform @The maximum value of the control.
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_GetControlTransform = {}
