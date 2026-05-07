---@class USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset
---@field public Settings FSubmixEffectDynamicsProcessorSettings
local USubmixEffectDynamicsProcessorPreset = {}

---@param Settings FSubmixEffectDynamicsProcessorSettings
function USubmixEffectDynamicsProcessorPreset:SetSettings(Settings) end

---Sets the source key input as the provided Submix's output.  If no object is provided, key is set
---to effect's input.
---@param Submix USoundSubmix
function USubmixEffectDynamicsProcessorPreset:SetExternalSubmix(Submix) end

---Sets the source key input as the provided AudioBus' output.  If no object is provided, key is set
---to effect's input.
---@param AudioBus UAudioBus
function USubmixEffectDynamicsProcessorPreset:SetAudioBus(AudioBus) end

function USubmixEffectDynamicsProcessorPreset:ResetKey() end

