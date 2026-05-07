---@class FRigVMSimPoint
---@field public Mass number @The mass of the point
---@field public Size number @Size of the point - only used for collision
---@field public LinearDamping number @The linear damping of the point
---@field public InheritMotion number @Defines how much the point will inherit motion from its input. This does not have an effect on passive (mass == 0.0) points. Values can be higher than 1 due to timestep - but they are clamped internally.
---@field public Position FVector @The position of the point
---@field public LinearVelocity FVector @The velocity of the point per second
local FRigVMSimPoint = {}
