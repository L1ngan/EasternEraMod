---@class UAnimationDataModel : UInterface
local UAnimationDataModel = {}

---@param TrackName string
---@return boolean
function UAnimationDataModel:IsValidBoneTrackName(TrackName) end

---@param TrackIndex integer
---@return boolean
function UAnimationDataModel:IsValidBoneTrackIndex(TrackIndex) end

---
---@return number
function UAnimationDataModel:GetPlayLength() end

---
---@return integer
function UAnimationDataModel:GetNumBoneTracks() end

---
---@return integer
function UAnimationDataModel:GetNumberOfTransformCurves() end

---
---@return integer
function UAnimationDataModel:GetNumberOfKeys() end

---
---@return integer
function UAnimationDataModel:GetNumberOfFrames() end

---
---@return integer
function UAnimationDataModel:GetNumberOfFloatCurves() end

---
---@return FFrameRate
function UAnimationDataModel:GetFrameRate() end

---Populates the provided array with all contained (bone) track names
---@param OutNames TArray_string_ @[out] 
function UAnimationDataModel:GetBoneTrackNames(OutNames) end

---@param TrackName string
---@return integer
function UAnimationDataModel:GetBoneTrackIndexByName(TrackName) end

---@param Track FBoneAnimationTrack
---@return integer
function UAnimationDataModel:GetBoneTrackIndex(Track) end

---@param TrackName string
---@return FBoneAnimationTrack
function UAnimationDataModel:GetBoneTrackByName(TrackName) end

---@param TrackIndex integer
---@return FBoneAnimationTrack
function UAnimationDataModel:GetBoneTrackByIndex(TrackIndex) end

---@return TArray_FBoneAnimationTrack_
function UAnimationDataModel:GetBoneAnimationTracks() end

---
---@return UAnimSequence
function UAnimationDataModel:GetAnimationSequence() end

