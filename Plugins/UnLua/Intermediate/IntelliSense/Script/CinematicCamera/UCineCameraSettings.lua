---@class UCineCameraSettings : UDeveloperSettings
---@field public DefaultLensPresetName string @Name of the default lens preset
---@field public DefaultLensFocalLength number @Default focal length (will be constrained by default lens)
---@field public DefaultLensFStop number @Default aperture (will be constrained by default lens)
---@field public LensPresets TArray<FNamedLensPreset> @List of available lens presets
---@field public DefaultFilmbackPreset string @Name of the default filmback preset
---@field public FilmbackPresets TArray<FNamedFilmbackPreset> @List of available filmback presets
---@field public DefaultCropPresetName string @Name of the default crop preset
---@field public CropPresets TArray<FNamedPlateCropPreset> @List of available crop presets
local UCineCameraSettings = {}

---@param InLensPresets TArray_FNamedLensPreset_
function UCineCameraSettings:SetLensPresets(InLensPresets) end

---@param InFilmbackPresets TArray_FNamedFilmbackPreset_
function UCineCameraSettings:SetFilmbackPresets(InFilmbackPresets) end

---Internal Blueprint Setter functions that call SaveConfig after setting the variable to ensure settings persist
---@param InDefaultLensPresetName string
function UCineCameraSettings:SetDefaultLensPresetName(InDefaultLensPresetName) end

---@param InDefaultLensFStop number
function UCineCameraSettings:SetDefaultLensFStop(InDefaultLensFStop) end

---@param InDefaultLensFocalLength number
function UCineCameraSettings:SetDefaultLensFocalLength(InDefaultLensFocalLength) end

---@param InDefaultFilmbackPreset string
function UCineCameraSettings:SetDefaultFilmbackPreset(InDefaultFilmbackPreset) end

---@param InDefaultCropPresetName string
function UCineCameraSettings:SetDefaultCropPresetName(InDefaultCropPresetName) end

---@param InCropPresets TArray_FNamedPlateCropPreset_
function UCineCameraSettings:SetCropPresets(InCropPresets) end

---Functions used for the GetOptions metadata
---@return TArray_string_
function UCineCameraSettings:GetLensPresetNames() end

---Gets the Lens settings associated with a given preset name
---Returns true if a preset with the given name was found
---@param PresetName string
---@param LensSettings FCameraLensSettings @[out] 
---@return boolean
function UCineCameraSettings:GetLensPresetByName(PresetName, LensSettings) end

---@return TArray_string_
function UCineCameraSettings:GetFilmbackPresetNames() end

---Gets the Filmback settings associated with a given preset name
---Returns true if a preset with the given name was found
---@param PresetName string
---@param FilmbackSettings FCameraFilmbackSettings @[out] 
---@return boolean
function UCineCameraSettings:GetFilmbackPresetByName(PresetName, FilmbackSettings) end

---@return TArray_string_
function UCineCameraSettings:GetCropPresetNames() end

---Gets the Crop settings associated with a given preset name
---Returns true if a preset with the given name was found
---@param PresetName string
---@param CropSettings FPlateCropSettings @[out] 
---@return boolean
function UCineCameraSettings:GetCropPresetByName(PresetName, CropSettings) end

---@return UCineCameraSettings
function UCineCameraSettings.GetCineCameraSettings() end

