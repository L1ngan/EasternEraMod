---UParameterizeMeshTool automatically decomposes the input mesh into charts, solves for UVs,
---and then packs the resulting charts
---@class UParameterizeMeshTool : USingleSelectionMeshEditingTool
---@field protected UVChannelProperties UMeshUVChannelProperties
---@field protected Settings UParameterizeMeshToolProperties
---@field protected UVAtlasProperties UParameterizeMeshToolUVAtlasProperties
---@field protected XAtlasProperties UParameterizeMeshToolXAtlasProperties
---@field protected PatchBuilderProperties UParameterizeMeshToolPatchBuilderProperties
---@field protected PolygroupLayerProperties UPolygroupLayersProperties
---@field protected MaterialSettings UExistingMeshMaterialProperties
---@field protected bCreateUVLayoutViewOnSetup boolean
---@field protected UVLayoutView UUVLayoutPreview
---@field protected Preview UMeshOpPreviewWithBackgroundCompute
---@field protected Factory UParameterizeMeshOperatorFactory
local UParameterizeMeshTool = {}

