---@class UConvertToPolygonsTool : USingleTargetWithSelectionTool
---@field protected Settings UConvertToPolygonsToolProperties
---@field protected CopyFromLayerProperties UPolygroupLayersProperties
---@field protected PreviewCompute UMeshOpPreviewWithBackgroundCompute
---@field protected PreviewGeometry UPreviewGeometry
---@field protected UnmodifiedAreaPreviewMesh UPreviewMesh @If a selection was provided (bUsingSelection = true), UnmodifiedAreaPreviewMesh is used to render the unmodified (non-selected) part of the input mesh, as the PreviewCompute input mesh will be limited to the input selected area
local UConvertToPolygonsTool = {}

