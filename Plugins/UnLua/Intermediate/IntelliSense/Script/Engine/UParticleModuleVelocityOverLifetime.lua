---@class UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase
---@field public VelOverLife FRawDistributionVector @The scaling  value applied to the velocity. Value is retrieved using the RelativeTime of the particle.
---@field public Absolute boolean @If true, the velocity will be SET to the value from the above dist. If false, the velocity will be scaled by the above dist.
local UParticleModuleVelocityOverLifetime = {}

