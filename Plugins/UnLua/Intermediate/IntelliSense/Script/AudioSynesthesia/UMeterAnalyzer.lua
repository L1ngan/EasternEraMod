---UMeterAnalyzer
---UMeterAnalyzer calculates the current amplitude of an
---audio bus in real-time.
---@class UMeterAnalyzer : UAudioAnalyzer
---@field public Settings UMeterSettings @The settings for the meter audio analyzer.
---@field public OnOverallMeterResults MulticastDelegate @Delegate to receive all overall meter results since last delegate call.
---@field public OnPerChannelMeterResults MulticastDelegate @Delegate to receive all meter results, per-channel, since last delegate call.
---@field public OnLatestOverallMeterResults MulticastDelegate @Delegate to receive the latest overall meter results.
---@field public OnLatestPerChannelMeterResults MulticastDelegate @Delegate to receive the latest per-channel meter results.
local UMeterAnalyzer = {}

