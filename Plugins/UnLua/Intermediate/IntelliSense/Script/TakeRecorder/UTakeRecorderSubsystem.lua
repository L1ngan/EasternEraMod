---UTakeRecorderSubsystem Subsystem for Take Recorder.
---SetTargetSequence() needs to be called at least once prior to use. This will perform additional initialization
---and register the subsystem as tickable currently required to cache level metadata.
---@class UTakeRecorderSubsystem : UEngineSubsystem
---@field private Implementation TScriptInterface<UTakeRecorderSubsystemInterface> @The actual Take Recorder Subsystem implementation.
---@field public TakeRecorderPreInitialize MulticastDelegate @Called before initialization occurs (ie. when the recording button is pressed and before the countdown starts)
---@field public TakeRecorderInitialized MulticastDelegate @called when take recorder is initializing.
---@field public TakeRecorderStarted MulticastDelegate @Called when take recorder is started
---@field public TakeRecorderStopped MulticastDelegate @Called when take recorder is stopped
---@field public TakeRecorderFinished MulticastDelegate @Called when take recorder has finished
---@field public TakeRecorderCancelled MulticastDelegate @Called when take recorder is cancelled
---@field public TakeRecorderMarkedFrameAdded MulticastDelegate @Called when a marked frame is added to take recorder
---@field public TakeRecorderSlateChanged MulticastDelegate @Called when a take recorder slate changes.
---@field public TakeRecorderTakeNumberChanged MulticastDelegate @Called when a take recorder take number changes.
---@field public TakeRecorderSourceAdded MulticastDelegate @Multicast delegate when any source has been added.
---@field public TakeRecorderSourceRemoved MulticastDelegate @Multicast delegate when any source has been removed.
local UTakeRecorderSubsystem = {}

---Retrieve the current sequence's countdown.
---@param OutValue number @[out] 
---@return boolean
function UTakeRecorderSubsystem:TryGetSequenceCountdown(OutValue) end

---Stop an existing recording.
function UTakeRecorderSubsystem:StopRecording() end

---Begin a new recording.
---@param bOpenSequencer boolean @[opt] 
---@param bShowErrorMessage boolean @[opt] 
---@return boolean
function UTakeRecorderSubsystem:StartRecording(bOpenSequencer, bShowErrorMessage) end

---Provide sequence data for this take recorder. This will also perform initialization of the subsystem.
---This must be called prior to any usage.
---@param InData FTakeRecorderSequenceParameters @[opt] 
function UTakeRecorderSubsystem:SetTargetSequence(InData) end

---Directly set the take number.
---@param InNewTakeNumber integer
---@param bEmitChanged boolean @[opt] 
function UTakeRecorderSubsystem:SetTakeNumber(InNewTakeNumber, bEmitChanged) end

---Directly set the slate name.
---@param InSlateName string
---@param bEmitChanged boolean @[opt] 
function UTakeRecorderSubsystem:SetSlateName(InSlateName, bEmitChanged) end

---Sets the current sequence's countdown.
---@param InSeconds number
function UTakeRecorderSubsystem:SetSequenceCountdown(InSeconds) end

---Set the global take recorder settings.
---@param InParameters FTakeRecorderParameters
function UTakeRecorderSubsystem:SetGlobalRecordSettings(InParameters) end

---Set if the frame rate is set from the Timecode frame rate
function UTakeRecorderSubsystem:SetFrameRateFromTimecode() end

---Set the frame rate for this take
---@param InFrameRate FFrameRate
function UTakeRecorderSubsystem:SetFrameRate(InFrameRate) end

---Supply the last recording if it exists.
---@return boolean
function UTakeRecorderSubsystem:ReviewLastRecording() end

---Revert any changes restoring the preset origin.
function UTakeRecorderSubsystem:RevertChanges() end

---Reset to the pending take.
function UTakeRecorderSubsystem:ResetToPendingTake() end

---Remove a given source.
---@param InSource UTakeRecorderSource
function UTakeRecorderSubsystem:RemoveSource(InSource) end

---Remove an actor from available sources.
---@param InActor AActor
function UTakeRecorderSubsystem:RemoveActorFromSources(InActor) end

---Mark the current frame.
---@return boolean
function UTakeRecorderSubsystem:MarkFrame() end

---If Take Recorder is currently reviewing.
---@return boolean
function UTakeRecorderSubsystem:IsReviewing() end

---If Take Recorder is currently recording.
---@return boolean
function UTakeRecorderSubsystem:IsRecording() end

---The current take recorder mode.
---@return ETakeRecorderMode
function UTakeRecorderSubsystem:GetTakeRecorderMode() end

---Retrieve the current meta data.
---@return UTakeMetaData
function UTakeRecorderSubsystem:GetTakeMetaData() end

---Retrieve the current take recorder state.
---@return ETakeRecorderState
function UTakeRecorderSubsystem:GetState() end

---Retrieve the sources.
---@return UTakeRecorderSources
function UTakeRecorderSubsystem:GetSources() end

---Retrieve additional settings objects from a source.
---@param InSource UTakeRecorderSource
---@return TArray_UObject_
function UTakeRecorderSubsystem:GetSourceRecordSettings(InSource) end

---Retrieve the first source of the given class.
---@param InSourceClass TSubclassOf_UTakeRecorderSource_
---@return UTakeRecorderSource
function UTakeRecorderSubsystem:GetSourceByClass(InSourceClass) end

---Retrieve the actor from a source, if applicable.
---@param InSource UTakeRecorderSource
---@return AActor
function UTakeRecorderSubsystem:GetSourceActor(InSource) end

---Retrieve all slates.
---@param InPackagePath string @[opt] 
---@return TArray_FAssetData_
function UTakeRecorderSubsystem:GetSlates(InPackagePath) end

---Retrieve the pending take. This may be null.
---@return UTakePreset
function UTakeRecorderSubsystem:GetPendingTake() end

---Find both the current maximum take value and the total number of takes for a given slate.
---@param InSlate string
---@param OutMaxTake integer @[out] 
---@param OutNumTakes integer @[out] 
function UTakeRecorderSubsystem:GetNumberOfTakes(InSlate, OutMaxTake, OutNumTakes) end

---Compute the next take number given a slate.
---@param InSlate string
---@return integer
function UTakeRecorderSubsystem:GetNextTakeNumber(InSlate) end

---Return the level sequence we are using.
---@return ULevelSequence
function UTakeRecorderSubsystem:GetLevelSequence() end

---Retrieve the Last Recorded Level Sequence if it exists.
---@return ULevelSequence
function UTakeRecorderSubsystem:GetLastRecordedLevelSequence() end

---Retrieve the global take recorder settings.
---@return FTakeRecorderParameters
function UTakeRecorderSubsystem:GetGlobalRecordSettings() end

---Access the frame rate for this take
---@return FFrameRate
function UTakeRecorderSubsystem:GetFrameRate() end

---Retrieves a copy of the list of sources that are being recorded. This is intended for Blueprint usages which cannot
---use TArrayView.
---DO NOT MODIFY THIS ARRAY, modifications will be lost.
---@return TArray_UTakeRecorderSource_
function UTakeRecorderSubsystem:GetAllSourcesCopy() end

---Remove all sources from the current sequence.
function UTakeRecorderSubsystem:ClearSources() end

---Clear the pending take.
function UTakeRecorderSubsystem:ClearPendingTake() end

---Can we review the last recording?
---@return boolean
function UTakeRecorderSubsystem:CanReviewLastRecording() end

---Cancel an in-progress recording.
---@param bShowConfirmMessage boolean @[opt] 
function UTakeRecorderSubsystem:CancelRecording(bShowConfirmMessage) end

---* Add an actor as a source.
---*
---* @@param InActor The actor that should be added to Sources. Note that this can include ALevelSequenceActors.
---* @@param bReduceKeys Enable/disable key reduction on all the sources registered
---* @@param bShowProgress Enable/disable the dialog box showing progress for the potentially slow parts of finalizing the take
---@param InActor AActor
---@param bReduceKeys boolean @[opt] 
---@param bShowProgress boolean @[opt] 
function UTakeRecorderSubsystem:AddSourceForActor(InActor, bReduceKeys, bShowProgress) end

---Add a source by a source class.
---@param InSourceClass TSubclassOf_UTakeRecorderSource_
---@return UTakeRecorderSource
function UTakeRecorderSubsystem:AddSource(InSourceClass) end

