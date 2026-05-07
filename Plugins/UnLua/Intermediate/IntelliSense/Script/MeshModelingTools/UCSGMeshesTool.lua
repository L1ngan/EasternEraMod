---Simple Mesh Plane Cutting Tool
---@class UCSGMeshesTool : UBaseCreateFromSelectedTool
---@field protected CSGProperties UCSGMeshesToolProperties
---@field protected TrimProperties UTrimMeshesToolProperties
---@field protected OriginalMeshPreviews TArray<UPreviewMesh>
---@field protected PreviewsGhostMaterial UMaterialInstanceDynamic @Material used to show the otherwise-invisible cutting/trimming mesh
---@field protected DrawnLineSet ULineSetComponent
local UCSGMeshesTool = {}

