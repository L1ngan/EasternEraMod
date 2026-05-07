---UMeterSettings
---Settings for a UMeterAnalyzer.
---@class UMeterSettings : UAudioSynesthesiaSettings
---@field public AnalysisPeriod number @Number of seconds between meter measurements
---@field public PeakMode EMeterPeakType @Meter envelope type type
---@field public MeterAttackTime integer @Meter attack time, in milliseconds
---@field public MeterReleaseTime integer @Meter release time, in milliseconds.
---@field public PeakHoldTime integer @Peak hold time, in milliseconds
---@field public ClippingThreshold number @What volume threshold to throw clipping detection notifications.
local UMeterSettings = {}

