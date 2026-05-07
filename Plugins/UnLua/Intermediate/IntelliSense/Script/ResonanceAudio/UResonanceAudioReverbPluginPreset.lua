---@class UResonanceAudioReverbPluginPreset : USoundEffectSubmixPreset
---@field public Settings FResonanceAudioReverbPluginSettings
local UResonanceAudioReverbPluginPreset = {}

---Sets room rotation in 3D space
---@param InRotation FQuat
function UResonanceAudioReverbPluginPreset:SetRoomRotation(InRotation) end

---Sets room position in 3D space
---@param InPosition FVector
function UResonanceAudioReverbPluginPreset:SetRoomPosition(InPosition) end

---Sets Resonance Audio room's acoustic materials
---@param InMaterials TArray_ERaMaterialName_
function UResonanceAudioReverbPluginPreset:SetRoomMaterials(InMaterials) end

---Sets room dimensions in 3D space
---@param InDimensions FVector
function UResonanceAudioReverbPluginPreset:SetRoomDimensions(InDimensions) end

---Adjusts the reverberation time across all frequency bands by multiplying the computed values by this factor.
---Has no effect when set to 1.0
---@param InReverbTimeModifier number
function UResonanceAudioReverbPluginPreset:SetReverbTimeModifier(InReverbTimeModifier) end

---Sets reverb gain multiplier
---@param InReverbGain number
function UResonanceAudioReverbPluginPreset:SetReverbGain(InReverbGain) end

---Increases high frequency reverberation times when positive, decreases when negative.
---Has no effect when set to 0.0
---@param InReverbBrightness number
function UResonanceAudioReverbPluginPreset:SetReverbBrightness(InReverbBrightness) end

---Sets early reflections gain multiplier
---@param InReflectionScalar number
function UResonanceAudioReverbPluginPreset:SetReflectionScalar(InReflectionScalar) end

---Enables/disables Resonance Audio room effects
---@param bInEnableRoomEffects boolean
function UResonanceAudioReverbPluginPreset:SetEnableRoomEffects(bInEnableRoomEffects) end

