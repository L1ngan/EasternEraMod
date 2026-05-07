---@class UParticleModuleAcceleration : UParticleModuleAccelerationBase
---@field public Acceleration FRawDistributionVector @The initial acceleration of the particle. Value is obtained using the EmitterTime at particle spawn. Each frame, the current and base velocity of the particle is then updated using the formula         velocity += acceleration * DeltaTime where DeltaTime is the time passed since the last frame.
---@field public bApplyOwnerScale boolean @If true, then apply the particle system components scale to the acceleration value.
local UParticleModuleAcceleration = {}

