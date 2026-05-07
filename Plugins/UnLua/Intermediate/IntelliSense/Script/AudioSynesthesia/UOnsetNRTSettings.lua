---UOnsetNRTSettings
---Settings for a UOnsetNRT analyzer.
---@class UOnsetNRTSettings : UAudioSynesthesiaNRTSettings
---@field public bDownmixToMono boolean @If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets it's own onset result.
---@field public GranularityInSeconds number @Onset timestamp granularity onsets. Lower granularity takes longer to compute.
---@field public Sensitivity number @Sensitivity of onset detector. Higher sensitivity will find more onsets.
---@field public MinimumFrequency number @Starting frequency for onset anlaysis.
---@field public MaximumFrequency number @Starting frequency for onset anlaysis.
local UOnsetNRTSettings = {}

