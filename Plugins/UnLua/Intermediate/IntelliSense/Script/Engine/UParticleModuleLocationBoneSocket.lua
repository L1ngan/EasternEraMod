---@class UParticleModuleLocationBoneSocket : UParticleModuleLocationBase
---@field public SourceType integer @Whether the module uses Bones or Sockets for locations. BONESOCKETSOURCE_Bones          - Use Bones as the source locations. BONESOCKETSOURCE_Sockets        - Use Sockets as the source locations.
---@field public UniversalOffset FVector @An offset to apply to each bone/socket
---@field public SourceLocations TArray<FLocationBoneSocketInfo> @The name(s) of the bone/socket(s) to position at. If this is empty, the module will attempt to spawn from all bones or sockets.
---@field public SelectionMethod integer @The method by which to select the bone/socket to spawn at. SEL_Sequential                  - loop through the bone/socket array in order SEL_Random                              - randomly select a bone/socket from the array
---@field public bUpdatePositionEachFrame boolean @If true, update the particle locations each frame with that of the bone/socket
---@field public bOrientMeshEmitters boolean @If true, rotate mesh emitter meshes to orient w/ the socket. Currently does nothing.
---@field public bInheritBoneVelocity boolean @If true, particles inherit the associated bone velocity when spawned
---@field public InheritVelocityScale number @A scale on how much of the bone's velocity a particle will inherit.
---@field public SkelMeshActorParamName string @The parameter name of the skeletal mesh actor that supplies the SkelMeshComponent for in-game.
---@field public NumPreSelectedIndices integer @When we have no source locations and we need to track bone velocities due to bInheritBoneVelocity, we pre select a set of bones to use each frame. This property determines how big the list is. Too low and the randomness of selection may suffer, too high and memory will be wasted.
---@field public EditorSkelMesh USkeletalMesh @The name of the skeletal mesh to use in the editor
local UParticleModuleLocationBoneSocket = {}

