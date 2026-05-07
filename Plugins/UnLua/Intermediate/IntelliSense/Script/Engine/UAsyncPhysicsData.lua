---The base class for async physics data. Inherit from this to create custom data for async physics tick.
---When no data is available (say due to massive latency or packet loss) we fall back on the default constructed data.
---This means you should set the default values to something equivalent to no input (for example bPlayerWantsToJump should probably default to false)
---@class UAsyncPhysicsData : UObject
---@field private ServerFrame integer
---@field protected ReplicationRedundancy integer @Determines how many times we redundantly send data to server. The higher this number the less packet loss, but more bandwidth is used
local UAsyncPhysicsData = {}

