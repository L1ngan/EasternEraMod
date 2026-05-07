---@class FDynamicsBandSettings
---@field public CrossoverTopFrequency number @Frequency of the crossover between this band and the next. The last band will have this property ignored
---@field public AttackTimeMsec number @The amount of time to ramp into any dynamics processing effect in milliseconds.
---@field public ReleaseTimeMsec number @The amount of time to release the dynamics processing effect in milliseconds
---@field public ThresholdDb number @The threshold at which to perform a dynamics processing operation
---@field public Ratio number @The dynamics processor ratio -- has different meaning depending on the processor type.
---@field public KneeBandwidthDb number @The knee bandwidth of the compressor to use in dB
---@field public InputGainDb number @The input gain of the dynamics processor in dB
---@field public OutputGainDb number @The output gain of the dynamics processor in dB
local FDynamicsBandSettings = {}
