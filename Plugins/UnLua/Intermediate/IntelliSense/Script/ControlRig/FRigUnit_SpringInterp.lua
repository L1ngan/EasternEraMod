---Uses a simple spring model to interpolate a float from Current to Target.
---@class FRigUnit_SpringInterp : FRigVMFunction_SimBase
---@field public Current number
---@field public Target number
---@field public Stiffness number
---@field public CriticalDamping number
---@field public Mass number
---@field public Result number
---@field public SpringState FFloatSpringState
local FRigUnit_SpringInterp = {}
