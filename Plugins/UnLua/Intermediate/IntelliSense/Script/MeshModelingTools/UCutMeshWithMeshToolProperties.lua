---Standard properties of the CutMeshWithMesh operation
---@class UCutMeshWithMeshToolProperties : UInteractiveToolPropertySet
---@field public bTryFixHoles boolean @Try to fill holes created by the Boolean operation, e.g. due to numerical errors
---@field public bTryCollapseEdges boolean @Try to collapse extra edges created by the Boolean operation
---@field public WindingThreshold number @Threshold to determine whether a triangle in one mesh is inside or outside of the other
---@field public bShowNewBoundaries boolean @Show boundary edges created by the Boolean operation, which might happen due to numerical errors
---@field public bUseFirstMeshMaterials boolean @If true, only the first mesh will keep its material assignments, and all other faces will have the first material assigned
local UCutMeshWithMeshToolProperties = {}

