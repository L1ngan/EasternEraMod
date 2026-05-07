---Struct used to store spectral data with time-stamps
---@class FSoundWaveSpectralTimeData
---@field public Data TArray<FSoundWaveSpectralDataEntry> @The spectral data at the given time. The array indices correspond to the frequencies set to analyze.
---@field public TimeSec number @The timestamp associated with this spectral data
local FSoundWaveSpectralTimeData = {}
