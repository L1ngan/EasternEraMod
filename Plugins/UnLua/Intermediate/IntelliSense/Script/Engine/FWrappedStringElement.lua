---Used by UUIString::WrapString to track information about each line that is generated as the result of wrapping.
---@class FWrappedStringElement
---@field public Value string @the string associated with this line
---@field public LineExtent FVector2D @the size (in pixels) that it will take to render this string
local FWrappedStringElement = {}
