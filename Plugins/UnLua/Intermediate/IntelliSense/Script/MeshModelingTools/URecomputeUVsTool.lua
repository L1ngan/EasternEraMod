---URecomputeUVsTool Recomputes UVs based on existing segmentations of the mesh
---@class URecomputeUVsTool : USingleSelectionMeshEditingTool
---@field protected UVChannelProperties UMeshUVChannelProperties
---@field protected Settings URecomputeUVsToolProperties
---@field protected PolygroupLayerProperties UPolygroupLayersProperties
---@field protected MaterialSettings UExistingMeshMaterialProperties
---@field protected bCreateUVLayoutViewOnSetup boolean
---@field protected UVLayoutView UUVLayoutPreview
---@field protected RecomputeUVsOpFactory URecomputeUVsOpFactory
---@field protected Preview UMeshOpPreviewWithBackgroundCompute
local URecomputeUVsTool = {}

