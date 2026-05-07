---UConstantQNRT
---UConstantQNRT calculates the temporal evolution of constant q transform for a given
---sound. ConstantQ is available for individual channels or the overall sound asset.
---@class UConstantQNRT : UAudioSynesthesiaNRT
---@field public Settings UConstantQNRTSettings @The settings for the audio analyzer.
local UConstantQNRT = {}

---Get a specific channel cqt of the analyzed sound at a given time.
---@param InSeconds number
---@param InChannel integer
---@param OutConstantQ TArray_number_ @[out] 
function UConstantQNRT:GetNormalizedChannelConstantQAtTime(InSeconds, InChannel, OutConstantQ) end

---Get a specific channel cqt of the analyzed sound at a given time.
---@param InSeconds number
---@param InChannel integer
---@param OutConstantQ TArray_number_ @[out] 
function UConstantQNRT:GetChannelConstantQAtTime(InSeconds, InChannel, OutConstantQ) end

