---Multiplies a transform over time over and over again
---@class FRigVMFunction_AccumulateTransformMul : FRigVMFunction_AccumulateBase
---@field public Multiplier FTransform
---@field public InitialValue FTransform
---@field public bFlipOrder boolean
---@field public bIntegrateDeltaTime boolean
---@field public Result FTransform
---@field public AccumulatedValue FTransform
---@field public bIsInitialized boolean
local FRigVMFunction_AccumulateTransformMul = {}
