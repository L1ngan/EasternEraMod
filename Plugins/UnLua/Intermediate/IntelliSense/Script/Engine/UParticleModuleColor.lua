---@class UParticleModuleColor : UParticleModuleColorBase
---@field public StartColor FRawDistributionVector @Initial color for a particle as a function of Emitter time.
---@field public StartAlpha FRawDistributionFloat @Initial alpha for a particle as a function of Emitter time.
---@field public bClampAlpha boolean @If true, the alpha value will be clamped to the [0..1] range.
local UParticleModuleColor = {}

