---SkeletalMeshActor is an instance of a USkeletalMesh in the world.
---Skeletal meshes are deformable meshes that can be animated and change their geometry at run-time.
---Skeletal meshes dragged into the level from the Content Browser are automatically converted to StaticMeshActors.
---@class ASkeletalMeshActor : AActor
---@field public bShouldDoAnimNotifies boolean @Whether or not this actor should respond to anim notifies - CURRENTLY ONLY AFFECTS PlayParticleEffect NOTIFIES*
---@field private SkeletalMeshComponent USkeletalMeshComponent
---@field public ReplicatedMesh USkeletalMesh @Used to replicate mesh to clients
---@field public ReplicatedPhysAsset UPhysicsAsset @Used to replicate physics asset to clients
---@field public ReplicatedMaterial0 UMaterialInterface @used to replicate the material in index 0
---@field public ReplicatedMaterial1 UMaterialInterface
local ASkeletalMeshActor = {}

function ASkeletalMeshActor:OnRep_ReplicatedPhysAsset() end

---Replication Notification Callbacks
function ASkeletalMeshActor:OnRep_ReplicatedMesh() end

function ASkeletalMeshActor:OnRep_ReplicatedMaterial1() end

function ASkeletalMeshActor:OnRep_ReplicatedMaterial0() end

