---Simple Mesh Normal Updating Tool
---@class URemoveOccludedTrianglesTool : UMultiSelectionMeshEditingTool
---@field protected BasicProperties URemoveOccludedTrianglesToolProperties
---@field protected PolygroupLayersProperties UPolygroupLayersProperties
---@field protected AdvancedProperties URemoveOccludedTrianglesAdvancedProperties
---@field protected Previews TArray<UMeshOpPreviewWithBackgroundCompute>
---@field protected PreviewCopies TArray<UPreviewMesh> @When multiple meshes in the selection correspond to the same asset, only one needs a PreviewWithBackgroundCompute  all others just get a plain PreviewMesh copy that is updated via OnMeshUpdated broadcast from the source Preview
local URemoveOccludedTrianglesTool = {}

