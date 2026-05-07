---USubmixEffectDelayPreset
---Class which processes audio streams and uses parameters defined in the preset class.
---@class USubmixEffectDelayPreset : USoundEffectSubmixPreset
---@field public Settings FSubmixEffectDelaySettings
---@field public DynamicSettings FSubmixEffectDelaySettings
local USubmixEffectDelayPreset = {}

---Sets runtime delay settings. This will replace any dynamically added or modified settings without modifying
---the original UObject.
---@param InSettings FSubmixEffectDelaySettings
function USubmixEffectDelayPreset:SetSettings(InSettings) end

---Set the time it takes to interpolate between parameters, in milliseconds.
---@param Time number
function USubmixEffectDelayPreset:SetInterpolationTime(Time) end

---Set how long the delay actually is, in milliseconds.
---@param Length number
function USubmixEffectDelayPreset:SetDelay(Length) end

---Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),
---as well as any dynamically set settings.
---@param InSettings FSubmixEffectDelaySettings
function USubmixEffectDelayPreset:SetDefaultSettings(InSettings) end

---Get the maximum delay possible.
---@return number
function USubmixEffectDelayPreset:GetMaxDelayInMilliseconds() end

