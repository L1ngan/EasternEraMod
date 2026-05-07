---@class UParticleModuleLocationPrimitiveBase : UParticleModuleLocationBase
---@field public Positive_X boolean @Whether the positive X axis is valid for spawning.
---@field public Positive_Y boolean @Whether the positive Y axis is valid for spawning.
---@field public Positive_Z boolean @Whether the positive Z axis is valid for spawning.
---@field public Negative_X boolean @Whether the negative X axis is valid for spawning.
---@field public Negative_Y boolean @Whether the negative Y axis is valid for spawning.
---@field public Negative_Z boolean @Whether the negative Zaxis is valid for spawning.
---@field public SurfaceOnly boolean @Whether particles will only spawn on the surface of the primitive.
---@field public Velocity boolean @Whether the particle should get its velocity from the position within the primitive.
---@field public VelocityScale FRawDistributionFloat @The scale applied to the velocity. (Only used if 'Velocity' is checked).
---@field public StartLocation FRawDistributionVector @The location of the bounding primitive relative to the position of the emitter.
local UParticleModuleLocationPrimitiveBase = {}

