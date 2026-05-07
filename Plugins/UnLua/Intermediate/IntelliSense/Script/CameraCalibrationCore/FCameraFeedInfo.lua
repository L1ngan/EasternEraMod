---Information about a camera feed, including its dimensions and aspect ratio.
---The camera feed represents (potentially) an inner rect of a media input, excluding any masks / extractions that may surround it.
---@class FCameraFeedInfo
---@field private Dimensions FIntPoint @Dimensions of the Camera Feed
---@field private AspectRatio number @Aspect Ratio of the Camera Feed
local FCameraFeedInfo = {}
