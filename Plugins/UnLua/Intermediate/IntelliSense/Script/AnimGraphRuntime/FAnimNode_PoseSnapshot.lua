---Provide a snapshot pose, either from the internal named pose cache or via a supplied snapshot
---@class FAnimNode_PoseSnapshot : FAnimNode_Base
---@field public SnapshotName string @The name of the snapshot previously stored with SavePoseSnapshot
---@field public Snapshot FPoseSnapshot @Snapshot to use. This should be populated at first by calling SnapshotPose
---@field public Mode ESnapshotSourceMode @How to access the snapshot
local FAnimNode_PoseSnapshot = {}
