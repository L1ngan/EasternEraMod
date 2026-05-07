---UConstantQNRTSettings
---Settings for a UConstantQNRT analyzer.
---@class UConstantQNRTSettings : UAudioSynesthesiaNRTSettings
---@field public StartingFrequency number @Starting frequency for first bin of CQT
---@field public NumBands integer @Total number of resulting constant Q bands.
---@field public NumBandsPerOctave number @Number of bands within an octave.
---@field public AnalysisPeriod number @Number of seconds between cqt measurements
---@field public bDownmixToMono boolean @If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets it's own CQT result.
---@field public FFTSize EConstantQFFTSizeEnum @Size of FFT.
---@field public WindowType EFFTWindowType @Type of window to be applied to input audio
---@field public SpectrumType EAudioSpectrumType @Type of spectrum to use.
---@field public BandWidthStretch number @Stretching factor to control overlap of adjacent bands.
---@field public CQTNormalization EConstantQNormalizationEnum @Normalization scheme used to generate band windows.
---@field public NoiseFloorDb number @Noise floor to use when normalizing CQT
local UConstantQNRTSettings = {}

