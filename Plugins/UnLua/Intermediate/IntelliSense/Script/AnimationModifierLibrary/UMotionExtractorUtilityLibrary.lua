---@class UMotionExtractorUtilityLibrary : UBlueprintFunctionLibrary
local UMotionExtractorUtilityLibrary = {}

---Returns the ranges (X/Start to Y/End) in the specified animation sequence where the animation is considered stopped.
---@param AnimSequence UAnimSequence
---@param StopSpeedThreshold number @[opt] 
---@param SampleRate number @[opt] 
---@return TArray_FVector2D_
function UMotionExtractorUtilityLibrary.GetStoppedRangesFromRootMotion(AnimSequence, StopSpeedThreshold, SampleRate) end

---Returns the ranges (X/Start to Y/End) in the specified animation sequence where the animation is considered moving.
---@param AnimSequence UAnimSequence
---@param StopSpeedThreshold number @[opt] 
---@param SampleRate number @[opt] 
---@return TArray_FVector2D_
function UMotionExtractorUtilityLibrary.GetMovingRangesFromRootMotion(AnimSequence, StopSpeedThreshold, SampleRate) end

---Returns the desired value from the extracted poses based on input settings.
---@param BoneTransform FTransform
---@param LastBoneTransform FTransform
---@param DeltaTime number
---@param MotionType EMotionExtractor_MotionType
---@param Axis EMotionExtractor_Axis
---@return number
function UMotionExtractorUtilityLibrary.GetDesiredValue(BoneTransform, LastBoneTransform, DeltaTime, MotionType, Axis) end

---Generates a curve name based on input settings.
---@param BoneName string
---@param MotionType EMotionExtractor_MotionType
---@param Axis EMotionExtractor_Axis
---@return string
function UMotionExtractorUtilityLibrary.GenerateCurveName(BoneName, MotionType, Axis) end

