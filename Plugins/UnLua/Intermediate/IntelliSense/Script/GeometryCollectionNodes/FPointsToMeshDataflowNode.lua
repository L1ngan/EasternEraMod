---Converts points into a DynamicMesh
---@class FPointsToMeshDataflowNode : FDataflowNode
---@field public Points TArray<FVector> @Points input
---@field public Mesh UDynamicMesh @Mesh output
---@field public TriangleCount integer @Mesh triangle count
local FPointsToMeshDataflowNode = {}
