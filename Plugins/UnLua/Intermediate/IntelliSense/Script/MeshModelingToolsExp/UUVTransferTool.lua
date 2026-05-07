---Tool that transfers UV data from a lower res mesh to a higher one. The lower resolution mesh is typically
--- obtained by simplifying the destination mesh with a "use existing vertices" setting so that an easy
--- correspondence between mesh vertices can be found.
---@class UUVTransferTool : UMultiTargetWithSelectionTool
---@field private Settings UUVTransferToolProperties
---@field private UVChannelProperties UMeshUVChannelProperties
---@field private DestinationMaterialSettings UExistingMeshMaterialProperties
---@field private DestinationPreview UMeshOpPreviewWithBackgroundCompute
---@field private SourcePreview UPreviewMesh
---@field private SourceSeamVisualizer UMeshElementsVisualizer
---@field private DestinationSeamVisualizer UMeshElementsVisualizer
local UUVTransferTool = {}

