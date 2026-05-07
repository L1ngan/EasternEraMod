---Solver settings for use by the Legacy RigidBody AnimNode (RBAN) solver.
---These settings are no longer used by default and will eventually be deprecated and then removed.
---@class FSolverIterations
---@field public SolverIterations integer @The recommended number of solver iterations. Increase this if collision and joints are fighting, or joint chains are stretching.
---@field public JointIterations integer @The recommended number of joint sub-iterations. Increasing this can help with chains of long-thin bodies.
---@field public CollisionIterations integer @The recommended number of collision sub-iterations. Increasing this can help with collision jitter.
---@field public SolverPushOutIterations integer @Increase this if bodies remain penetrating
---@field public JointPushOutIterations integer @The recommended number of joint sub-push-out iterations.
---@field public CollisionPushOutIterations integer @The recommended number of joint sub-push-out iterations. Increasing this can help with collision penetration problems.
local FSolverIterations = {}
