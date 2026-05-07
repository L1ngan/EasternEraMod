---Base type for all events, ALL events must derive from this so we have a fallback for serialization
---when we can't find the actual event struct.
---@class FCacheEventBase
local FCacheEventBase = {}
