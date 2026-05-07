---USynesthesiaSpectrumAnalysisAnalyzer
---USynesthesiaSpectrumAnalysisAnalyzer calculates the current amplitude of an
---audio bus in real-time.
---@class USynesthesiaSpectrumAnalyzer : UAudioAnalyzer
---@field public Settings USynesthesiaSpectrumAnalysisSettings @The settings for the SynesthesiaSpectrumAnalysis audio analyzer.
---@field public OnSpectrumResults MulticastDelegate @Delegate to receive all Spectrum results, per-channel, since last delegate call. If bDownmixToMono setting is true, results will be in channel index 0.
---@field public OnLatestSpectrumResults MulticastDelegate @Delegate to receive the latest per-channel Spectrum results. If bDownmixToMono setting is true, results will be in channel index 0.
local USynesthesiaSpectrumAnalyzer = {}

---@return integer
function USynesthesiaSpectrumAnalyzer:GetNumCenterFrequencies() end

---@param InSampleRate number
---@param OutCenterFrequencies TArray_number_ @[out] 
function USynesthesiaSpectrumAnalyzer:GetCenterFrequencies(InSampleRate, OutCenterFrequencies) end

