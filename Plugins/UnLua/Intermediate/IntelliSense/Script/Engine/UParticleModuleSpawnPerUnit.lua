---@class UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase
---@field public UnitScalar number @The scalar to apply to the distance traveled. The value from SpawnPerUnit is divided by this value to give the actual number of particles per unit.
---@field public MovementTolerance number @The tolerance for moving vs. not moving w.r.t. the bIgnoreSpawnRateWhenMoving flag. Ie, if (DistanceMoved < (UnitScalar x MovementTolerance)) then consider it not moving.
---@field public SpawnPerUnit FRawDistributionFloat @The amount to spawn per meter distribution. The value is retrieved using the EmitterTime.
---@field public MaxFrameDistance number @The maximum valid movement for a single frame. If 0.0, then the check is not performed. Currently, if the distance moved between frames is greater than this then NO particles will be spawned. This is primiarily intended to cover cases where the PSystem is attached to teleporting objects.
---@field public bIgnoreSpawnRateWhenMoving boolean @If true, process the default spawn rate when not moving... When not moving, skip the default spawn rate. If false, return the bProcessSpawnRate setting.
---@field public bIgnoreMovementAlongX boolean @If true, ignore the X-component of the movement
---@field public bIgnoreMovementAlongY boolean @If true, ignore the Y-component of the movement
---@field public bIgnoreMovementAlongZ boolean @If true, ignore the Z-component of the movement
local UParticleModuleSpawnPerUnit = {}

