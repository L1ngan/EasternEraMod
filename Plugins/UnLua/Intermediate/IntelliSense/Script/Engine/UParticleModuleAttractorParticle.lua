---@class UParticleModuleAttractorParticle : UParticleModuleAttractorBase
---@field public EmitterName string @The source emitter for attractors
---@field public Range FRawDistributionFloat @The radial range of the attraction around the source particle. Particle-life relative.
---@field public bStrengthByDistance boolean @The strength curve is a function of distance or of time.
---@field public Strength FRawDistributionFloat @The strength of the attraction (negative values repel). Particle-life relative if StrengthByDistance is false.
---@field public bAffectBaseVelocity boolean @If true, the velocity adjustment will be applied to the base velocity.
---@field public SelectionMethod integer @The method to use when selecting an attractor target particle from the emitter. One of the following: Random          - Randomly select a particle from the source emitter. Sequential  - Select a particle using a sequential order.
---@field public bRenewSource boolean @Whether the particle should grab a new particle if it's source expires.
---@field public bInheritSourceVel boolean @Whether the particle should inherit the source veloctiy if it expires.
---@field public LastSelIndex integer
local UParticleModuleAttractorParticle = {}

