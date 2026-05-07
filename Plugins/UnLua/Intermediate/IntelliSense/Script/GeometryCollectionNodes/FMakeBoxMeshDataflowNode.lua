---Make a box mesh
---@class FMakeBoxMeshDataflowNode : FDataflowNode
---@field private Center FVector
---@field private Size FVector
---@field private SubdivisionsX integer
---@field private SubdivisionsY integer
---@field private SubdivisionsZ integer
---@field private Mesh UDynamicMesh @Output mesh
local FMakeBoxMeshDataflowNode = {}
