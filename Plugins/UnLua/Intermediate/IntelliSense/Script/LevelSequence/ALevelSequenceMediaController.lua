---Replicated actor class that is responsible for instigating various cinematic assets (Media, Audio, Level Sequences) in a synchronized fasion
---@class ALevelSequenceMediaController : AActor
---@field private Sequence ALevelSequenceActor @Pointer to the sequence actor to use for playback
---@field private MediaComponent UMediaComponent @Media component that contains the media player to synchronize with
---@field private ServerStartTimeSeconds number @Replicated time at which the server started the sequence (taken from AGameStateBase::GetServerWorldTimeSeconds)
local ALevelSequenceMediaController = {}

---Forcibly synchronize the sequence to the server's position if it has diverged by more than the specified threshold
---@param DesyncThresholdSeconds number @[opt] 
function ALevelSequenceMediaController:SynchronizeToServer(DesyncThresholdSeconds) end

function ALevelSequenceMediaController:Play() end

function ALevelSequenceMediaController:OnRep_ServerStartTimeSeconds() end

---Access this actor's Level Sequence Actor
---@return ALevelSequenceActor
function ALevelSequenceMediaController:GetSequence() end

---Access this actor's media component
---@return UMediaComponent
function ALevelSequenceMediaController:GetMediaComponent() end

---@param DeltaSeconds number
---@param InPlayRate number
function ALevelSequenceMediaController:OnTick(DeltaSeconds, InPlayRate) end

---@param InStopTime FQualifiedFrameTime
function ALevelSequenceMediaController:OnStopPlaying(InStopTime) end

---@param InStartTime FQualifiedFrameTime
function ALevelSequenceMediaController:OnStartPlaying(InStartTime) end

---@param InCurrentTime FQualifiedFrameTime
---@param InPlayRate number
---@return FFrameTime
function ALevelSequenceMediaController:OnRequestCurrentTime(InCurrentTime, InPlayRate) end

