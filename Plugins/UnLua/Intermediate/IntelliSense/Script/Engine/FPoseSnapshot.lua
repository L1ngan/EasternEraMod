---A pose for a skeletal mesh
---@class FPoseSnapshot
---@field public LocalTransforms TArray<FTransform> @Array of transforms per-bone
---@field public BoneNames TArray<string> @Array of bone names (corresponding to LocalTransforms)
---@field public SkeletalMeshName string @The name of the skeletal mesh that was used to take this snapshot
---@field public SnapshotName string @The name for this snapshot
---@field public bIsValid boolean @Whether the pose is valid
local FPoseSnapshot = {}
