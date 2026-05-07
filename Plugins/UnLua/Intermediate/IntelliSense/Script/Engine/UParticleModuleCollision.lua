---@class UParticleModuleCollision : UParticleModuleCollisionBase
---@field public DampingFactor FRawDistributionVector @How much to `slow' the velocity of the particle after a collision. Value is obtained using the EmitterTime at particle spawn.
---@field public DampingFactorRotation FRawDistributionVector @How much to `slow' the rotation of the particle after a collision. Value is obtained using the EmitterTime at particle spawn.
---@field public MaxCollisions FRawDistributionFloat @The maximum number of collisions a particle can have. Value is obtained using the EmitterTime at particle spawn.
---@field public CollisionCompletionOption integer @What to do once a particles MaxCollisions is reached. One of the following: EPCC_Kill         Kill the particle when MaxCollisions is reached EPCC_Freeze         Freeze in place, NO MORE UPDATES EPCC_HaltCollisions,         Stop collision checks, keep updating everything EPCC_FreezeTranslation,         Stop translations, keep updating everything else EPCC_FreezeRotation,         Stop rotations, keep updating everything else EPCC_FreezeMovement         Stop all movement, keep updating
---@field public CollisionTypes TArray<integer> @Which ObjectTypes to collide with
---@field public bApplyPhysics boolean @If true, physic will be applied between a particle and the object it collides with. This is one-way - particle --> object. The particle does not have physics applied to it - it just generates an impulse applied to the object it collides with. NOTE: having this on prevents the code from running off the game thread.
---@field public bIgnoreTriggerVolumes boolean @Any trigger volumes that are hit will be ignored. NOTE: This can be turned off if the TrigerVolume physics object type is not in the CollisionTypes array. Turning this off is strongly recommended as having it on prevents the code from running off the game thread.
---@field public ParticleMass FRawDistributionFloat @The mass of the particle - for use when bApplyPhysics is true. Value is obtained using the EmitterTime at particle spawn.
---@field public DirScalar number @The directional scalar value - used to scale the bounds to 'assist' in avoiding inter-penetration or large gaps.
---@field public bPawnsDoNotDecrementCount boolean @If true, then collisions with Pawns will still react, but the UsedMaxCollisions count will not be decremented. (ie., They don't 'count' as collisions) NOTE: Having this on prevents the code from running in parallel.
---@field public bOnlyVerticalNormalsDecrementCount boolean @If true, then collisions that do not have a vertical hit normal will still react, but UsedMaxCollisions count will not be decremented. (ie., They don't 'count' as collisions) Useful for having particles come to rest on floors.
---@field public VerticalFudgeFactor number @The fudge factor to use to determine vertical. True vertical will have a Hit.Normal.Z == 1.0 This will allow for Z components in the range of [1.0-VerticalFudgeFactor..1.0] to count as vertical collisions.
---@field public DelayAmount FRawDistributionFloat @How long to delay before checking a particle for collisions. Value is retrieved using the EmitterTime. During update, the particle flag IgnoreCollisions will be set until the particle RelativeTime has surpassed the DelayAmount.
---@field public bDropDetail boolean @If true, when the World->bDropDetail flag is set, the module will be ignored.
---@field public bCollideOnlyIfVisible boolean @If true, Particle collision only if particle system is currently being rendered.
---@field public bIgnoreSourceActor boolean @If true, then the source actor is ignored in collision checks. Defaults to true.
---@field public MaxCollisionDistance number @Max distance at which particle collision will occur.
local UParticleModuleCollision = {}

