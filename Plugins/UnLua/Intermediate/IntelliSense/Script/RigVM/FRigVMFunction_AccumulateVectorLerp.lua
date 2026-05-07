---Interpolates two vectors over time over and over again
---@class FRigVMFunction_AccumulateVectorLerp : FRigVMFunction_AccumulateBase
---@field public TargetValue FVector
---@field public InitialValue FVector
---@field public Blend number
---@field public bIntegrateDeltaTime boolean
---@field public Result FVector
---@field public AccumulatedValue FVector
---@field public bIsInitialized boolean
local FRigVMFunction_AccumulateVectorLerp = {}
