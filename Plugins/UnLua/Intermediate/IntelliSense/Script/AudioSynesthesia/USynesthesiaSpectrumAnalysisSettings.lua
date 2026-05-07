---USynesthesiaSpectrumAnalysisSettings
---Settings for a USynesthesiaSpectrumAnalysisAnalyzer.
---@class USynesthesiaSpectrumAnalysisSettings : UAudioSynesthesiaSettings
---@field public AnalysisPeriod number @Number of seconds between SynesthesiaSpectrumAnalysis measurements
---@field public FFTSize EFFTSize @Size of FFT.
---@field public SpectrumType EAudioSpectrumType @Type of spectrum to use.
---@field public WindowType EFFTWindowType @Type of window to use.
---@field public bDownmixToMono boolean @If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets its own FFT result.
local USynesthesiaSpectrumAnalysisSettings = {}

