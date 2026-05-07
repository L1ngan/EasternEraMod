---GetSpaceTransform is used to retrieve a single transform from a hierarchy.
---@class FRigUnit_GetSpaceTransform : FRigUnit
---@field public Space string @The name of the Space to retrieve the transform for.
---@field public SpaceType ERigVMTransformSpace @Defines if the Space's transform should be retrieved in local or global space.
---@field public Transform FTransform @The current transform of the given bone - or identity in case it wasn't found.
---@field public CachedSpaceIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_GetSpaceTransform = {}
