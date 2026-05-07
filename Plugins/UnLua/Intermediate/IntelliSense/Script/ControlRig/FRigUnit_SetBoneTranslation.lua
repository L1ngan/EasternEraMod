---SetBoneTranslation is used to perform a change in the hierarchy by setting a single bone's Translation.
---@class FRigUnit_SetBoneTranslation : FRigUnitMutable
---@field public Bone string @The name of the Bone to set the Translation for.
---@field public Translation FVector @The Translation value to set for the given Bone.
---@field public Space ERigVMTransformSpace @Defines if the bone's Translation should be set in local or global space.
---@field public Weight number @The weight of the change - how much the change should be applied
---@field public bPropagateToChildren boolean @If set to true all of the global transforms of the children of this bone will be recalculated based on their local transforms. Note: This is computationally more expensive than turning it off.
---@field public CachedBone FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_SetBoneTranslation = {}
