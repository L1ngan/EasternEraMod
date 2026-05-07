---Remaps the given value from a source range to a target range.
---@class FRigVMFunction_MathFloatRemap : FRigVMFunction_MathFloatBase
---@field public Value number
---@field public SourceMinimum number
---@field public SourceMaximum number
---@field public TargetMinimum number
---@field public TargetMaximum number
---@field public bClamp boolean @If set to true the result is clamped to the target range
---@field public Result number
local FRigVMFunction_MathFloatRemap = {}
