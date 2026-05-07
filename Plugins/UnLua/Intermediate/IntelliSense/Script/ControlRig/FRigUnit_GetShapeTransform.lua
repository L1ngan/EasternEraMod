---GetShapeTransform is used to retrieve single control's shape transform.
---This is typically only used during the Construction Event.
---@class FRigUnit_GetShapeTransform : FRigUnit
---@field public Control string @The name of the Control to set the transform for.
---@field public Transform FTransform @The shape transform to set for the control
---@field public CachedControlIndex FCachedRigElement @user to internally cache the index of the bone
local FRigUnit_GetShapeTransform = {}
