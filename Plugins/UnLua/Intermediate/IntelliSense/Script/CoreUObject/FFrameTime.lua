---Represents a time by a context-free frame number, plus a sub frame value in the range [0:1).
---@class FFrameTime
---@field public FrameNumber FFrameNumber @Count of frames from start of timing
---@field private SubFrame number @Time within a frame, always between >= 0 and < 1
local FFrameTime = {}
