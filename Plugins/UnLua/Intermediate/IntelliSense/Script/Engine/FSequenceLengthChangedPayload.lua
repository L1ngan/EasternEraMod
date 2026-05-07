---@class FSequenceLengthChangedPayload : FEmptyPayload
---@field public PreviousLength number
---@field public T0 number
---@field public T1 number
---@field public PreviousNumberOfFrames FFrameNumber @Previous playable number of frames for the Model
---@field public Frame0 FFrameNumber @Frame number at which the change in frames has been made
---@field public Frame1 FFrameNumber @Amount of frames which is inserted or removed starting at Frame0
local FSequenceLengthChangedPayload = {}
