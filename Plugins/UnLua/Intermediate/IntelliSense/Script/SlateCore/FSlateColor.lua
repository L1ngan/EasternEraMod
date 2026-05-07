---A Slate color can be a directly specified value, or the color can be pulled from a WidgetStyle.
---@class FSlateColor
---@field protected SpecifiedColor FLinearColor @The current specified color; only meaningful when ColorToUse == UseColor_Specified.
---@field protected ColorUseRule ESlateColorStylingMode @The rule for which color to pick.
local FSlateColor = {}
