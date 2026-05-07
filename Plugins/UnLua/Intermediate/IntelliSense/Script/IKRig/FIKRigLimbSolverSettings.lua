---@class FIKRigLimbSolverSettings : FLimbSolverSettings
---@field public StartBone string @The first bone in the IK chain, for example the "hip" in a leg, or the "shoulder" in an arm
---@field public GoalName string @The name of the IK goal to drive the end bone towards
---@field public EndBone string @The name of the last bone in the IK chain. This is the bone you want to reach the goal.
local FIKRigLimbSolverSettings = {}
