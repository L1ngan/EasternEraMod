---Averages a value over time.
---This uses a Kalman Filter internally.
---@class FRigVMFunction_KalmanVector : FRigVMFunction_SimBase
---@field public Value FVector
---@field public BufferSize integer
---@field public Result FVector
---@field public Buffer TArray<FVector>
---@field public LastInsertIndex integer
local FRigVMFunction_KalmanVector = {}
