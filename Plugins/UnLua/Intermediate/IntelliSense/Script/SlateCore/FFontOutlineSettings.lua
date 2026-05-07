---Settings for applying an outline to a font
---@class FFontOutlineSettings
---@field public OutlineSize integer @Size of the outline in slate units (at 1.0 font scale this unit is a pixel)
---@field public bMiteredCorners boolean @When enabled, outlines have sharp mitered corners, otherwise they are rounded.
---@field public bSeparateFillAlpha boolean @When enabled the outline will be completely translucent where the filled area will be.  This allows for a separate fill alpha value The trade off when enabling this is slightly worse quality for completely opaque fills where the inner outline border meets the fill area
---@field public bApplyOutlineToDropShadows boolean @When enabled the outline will be applied to any drop shadow that uses this font
---@field public OutlineMaterial UObject @Optional material to apply to the outline
---@field public OutlineColor FLinearColor @The color of the outline for any character in this font
local FFontOutlineSettings = {}
