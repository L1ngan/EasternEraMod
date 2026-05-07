---Averages a value over time.
---This uses a Kalman Filter internally.
---@class FRigVMFunction_KalmanFloat : FRigVMFunction_SimBase
---@field public Value number
---@field public BufferSize integer
---@field public Result number
---@field public Buffer TArray<number>
---@field public LastInsertIndex integer
local FRigVMFunction_KalmanFloat = {}
