---@class USubmixEffectReverbPreset : USoundEffectSubmixPreset
---@field public Settings FSubmixEffectReverbSettings
local USubmixEffectReverbPreset = {}

---@param InReverbEffect UReverbEffect
---@param WetLevel number
---@param DryLevel number @[opt] 
function USubmixEffectReverbPreset:SetSettingsWithReverbEffect(InReverbEffect, WetLevel, DryLevel) end

---@param InSettings FSubmixEffectReverbSettings
function USubmixEffectReverbPreset:SetSettings(InSettings) end

