---@class UReplaySubsystem : UGameInstanceSubsystem
---@field public bLoadDefaultMapOnStop boolean @Whether to reload the default map when StopReplay is called.
local UReplaySubsystem = {}

---Request a checkpoint write, if currently recording.
function UReplaySubsystem:RequestCheckpoint() end

---@return boolean
function UReplaySubsystem:IsRecording() end

---@return boolean
function UReplaySubsystem:IsPlaying() end

---Get current recording/playing total replay time
---@return number
function UReplaySubsystem:GetReplayTotalTime() end

---Get current recording/playing replay time
---@return number
function UReplaySubsystem:GetReplayCurrentTime() end

---Get current recording/playing replay name
---@return string
function UReplaySubsystem:GetActiveReplayName() end

