---@class UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase
---@field public RotRate FRawDistributionVector @The rotation rate desired. The value is retrieved using the RelativeTime of the particle.
---@field public bScaleRotRate boolean @If true, scale the current rotation rate by the value retrieved. Otherwise, set the rotation rate to the value retrieved.
local UParticleModuleMeshRotationRateOverLife = {}

