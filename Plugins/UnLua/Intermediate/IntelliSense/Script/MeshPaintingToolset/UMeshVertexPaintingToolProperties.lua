---@class UMeshVertexPaintingToolProperties : UMeshPaintingToolProperties
---@field public bPaintOnSpecificLOD boolean @When unchecked the painting on the base LOD will be propagate automatically to all other LODs when exiting the mode or changing the selection
---@field public LODIndex integer @Index of LOD to paint. If not set then paint is applied to all LODs.
---@field public VertexPreviewSize number @Size of vertex points drawn when mesh painting is active.
local UMeshVertexPaintingToolProperties = {}

