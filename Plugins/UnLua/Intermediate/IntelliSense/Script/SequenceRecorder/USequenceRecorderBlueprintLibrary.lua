---@class USequenceRecorderBlueprintLibrary : UBlueprintFunctionLibrary
local USequenceRecorderBlueprintLibrary = {}

---Stop recording the current sequence, if any
function USequenceRecorderBlueprintLibrary.StopRecordingSequence() end

---Start recording the passed-in actors to a level sequence.
---@param ActorsToRecord TArray_AActor_
function USequenceRecorderBlueprintLibrary.StartRecordingSequence(ActorsToRecord) end

---Are we currently recording a sequence
---@return boolean
function USequenceRecorderBlueprintLibrary.IsRecordingSequence() end

