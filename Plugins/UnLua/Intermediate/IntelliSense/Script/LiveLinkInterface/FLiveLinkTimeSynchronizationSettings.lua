---@class FLiveLinkTimeSynchronizationSettings
---@field public FrameRate FFrameRate @The frame rate of the source. This should be the frame rate the source is "stamped" at, not necessarily the frame rate the source is sending. The source should supply this whenever possible.
---@field public FrameOffset FFrameNumber @When evaluating: how far back from current timecode should we read the buffer (in frame number)
local FLiveLinkTimeSynchronizationSettings = {}
