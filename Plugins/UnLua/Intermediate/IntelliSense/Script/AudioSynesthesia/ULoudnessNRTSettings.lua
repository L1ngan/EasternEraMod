---ULoudnessNRTSettings
---Settings for a ULoudnessNRT analyzer.
---@class ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings
---@field public AnalysisPeriod number @Number of seconds between loudness measurements
---@field public MinimumFrequency number @Minimum analysis frequency for calculating loudness.
---@field public MaximumFrequency number @Maximum analysis frequency for calculating loudness.
---@field public CurveType ELoudnessNRTCurveTypeEnum @Type of equal loudness curve used in calculations
---@field public NoiseFloorDb number @dB level to denote silence.  Used when calculating normalized loudness.
local ULoudnessNRTSettings = {}

