---@class URawAnimSequenceTrackExtensions : UBlueprintFunctionLibrary
local URawAnimSequenceTrackExtensions = {}

---Returns the scale keys contained by the FRawAnimSequenceTrack
---@param Track FRawAnimSequenceTrack
---@return TArray_FVector_
function URawAnimSequenceTrackExtensions.GetScaleKeys(Track) end

---Returns the rotational keys contained by the FRawAnimSequenceTrack
---@param Track FRawAnimSequenceTrack
---@return TArray_FQuat_
function URawAnimSequenceTrackExtensions.GetRotationalKeys(Track) end

---Returns the positional keys contained by the FRawAnimSequenceTrack
---@param Track FRawAnimSequenceTrack
---@return TArray_FVector_
function URawAnimSequenceTrackExtensions.GetPositionalKeys(Track) end

