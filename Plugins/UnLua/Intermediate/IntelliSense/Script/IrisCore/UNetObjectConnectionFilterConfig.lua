---@class UNetObjectConnectionFilterConfig : UNetObjectFilterConfig
---@field public MaxObjectCount integer @The maximum amount of objects that may be added to the filter. It's not designed to handle massive amounts- static connection filtering via the ReplicationSystem API is preferred.
local UNetObjectConnectionFilterConfig = {}

