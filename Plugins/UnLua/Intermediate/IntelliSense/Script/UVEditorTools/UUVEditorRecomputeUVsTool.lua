---UUVEditorRecomputeUVsTool Recomputes UVs based on existing segmentations of the mesh
---@class UUVEditorRecomputeUVsTool : UInteractiveTool
---@field protected Targets TArray<UUVEditorToolMeshInput>
---@field protected Settings URecomputeUVsToolProperties
---@field protected PolygroupLayerProperties UPolygroupLayersProperties
---@field protected Factories TArray<URecomputeUVsOpFactory>
---@field protected UVToolSelectionAPI UUVToolSelectionAPI
local UUVEditorRecomputeUVsTool = {}

