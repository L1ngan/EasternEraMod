---Split a image in individual channels
---Outputs are single channel images
---@class FDataflowImageSplitChannelsNode : FDataflowNode
---@field private Image FDataflowImage @Input image to split per channel
---@field private Red FDataflowImage @Red channel
---@field private Green FDataflowImage @Green channel
---@field private Blue FDataflowImage @Blue channel
---@field private Alpha FDataflowImage @Alpha channel
local FDataflowImageSplitChannelsNode = {}
