---@class UParticleModuleRotationOverLifetime : UParticleModuleRotationBase
---@field public RotationOverLife FRawDistributionFloat @The rotation of the particle (1.0 = 360 degrees). The value is retrieved using the RelativeTime of the particle.
---@field public Scale boolean @If true,  the particle rotation is multiplied by the value retrieved from RotationOverLife. If false, the particle rotation is incremented by the value retrieved from RotationOverLife.
local UParticleModuleRotationOverLifetime = {}

