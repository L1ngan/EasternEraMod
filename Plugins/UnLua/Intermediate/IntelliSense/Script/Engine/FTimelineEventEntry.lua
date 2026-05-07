---Struct that contains one entry for an 'event' during the timeline
---@class FTimelineEventEntry
---@field public Time number @Time at which event should fire
---@field public EventFunc Delegate @Function to execute when Time is reached
local FTimelineEventEntry = {}
