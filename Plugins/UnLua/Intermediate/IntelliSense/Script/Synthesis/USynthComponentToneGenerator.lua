---@class USynthComponentToneGenerator : USynthComponent
---@field public Frequency number @The frequency (in hz) of the tone generator.
---@field public Volume number @The linear volume of the tone generator.
---@field public DistanceAttenuationCurve FRuntimeFloatCurve @A distance attenuation curve to use to attenuate the audio.
---@field public DistanceRange FVector2D @A distance range over which to apply distance attenuation using the supplied curve.
---@field public AttenuationDbAtMaxRange number @An attenuation, in decibels, to apply to the sound at max range.
local USynthComponentToneGenerator = {}

---Sets the volume of the tone generator
---@param InVolume number
function USynthComponentToneGenerator:SetVolume(InVolume) end

---Sets the frequency of the tone generator
---@param InFrequency number
function USynthComponentToneGenerator:SetFrequency(InFrequency) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USynthComponentToneGenerator:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USynthComponentToneGenerator:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USynthComponentToneGenerator:AddAssetUserDataOfClass(InUserDataClass) end

