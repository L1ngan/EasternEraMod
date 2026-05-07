---@class UGranularSynth : USynthComponent
---@field protected GranulatedSoundWave USoundWave
local UGranularSynth = {}

---@param SustainGain number
function UGranularSynth:SetSustainGain(SustainGain) end

---This will override the current sound wave if one is set, stop audio, and reload the new sound wave
---@param InSoundWave USoundWave
function UGranularSynth:SetSoundWave(InSoundWave) end

---@param bScrubMode boolean
function UGranularSynth:SetScrubMode(bScrubMode) end

---@param ReleaseTimeMsec number
function UGranularSynth:SetReleaseTimeMsec(ReleaseTimeMsec) end

---@param InPositionSec number
---@param LerpTimeSec number @[opt] 
---@param SeekType EGranularSynthSeekType @[opt] 
function UGranularSynth:SetPlayheadTime(InPositionSec, LerpTimeSec, SeekType) end

---@param InPlayheadRate number
function UGranularSynth:SetPlaybackSpeed(InPlayheadRate) end

---@param BaseVolume number
---@param VolumeRange FVector2D
function UGranularSynth:SetGrainVolume(BaseVolume, VolumeRange) end

---@param InGrainsPerSecond number
function UGranularSynth:SetGrainsPerSecond(InGrainsPerSecond) end

---@param InGrainProbability number
function UGranularSynth:SetGrainProbability(InGrainProbability) end

---@param BasePitch number
---@param PitchRange FVector2D
function UGranularSynth:SetGrainPitch(BasePitch, PitchRange) end

---@param BasePan number
---@param PanRange FVector2D
function UGranularSynth:SetGrainPan(BasePan, PanRange) end

---@param EnvelopeType EGranularSynthEnvelopeType
function UGranularSynth:SetGrainEnvelopeType(EnvelopeType) end

---@param BaseDurationMsec number
---@param DurationRange FVector2D
function UGranularSynth:SetGrainDuration(BaseDurationMsec, DurationRange) end

---@param DecayTimeMsec number
function UGranularSynth:SetDecayTime(DecayTimeMsec) end

---@param AttackTimeMsec number
function UGranularSynth:SetAttackTime(AttackTimeMsec) end

---@param Note number
---@param Velocity integer
---@param Duration number @[opt] 
function UGranularSynth:NoteOn(Note, Velocity, Duration) end

---@param Note number
---@param bKill boolean @[opt] 
function UGranularSynth:NoteOff(Note, bKill) end

---@return boolean
function UGranularSynth:IsLoaded() end

---@return number
function UGranularSynth:GetSampleDuration() end

---@return number
function UGranularSynth:GetCurrentPlayheadTime() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGranularSynth:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGranularSynth:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGranularSynth:AddAssetUserDataOfClass(InUserDataClass) end

