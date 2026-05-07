---@class UResonanceAudioSpatializationSourceSettings : USpatializationPluginSourceSettingsBase
---@field public SpatializationMethod ERaSpatializationMethod @Spatialization method to use for sound object(s). NOTE: Has no effect if 'Stereo Panning' global quality mode is selected for the project
---@field public Pattern number @Directivity pattern: 0.0 (omnidirectional), 0.5 (cardioid), 1.0 (figure-of-8)
---@field public Sharpness number @Sharpness of the directivity pattern. Higher values result in a narrower sound emission beam
---@field public bToggleVisualization boolean @Whether to visualize directivity pattern in the viewport.
---@field public Scale number @Scale (for directivity pattern visualization only).
---@field public Spread number @Spread (width) of the sound source (in degrees). Note: spread control is not available if 'Stereo Panning' global quality mode is enabled for the project and / or 'Stereo Panning' spatialization mode is enabled for the sound source
---@field public Rolloff ERaDistanceRolloffModel @Roll-off model to use for sound source distance attenuation. Select 'None' (default) to use Unreal attenuation settings
---@field public MinDistance number @Minimum distance to apply the chosen attenuation method (default = 100.0 cm)
---@field public MaxDistance number @Maximum distance to apply the chosen attenuation method ((default = 50000.0 cm)
local UResonanceAudioSpatializationSourceSettings = {}

---Sets the sound source spread (width), applies, and updates
---@param InSpread number
function UResonanceAudioSpatializationSourceSettings:SetSoundSourceSpread(InSpread) end

---Sets the sound source directivity, applies, and updates
---@param InPattern number
---@param InSharpness number
function UResonanceAudioSpatializationSourceSettings:SetSoundSourceDirectivity(InPattern, InSharpness) end

