---A list of sources to record for any given take. Stored as meta-data on ULevelSequence through ULevelSequence::FindMetaData<UTakeRecorderSources>
---@class UTakeRecorderSources : UObject
---@field private Sources TArray<UTakeRecorderSource> @The array of all sources contained within this list
---@field private SourceSubSequenceMap TMap<UTakeRecorderSource, ULevelSequence> @Maps each source to the level sequence that was created for that source, or to the root source if a subsequence was not created.
---@field private ActiveSubSections TArray<UMovieSceneSubSection> @List of sub-sections that we're recording into. Needed to ensure they're all the right size at the end without re-adjusting every sub-section in a sequence.
local UTakeRecorderSources = {}

---Calls the recording initialization flows on each of the specified sources.
---@param InSources TArray_UTakeRecorderSource_
---@param CurrentFrameTime FQualifiedFrameTime
function UTakeRecorderSources:StartRecordingSource(InSources, CurrentFrameTime) end

---Remove the specified source from this list
---@param InSource UTakeRecorderSource
function UTakeRecorderSources:RemoveSource(InSource) end

---Retrieves a copy of the list of sources that are being recorded. This is intended for Blueprint usages which cannot
---use TArrayView.
---DO NOT MODIFY THIS ARRAY, modifications will be lost.
---@return TArray_UTakeRecorderSource_
function UTakeRecorderSources:GetSourcesCopy() end

---Add a new source to this source list of the templated type
---@param InSourceType TSubclassOf_UTakeRecorderSource_
---@return UTakeRecorderSource
function UTakeRecorderSources:AddSource(InSourceType) end

