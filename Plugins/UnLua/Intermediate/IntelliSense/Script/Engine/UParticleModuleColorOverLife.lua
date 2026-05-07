---@class UParticleModuleColorOverLife : UParticleModuleColorBase
---@field public ColorOverLife FRawDistributionVector @The color to apply to the particle, as a function of the particle RelativeTime.
---@field public AlphaOverLife FRawDistributionFloat @The alpha to apply to the particle, as a function of the particle RelativeTime.
---@field public bClampAlpha boolean @If true, the alpha value will be clamped to the [0..1] range.
local UParticleModuleColorOverLife = {}

