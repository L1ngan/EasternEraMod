---Base class for mesh texture painting tool.
---@class UMeshTexturePaintingTool : UBaseBrushTool
---@field protected PaintTargetData TMap<UTexture2D, FPaintTexture2DData> @Stores data associated with our paint target textures
---@field private SelectionMechanic UMeshPaintSelectionMechanic
---@field private TextureProperties UMeshTexturePaintingToolProperties
---@field private PaintingTexture2D UTexture2D @The original texture that we're painting
local UMeshTexturePaintingTool = {}

