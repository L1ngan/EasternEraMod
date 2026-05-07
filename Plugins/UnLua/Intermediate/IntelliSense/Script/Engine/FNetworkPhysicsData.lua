---Base network physics data that will be used by physics
---@class FNetworkPhysicsData
---@field public ServerFrame integer @Server frame at which this data has been generated
---@field public LocalFrame integer @Local frame at which this data has been generated (not replicated, calculated from ServerFrame - FrameOffset )
local FNetworkPhysicsData = {}
