---The Model represents the source data for animations. It contains both bone animation data as well as animated curves.
---They are currently only a sub-object of a AnimSequenceBase instance. The instance derives all runtime data from the source data.
---@class UAnimDataModel : UObject
---@field private BracketCounter integer
---@field private ModifiedEventDynamic MulticastDelegate @Dynamic delegate event allows scripting to register to any broadcasted notify.
---@field private BoneAnimationTracks TArray<FBoneAnimationTrack> @All individual bone animation tracks
---@field private PlayLength number
---@field private FrameRate FFrameRate @Rate at which the animated data is sampled
---@field private NumberOfFrames integer @Total number of sampled animated frames
---@field private NumberOfKeys integer @Total number of sampled animated keys
---@field private CurveData FAnimationCurveData @Container with all animated curve data
---@field private AnimatedBoneAttributes TArray<FAnimatedBoneAttribute> @Container with all animated (bone) attribute data
---@field private bPopulated boolean
local UAnimDataModel = {}

---@param TrackName string
---@return boolean
function UAnimDataModel:IsValidBoneTrackName(TrackName) end

---@param TrackIndex integer
---@return boolean
function UAnimDataModel:IsValidBoneTrackIndex(TrackIndex) end

---
---@return number
function UAnimDataModel:GetPlayLength() end

---
---@return integer
function UAnimDataModel:GetNumBoneTracks() end

---
---@return integer
function UAnimDataModel:GetNumberOfTransformCurves() end

---
---@return integer
function UAnimDataModel:GetNumberOfKeys() end

---
---@return integer
function UAnimDataModel:GetNumberOfFrames() end

---
---@return integer
function UAnimDataModel:GetNumberOfFloatCurves() end

---
---@return FFrameRate
function UAnimDataModel:GetFrameRate() end

---Populates the provided array with all contained (bone) track names
---@param OutNames TArray_string_ @[out] 
function UAnimDataModel:GetBoneTrackNames(OutNames) end

---@param TrackName string
---@return integer
function UAnimDataModel:GetBoneTrackIndexByName(TrackName) end

---@param Track FBoneAnimationTrack
---@return integer
function UAnimDataModel:GetBoneTrackIndex(Track) end

---@param TrackName string
---@return FBoneAnimationTrack
function UAnimDataModel:GetBoneTrackByName(TrackName) end

---@param TrackIndex integer
---@return FBoneAnimationTrack
function UAnimDataModel:GetBoneTrackByIndex(TrackIndex) end

---@return TArray_FBoneAnimationTrack_
function UAnimDataModel:GetBoneAnimationTracks() end

---
---@return UAnimSequence
function UAnimDataModel:GetAnimationSequence() end

