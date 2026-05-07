---Branch between two mesh inputs based on boolean condition
---@class FBranchMeshDataflowNode : FDataflowNode
---@field public MeshA UDynamicMesh @Mesh input
---@field public MeshB UDynamicMesh @Mesh input
---@field public bCondition boolean @If true, Output = MeshA, otherwise Output = MeshB
---@field public Mesh UDynamicMesh @Output mesh
local FBranchMeshDataflowNode = {}
