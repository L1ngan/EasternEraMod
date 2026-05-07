---Filter for replicated objects that have a WorldLocation reference (e.g. Actors).
---This filter is more efficient since it's run before Polling and culls out objects that are not relevant to any connection.
---@class UNetObjectGridWorldLocFilter : UNetObjectGridFilter
local UNetObjectGridWorldLocFilter = {}

