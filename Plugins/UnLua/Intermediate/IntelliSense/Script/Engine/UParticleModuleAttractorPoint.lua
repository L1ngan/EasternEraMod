---@class UParticleModuleAttractorPoint : UParticleModuleAttractorBase
---@field public Position FRawDistributionVector @The position of the point attractor from the source of the emitter.
---@field public Range FRawDistributionFloat @The radial range of the attractor.
---@field public Strength FRawDistributionFloat @The strength of the point attractor.
---@field public StrengthByDistance boolean @The strength curve is a function of distance or of time.
---@field public bAffectBaseVelocity boolean @If true, the velocity adjustment will be applied to the base velocity.
---@field public bOverrideVelocity boolean @If true, set the velocity.
---@field public bUseWorldSpacePosition boolean @If true, treat the position as world space.  So don't transform the the point to localspace.
---@field public Positive_X boolean @Whether particles can move along the positive X axis.
---@field public Positive_Y boolean @Whether particles can move along the positive Y axis.
---@field public Positive_Z boolean @Whether particles can move along the positive Z axis.
---@field public Negative_X boolean @Whether particles can move along the negative X axis.
---@field public Negative_Y boolean @Whether particles can move along the negative Y axis.
---@field public Negative_Z boolean @Whether particles can move along the negative Z axis.
local UParticleModuleAttractorPoint = {}

