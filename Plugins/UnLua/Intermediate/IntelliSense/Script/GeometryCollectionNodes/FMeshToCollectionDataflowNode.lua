---Converts a DynamicMesh to a Collection
---@class FMeshToCollectionDataflowNode : FDataflowNode
---@field public Mesh UDynamicMesh @DynamicMesh to convert
---@field public Collection FManagedArrayCollection @Output Collection
---@field public bSplitIslands boolean @Whether to split the mesh into multiple bones based on the mesh connectivity
---@field public bConnectIslandsByVertexOverlap boolean @Whether to consider coincident vertices as connected even if the topology does not connect them
---@field public ConnectVerticesThreshold number @Vertices closer than this distance are considered to be overlapping
---@field public bAddClusterRootForSingleMesh boolean @Whether to add a root cluster for the single mesh case. Note if the mesh is split, the root cluster will always be added.
local FMeshToCollectionDataflowNode = {}
