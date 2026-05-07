---Structure for recording float values and displaying them as an Histogram through DrawDebugFloatHistory.
---@class FDebugFloatHistory
---@field private Samples TArray<number> @Samples
---@field public MaxSamples integer @Max Samples to record.
---@field public MinValue number @Min value to record.
---@field public MaxValue number @Max value to record.
---@field public bAutoAdjustMinMax boolean @Auto adjust Min/Max as new values are recorded?
local FDebugFloatHistory = {}
