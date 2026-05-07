---USubmixEffectFilterPreset
---Class which processes audio streams and uses parameters defined in the preset class.
---@class USubmixEffectFilterPreset : USoundEffectSubmixPreset
---@field public Settings FSubmixEffectFilterSettings
local USubmixEffectFilterPreset = {}

---Set all filter effect settings
---@param InSettings FSubmixEffectFilterSettings
function USubmixEffectFilterPreset:SetSettings(InSettings) end

---Sets the filter type
---@param InType ESubmixFilterType
function USubmixEffectFilterPreset:SetFilterType(InType) end

---Sets the filter Q
---@param InQ number
function USubmixEffectFilterPreset:SetFilterQMod(InQ) end

---Sets the filter Q
---@param InQ number
function USubmixEffectFilterPreset:SetFilterQ(InQ) end

---Sets the mod filter cutoff frequency
---@param InFrequency number
function USubmixEffectFilterPreset:SetFilterCutoffFrequencyMod(InFrequency) end

---Sets the base filter cutoff frequency
---@param InFrequency number
function USubmixEffectFilterPreset:SetFilterCutoffFrequency(InFrequency) end

---Sets the filter algorithm
---@param InAlgorithm ESubmixFilterAlgorithm
function USubmixEffectFilterPreset:SetFilterAlgorithm(InAlgorithm) end

