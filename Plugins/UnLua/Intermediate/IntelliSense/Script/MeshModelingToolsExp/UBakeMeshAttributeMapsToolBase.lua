---Base Bake Maps tool
---@class UBakeMeshAttributeMapsToolBase : UBakeMeshAttributeTool
---@field protected VisualizationProps UBakeVisualizationProperties @Tool property sets
---@field protected PreviewMesh UPreviewMesh @Preview mesh and materials
---@field protected PreviewMaterial UMaterialInstanceDynamic
---@field protected BentNormalPreviewMaterial UMaterialInstanceDynamic
---@field protected CachedMaps TMap<EBakeMapType, UTexture2D> @Internal cache of bake texture results. The tool can inject additional bake types that were not requested by the user. This can occur in cases where a particular bake type might need another bake type to preview such as BentNormal requiring AmbientOcclusion to preview. To avoid writing out assets that the user did not request, we introduce CachedMaps as a temporary texture cache for the tool preview. The Result array is then updated from CachedMaps to only hold user requested textures that are written out on Shutdown.
---@field protected EmptyNormalMap UTexture2D @empty maps are shown when nothing is computed
---@field protected EmptyColorMapBlack UTexture2D
---@field protected EmptyColorMapWhite UTexture2D
local UBakeMeshAttributeMapsToolBase = {}

