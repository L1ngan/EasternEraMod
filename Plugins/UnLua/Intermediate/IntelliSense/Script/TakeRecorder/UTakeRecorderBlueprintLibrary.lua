---@class UTakeRecorderBlueprintLibrary : UBlueprintFunctionLibrary
local UTakeRecorderBlueprintLibrary = {}

---Stop recording if there is a recorder currently active
function UTakeRecorderBlueprintLibrary.StopRecording() end

---Start a new recording using the specified parameters. Will fail if a recording is currently in progress
---@param LevelSequence ULevelSequence
---@param Sources UTakeRecorderSources
---@param MetaData UTakeMetaData
---@param Parameters FTakeRecorderParameters
---@return UTakeRecorder
function UTakeRecorderBlueprintLibrary.StartRecording(LevelSequence, Sources, MetaData, Parameters) end

---@param OnTakeRecorderStopped Delegate
function UTakeRecorderBlueprintLibrary.SetOnTakeRecorderStopped(OnTakeRecorderStopped) end

---@param OnTakeRecorderStarted Delegate
function UTakeRecorderBlueprintLibrary.SetOnTakeRecorderStarted(OnTakeRecorderStarted) end

---@param OnTakeRecorderPreInitialize Delegate
function UTakeRecorderBlueprintLibrary.SetOnTakeRecorderPreInitialize(OnTakeRecorderPreInitialize) end

---Called when a Take Panel is constructed or destroyed.
---@param OnTakeRecorderPanelChanged Delegate
function UTakeRecorderBlueprintLibrary.SetOnTakeRecorderPanelChanged(OnTakeRecorderPanelChanged) end

---@param OnTakeRecorderMarkedFrameAdded Delegate
function UTakeRecorderBlueprintLibrary.SetOnTakeRecorderMarkedFrameAdded(OnTakeRecorderMarkedFrameAdded) end

---@param OnTakeRecorderFinished Delegate
function UTakeRecorderBlueprintLibrary.SetOnTakeRecorderFinished(OnTakeRecorderFinished) end

---@param OnTakeRecorderCancelled Delegate
function UTakeRecorderBlueprintLibrary.SetOnTakeRecorderCancelled(OnTakeRecorderCancelled) end

---Set the default recorder parameters
---@param DefaultParameters FTakeRecorderParameters
function UTakeRecorderBlueprintLibrary.SetDefaultParameters(DefaultParameters) end

---Get the currently open take recorder panel, if one is open, opening a new one if not
---@return UTakeRecorderPanel
function UTakeRecorderBlueprintLibrary.OpenTakeRecorderPanel() end

---Is the Take Recorder enabled in the build
---@return boolean
function UTakeRecorderBlueprintLibrary.IsTakeRecorderEnabled() end

---Check whether a recording is currently active
---@return boolean
function UTakeRecorderBlueprintLibrary.IsRecording() end

---Get the currently open take recorder panel, if one is open
---@return UTakeRecorderPanel
function UTakeRecorderBlueprintLibrary.GetTakeRecorderPanel() end

---Get the default recorder parameters according to the project and user settings
---@return FTakeRecorderParameters
function UTakeRecorderBlueprintLibrary.GetDefaultParameters() end

---Retrieve the currently active recorder, or None if there none are active
---@return UTakeRecorder
function UTakeRecorderBlueprintLibrary.GetActiveRecorder() end

---Cancel recording if there is a recorder currently active
function UTakeRecorderBlueprintLibrary.CancelRecording() end

