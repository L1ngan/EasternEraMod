---Converts a BoundingBox into a DynamicMesh
---@class FBoxToMeshDataflowNode : FDataflowNode
---@field public Box FBox @BoundingBox input
---@field public Mesh UDynamicMesh @Mesh output
---@field public TriangleCount integer @Mesh triangle count
local FBoxToMeshDataflowNode = {}
