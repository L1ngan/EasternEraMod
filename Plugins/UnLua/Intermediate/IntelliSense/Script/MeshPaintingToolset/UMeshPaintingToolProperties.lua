---@class UMeshPaintingToolProperties : UBrushBaseProperties
---@field public PaintColor FLinearColor @Color used for applying color painting
---@field public EraseColor FLinearColor @Color used for erasing color painting
---@field public bEnableFlow boolean @Enables "Flow" painting where paint is continually applied from the brush every tick
---@field public bOnlyFrontFacingTriangles boolean @Whether back-facing triangles should be ignored
local UMeshPaintingToolProperties = {}

