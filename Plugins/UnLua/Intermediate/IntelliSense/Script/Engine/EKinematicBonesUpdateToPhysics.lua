---This enum defines how you'd like to update bones to physics world.
---      If bone is simulating, you don't have to waste time on updating bone transform from kinematic.
---      But also sometimes you don't like fixed bones to be updated by animation data.
---@class EKinematicBonesUpdateToPhysics
---@field public SkipSimulatingBones integer
---@field public SkipAllBones integer
---@field public EKinematicBonesUpdateToPhysics_MAX integer
local EKinematicBonesUpdateToPhysics = {}
