---@class UTakeRecorder : UObject
---@field private SequenceAsset ULevelSequence @The asset that we should output recorded data into
---@field private OverlayWidget UTakeRecorderOverlayWidget @The overlay widget for this recording
---@field private WeakWorld TWeakObjectPtr<UWorld> @The world that we are recording within
---@field private Parameters FTakeRecorderParameters @Parameters for the recorder - marked up as a uproperty to support reference collection
local UTakeRecorder = {}

---Sets the current countdown time in seconds.
---@param InSeconds number
function UTakeRecorder:SetCountdown(InSeconds) end

---Get the current state of this recorder
---@return ETakeRecorderState
function UTakeRecorder:GetState() end

---Access the sequence asset that this recorder is recording into
---@return ULevelSequence
function UTakeRecorder:GetSequence() end

---Access the number of seconds remaining before this recording will start
---@return number
function UTakeRecorder:GetCountdownSeconds() end

