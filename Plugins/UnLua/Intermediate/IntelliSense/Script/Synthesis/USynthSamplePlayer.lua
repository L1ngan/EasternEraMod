---@class USynthSamplePlayer : USynthComponent
---@field public SoundWave USoundWave
---@field public OnSampleLoaded MulticastDelegate
---@field public OnSamplePlaybackProgress MulticastDelegate
local USynthSamplePlayer = {}

---This will override the current sound wave if one is set, stop audio, and reload the new sound wave
---@param InSoundWave USoundWave
function USynthSamplePlayer:SetSoundWave(InSoundWave) end

---@param InScrubTimeWidthSec number
function USynthSamplePlayer:SetScrubTimeWidth(InScrubTimeWidthSec) end

---@param bScrubMode boolean
function USynthSamplePlayer:SetScrubMode(bScrubMode) end

---@param InPitch number
---@param TimeSec number
function USynthSamplePlayer:SetPitch(InPitch, TimeSec) end

---@param TimeSec number
---@param SeekType ESamplePlayerSeekType
---@param bWrap boolean @[opt] 
function USynthSamplePlayer:SeekToTime(TimeSec, SeekType, bWrap) end

---@return boolean
function USynthSamplePlayer:IsLoaded() end

---@return number
function USynthSamplePlayer:GetSampleDuration() end

---@return number
function USynthSamplePlayer:GetCurrentPlaybackProgressTime() end

---@return number
function USynthSamplePlayer:GetCurrentPlaybackProgressPercent() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USynthSamplePlayer:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USynthSamplePlayer:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USynthSamplePlayer:AddAssetUserDataOfClass(InUserDataClass) end

