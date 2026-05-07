---Normalized focal length information for both width and height dimension
---If focal length is in pixel, normalize using pixel dimensions
---If focal length is in mm, normalize using sensor dimensions
---@class FFocalLengthInfo
---@field public FxFy FVector2D @Value expected to be normalized (unitless)
local FFocalLengthInfo = {}
