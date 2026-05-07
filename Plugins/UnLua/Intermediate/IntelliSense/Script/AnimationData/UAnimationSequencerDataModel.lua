---@class UAnimationSequencerDataModel : UMovieSceneSequence
---@field private ModifiedEventDynamic MulticastDelegate @Dynamic delegate event allows scripting to register to any broadcast-ed notify.
---@field private LegacyCurveData FAnimationCurveData
---@field private AnimatedBoneAttributes TArray<FAnimatedBoneAttribute>
---@field private MovieScene UMovieScene @Movie scene instance containing FK Control rig and section representing the animation data
---@field private CurveIdentifierToMetaData TMap<FAnimationCurveIdentifier, FAnimationCurveMetaData> @Per-curve information holding flags/color, due to be deprecated in the future
---@field private bPopulated boolean
---@field private CachedRawDataGUID FGuid @Raw data GUID taken from UAnimSequence when initially populating - this allows for retaining compressed data state initially
---@field private bRigHierarchyInitialized boolean
local UAnimationSequencerDataModel = {}

---@param TrackName string
---@return boolean
function UAnimationSequencerDataModel:IsValidBoneTrackName(TrackName) end

---@param TrackIndex integer
---@return boolean
function UAnimationSequencerDataModel:IsValidBoneTrackIndex(TrackIndex) end

---
---@return number
function UAnimationSequencerDataModel:GetPlayLength() end

---
---@return integer
function UAnimationSequencerDataModel:GetNumBoneTracks() end

---
---@return integer
function UAnimationSequencerDataModel:GetNumberOfTransformCurves() end

---
---@return integer
function UAnimationSequencerDataModel:GetNumberOfKeys() end

---
---@return integer
function UAnimationSequencerDataModel:GetNumberOfFrames() end

---
---@return integer
function UAnimationSequencerDataModel:GetNumberOfFloatCurves() end

---
---@return FFrameRate
function UAnimationSequencerDataModel:GetFrameRate() end

---Populates the provided array with all contained (bone) track names
---@param OutNames TArray_string_ @[out] 
function UAnimationSequencerDataModel:GetBoneTrackNames(OutNames) end

---@param TrackName string
---@return integer
function UAnimationSequencerDataModel:GetBoneTrackIndexByName(TrackName) end

---@param Track FBoneAnimationTrack
---@return integer
function UAnimationSequencerDataModel:GetBoneTrackIndex(Track) end

---@param TrackName string
---@return FBoneAnimationTrack
function UAnimationSequencerDataModel:GetBoneTrackByName(TrackName) end

---@param TrackIndex integer
---@return FBoneAnimationTrack
function UAnimationSequencerDataModel:GetBoneTrackByIndex(TrackIndex) end

---@return TArray_FBoneAnimationTrack_
function UAnimationSequencerDataModel:GetBoneAnimationTracks() end

---
---@return UAnimSequence
function UAnimationSequencerDataModel:GetAnimationSequence() end

