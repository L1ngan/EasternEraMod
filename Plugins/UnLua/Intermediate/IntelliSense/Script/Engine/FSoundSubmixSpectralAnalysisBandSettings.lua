---@class FSoundSubmixSpectralAnalysisBandSettings
---@field public BandFrequency number @The frequency band for the magnitude to analyze
---@field public AttackTimeMsec integer @The attack time for the FFT band interpolation for delegate callback
---@field public ReleaseTimeMsec integer @The release time for the FFT band interpolation for delegate callback
---@field public QFactor number @The ratio of the bandwidth divided by the center frequency. Only used when the spectral analysis type is set to Constant Q.
local FSoundSubmixSpectralAnalysisBandSettings = {}
