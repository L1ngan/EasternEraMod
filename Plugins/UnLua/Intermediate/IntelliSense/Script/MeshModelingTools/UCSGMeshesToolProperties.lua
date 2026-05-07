---Standard properties of the CSG operation
---@class UCSGMeshesToolProperties : UInteractiveToolPropertySet
---@field public Operation ECSGOperation @Type of Boolean operation
---@field public bTryFixHoles boolean @Try to fill holes created by the Boolean operation, e.g. due to numerical errors
---@field public bTryCollapseEdges boolean @Try to collapse extra edges created by the Boolean operation
---@field public WindingThreshold number @Threshold to determine whether a triangle in one mesh is inside or outside of the other
---@field public bShowNewBoundaries boolean @Show boundary edges created by the Boolean operation, which might happen due to numerical errors
---@field public bShowSubtractedMesh boolean @Show a translucent version of the subtracted mesh, to help visualize geometry that is being removed
---@field public SubtractedMeshOpacity number @Opacity of the translucent subtracted mesh
---@field public SubtractedMeshColor FLinearColor @Color of the translucent subtracted mesh
---@field public bUseFirstMeshMaterials boolean @If true, only the first mesh will keep its material assignments, and all other faces will have the first material assigned
local UCSGMeshesToolProperties = {}

