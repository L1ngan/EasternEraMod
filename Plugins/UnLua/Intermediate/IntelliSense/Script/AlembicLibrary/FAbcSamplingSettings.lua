---@class FAbcSamplingSettings
---@field public SamplingType EAlembicSamplingType @Type of sampling performed while importing the animation
---@field public FrameSteps integer @Steps to take when sampling the animation
---@field public TimeSteps number @Time steps to take when sampling the animation
---@field public FrameStart integer @Starting index to start sampling the animation from
---@field public FrameEnd integer @Ending index to stop sampling the animation at
---@field public bSkipEmpty boolean @Skip empty (pre-roll) frames and start importing at the frame which actually contains data
local FAbcSamplingSettings = {}
