---@class USubmixEffectMultibandCompressorPreset : USoundEffectSubmixPreset
---@field public Settings FSubmixEffectMultibandCompressorSettings
local USubmixEffectMultibandCompressorPreset = {}

---@param InSettings FSubmixEffectMultibandCompressorSettings
function USubmixEffectMultibandCompressorPreset:SetSettings(InSettings) end

---Sets the source key input as the provided Submix's output.  If no object is provided, key is set
---to effect's input.
---@param Submix USoundSubmix
function USubmixEffectMultibandCompressorPreset:SetExternalSubmix(Submix) end

---Sets the source key input as the provided AudioBus' output.  If no object is provided, key is set
---to effect's input.
---@param AudioBus UAudioBus
function USubmixEffectMultibandCompressorPreset:SetAudioBus(AudioBus) end

function USubmixEffectMultibandCompressorPreset:ResetKey() end

