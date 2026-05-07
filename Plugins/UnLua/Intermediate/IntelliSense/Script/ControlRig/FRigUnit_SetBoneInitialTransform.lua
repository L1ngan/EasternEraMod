---SetBoneInitialTransform is used to perform a change in the hierarchy by setting a single bone's transform.
---@class FRigUnit_SetBoneInitialTransform : FRigUnitMutable
---@field public Bone string @The name of the Bone to set the transform for.
---@field public Transform FTransform @The transform value to set for the given Bone.
---@field public Result FTransform @The transform value result (after weighting)
---@field public Space ERigVMTransformSpace @Defines if the bone's transform should be set in local or global space.
---@field public bPropagateToChildren boolean @If set to true all of the global transforms of the children of this bone will be recalculated based on their local transforms. Note: This is computationally more expensive than turning it off.
---@field public CachedBone FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_SetBoneInitialTransform = {}
