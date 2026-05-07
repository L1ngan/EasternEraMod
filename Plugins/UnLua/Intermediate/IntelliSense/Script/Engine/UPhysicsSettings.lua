---Default physics settings.
---@class UPhysicsSettings : UPhysicsSettingsCore
---@field public PhysicsPrediction FPhysicsPredictionSettings @Settings for Networked Physics Prediction, experimental.
---@field public PhysicErrorCorrection FRigidBodyErrorCorrection @Default settings for physics replication using EPhysicsReplicationMode::Default
---@field public DefaultDegreesOfFreedom integer @Useful for constraining all objects in the world, for example if you are making a 2D game using 3D environments.
---@field public bSuppressFaceRemapTable boolean @If true, the internal physx face to UE face mapping will not be generated. This is a memory optimization available if you do not rely on face indices returned by scene queries.
---@field public bSupportUVFromHitResults boolean @If true, store extra information to allow FindCollisionUV to derive UV info from a line trace hit result, using the FindCollisionUV utility
---@field public bDisableActiveActors boolean @If true, physx will not update unreal with any bodies that have moved during the simulation. This should only be used if you have no physx simulation or you are manually updating the unreal data via polling physx.
---@field public bDisableKinematicStaticPairs boolean @Whether to disable generating KS pairs, enabling this makes switching between dynamic and static slower for actors - but speeds up contact generation by early rejecting these pairs
---@field public bDisableKinematicKinematicPairs boolean @Whether to disable generating KK pairs, enabling this speeds up contact generation, however it is required when using APEX destruction.
---@field public bDisableCCD boolean @If true CCD will be ignored. This is an optimization when CCD is never used which removes the need for physx to check it internally.
---@field public AnimPhysicsMinDeltaTime number @Min Delta Time below which anim dynamics and rigidbody nodes will not simulate.
---@field public bSimulateAnimPhysicsAfterReset boolean @Whether to simulate anim physics nodes in the tick where they're reset.
---@field public MinPhysicsDeltaTime number @Min Physics Delta Time; the simulation will not step if the delta time is below this value
---@field public MaxPhysicsDeltaTime number @Max Physics Delta Time to be clamped.
---@field public bSubstepping boolean @Whether to substep the physics simulation. This feature is still experimental. Certain functionality might not work correctly
---@field public bSubsteppingAsync boolean @Whether to substep the async physics simulation. This feature is still experimental. Certain functionality might not work correctly
---@field public bTickPhysicsAsync boolean @Whether to tick physics simulation on an async thread. This feature is still experimental. Certain functionality might not work correctly
---@field public AsyncFixedTimeStepSize number @If using async, the time step size to tick at. This feature is still experimental. Certain functionality might not work correctly
---@field public MaxSubstepDeltaTime number @Max delta time (in seconds) for an individual simulation substep.
---@field public MaxSubsteps integer @Max number of substeps for physics simulation.
---@field public SyncSceneSmoothingFactor number @Physics delta time smoothing factor for sync scene.
---@field public InitialAverageFrameRate number @Physics delta time initial average.
---@field public PhysXTreeRebuildRate integer @The number of frames it takes to rebuild the PhysX scene query AABB tree. The bigger the number, the smaller fetchResults takes per frame, but the more the tree deteriorates until a new tree is built
---@field public PhysicalSurfaces TArray<FPhysicalSurfaceName> @PhysicalMaterial Surface Types
---@field public DefaultBroadphaseSettings FBroadphaseSettings @If we want to Enable MPB or not globally. This is then overridden by project settings if not enabled. *
---@field public MinDeltaVelocityForHitEvents number @Minimum velocity delta required on a collinding object for Chaos to send a hit event
---@field public ChaosSettings FChaosPhysicsSettings @Chaos physics engine settings
local UPhysicsSettings = {}

---@return integer
function UPhysicsSettings:GetPhysicsHistoryCount() end

