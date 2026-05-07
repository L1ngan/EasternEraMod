---Returns an array of transforms from a given hierarchy pose
---@class FRigUnit_PoseGetTransformArray : FRigUnit_HierarchyBase
---@field public Pose FRigPose
---@field public Space ERigVMTransformSpace @Defines if the transform should be retrieved in local or global space
---@field public Valid boolean
---@field public Transforms TArray<FTransform>
local FRigUnit_PoseGetTransformArray = {}
