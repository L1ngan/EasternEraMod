---ULoudnessAnalyzer
---ULoudnessAnalyzer calculates the temporal evolution of perceptual loudness for a given
---audio bus in real-time. Loudness is available for individual channels or the overall audio bus. Normalized
---loudness values convert the range to 0.0 to 1.0 where 0.0 is the noise floor and 1.0 is the
---maximum loudness of the particular sound.
---@class ULoudnessAnalyzer : UAudioAnalyzer
---@field public Settings ULoudnessSettings @The settings for the audio analyzer.
---@field public OnOverallLoudnessResults MulticastDelegate @Delegate to receive all overall loudness results since last delegate call.
---@field public OnPerChannelLoudnessResults MulticastDelegate @Delegate to receive all loudness results, per-channel, since last delegate call.
---@field public OnLatestOverallLoudnessResults MulticastDelegate @Delegate to receive the latest overall loudness results.
---@field public OnLatestPerChannelLoudnessResults MulticastDelegate @Delegate to receive the latest per-channel loudness results.
local ULoudnessAnalyzer = {}

