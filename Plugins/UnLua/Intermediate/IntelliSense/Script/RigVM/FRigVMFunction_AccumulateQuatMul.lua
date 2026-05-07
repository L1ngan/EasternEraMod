---Multiplies a quaternion over time over and over again
---@class FRigVMFunction_AccumulateQuatMul : FRigVMFunction_AccumulateBase
---@field public Multiplier FQuat
---@field public InitialValue FQuat
---@field public bFlipOrder boolean
---@field public bIntegrateDeltaTime boolean
---@field public Result FQuat
---@field public AccumulatedValue FQuat
---@field public bIsInitialized boolean
local FRigVMFunction_AccumulateQuatMul = {}
