---Treats the provided transforms as a chain with global / local transforms, and
---projects each transform into the target space. Optionally you can provide
---a custom parent indices array, with which you can represent more than just chains.
---@class FRigVMFunction_MathTransformAccumulateArray : FRigVMFunction_MathTransformMutableBase
---@field public Transforms TArray<FTransform>
---@field public TargetSpace ERigVMTransformSpace @Defines the space to project to
---@field public Root FTransform @Provides the parent transform for the root
---@field public ParentIndices TArray<integer> @If this array is the same size as the transforms array the indices will be used to look up each transform's parent. They are expected to be in order.
local FRigVMFunction_MathTransformAccumulateArray = {}
