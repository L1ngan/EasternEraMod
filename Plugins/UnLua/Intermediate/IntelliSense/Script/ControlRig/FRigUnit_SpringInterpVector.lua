---Uses a simple spring model to interpolate a vector from Current to Target.
---@class FRigUnit_SpringInterpVector : FRigVMFunction_SimBase
---@field public Current FVector
---@field public Target FVector
---@field public Stiffness number
---@field public CriticalDamping number
---@field public Mass number
---@field public Result FVector
---@field public SpringState FVectorSpringState
local FRigUnit_SpringInterpVector = {}
