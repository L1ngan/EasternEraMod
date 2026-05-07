---Simple Mesh Normal Updating Tool
---@class UEditNormalsTool : UMultiSelectionMeshEditingTool
---@field protected BasicProperties UEditNormalsToolProperties
---@field protected PolygroupLayerProperties UPolygroupLayersProperties
---@field protected Previews TArray<UMeshOpPreviewWithBackgroundCompute>
---@field protected GeometrySelectionVizProperties UGeometrySelectionVisualizationProperties @Selection. Only used when the tool is run with one target
---@field protected GeometrySelectionViz UPreviewGeometry
local UEditNormalsTool = {}

