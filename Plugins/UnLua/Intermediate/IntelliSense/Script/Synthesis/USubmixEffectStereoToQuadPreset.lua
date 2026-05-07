---Submix effect which sends stereo audio to quad (left surround and right surround) if the channel count is greater than 2.
---@class USubmixEffectStereoToQuadPreset : USoundEffectSubmixPreset
---@field public Settings FSubmixEffectStereoToQuadSettings
local USubmixEffectStereoToQuadPreset = {}

---Set all tap delay settings. This will replace any dynamically added or modified taps.
---@param InSettings FSubmixEffectStereoToQuadSettings
function USubmixEffectStereoToQuadPreset:SetSettings(InSettings) end

