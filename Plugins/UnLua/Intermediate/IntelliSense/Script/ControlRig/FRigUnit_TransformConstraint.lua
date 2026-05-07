---@class FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
---@field public Bone string
---@field public BaseTransformSpace ETransformSpaceMode
---@field public BaseTransform FTransform @Transform op option. Use if ETransformSpace is BaseTransform
---@field public BaseBone string @Transform op option. Use if ETransformSpace is BaseJoint
---@field public Targets TArray<FConstraintTarget>
---@field public bUseInitialTransforms boolean @If checked the initial transform will be used for the constraint data
---@field private WorkData FRigUnit_TransformConstraint_WorkData
local FRigUnit_TransformConstraint = {}
