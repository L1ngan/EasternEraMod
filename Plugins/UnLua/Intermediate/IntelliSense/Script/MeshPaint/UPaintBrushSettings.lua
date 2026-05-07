---@class UPaintBrushSettings : UObject
---@field protected BrushRadius number @Radius of the Brush used for Painting
---@field public BrushStrength number @Strength of the brush (0.0 - 1.0)
---@field public BrushFalloffAmount number @Amount of falloff to apply (0.0 - 1.0)
---@field public bEnableFlow boolean @Enables "Flow" painting where paint is continually applied from the brush every tick
---@field public bOnlyFrontFacingTriangles boolean @Whether back-facing triangles should be ignored
---@field public ColorViewMode EMeshPaintColorViewMode @Color view mode used to display Vertex Colors
local UPaintBrushSettings = {}

