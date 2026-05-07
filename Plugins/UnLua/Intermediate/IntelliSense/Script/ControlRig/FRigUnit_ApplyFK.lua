---@class FRigUnit_ApplyFK : FRigUnitMutable
---@field public Joint string
---@field public Transform FTransform
---@field public Filter FTransformFilter @The filter determines what axes can be manipulated by the in-viewport widgets
---@field public ApplyTransformMode EApplyTransformMode
---@field public ApplyTransformSpace ETransformSpaceMode
---@field public BaseTransform FTransform @Transform op option. Use if ETransformSpace is BaseTransform
---@field public BaseJoint string @Transform op option. Use if ETransformSpace is BaseJoint
local FRigUnit_ApplyFK = {}
