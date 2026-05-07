---@class UParticleModuleTrailSource : UParticleModuleTrailBase
---@field public SourceMethod integer @The source method for the trail.
---@field public SourceName string @The name of the source - either the emitter or Actor.
---@field public SourceStrength FRawDistributionFloat @The strength of the tangent from the source point for each Trail.
---@field public bLockSourceStength boolean @Whether to lock the source to the life of the particle.
---@field public SourceOffsetCount integer @SourceOffsetCount The number of source offsets that can be expected to be found on the instance. These must be named         TrailSourceOffset#
---@field public SourceOffsetDefaults TArray<FVector> @Default offsets from the source(s). If there are < SourceOffsetCount slots, the grabbing of values will simply wrap.
---@field public SelectionMethod integer @Particle selection method, when using the SourceMethod of Particle.
---@field public bInheritRotation boolean @Interhit particle rotation - only valid for SourceMethod of PET2SRCM_Particle.
local UParticleModuleTrailSource = {}

