---Function library containing methods that should be hoisted onto UMovieSceneSequences for scripting purposes
---@class UMovieSceneSequenceExtensions : UBlueprintFunctionLibrary
local UMovieSceneSequenceExtensions = {}

---* Sort the marked frames in chronological order
---@param Sequence UMovieSceneSequence
function UMovieSceneSequenceExtensions.SortMarkedFrames(Sequence) end

---Set the sequence work range start in seconds
---@param InSequence UMovieSceneSequence
---@param StartTimeInSeconds number
function UMovieSceneSequenceExtensions.SetWorkRangeStart(InSequence, StartTimeInSeconds) end

---Set the sequence work range end in seconds
---@param InSequence UMovieSceneSequence
---@param EndTimeInSeconds number
function UMovieSceneSequenceExtensions.SetWorkRangeEnd(InSequence, EndTimeInSeconds) end

---Set the sequence view range start in seconds
---@param InSequence UMovieSceneSequence
---@param StartTimeInSeconds number
function UMovieSceneSequenceExtensions.SetViewRangeStart(InSequence, StartTimeInSeconds) end

---Set the sequence view range end in seconds
---@param InSequence UMovieSceneSequence
---@param EndTimeInSeconds number
function UMovieSceneSequenceExtensions.SetViewRangeEnd(InSequence, EndTimeInSeconds) end

---Sets this sequence's tick resolution directly without migrating frame times
---@param Sequence UMovieSceneSequence
---@param TickResolution FFrameRate
function UMovieSceneSequenceExtensions.SetTickResolutionDirectly(Sequence, TickResolution) end

---Sets this sequence's tick resolution and migrates frame times
---@param Sequence UMovieSceneSequence
---@param TickResolution FFrameRate
function UMovieSceneSequenceExtensions.SetTickResolution(Sequence, TickResolution) end

---* Set read only
---*
---* @@bInReadOnly Whether the movie scene should be read only or not
---@param Sequence UMovieSceneSequence
---@param bInReadOnly boolean
function UMovieSceneSequenceExtensions.SetReadOnly(Sequence, bInReadOnly) end

---Set playback start of this sequence in seconds
---@param Sequence UMovieSceneSequence
---@param StartTime number
function UMovieSceneSequenceExtensions.SetPlaybackStartSeconds(Sequence, StartTime) end

---Set playback start of this sequence
---@param Sequence UMovieSceneSequence
---@param StartFrame integer
function UMovieSceneSequenceExtensions.SetPlaybackStart(Sequence, StartFrame) end

---* Set playback range locked
---*
---* @@bInLocked Whether the movie scene playback range should be locked
---@param Sequence UMovieSceneSequence
---@param bInLocked boolean
function UMovieSceneSequenceExtensions.SetPlaybackRangeLocked(Sequence, bInLocked) end

---Set playback end of this sequence in seconds
---@param Sequence UMovieSceneSequence
---@param EndTime number
function UMovieSceneSequenceExtensions.SetPlaybackEndSeconds(Sequence, EndTime) end

---Set playback end of this sequence
---@param Sequence UMovieSceneSequence
---@param EndFrame integer
function UMovieSceneSequenceExtensions.SetPlaybackEnd(Sequence, EndFrame) end

---* Set marked frames locked
---*
---* @@bInLocked Whether the movie scene marked frames should be locked
---@param Sequence UMovieSceneSequence
---@param bInLocked boolean
function UMovieSceneSequenceExtensions.SetMarkedFramesLocked(Sequence, bInLocked) end

---* Sets the frame number for the given marked frame index. Does not maintain sort. Call SortMarkedFrames
---*
---* @@InMarkIndex The given user marked frame index to edit
---* @@InFrameNumber The frame number to set
---@param Sequence UMovieSceneSequence
---@param InMarkIndex integer
---@param InFrameNumber FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UMovieSceneSequenceExtensions.SetMarkedFrameInSequence(Sequence, InMarkIndex, InFrameNumber, TimeUnit) end

---@param Sequence UMovieSceneSequence
---@param InMarkIndex integer
---@param InFrameNumber FFrameNumber
function UMovieSceneSequenceExtensions.SetMarkedFrame(Sequence, InMarkIndex, InFrameNumber) end

---Set the evaluation type for this sequence
---@param InSequence UMovieSceneSequence
---@param InEvaluationType EMovieSceneEvaluationType
function UMovieSceneSequenceExtensions.SetEvaluationType(InSequence, InEvaluationType) end

---Sets this sequence's display rate
---@param Sequence UMovieSceneSequence
---@param DisplayRate FFrameRate
function UMovieSceneSequenceExtensions.SetDisplayRate(Sequence, DisplayRate) end

---Set the clock source for this sequence
---@param InSequence UMovieSceneSequence
---@param InClockSource EUpdateClockSource
function UMovieSceneSequenceExtensions.SetClockSource(InSequence, InClockSource) end

---Make a binding for the given binding ID
---@param RootSequence UMovieSceneSequence
---@param InObjectBindingID FMovieSceneObjectBindingID
---@return FMovieSceneBindingProxy
function UMovieSceneSequenceExtensions.ResolveBindingID(RootSequence, InObjectBindingID) end

---Removes a track
---@param Sequence UMovieSceneSequence
---@param Track UMovieSceneTrack
---@return boolean
function UMovieSceneSequenceExtensions.RemoveTrack(Sequence, Track) end

---Remove a root folder from the given sequence. Will throw an exception if the specified folder is not valid or not a root folder.
---@param Sequence UMovieSceneSequence
---@param Folder UMovieSceneFolder
function UMovieSceneSequenceExtensions.RemoveRootFolderFromSequence(Sequence, Folder) end

---Make a new range for this sequence in seconds
---@param Sequence UMovieSceneSequence
---@param StartTime number
---@param Duration number
---@return FSequencerScriptingRange
function UMovieSceneSequenceExtensions.MakeRangeSeconds(Sequence, StartTime, Duration) end

---Make a new range for this sequence in its display rate
---@param Sequence UMovieSceneSequence
---@param StartFrame integer
---@param Duration integer
---@return FSequencerScriptingRange
function UMovieSceneSequenceExtensions.MakeRange(Sequence, StartFrame, Duration) end

---Locate all the objects that correspond to the specified object ID, using the specified context
---@param Sequence UMovieSceneSequence
---@param InBinding FMovieSceneBindingProxy
---@param Context UObject
---@return TArray_UObject_
function UMovieSceneSequenceExtensions.LocateBoundObjects(Sequence, InBinding, Context) end

---* Is read only
---*
---* @@return Whether the movie scene is read only or not
---@param Sequence UMovieSceneSequence
---@return boolean
function UMovieSceneSequenceExtensions.IsReadOnly(Sequence) end

---* Is playback ranged locked
---*
---* @@return Whether the movie scene playback range is locked
---@param Sequence UMovieSceneSequence
---@return boolean
function UMovieSceneSequenceExtensions.IsPlaybackRangeLocked(Sequence) end

---Get the sequence work range start in seconds
---@param InSequence UMovieSceneSequence
---@return number
function UMovieSceneSequenceExtensions.GetWorkRangeStart(InSequence) end

---Get the sequence work range end in seconds
---@param InSequence UMovieSceneSequence
---@return number
function UMovieSceneSequenceExtensions.GetWorkRangeEnd(InSequence) end

---Get the sequence view range start in seconds
---@param InSequence UMovieSceneSequence
---@return number
function UMovieSceneSequenceExtensions.GetViewRangeStart(InSequence) end

---Get the sequence view range end in seconds
---@param InSequence UMovieSceneSequence
---@return number
function UMovieSceneSequenceExtensions.GetViewRangeEnd(InSequence) end

---Get all tracks
---@param Sequence UMovieSceneSequence
---@return TArray_UMovieSceneTrack_
function UMovieSceneSequenceExtensions.GetTracks(Sequence) end

---Gets this sequence's tick resolution
---@param Sequence UMovieSceneSequence
---@return FFrameRate
function UMovieSceneSequenceExtensions.GetTickResolution(Sequence) end

---Get all the spawnables in this sequence. For Level Sequences, this includes bindings with binding type UMovieSceneSpawnableActorBinding.
---@param Sequence UMovieSceneSequence
---@return TArray_FMovieSceneBindingProxy_
function UMovieSceneSequenceExtensions.GetSpawnables(Sequence) end

---Get the root folders in the provided sequence
---@param Sequence UMovieSceneSequence
---@return TArray_UMovieSceneFolder_
function UMovieSceneSequenceExtensions.GetRootFoldersInSequence(Sequence) end

---Get all the possessables in this sequence. It is understood for the purpose of this function that this means the bindings are not custom.
---@param Sequence UMovieSceneSequence
---@return TArray_FMovieSceneBindingProxy_
function UMovieSceneSequenceExtensions.GetPossessables(Sequence) end

---Get a portable binding ID for a binding that resides in a different sequence to the one where this binding will be resolved.
---@param RootSequence UMovieSceneSequence
---@param DestinationSequence UMovieSceneSequence
---@param InBinding FMovieSceneBindingProxy
---@return FMovieSceneObjectBindingID
function UMovieSceneSequenceExtensions.GetPortableBindingID(RootSequence, DestinationSequence, InBinding) end

---Get playback start of this sequence in seconds
---@param Sequence UMovieSceneSequence
---@return number
function UMovieSceneSequenceExtensions.GetPlaybackStartSeconds(Sequence) end

---Get playback start of this sequence in display rate resolution
---@param Sequence UMovieSceneSequence
---@return integer
function UMovieSceneSequenceExtensions.GetPlaybackStart(Sequence) end

---Get playback range of this sequence in display rate resolution
---@param Sequence UMovieSceneSequence
---@return FSequencerScriptingRange
function UMovieSceneSequenceExtensions.GetPlaybackRange(Sequence) end

---Get playback end of this sequence in seconds
---@param Sequence UMovieSceneSequence
---@return number
function UMovieSceneSequenceExtensions.GetPlaybackEndSeconds(Sequence) end

---Get playback end of this sequence in display rate resolution
---@param Sequence UMovieSceneSequence
---@return integer
function UMovieSceneSequenceExtensions.GetPlaybackEnd(Sequence) end

---Get this sequence's movie scene data
---@param Sequence UMovieSceneSequence
---@return UMovieScene
function UMovieSceneSequenceExtensions.GetMovieScene(Sequence) end

---* Get the marked frames for this sequence
---*
---* @@return Return the user marked frames
---@param Sequence UMovieSceneSequence
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return TArray_FMovieSceneMarkedFrame_
function UMovieSceneSequenceExtensions.GetMarkedFramesFromSequence(Sequence, TimeUnit) end

---@param Sequence UMovieSceneSequence
---@return TArray_FMovieSceneMarkedFrame_
function UMovieSceneSequenceExtensions.GetMarkedFrames(Sequence) end

---Get the evaluation type for this sequence
---@param InSequence UMovieSceneSequence
---@return EMovieSceneEvaluationType
function UMovieSceneSequenceExtensions.GetEvaluationType(InSequence) end

---Gets this sequence's display rate
---@param Sequence UMovieSceneSequence
---@return FFrameRate
function UMovieSceneSequenceExtensions.GetDisplayRate(Sequence) end

---Get the clock source for this sequence
---@param InSequence UMovieSceneSequence
---@return EUpdateClockSource
function UMovieSceneSequenceExtensions.GetClockSource(InSequence) end

---Get all the bindings in this sequence
---@param Sequence UMovieSceneSequence
---@return TArray_FMovieSceneBindingProxy_
function UMovieSceneSequenceExtensions.GetBindings(Sequence) end

---Get the binding ID for a binding within a sequence.
---@param Sequence UMovieSceneSequence
---@param InBinding FMovieSceneBindingProxy
---@return FMovieSceneObjectBindingID
function UMovieSceneSequenceExtensions.GetBindingID(Sequence, InBinding) end

---Find all tracks of the specified type
---@param Sequence UMovieSceneSequence
---@param TrackType TSubclassOf_UMovieSceneTrack_
---@return TArray_UMovieSceneTrack_
function UMovieSceneSequenceExtensions.FindTracksByType(Sequence, TrackType) end

---Find all tracks of the specified type, not allowing sub-classed types
---@param Sequence UMovieSceneSequence
---@param TrackType TSubclassOf_UMovieSceneTrack_
---@return TArray_UMovieSceneTrack_
function UMovieSceneSequenceExtensions.FindTracksByExactType(Sequence, TrackType) end

---* Find the next/previous user marked frame from the given frame number
---*
---* @@InFrameNumber The frame number to find the next/previous user marked frame from
---* @@bForward Find forward from the given frame number.
---@param Sequence UMovieSceneSequence
---@param InFrameNumber FFrameNumber
---@param bForward boolean
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return integer
function UMovieSceneSequenceExtensions.FindNextMarkedFrameInSequence(Sequence, InFrameNumber, bForward, TimeUnit) end

---@param Sequence UMovieSceneSequence
---@param InFrameNumber FFrameNumber
---@param bForward boolean
---@return integer
function UMovieSceneSequenceExtensions.FindNextMarkedFrame(Sequence, InFrameNumber, bForward) end

---* Find the user marked frame by label
---*
---* @@InLabel The label to the user marked frame to find
---@param Sequence UMovieSceneSequence
---@param InLabel string
---@return integer
function UMovieSceneSequenceExtensions.FindMarkedFrameByLabel(Sequence, InLabel) end

---* Find the user marked frame by frame number
---*
---* @@InFrameNumber The frame number of the user marked frame to find
---@param Sequence UMovieSceneSequence
---@param InFrameNumber FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return integer
function UMovieSceneSequenceExtensions.FindMarkedFrameByFrameNumberInSequence(Sequence, InFrameNumber, TimeUnit) end

---@param Sequence UMovieSceneSequence
---@param InFrameNumber FFrameNumber
---@return integer
function UMovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber(Sequence, InFrameNumber) end

---Attempt to locate a binding in this sequence by its name
---@param Sequence UMovieSceneSequence
---@param Name string
---@return FMovieSceneBindingProxy
function UMovieSceneSequenceExtensions.FindBindingByName(Sequence, Name) end

---Attempt to locate a binding in this sequence by its Id
---@param Sequence UMovieSceneSequence
---@param BindingId FGuid
---@return FMovieSceneBindingProxy
function UMovieSceneSequenceExtensions.FindBindingById(Sequence, BindingId) end

---* Delete all user marked frames
---@param Sequence UMovieSceneSequence
function UMovieSceneSequenceExtensions.DeleteMarkedFrames(Sequence) end

---* Delete the user marked frame by index.
---*
---* @@DeleteIndex The index to the user marked frame to delete
---@param Sequence UMovieSceneSequence
---@param DeleteIndex integer
function UMovieSceneSequenceExtensions.DeleteMarkedFrame(Sequence, DeleteIndex) end

---* Are marked frames locked
---*
---* @@return Whether the movie scene marked frames are locked
---@param Sequence UMovieSceneSequence
---@return boolean
function UMovieSceneSequenceExtensions.AreMarkedFramesLocked(Sequence) end

---Add a new track of the specified type
---@param Sequence UMovieSceneSequence
---@param TrackType TSubclassOf_UMovieSceneTrack_
---@return UMovieSceneTrack
function UMovieSceneSequenceExtensions.AddTrack(Sequence, TrackType) end

---@param Sequence UMovieSceneSequence
---@param ObjectToSpawn UObject
---@return FMovieSceneBindingProxy
function UMovieSceneSequenceExtensions.AddSpawnableFromInstance(Sequence, ObjectToSpawn) end

---@param Sequence UMovieSceneSequence
---@param ClassToSpawn TSubclassOf_UObject_
---@return FMovieSceneBindingProxy
function UMovieSceneSequenceExtensions.AddSpawnableFromClass(Sequence, ClassToSpawn) end

---Add a root folder to the given sequence
---@param Sequence UMovieSceneSequence
---@param NewFolderName string
---@return UMovieSceneFolder
function UMovieSceneSequenceExtensions.AddRootFolderToSequence(Sequence, NewFolderName) end

---Add a new binding to this sequence that will possess the specified object
---@param Sequence UMovieSceneSequence
---@param ObjectToPossess UObject
---@return FMovieSceneBindingProxy
function UMovieSceneSequenceExtensions.AddPossessable(Sequence, ObjectToPossess) end

---* Add a given user marked frame.
---* A unique label will be generated if the marked frame label is empty
---*
---* @@InMarkedFrame The given user marked frame to add
---* @@return The index to the newly added marked frame
---@param Sequence UMovieSceneSequence
---@param InMarkedFrame FMovieSceneMarkedFrame
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return integer
function UMovieSceneSequenceExtensions.AddMarkedFrameToSequence(Sequence, InMarkedFrame, TimeUnit) end

---@param Sequence UMovieSceneSequence
---@param InMarkedFrame FMovieSceneMarkedFrame
---@return integer
function UMovieSceneSequenceExtensions.AddMarkedFrame(Sequence, InMarkedFrame) end

