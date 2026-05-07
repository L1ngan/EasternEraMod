---GetControlTransform is used to retrieve a single transform from a hierarchy.
---@class FRigUnit_GetControlInitialTransform : FRigUnit
---@field public Control string @The name of the Control to retrieve the transform for.
---@field public Space ERigVMTransformSpace @Defines if the Control's transform should be retrieved in local or global space.
---@field public Transform FTransform @The current transform of the given bone - or identity in case it wasn't found.
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_GetControlInitialTransform = {}
