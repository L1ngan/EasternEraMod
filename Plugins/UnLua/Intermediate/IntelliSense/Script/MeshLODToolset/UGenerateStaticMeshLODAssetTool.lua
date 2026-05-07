---Simple tool to combine multiple meshes into a single mesh asset
---@class UGenerateStaticMeshLODAssetTool : UMultiSelectionMeshEditingTool
---@field protected OutputProperties UGenerateStaticMeshLODAssetToolOutputProperties
---@field protected BasicProperties UGenerateStaticMeshLODAssetToolProperties
---@field protected PresetProperties UGenerateStaticMeshLODAssetToolPresetProperties
---@field protected TextureProperties UGenerateStaticMeshLODAssetToolTextureProperties
---@field protected CollisionVizSettings UCollisionGeometryVisualizationProperties
---@field protected PreviewWithBackgroundCompute UMeshOpPreviewWithBackgroundCompute
---@field protected PreviewTextures TArray<UTexture2D>
---@field protected PreviewMaterials TArray<UMaterialInterface>
---@field protected ObjectData UPhysicsObjectToolPropertySet
---@field protected CollisionPreview UPreviewGeometry
---@field protected GenerateProcess UGenerateStaticMeshLODProcess
local UGenerateStaticMeshLODAssetTool = {}

