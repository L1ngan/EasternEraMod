---@class UParticleModuleBeamSource : UParticleModuleBeamBase
---@field public SourceMethod integer @The method flag.
---@field public SourceName string @The strength of the tangent from the source point for each beam.
---@field public bSourceAbsolute boolean @Whether to treat the as an absolute position in world space.
---@field public Source FRawDistributionVector @Default source-point to use.
---@field public bLockSource boolean @Whether to lock the source to the life of the particle.
---@field public SourceTangentMethod integer @The method to use for the source tangent.
---@field public SourceTangent FRawDistributionVector @The tangent for the source point for each beam.
---@field public bLockSourceTangent boolean @Whether to lock the source to the life of the particle.
---@field public SourceStrength FRawDistributionFloat @The strength of the tangent from the source point for each beam.
---@field public bLockSourceStength boolean @Whether to lock the source to the life of the particle.
local UParticleModuleBeamSource = {}

