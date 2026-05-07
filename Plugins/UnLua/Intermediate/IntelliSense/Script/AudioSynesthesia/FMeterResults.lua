---The results of the meter analysis.
---@class FMeterResults
---@field public TimeSeconds number @The time in seconds since analysis began of this meter analysis result
---@field public MeterValue number @The meter value
---@field public PeakValue number @The peak value
---@field public NumSamplesClipping integer @The number of samples in the period which were above the clipping threshold. Will be 0 if no clipping was detected.
---@field public ClippingValue number @The value (if non-zero) if clipping was detected above the clipping threshold
local FMeterResults = {}
