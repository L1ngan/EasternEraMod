---StaticMeshActor is an instance of a UStaticMesh in the world.
---Static meshes are geometry that do not animate or otherwise deform, and are more efficient to render than other types of geometry.
---Static meshes dragged into the level from the Content Browser are automatically converted to StaticMeshActors.
---@class AStaticMeshActor : AActor
---@field private StaticMeshComponent UStaticMeshComponent
---@field public bStaticMeshReplicateMovement boolean @This static mesh should replicate movement. Automatically sets the RemoteRole and bReplicateMovement flags. Meant to be edited on placed actors (those other two properties are not)
---@field public StaticMeshPhysicsReplicationMode EPhysicsReplicationMode @Set which replication mode to use for this static mesh instance if it both replicates and simulates physics.
---@field public NavigationGeometryGatheringMode ENavDataGatheringMode
local AStaticMeshActor = {}

---Function to change mobility type
---@param InMobility integer
function AStaticMeshActor:SetMobility(InMobility) end

