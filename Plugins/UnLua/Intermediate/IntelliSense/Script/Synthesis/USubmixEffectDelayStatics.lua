---@class USubmixEffectDelayStatics : UBlueprintFunctionLibrary
local USubmixEffectDelayStatics = {}

---@param DelaySettings FSubmixEffectDelaySettings @[out] 
---@param MaximumDelayLength number
---@return FSubmixEffectDelaySettings
function USubmixEffectDelayStatics.SetMaximumDelayLength(DelaySettings, MaximumDelayLength) end

---@param DelaySettings FSubmixEffectDelaySettings @[out] 
---@param InterpolationTime number
---@return FSubmixEffectDelaySettings
function USubmixEffectDelayStatics.SetInterpolationTime(DelaySettings, InterpolationTime) end

---@param DelaySettings FSubmixEffectDelaySettings @[out] 
---@param DelayLength number
---@return FSubmixEffectDelaySettings
function USubmixEffectDelayStatics.SetDelayLength(DelaySettings, DelayLength) end

