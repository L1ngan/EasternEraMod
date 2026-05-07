---Standard properties of the self-union operation
---@class USelfUnionMeshesToolProperties : UInteractiveToolPropertySet
---@field public bTrimFlaps boolean @If true, remove open, visible geometry
---@field public bTryFixHoles boolean @Try to fill holes created by the merge, e.g. due to numerical errors
---@field public bTryCollapseEdges boolean @Try to collapse extra edges created by the merge
---@field public WindingThreshold number @Threshold to determine whether a triangle in one mesh is inside or outside of the other
---@field public bShowNewBoundaryEdges boolean @Show boundary edges created by the merge (often due to numerical error)
---@field public bOnlyUseFirstMeshMaterials boolean @If true, only the first mesh will keep its materials assignments; all other triangles will be assigned material 0
local USelfUnionMeshesToolProperties = {}

