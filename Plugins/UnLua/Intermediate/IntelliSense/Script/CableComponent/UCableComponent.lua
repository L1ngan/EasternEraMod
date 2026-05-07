---Component that allows you to specify custom triangle mesh geometry
---@class UCableComponent : UMeshComponent
---@field public bAttachStart boolean @Should we fix the start to something, or leave it free. If false, component transform is just used for initial location of start of cable
---@field public bAttachEnd boolean @Should we fix the end to something (using AttachEndTo and EndLocation), or leave it free. If false, AttachEndTo and EndLocation are just used for initial location of end of cable
---@field public AttachEndTo FComponentReference @Actor or Component that the defines the end position of the cable
---@field public AttachEndToSocketName string @Socket name on the AttachEndTo component to attach to
---@field public EndLocation FVector @End location of cable, relative to AttachEndTo (or AttachEndToSocketName) if specified, otherwise relative to cable component.
---@field public CableLength number @Rest length of the cable
---@field public NumSegments integer @How many segments the cable has
---@field public SubstepTime number @Controls the simulation substep time for the cable
---@field public SolverIterations integer @The number of solver iterations controls how 'stiff' the cable is
---@field public bEnableStiffness boolean @Add stiffness constraints to cable.
---@field public bUseSubstepping boolean @When false, will still wait for SubstepTime to elapse before updating, but will only run the cable simulation once using all of accumulated simulation time
---@field public bSkipCableUpdateWhenNotVisible boolean
---@field public bSkipCableUpdateWhenNotOwnerRecentlyRendered boolean
---@field public bEnableCollision boolean @EXPERIMENTAL. Perform sweeps for each cable particle, each substep, to avoid collisions with the world. Uses the Collision Preset on the component to determine what is collided with. This greatly increases the cost of the cable simulation.
---@field public CollisionFriction number @If collision is enabled, control how much sliding friction is applied when cable is in contact.
---@field public CableForce FVector @Force vector (world space) applied to all particles in cable.
---@field public CableGravityScale number @Scaling applied to world gravity affecting this cable.
---@field public CableWidth number @How wide the cable geometry is
---@field public NumSides integer @Number of sides of the cable geometry
---@field public TileMaterial number @How many times to repeat the material along the length of the cable
---@field public bResetAfterTeleport boolean @Always reset cable particle positions and velocities on a teleport.
---@field public TeleportDistanceThreshold number @Conduct teleportation if the movement of either fixed end point of the cable is greater than this threshold in 1 frame. Zero or negative values will skip the check.
---@field public TeleportRotationThreshold number @Rotation threshold in degrees. Conduct teleportation if the cable's rotation is greater than this threshold in 1 frame. Zero or negative values will skip the check.
---@field public bTeleportAfterReattach boolean @Teleport the cable particles on reattaching any end of the cable.
local UCableComponent = {}

---Attaches the end of the cable to a specific Component *
---@param Component USceneComponent
---@param SocketName string @[opt] 
function UCableComponent:SetAttachEndToComponent(Component, SocketName) end

---Attaches the end of the cable to a specific Component within an Actor *
---@param Actor AActor
---@param ComponentProperty string
---@param SocketName string @[opt] 
function UCableComponent:SetAttachEndTo(Actor, ComponentProperty, SocketName) end

---Get array of locations of particles (in world space) making up the cable simulation.
---@param Locations TArray_FVector_ @[out] 
function UCableComponent:GetCableParticleLocations(Locations) end

---Gets the specific USceneComponent that the cable is attached to *
---@return USceneComponent
function UCableComponent:GetAttachedComponent() end

---Gets the Actor that the cable is attached to *
---@return AActor
function UCableComponent:GetAttachedActor() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCableComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UCableComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCableComponent:AddAssetUserDataOfClass(InUserDataClass) end

