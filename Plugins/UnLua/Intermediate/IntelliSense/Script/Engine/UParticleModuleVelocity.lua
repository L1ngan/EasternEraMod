---@class UParticleModuleVelocity : UParticleModuleVelocityBase
---@field public StartVelocity FRawDistributionVector @The velocity to apply to a particle when it is spawned. Value is retrieved using the EmitterTime of the emitter.
---@field public StartVelocityRadial FRawDistributionFloat @The velocity to apply to a particle along its radial direction. Direction is determined by subtracting the location of the emitter from the particle location at spawn. Value is retrieved using the EmitterTime of the emitter.
local UParticleModuleVelocity = {}

