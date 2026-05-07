---@class UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase
---@field public SpawnCount FRawDistributionFloat @The number of particles to spawn.
---@field public bUseParticleTime boolean @For Death-based event receiving, if this is true, it indicates that the ParticleTime of the event should be used to look-up the SpawnCount. Otherwise (and in all other events received), use the emitter time of the event.
---@field public bUsePSysLocation boolean @If true, use the location of the particle system component for spawning. if false (default), use the location of the particle event.
---@field public bInheritVelocity boolean @If true, use the velocity of the dying particle as the start velocity of the spawned particle.
---@field public InheritVelocityScale FRawDistributionVector @If bInheritVelocity is true, scale the velocity with this.
---@field public PhysicalMaterials TArray<UPhysicalMaterial> @Array of physical materials that can be used to allow or ban a specific set of materials when receiving collision events.
---@field public bBanPhysicalMaterials boolean @When true, the PhysicalMaterials list is used to ban specified materials for collision events but allow all others. When false, the PhysicalMaterials list is used to allow only specified materials for collision events and ban all others.
local UParticleModuleEventReceiverSpawn = {}

