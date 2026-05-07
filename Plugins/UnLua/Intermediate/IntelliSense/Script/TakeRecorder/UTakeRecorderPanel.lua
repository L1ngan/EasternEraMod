---Take recorder UI panel interop object
---@class UTakeRecorderPanel : UObject
local UTakeRecorderPanel = {}

---Stop recording with the current take
function UTakeRecorderPanel:StopRecording() end

---Start recording with the current take
function UTakeRecorderPanel:StartRecording() end

---Setup this panel as a viewer for a previously recorded take.
---@param LevelSequenceAsset ULevelSequence
function UTakeRecorderPanel:SetupForViewing(LevelSequenceAsset) end

---Setup this panel such that it is ready to start recording using the specified
---level sequence asset to record into.
---@param LevelSequenceAsset ULevelSequence
function UTakeRecorderPanel:SetupForRecordingInto_LevelSequence(LevelSequenceAsset) end

---Setup this panel such that it is ready to start recording using the specified
---take preset as a template for the recording.
---@param TakePresetAsset UTakePreset
function UTakeRecorderPanel:SetupForRecording_TakePreset(TakePresetAsset) end

---Setup this panel such that it is ready to start recording using the specified
---level sequence asset as a template for the recording.
---@param LevelSequenceAsset ULevelSequence
function UTakeRecorderPanel:SetupForRecording_LevelSequence(LevelSequenceAsset) end

---Setup this panel as an editor for the specified take preset asset.
---@param TakePreset UTakePreset
function UTakeRecorderPanel:SetupForEditing(TakePreset) end

---Set if the frame rate is set from the Timecode frame rate
---@param bInFromTimecode boolean
function UTakeRecorderPanel:SetFrameRateFromTimecode(bInFromTimecode) end

---Set the frame rate for this take
---@param InFrameRate FFrameRate
function UTakeRecorderPanel:SetFrameRate(InFrameRate) end

---Access take meta data for this take
---@return UTakeMetaData
function UTakeRecorderPanel:GetTakeMetaData() end

---Access the sources that are to be (or were) used for recording this take
---@return UTakeRecorderSources
function UTakeRecorderPanel:GetSources() end

---Get the mode that the panel is currently in
---@return ETakeRecorderPanelMode
function UTakeRecorderPanel:GetMode() end

---Access the level sequence for this take
---@return ULevelSequence
function UTakeRecorderPanel:GetLevelSequence() end

---Access the last level sequence that was recorded
---@return ULevelSequence
function UTakeRecorderPanel:GetLastRecordedLevelSequence() end

---Access the frame rate for this take
---@return FFrameRate
function UTakeRecorderPanel:GetFrameRate() end

---* Clear the pending take level sequence
function UTakeRecorderPanel:ClearPendingTake() end

---Whether the panel is ready to start recording
---@param OutErrorText string @[out] 
---@return boolean
function UTakeRecorderPanel:CanStartRecording(OutErrorText) end

