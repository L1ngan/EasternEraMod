---UParameterizeMeshTool automatically decomposes the input mesh into charts, solves for UVs,
---and then packs the resulting charts
---@class UUVEditorParameterizeMeshTool : UInteractiveTool
---@field protected Targets TArray<UUVEditorToolMeshInput>
---@field protected Settings UParameterizeMeshToolProperties
---@field protected UVAtlasProperties UParameterizeMeshToolUVAtlasProperties
---@field protected XAtlasProperties UParameterizeMeshToolXAtlasProperties
---@field protected PatchBuilderProperties UParameterizeMeshToolPatchBuilderProperties
---@field protected PolygroupLayerProperties UPolygroupLayersProperties
---@field protected Factories TArray<UParameterizeMeshOperatorFactory>
local UUVEditorParameterizeMeshTool = {}

