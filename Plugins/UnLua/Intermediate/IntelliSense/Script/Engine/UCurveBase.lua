---Defines a curve of interpolated points to evaluate over a given range
---@class UCurveBase : UObject
---@field public AssetImportData UAssetImportData
local UCurveBase = {}

---Get the value range across all curves
---@param MinValue number @[out] 
---@param MaxValue number @[out] 
function UCurveBase:GetValueRange(MinValue, MaxValue) end

---Get the time range across all curves
---@param MinTime number @[out] 
---@param MaxTime number @[out] 
function UCurveBase:GetTimeRange(MinTime, MaxTime) end

