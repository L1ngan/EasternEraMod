---Create a RGBA image from a single color at a specific resolution
---Outputs are single channel images
---@class FDataflowImageFromColorNode : FDataflowNode
---@field private FillColor FLinearColor @color  to fill the image with
---@field private Resolution EDataflowImageResolution @resolution of the output image
---@field private Image FDataflowImage @Output image
local FDataflowImageFromColorNode = {}
