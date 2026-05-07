---A control unit used to drive a transform from an external source
---@class FRigUnit_Control : FRigUnit
---@field public Transform FEulerTransform @The transform of this control
---@field public Base FTransform @The base that transform is relative to
---@field public InitTransform FTransform @The initial transform that The Transform is initialized to.
---@field public Result FTransform @The resultant transform of this unit (Base * Filter(Transform))
---@field public Filter FTransformFilter @The filter determines what axes can be manipulated by the in-viewport widgets
---@field public bIsInitialized boolean
local FRigUnit_Control = {}
