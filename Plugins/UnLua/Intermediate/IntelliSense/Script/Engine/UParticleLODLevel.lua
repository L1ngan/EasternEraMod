---@class UParticleLODLevel : UObject
---@field public Level integer @The index value of the LOD level
---@field public bEnabled boolean @True if the LOD level is enabled, meaning it should be updated and rendered.
---@field public RequiredModule UParticleModuleRequired @The required module for this LOD level
---@field public Modules TArray<UParticleModule> @An array of particle modules that contain the adjusted data for the LOD level
---@field public TypeDataModule UParticleModuleTypeDataBase @Module<SINGULAR> used for emitter type "extension".
---@field public SpawnModule UParticleModuleSpawn @The SpawnRate/Burst module - required by all emitters.
---@field public EventGenerator UParticleModuleEventGenerator @The optional EventGenerator module.
---@field public SpawningModules TArray<UParticleModuleSpawnBase> @SpawningModules - These are called to determine how many particles to spawn.
---@field public SpawnModules TArray<UParticleModule> @SpawnModules - These are called when particles are spawned.
---@field public UpdateModules TArray<UParticleModule> @UpdateModules - These are called when particles are updated.
---@field public OrbitModules TArray<UParticleModuleOrbit> @OrbitModules     These are used to do offsets of the sprite from the particle location.
---@field public EventReceiverModules TArray<UParticleModuleEventReceiverBase> @Event receiver modules only!
---@field public ConvertedModules boolean
---@field public PeakActiveParticles integer
local UParticleLODLevel = {}

