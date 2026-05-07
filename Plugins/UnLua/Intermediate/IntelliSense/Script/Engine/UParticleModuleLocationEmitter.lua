---@class UParticleModuleLocationEmitter : UParticleModuleLocationBase
---@field public EmitterName string @The name of the emitter to use that the source location for particle.
---@field public SelectionMethod integer @The method to use when selecting a spawn target particle from the emitter. Can be one of the following:         ELESM_Random            Randomly select a particle from the source emitter.         ELESM_Sequential        Step through each particle from the source emitter in order.
---@field public InheritSourceVelocity boolean @If true, the spawned particle should inherit the velocity of the source particle.
---@field public InheritSourceVelocityScale number @Amount to scale the source velocity by when inheriting it.
---@field public bInheritSourceRotation boolean @If true, the spawned particle should inherit the rotation of the source particle.
---@field public InheritSourceRotationScale number @Amount to scale the source rotation by when inheriting it.
local UParticleModuleLocationEmitter = {}

