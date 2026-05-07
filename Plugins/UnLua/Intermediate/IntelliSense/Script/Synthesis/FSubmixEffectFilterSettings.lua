---FSubmixEffectFilterSettings
---UStruct used to define user-exposed params for use with your effect.
---@class FSubmixEffectFilterSettings
---@field public FilterType ESubmixFilterType @What type of filter to use for the submix filter effect
---@field public FilterAlgorithm ESubmixFilterAlgorithm @What type of filter algorithm to use for the submix filter effect
---@field public FilterFrequency number @The output filter cutoff frequency (hz) [0.0, 20000.0]
---@field public FilterQ number @The output filter resonance (Q) [0.5, 10]
local FSubmixEffectFilterSettings = {}
