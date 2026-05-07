---Mesh boolean (Union, Intersect, Difference) between two meshes
---@class FMeshBooleanDataflowNode : FDataflowNode
---@field private Operation EMeshBooleanOperationEnum @Boolean operation
---@field private Mesh1 UDynamicMesh @Mesh input
---@field private Mesh2 UDynamicMesh @Mesh input
---@field private Mesh UDynamicMesh @Output mesh
local FMeshBooleanDataflowNode = {}
