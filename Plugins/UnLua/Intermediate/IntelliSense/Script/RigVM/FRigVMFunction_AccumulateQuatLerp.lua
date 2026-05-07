---Interpolates two quaternions over time over and over again
---@class FRigVMFunction_AccumulateQuatLerp : FRigVMFunction_AccumulateBase
---@field public TargetValue FQuat
---@field public InitialValue FQuat
---@field public Blend number
---@field public bIntegrateDeltaTime boolean
---@field public Result FQuat
---@field public AccumulatedValue FQuat
---@field public bIsInitialized boolean
local FRigVMFunction_AccumulateQuatLerp = {}
