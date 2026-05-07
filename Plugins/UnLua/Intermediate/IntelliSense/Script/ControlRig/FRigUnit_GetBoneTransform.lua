---GetBoneTransform is used to retrieve a single transform from a hierarchy.
---@class FRigUnit_GetBoneTransform : FRigUnit
---@field public Bone string @The name of the Bone to retrieve the transform for.
---@field public Space ERigVMTransformSpace @Defines if the bone's transform should be retrieved in local or global space.
---@field public Transform FTransform @The current transform of the given bone - or identity in case it wasn't found.
---@field public CachedBone FCachedRigElement @Used to cache the internally used bone index
---@field public bFirstUpdate boolean @Used to force first update to return initial pose
local FRigUnit_GetBoneTransform = {}
