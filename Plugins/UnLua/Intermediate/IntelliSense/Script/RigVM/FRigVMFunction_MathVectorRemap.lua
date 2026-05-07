---Remaps the given value from a source range to a target range for each component
---@class FRigVMFunction_MathVectorRemap : FRigVMFunction_MathVectorBase
---@field public Value FVector
---@field public SourceMinimum FVector
---@field public SourceMaximum FVector
---@field public TargetMinimum FVector
---@field public TargetMaximum FVector
---@field public bClamp boolean @If set to true the result is clamped to the target range
---@field public Result FVector
local FRigVMFunction_MathVectorRemap = {}
