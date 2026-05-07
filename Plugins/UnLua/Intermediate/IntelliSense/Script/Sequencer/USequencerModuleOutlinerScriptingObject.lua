---@class USequencerModuleOutlinerScriptingObject : USequencerOutlinerScriptingObject
local USequencerModuleOutlinerScriptingObject = {}

---@param InNodes TArray_FSequencerViewModelScriptingStruct_
---@return TArray_UMovieSceneSection_
function USequencerModuleOutlinerScriptingObject:GetSections(InNodes) end

---@param InNodes TArray_FSequencerViewModelScriptingStruct_
---@param FrameNumber FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FFrameNumber
function USequencerModuleOutlinerScriptingObject:GetPreviousKey(InNodes, FrameNumber, TimeUnit) end

---@param InNodes TArray_FSequencerViewModelScriptingStruct_
---@param FrameNumber FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FFrameNumber
function USequencerModuleOutlinerScriptingObject:GetNextKey(InNodes, FrameNumber, TimeUnit) end

