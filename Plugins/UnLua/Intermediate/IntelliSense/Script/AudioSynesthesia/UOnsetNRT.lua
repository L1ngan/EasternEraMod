---UOnsetNRT
---UOnsetNRT calculates the temporal evolution of constant q transform for a given
---sound. Onset is available for individual channels or the overall sound asset.
---@class UOnsetNRT : UAudioSynesthesiaNRT
---@field public Settings UOnsetNRTSettings @The settings for the audio analyzer.
local UOnsetNRT = {}

---Get a specific channel cqt of the analyzed sound at a given time.
---@param InStartSeconds number
---@param InEndSeconds number
---@param InChannel integer
---@param OutOnsetTimestamps TArray_number_ @[out] 
---@param OutOnsetStrengths TArray_number_ @[out] 
function UOnsetNRT:GetNormalizedChannelOnsetsBetweenTimes(InStartSeconds, InEndSeconds, InChannel, OutOnsetTimestamps, OutOnsetStrengths) end

---Returns onsets which occured between start and end timestamps.
---@param InStartSeconds number
---@param InEndSeconds number
---@param InChannel integer
---@param OutOnsetTimestamps TArray_number_ @[out] 
---@param OutOnsetStrengths TArray_number_ @[out] 
function UOnsetNRT:GetChannelOnsetsBetweenTimes(InStartSeconds, InEndSeconds, InChannel, OutOnsetTimestamps, OutOnsetStrengths) end

