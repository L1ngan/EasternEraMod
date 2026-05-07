---Metrics that correspond to a particular frame
---@class FFrameMetrics
---@field public TotalElapsedTime number @The total amount of time, in seconds, since the capture started
---@field public FrameDelta number @The total amount of time, in seconds, that this specific frame took to render (not accounting for dropped frames)
---@field public FrameNumber integer @The index of this frame from the start of the capture, including dropped frames
---@field public NumDroppedFrames integer @The number of frames we dropped in-between this frame, and the last one we captured
local FFrameMetrics = {}
