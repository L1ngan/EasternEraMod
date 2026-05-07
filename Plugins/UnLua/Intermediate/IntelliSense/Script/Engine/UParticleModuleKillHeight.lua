---@class UParticleModuleKillHeight : UParticleModuleKillBase
---@field public Height FRawDistributionFloat @The height at which to kill the particle.
---@field public bAbsolute boolean @If true, the height should be treated as a world-space position.
---@field public bFloor boolean @If true, the plane should be considered a floor - ie kill anything BELOW it. If false, if is a ceiling - ie kill anything ABOVE it.
---@field public bApplyPSysScale boolean @If true, take the particle systems scale into account
local UParticleModuleKillHeight = {}

