---Averages a transform over time.
---This uses a Kalman Filter internally.
---@class FRigVMFunction_KalmanTransform : FRigVMFunction_SimBase
---@field public Value FTransform
---@field public BufferSize integer
---@field public Result FTransform
---@field public Buffer TArray<FTransform>
---@field public LastInsertIndex integer
local FRigVMFunction_KalmanTransform = {}
