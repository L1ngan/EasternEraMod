---UTapDelaySubmixPreset
---Class which processes audio streams and uses parameters defined in the preset class.
---@class USubmixEffectTapDelayPreset : USoundEffectSubmixPreset
---@field public Settings FSubmixEffectTapDelaySettings
local USubmixEffectTapDelayPreset = {}

---Modify a specific tap.
---@param TapId integer
---@param TapInfo FTapDelayInfo
function USubmixEffectTapDelayPreset:SetTap(TapId, TapInfo) end

---Set all tap delay setting. This will replace any dynamically added or modified taps.
---@param InSettings FSubmixEffectTapDelaySettings
function USubmixEffectTapDelayPreset:SetSettings(InSettings) end

---Set the time it takes to interpolate between parameters, in milliseconds.
---@param Time number
function USubmixEffectTapDelayPreset:SetInterpolationTime(Time) end

---Remove the tap from the preset.
---@param TapId integer
function USubmixEffectTapDelayPreset:RemoveTap(TapId) end

---Retrieve an array of all tap ids for the submix effect.
---@param TapIds TArray_integer_ @[out] 
function USubmixEffectTapDelayPreset:GetTapIds(TapIds) end

---Get the current info about a specific tap.
---@param TapId integer
---@param TapInfo FTapDelayInfo @[out] 
function USubmixEffectTapDelayPreset:GetTap(TapId, TapInfo) end

---Get the maximum delay possible.
---@return number
function USubmixEffectTapDelayPreset:GetMaxDelayInMilliseconds() end

---Adds a dynamic tap delay with the given settings. Returns the tap id.
---@param TapId integer @[out] 
function USubmixEffectTapDelayPreset:AddTap(TapId) end

