---@class FRigUnit_GetJointTransform : FRigUnitMutable
---@field public Joint string
---@field public Type ETransformGetterType
---@field public TransformSpace ETransformSpaceMode
---@field public BaseTransform FTransform @Transform op option. Use if ETransformSpace is BaseTransform
---@field public BaseJoint string @Transform op option. Use if ETransformSpace is BaseJoint
---@field public Output FTransform @possibly space, relative transform so on can be input
local FRigUnit_GetJointTransform = {}
