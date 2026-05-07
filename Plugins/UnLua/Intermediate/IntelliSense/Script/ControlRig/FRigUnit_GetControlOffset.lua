---GetControlOffset is used to perform a change in the hierarchy by setting a single control's transform.
---This is typically only used during the Construction Event.
---@class FRigUnit_GetControlOffset : FRigUnit
---@field public Control string @The name of the Control to set the transform for.
---@field public Space ERigVMTransformSpace @Defines if the transform should be retrieved in local or global space
---@field public OffsetTransform FTransform @The current transform of the given item - or identity in case it wasn't found.
---@field public CachedIndex FCachedRigElement @Used to cache the internally used index
local FRigUnit_GetControlOffset = {}
