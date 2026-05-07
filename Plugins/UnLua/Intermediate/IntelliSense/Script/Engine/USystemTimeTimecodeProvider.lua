---Converts the current system time to timecode, relative to a provided frame rate.
---@class USystemTimeTimecodeProvider : UTimecodeProvider
---@field public FrameRate FFrameRate @The frame rate at which the timecode value will be generated.
---@field public bGenerateFullFrame boolean @When generating frame time, should we generate full frame without subframe value.
---@field public bUseHighPerformanceClock boolean @Use the high performance clock instead of the system time to generate the timecode value. Using the high performance clock is faster but will make the value drift over time.
local USystemTimeTimecodeProvider = {}

