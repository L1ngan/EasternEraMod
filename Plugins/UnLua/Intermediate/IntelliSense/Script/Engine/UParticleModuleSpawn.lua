---@class UParticleModuleSpawn : UParticleModuleSpawnBase
---@field public Rate FRawDistributionFloat @The rate at which to spawn particles.
---@field public RateScale FRawDistributionFloat @The scalar to apply to the rate.
---@field public BurstList TArray<FParticleBurst> @The array of burst entries.
---@field public BurstScale FRawDistributionFloat @Scale all burst entries by this amount.
---@field public ParticleBurstMethod integer @The method to utilize when burst-emitting particles.
---@field public bApplyGlobalSpawnRateScale boolean @If true, the SpawnRate will be scaled by the global CVar r.EmitterSpawnRateScale
local UParticleModuleSpawn = {}

