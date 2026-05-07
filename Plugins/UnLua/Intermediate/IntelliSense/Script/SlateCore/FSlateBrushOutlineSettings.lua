---Possible options for rounded box brush image
---@class FSlateBrushOutlineSettings
---@field public CornerRadii FVector4 @Radius in Slate Units applied to the outline at each corner. X = Top Left, Y = Top Right, Z = Bottom Right, W = Bottom Left
---@field public Color FSlateColor @Tinting applied to the border outline.
---@field public Width number @Line width in Slate Units applied to the border outline.
---@field public RoundingType integer @The Rounding Type *
---@field public bUseBrushTransparency boolean @True if we should use the owning brush's transparency as our own *
local FSlateBrushOutlineSettings = {}
