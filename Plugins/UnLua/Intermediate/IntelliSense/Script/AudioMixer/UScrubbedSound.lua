---@class UScrubbedSound : USoundWave
---@field private SoundWaveToScrub USoundWave
local UScrubbedSound = {}

---Sets the sound wave to scrub
---@param InSoundWave USoundWave
function UScrubbedSound:SetSoundWave(InSoundWave) end

---Sets the scrub time in seconds
---@param InPlayheadTimeSeconds number
function UScrubbedSound:SetPlayheadTime(InPlayheadTimeSeconds) end

---Sets if the scrubber should scrub while playhead is stationary (after it hits it's target playhead)
---@param bInScrubWhileStationary boolean
function UScrubbedSound:SetIsScrubbingWhileStationary(bInScrubWhileStationary) end

---Sets if the scrubber is actively scrubbing or not
---@param bInIsScrubbing boolean
function UScrubbedSound:SetIsScrubbing(bInIsScrubbing) end

---Sets the scrub grain duration range.
---@param InGrainDurationRangeSeconds FVector2D
function UScrubbedSound:SetGrainDurationRange(InGrainDurationRangeSeconds) end

---Returns the current playhead time
---@return number
function UScrubbedSound:GetPlayheadTime() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UScrubbedSound:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UScrubbedSound:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UScrubbedSound:AddAssetUserDataOfClass(InUserDataClass) end

