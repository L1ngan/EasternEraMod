---Interpolates two transforms over time over and over again
---@class FRigVMFunction_AccumulateTransformLerp : FRigVMFunction_AccumulateBase
---@field public TargetValue FTransform
---@field public InitialValue FTransform
---@field public Blend number
---@field public bIntegrateDeltaTime boolean
---@field public Result FTransform
---@field public AccumulatedValue FTransform
---@field public bIsInitialized boolean
local FRigVMFunction_AccumulateTransformLerp = {}
