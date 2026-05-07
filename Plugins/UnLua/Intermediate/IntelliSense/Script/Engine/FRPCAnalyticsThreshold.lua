---Specifies time or count thresholds for when an RPC should be included in analytics
---@class FRPCAnalyticsThreshold
---@field public RPC string @The RPC name
---@field public CountPerSec integer @The number of calls to an RPC's per second, before including in analytics
---@field public TimePerSec number @Time spent executing an RPC per second, before including in analytics (can specify more than 1 second, for long running RPC's)
local FRPCAnalyticsThreshold = {}
