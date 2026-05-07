---Split a mesh into a connected islands
---@class FSplitMeshIslandsDataflowNode : FDataflowNode
---@field private Mesh UDynamicMesh @Mesh input
---@field private Meshes TArray<UDynamicMesh> @Meshes output
---@field private SplitMethod EDataflowMeshSplitIslandsMethod @Whether to consider coincident vertices as connected even if the topology does not connect them
---@field private ConnectVerticesThreshold number @Vertices closer than this distance are considered to be overlapping
local FSplitMeshIslandsDataflowNode = {}
