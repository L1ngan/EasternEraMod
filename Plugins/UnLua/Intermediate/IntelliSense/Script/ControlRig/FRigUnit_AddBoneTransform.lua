---Offset Transform is used to perform a change in the hierarchy by setting a single bone's transform.
---@class FRigUnit_AddBoneTransform : FRigUnitMutable
---@field public Bone string @The name of the Bone to set the transform for.
---@field public Transform FTransform @The transform value to set for the given Bone.
---@field public Weight number @The weight of the change - how much the change should be applied
---@field public bPostMultiply boolean @If set to true the transform will be post multiplied, otherwise pre multiplied. Post multiplying means that the transform is understood as a parent space change, while pre multiplying means that the transform is understood as a child space change.
---@field public bPropagateToChildren boolean @If set to true all of the global transforms of the children of this bone will be recalculated based on their local transforms. Note: This is computationally more expensive than turning it off.
---@field public CachedBone FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_AddBoneTransform = {}
