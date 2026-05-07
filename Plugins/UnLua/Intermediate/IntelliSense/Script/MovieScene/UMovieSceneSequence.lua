---Abstract base class for movie scene animations (C++ version).
---@class UMovieSceneSequence : UMovieSceneSignedObject
---@field private CompiledData UMovieSceneCompiledData @Serialized compiled data - should only be used through UMovieSceneCompiledDataManager
---@field public DefaultCompletionMode EMovieSceneCompletionMode @The default completion mode for this movie scene when a section's completion mode is set to project default
---@field protected bParentContextsAreSignificant boolean @true if the result of GetParentObject is significant in object resolution for LocateBoundObjects. When true, if GetParentObject returns nullptr, the PlaybackContext will be used for LocateBoundObjects, other wise the object's parent will be used When false, the PlaybackContext will always be used for LocateBoundObjects
---@field protected bPlayableDirectly boolean @When true, this sequence should be compiled as if it is playable directly (outside of a root sequence). When false, various compiled data will be omitted, preventing direct playback at runtime (although will still play as a sub sequence)
---@field protected SequenceFlags EMovieSceneSequenceFlags @Flags used to define this sequence's behavior and characteristics
local UMovieSceneSequence = {}

---Get the earliest timecode source out of all of the movie scene sections contained within this sequence's movie scene.
---@return FMovieSceneTimecodeSource
function UMovieSceneSequence:GetEarliestTimecodeSource() end

---Find all object binding IDs associated with the specified tag name (set up through RMB->Expose on Object bindings from within sequencer)
---@param InBindingName string
---@return TArray_FMovieSceneObjectBindingID_
function UMovieSceneSequence:FindBindingsByTag(InBindingName) end

---Find the first object binding ID associated with the specified tag name (set up through RMB->Expose on Object bindings from within sequencer)
---@param InBindingName string
---@return FMovieSceneObjectBindingID
function UMovieSceneSequence:FindBindingByTag(InBindingName) end

