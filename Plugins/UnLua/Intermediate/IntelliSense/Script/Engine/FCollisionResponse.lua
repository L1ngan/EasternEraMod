---@class FCollisionResponse
---@field private ResponseToChannels FCollisionResponseContainer @Types of objects that this physics objects will collide with. // we have to still load them until resave
---@field private ResponseArray TArray<FResponseChannel> @Custom Channels for Responses
local FCollisionResponse = {}
