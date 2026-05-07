---@class ULevelSequenceEditorBlueprintLibrary : UBlueprintFunctionLibrary
local ULevelSequenceEditorBlueprintLibrary = {}

---@param TrackFilterName string
---@param bEnabled boolean
function ULevelSequenceEditorBlueprintLibrary.SetTrackFilterEnabled(TrackFilterName, bEnabled) end

---Sets the specified track filter to be on or off
---@param TrackFilterName string
---@param bActive boolean
function ULevelSequenceEditorBlueprintLibrary.SetTrackFilterActive(TrackFilterName, bActive) end

---Set the selection range start frame.
---@param NewFrame integer
function ULevelSequenceEditorBlueprintLibrary.SetSelectionRangeStart(NewFrame) end

---Set the selection range end frame.
---@param NewFrame integer
function ULevelSequenceEditorBlueprintLibrary.SetSelectionRangeEnd(NewFrame) end

---@param Class TSubclassOf_UObject_
---@param Identifiers TArray_string_
function ULevelSequenceEditorBlueprintLibrary.SetRandomColorForChannels(Class, Identifiers) end

---Set playback speed of the current level sequence
---@param NewPlaybackSpeed number
function ULevelSequenceEditorBlueprintLibrary.SetPlaybackSpeed(NewPlaybackSpeed) end

---Set loop mode (note this is a per user preference)
---@param NewLoopMode integer
function ULevelSequenceEditorBlueprintLibrary.SetLoopMode(NewLoopMode) end

---Sets the lock for the current level sequence and its descendants for editing.
---@param bLock boolean
function ULevelSequenceEditorBlueprintLibrary.SetLockLevelSequence(bLock) end

---Sets the lock for the viewport to the camera cuts.
---@param bLock boolean
function ULevelSequenceEditorBlueprintLibrary.SetLockCameraCutToViewport(bLock) end

---Set local playhead position for the current level sequence. If the requested time is the same as the current time, an evaluation will be forced.
---@param PlaybackParams FMovieSceneSequencePlaybackParams
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function ULevelSequenceEditorBlueprintLibrary.SetLocalPosition(PlaybackParams, TimeUnit) end

---Set global playhead position for the current level sequence. If the requested time is the same as the current time, an evaluation will be forced.
---@param PlaybackParams FMovieSceneSequencePlaybackParams
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function ULevelSequenceEditorBlueprintLibrary.SetGlobalPosition(PlaybackParams, TimeUnit) end

---@param Class TSubclassOf_UObject_
---@param Identifiers TArray_string_
---@param NewColors TArray_FLinearColor_
function ULevelSequenceEditorBlueprintLibrary.SetCustomColorForChannels(Class, Identifiers, NewColors) end

---@param Class TSubclassOf_UObject_
---@param Identifier string
---@param NewColor FLinearColor
function ULevelSequenceEditorBlueprintLibrary.SetCustomColorForChannel(Class, Identifier, NewColor) end

---@param NewFrame integer
function ULevelSequenceEditorBlueprintLibrary.SetCurrentTime(NewFrame) end

---@param NewFrame integer
function ULevelSequenceEditorBlueprintLibrary.SetCurrentLocalTime(NewFrame) end

---Select tracks
---@param Tracks TArray_UMovieSceneTrack_
function ULevelSequenceEditorBlueprintLibrary.SelectTracks(Tracks) end

---Select sections
---@param Sections TArray_UMovieSceneSection_
function ULevelSequenceEditorBlueprintLibrary.SelectSections(Sections) end

---Select keys from indices
---@param Channel FSequencerChannelProxy
---@param Indices TArray_integer_
function ULevelSequenceEditorBlueprintLibrary.SelectKeys(Channel, Indices) end

---Select folders
---@param Folders TArray_UMovieSceneFolder_
function ULevelSequenceEditorBlueprintLibrary.SelectFolders(Folders) end

---Select channels
---@param Channels TArray_FSequencerChannelProxy_
function ULevelSequenceEditorBlueprintLibrary.SelectChannels(Channels) end

---Select bindings
---@param ObjectBindings TArray_FMovieSceneBindingProxy_
function ULevelSequenceEditorBlueprintLibrary.SelectBindings(ObjectBindings) end

---Refresh Sequencer UI on next tick
function ULevelSequenceEditorBlueprintLibrary.RefreshCurrentLevelSequence() end

---Play from the current time to the requested time in frames
---@param PlaybackParams FMovieSceneSequencePlaybackParams
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function ULevelSequenceEditorBlueprintLibrary.PlayTo(PlaybackParams, TimeUnit) end

---Play the current level sequence
function ULevelSequenceEditorBlueprintLibrary.Play() end

---Pause the current level sequence
function ULevelSequenceEditorBlueprintLibrary.Pause() end

---* Open a level sequence asset
---@param LevelSequence ULevelSequence
---@return boolean
function ULevelSequenceEditorBlueprintLibrary.OpenLevelSequence(LevelSequence) end

---@param TrackFilterName string
---@return boolean
function ULevelSequenceEditorBlueprintLibrary.IsTrackFilterEnabled(TrackFilterName) end

---Gets whether the specified track filter is on/off
---@param TrackFilterName string
---@return boolean
function ULevelSequenceEditorBlueprintLibrary.IsTrackFilterActive(TrackFilterName) end

---Check whether the sequence is actively playing.
---@return boolean
function ULevelSequenceEditorBlueprintLibrary.IsPlaying() end

---Check whether the current level sequence and its descendants are locked for editing.
---@return boolean
function ULevelSequenceEditorBlueprintLibrary.IsLevelSequenceLocked() end

---Check whether the lock for the viewport to the camera cuts is enabled.
---@return boolean
function ULevelSequenceEditorBlueprintLibrary.IsCameraCutLockedToViewport() end

---@param Class TSubclassOf_UObject_
---@param Identifier string
---@return boolean
function ULevelSequenceEditorBlueprintLibrary.HasCustomColorForChannel(Class, Identifier) end

---Gets all the available track filter names
---@return TArray_string_
function ULevelSequenceEditorBlueprintLibrary.GetTrackFilterNames() end

---* Get the current sub section hierarchy from the current sequence to the section associated with the focused sequence.
---@return TArray_UMovieSceneSubSection_
function ULevelSequenceEditorBlueprintLibrary.GetSubSequenceHierarchy() end

---Get the selection range start frame.
---@return integer
function ULevelSequenceEditorBlueprintLibrary.GetSelectionRangeStart() end

---Get the selection range end frame.
---@return integer
function ULevelSequenceEditorBlueprintLibrary.GetSelectionRangeEnd() end

---Gets the currently selected tracks.
---@return TArray_UMovieSceneTrack_
function ULevelSequenceEditorBlueprintLibrary.GetSelectedTracks() end

---Gets the currently selected sections.
---@return TArray_UMovieSceneSection_
function ULevelSequenceEditorBlueprintLibrary.GetSelectedSections() end

---Gets the selected key indices with this channel
---@param ChannelProxy FSequencerChannelProxy
---@return TArray_integer_
function ULevelSequenceEditorBlueprintLibrary.GetSelectedKeys(ChannelProxy) end

---Gets the currently selected folders.
---@return TArray_UMovieSceneFolder_
function ULevelSequenceEditorBlueprintLibrary.GetSelectedFolders() end

---Gets the currently selected channels.
---@return TArray_FSequencerChannelProxy_
function ULevelSequenceEditorBlueprintLibrary.GetSelectedChannels() end

---Gets the currently selected object bindings
---@return TArray_FMovieSceneBindingProxy_
function ULevelSequenceEditorBlueprintLibrary.GetSelectedBindings() end

---Return the playback start position
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FMovieSceneSequencePlaybackParams
function ULevelSequenceEditorBlueprintLibrary.GetPlaybackStartPosition(TimeUnit) end

---Get playback speed of the current level sequence
---@return number
function ULevelSequenceEditorBlueprintLibrary.GetPlaybackSpeed() end

---Return end of the playback range in the Sequencer UI, which accounts for the exclusive upper bound
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FMovieSceneSequencePlaybackParams
function ULevelSequenceEditorBlueprintLibrary.GetPlaybackEndPosition(TimeUnit) end

---Get loop mode (note this is a per user preference)
---@return integer
function ULevelSequenceEditorBlueprintLibrary.GetLoopMode() end

---Get the current local playhead position
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FMovieSceneSequencePlaybackParams
function ULevelSequenceEditorBlueprintLibrary.GetLocalPosition(TimeUnit) end

---Get the current global playhead position
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FMovieSceneSequencePlaybackParams
function ULevelSequenceEditorBlueprintLibrary.GetGlobalPosition(TimeUnit) end

---* Get the currently focused/viewed level sequence asset if there is a hierarchy of sequences.
---@return ULevelSequence
function ULevelSequenceEditorBlueprintLibrary.GetFocusedLevelSequence() end

---@param Class TSubclassOf_UObject_
---@param Identifier string
---@return FLinearColor
function ULevelSequenceEditorBlueprintLibrary.GetCustomColorForChannel(Class, Identifier) end

---@return integer
function ULevelSequenceEditorBlueprintLibrary.GetCurrentTime() end

---@return integer
function ULevelSequenceEditorBlueprintLibrary.GetCurrentLocalTime() end

---* Get the currently opened root level sequence asset
---@return ULevelSequence
function ULevelSequenceEditorBlueprintLibrary.GetCurrentLevelSequence() end

---Gets the channel with selected keys.
---@return TArray_FSequencerChannelProxy_
function ULevelSequenceEditorBlueprintLibrary.GetChannelsWithSelectedKeys() end

---Get the object bound to the given binding ID with the current level sequence editor
---@param ObjectBinding FMovieSceneObjectBindingID
---@return TArray_UObject_
function ULevelSequenceEditorBlueprintLibrary.GetBoundObjects(ObjectBinding) end

---Force sequencer evaluation and UI update immediately
function ULevelSequenceEditorBlueprintLibrary.ForceUpdate() end

---* Focus/view the parent sequence, popping out of the current sub sequence section.
function ULevelSequenceEditorBlueprintLibrary.FocusParentSequence() end

---* Focus/view the sequence associated to the given sub sequence section.
---@param SubSection UMovieSceneSubSection
function ULevelSequenceEditorBlueprintLibrary.FocusLevelSequence(SubSection) end

---Empties the current selection.
function ULevelSequenceEditorBlueprintLibrary.EmptySelection() end

---@param Class TSubclassOf_UObject_
---@param Identifier string @[out] 
function ULevelSequenceEditorBlueprintLibrary.DeleteColorForChannels(Class, Identifier) end

---* Close
function ULevelSequenceEditorBlueprintLibrary.CloseLevelSequence() end

