---Interpolates two values over time over and over again
---@class FRigVMFunction_AccumulateFloatLerp : FRigVMFunction_AccumulateBase
---@field public TargetValue number
---@field public InitialValue number
---@field public Blend number
---@field public bIntegrateDeltaTime boolean
---@field public Result number
---@field public AccumulatedValue number
---@field public bIsInitialized boolean
local FRigVMFunction_AccumulateFloatLerp = {}
