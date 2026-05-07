---UConstantQAnalyzer
---UConstantQAnalyzer calculates the temporal evolution of constant q transform for a given
---audio bus in real-time. ConstantQ is available for individual channels or the overall audio bus.
---@class UConstantQAnalyzer : UAudioAnalyzer
---@field public Settings UConstantQSettings @The settings for the audio analyzer.
---@field public OnConstantQResults MulticastDelegate @Delegate to receive all Spectrum results, per-channel, since last delegate call. If bDownmixToMono setting is true, results will be in channel index 0.
---@field public OnLatestConstantQResults MulticastDelegate @Delegate to receive the latest per-channel Spectrum results. If bDownmixToMono setting is true, results will be in channel index 0.
local UConstantQAnalyzer = {}

---@return integer
function UConstantQAnalyzer:GetNumCenterFrequencies() end

---@param OutCenterFrequencies TArray_number_ @[out] 
function UConstantQAnalyzer:GetCenterFrequencies(OutCenterFrequencies) end

