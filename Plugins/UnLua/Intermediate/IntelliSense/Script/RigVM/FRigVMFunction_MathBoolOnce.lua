---Returns true once the first time this node is hit
---@class FRigVMFunction_MathBoolOnce : FRigVMFunction_MathBoolBase
---@field public Duration number @The duration in seconds at which the result is true Use 0 for a different result every time.
---@field public Result boolean
---@field public LastValue boolean
---@field public TimeLeft number
local FRigVMFunction_MathBoolOnce = {}
