---@class USplitMeshesToolProperties : UInteractiveToolPropertySet
---@field public SplitMethod ESplitMeshesMethod @Method to use to split the input(s) into output meshes
---@field public ConnectVerticesThreshold number @Vertices as close as this distance will be treated as overlapping, and kept in the same output mesh
---@field public bTransferMaterials boolean @Whether to transfer materials to the output meshes
---@field public bShowPreview boolean @Whether to color mesh faces based on how they will be split into output meshes
---@field public bIsInSelectionMode boolean
local USplitMeshesToolProperties = {}

