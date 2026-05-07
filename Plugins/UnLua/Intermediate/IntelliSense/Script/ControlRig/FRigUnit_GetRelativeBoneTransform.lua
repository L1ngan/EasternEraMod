---GetBoneTransform is used to retrieve a single transform from a hierarchy.
---@class FRigUnit_GetRelativeBoneTransform : FRigUnit
---@field public Bone string @The name of the Bone to retrieve the transform for.
---@field public Space string @The name of the Bone to retrieve the transform relative within.
---@field public Transform FTransform @The current transform of the given bone - or identity in case it wasn't found.
---@field public CachedBone FCachedRigElement @Used to cache the internally used bone index
---@field public CachedSpace FCachedRigElement @Used to cache the internally used space index
local FRigUnit_GetRelativeBoneTransform = {}
