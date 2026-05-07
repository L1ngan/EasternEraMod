---@class UParticleModuleCollisionGPU : UParticleModuleCollisionBase
---@field public Resilience FRawDistributionFloat @The bounciness of the particle.
---@field public ResilienceScaleOverLife FRawDistributionFloat @Scales the bounciness of the particle over its life.
---@field public Friction number @Friction applied to all particles during a collision or while moving along a surface.
---@field public RandomSpread number @Controls how wide the bouncing particles are distributed (0 = disabled).
---@field public RandomDistribution number @Controls bouncing particles distribution (1 = uniform distribution; 2 = squared distribution).
---@field public RadiusScale number @Scale applied to the size of the particle to obtain the collision radius.
---@field public RadiusBias number @Bias applied to the collision radius.
---@field public Response integer @How particles respond to a collision event.
---@field public CollisionMode integer
local UParticleModuleCollisionGPU = {}

