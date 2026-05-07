---Implements a sound component for playing a media player's audio output.
---@class UMediaSoundComponent : USynthComponent
---@field public Channels EMediaSoundChannels @Media sound channel type.
---@field public DynamicRateAdjustment boolean @Dynamically adjust the sample rate if audio and media clock desynchronize.
---@field public RateAdjustmentFactor number @Factor for calculating the sample rate adjustment. If dynamic rate adjustment is enabled, this number is multiplied with the drift between the audio and media clock (in 100ns ticks) to determine the adjustment. that is to be multiplied into the current playrate.
---@field public RateAdjustmentRange FFloatRange @The allowed range of dynamic rate adjustment. If dynamic rate adjustment is enabled, and the necessary adjustment falls outside of this range, audio samples will be dropped.
---@field protected MediaPlayer UMediaPlayer @The media player asset associated with this component. This property is meant for design-time convenience. To change the associated media player at run-time, use the SetMediaPlayer method.
local UMediaSoundComponent = {}

---Sets the settings to use for spectral analysis.
---@param InFrequenciesToAnalyze TArray_number_
---@param InFFTSize EMediaSoundComponentFFTSize @[opt] 
function UMediaSoundComponent:SetSpectralAnalysisSettings(InFrequenciesToAnalyze, InFFTSize) end

---Set the media player that provides the audio samples.
---@param NewMediaPlayer UMediaPlayer
function UMediaSoundComponent:SetMediaPlayer(NewMediaPlayer) end

---Sets the envelope attack and release times (in ms).
---@param AttackTimeMsec integer
---@param ReleaseTimeMsec integer
function UMediaSoundComponent:SetEnvelopeFollowingsettings(AttackTimeMsec, ReleaseTimeMsec) end

---Turns on spectral analysis of the audio generated in the media sound component.
---@param bInSpectralAnalysisEnabled boolean
function UMediaSoundComponent:SetEnableSpectralAnalysis(bInSpectralAnalysisEnabled) end

---Turns on amplitude envelope following the audio in the media sound component.
---@param bInEnvelopeFollowing boolean
function UMediaSoundComponent:SetEnableEnvelopeFollowing(bInEnvelopeFollowing) end

---Retrieves the spectral data if spectral analysis is enabled.
---@return TArray_FMediaSoundComponentSpectralData_
function UMediaSoundComponent:GetSpectralData() end

---Retrieves and normalizes the spectral data if spectral analysis is enabled.
---@return TArray_FMediaSoundComponentSpectralData_
function UMediaSoundComponent:GetNormalizedSpectralData() end

---Get the media player that provides the audio samples.
---@return UMediaPlayer
function UMediaSoundComponent:GetMediaPlayer() end

---Retrieves the current amplitude envelope.
---@return number
function UMediaSoundComponent:GetEnvelopeValue() end

---Get the attenuation settings based on the current component settings.
---@param OutAttenuationSettings FSoundAttenuationSettings @[out] 
---@return boolean
function UMediaSoundComponent:BP_GetAttenuationSettingsToApply(OutAttenuationSettings) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMediaSoundComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMediaSoundComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMediaSoundComponent:AddAssetUserDataOfClass(InUserDataClass) end

