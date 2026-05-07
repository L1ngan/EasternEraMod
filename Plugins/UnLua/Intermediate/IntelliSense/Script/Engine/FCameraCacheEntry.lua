---Cached camera POV info, stored as optimization so we only
---need to do a full camera update once per tick.
---@class FCameraCacheEntry
---@field public TimeStamp number @World time this entry was created.
---@field public POV FMinimalViewInfo @Camera POV to cache.
local FCameraCacheEntry = {}
