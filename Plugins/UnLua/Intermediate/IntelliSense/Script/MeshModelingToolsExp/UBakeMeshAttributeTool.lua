---Base Mesh Bake tool
---@class UBakeMeshAttributeTool : UMultiSelectionMeshEditingTool
---@field protected OcclusionSettings UBakeOcclusionMapToolProperties @Bake tool property sets
---@field protected CurvatureSettings UBakeCurvatureMapToolProperties
---@field protected TextureSettings UBakeTexture2DProperties
---@field protected MultiTextureSettings UBakeMultiTexture2DProperties
---@field protected HeightSettings UBakeHeightMapToolProperties
---@field protected WorkingPreviewMaterial UMaterialInstanceDynamic @Preview materials
---@field protected ErrorPreviewMaterial UMaterialInstanceDynamic
local UBakeMeshAttributeTool = {}

