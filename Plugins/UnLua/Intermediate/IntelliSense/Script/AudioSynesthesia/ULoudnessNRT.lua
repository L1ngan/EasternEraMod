---ULoudnessNRT
---ULoudnessNRT calculates the temporal evolution of perceptual loudness for a given
---sound. Loudness is available for individual channels or the overall sound asset. Normalized
---loudness values convert the range to 0.0 to 1.0 where 0.0 is the noise floor and 1.0 is the
---maximum loudness of the particular sound.
---@class ULoudnessNRT : UAudioSynesthesiaNRT
---@field public Settings ULoudnessNRTSettings @The settings for the audio analyzer.
local ULoudnessNRT = {}

---Get the normalized overall loudness of the analyzed sound at a given time. Normalized loudness
---is always between 0.0 to 1.0. 0.0 refers to the noise floor while 1.0 refers to the maximum
---loudness in the sound.
---@param InSeconds number
---@param OutLoudness number @[out] 
function ULoudnessNRT:GetNormalizedLoudnessAtTime(InSeconds, OutLoudness) end

---Get a specific channel normalized loudness of the analyzed sound at a given time. Normalized
---loudness is always between 0.0 to 1.0. 0.0 refers to the noise floor while 1.0 refers to the
---maximum loudness in the sound.
---@param InSeconds number
---@param InChannel integer
---@param OutLoudness number @[out] 
function ULoudnessNRT:GetNormalizedChannelLoudnessAtTime(InSeconds, InChannel, OutLoudness) end

---Get the overall loudness of the analyzed sound at a given time.
---@param InSeconds number
---@param OutLoudness number @[out] 
function ULoudnessNRT:GetLoudnessAtTime(InSeconds, OutLoudness) end

---Get a specific channel loudness of the analyzed sound at a given time.
---@param InSeconds number
---@param InChannel integer
---@param OutLoudness number @[out] 
function ULoudnessNRT:GetChannelLoudnessAtTime(InSeconds, InChannel, OutLoudness) end

