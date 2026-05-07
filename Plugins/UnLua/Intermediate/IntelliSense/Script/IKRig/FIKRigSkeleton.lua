---@class FIKRigSkeleton
---@field public BoneNames TArray<string> @Names of bones. Used to match hierarchy with runtime skeleton.
---@field public ParentIndices TArray<integer> @Same length as BoneNames, stores index of parent for each bone.
---@field public ExcludedBones TArray<string> @Sparse array of bones that are to be excluded from any solvers (parented around, treated as FK children).
---@field public CurrentPoseGlobal TArray<FTransform> @The current GLOBAL space pose of each bone.
---@field public CurrentPoseLocal TArray<FTransform> @The current LOCAL space pose of each bone.
---@field public RefPoseGlobal TArray<FTransform> @The initial/reference GLOBAL space pose of each bone.
local FIKRigSkeleton = {}
