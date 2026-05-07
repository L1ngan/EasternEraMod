---Base class for mesh texture paint properties.
---@class UMeshTexturePaintingToolProperties : UMeshPaintingToolProperties
---@field public bEnableSeamPainting boolean @Seam painting flag, True if we should enable dilation to allow the painting of texture seams
---@field public PaintBrush UTexture2D @Optional Texture Brush to which Painting should use
---@field public PaintBrushRotationOffset number @Initial Rotation offset to apply to our paint brush
---@field public bRotateBrushTowardsDirection boolean @Whether or not to continously rotate the brush towards the painting direction
---@field public bWriteRed boolean @Whether or not to apply Texture Color Painting to the Red Channel
---@field public bWriteGreen boolean @Whether or not to apply Texture Color Painting to the Green Channel
---@field public bWriteBlue boolean @Whether or not to apply Texture Color Painting to the Blue Channel
---@field public bWriteAlpha boolean @Whether or not to apply Texture Color Painting to the Alpha Channel
local UMeshTexturePaintingToolProperties = {}

