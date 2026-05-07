---UDynamicMeshBrushTool is a base class that specializes UBaseBrushTool
---for brushing on an FDynamicMesh3. The input FPrimitiveComponentTarget is hidden
---and a UPreviewMesh is created and shown in its place. This UPreviewMesh is
---used for hit-testing and dynamic rendering.
---@class UDynamicMeshBrushTool : UBaseBrushTool
---@field protected PreviewMesh UPreviewMesh
local UDynamicMeshBrushTool = {}

