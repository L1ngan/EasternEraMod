---Returns true and false as a sequence.
---@class FRigVMFunction_MathBoolFlipFlop : FRigVMFunction_MathBoolBase
---@field public StartValue boolean @The initial value to use for the flag
---@field public Duration number @The duration in seconds at which the result won't change. Use 0 for a different result every time.
---@field public Result boolean
---@field public LastValue boolean
---@field public TimeLeft number
local FRigVMFunction_MathBoolFlipFlop = {}
