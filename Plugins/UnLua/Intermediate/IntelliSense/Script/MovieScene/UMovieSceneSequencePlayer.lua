---Abstract class that provides consistent player behaviour for various animation players
---@class UMovieSceneSequencePlayer : UObject
---@field public Observer TScriptInterface<UMovieSceneSequencePlayerObserver> @Obeserver interface used for controlling whether this sequence can be played.
---@field public OnPlay MulticastDelegate @Event triggered when the level sequence player is played
---@field public OnPlayReverse MulticastDelegate @Event triggered when the level sequence player is played in reverse
---@field public OnStop MulticastDelegate @Event triggered when the level sequence player is stopped
---@field public OnPause MulticastDelegate @Event triggered when the level sequence player is paused
---@field public OnFinished MulticastDelegate @Event triggered when the level sequence player finishes naturally (without explicitly calling stop)
---@field protected Status integer @Movie player status.
---@field protected bReversePlayback boolean @Whether we're currently playing in reverse.
---@field protected Sequence UMovieSceneSequence @The sequence to play back
---@field protected StartTime FFrameNumber @Time (in playback frames) at which to start playing the sequence (defaults to the lower bound of the sequence's play range)
---@field protected DurationFrames integer @Time (in playback frames) at which to stop playing the sequence (defaults to the upper bound of the sequence's play range)
---@field protected DurationSubFrames number
---@field protected CurrentNumLoops integer @The number of times we have looped in the current playback
---@field protected SerialNumber integer @The serial number for the current update lifespan It is incremented every time we pass a "gate" such as an RPC call that stops/finishes the sequence.
---@field protected PlaybackSettings FMovieSceneSequencePlaybackSettings @Specific playback settings for the animation.
---@field protected RootTemplateInstance FMovieSceneRootEvaluationTemplateInstance @The root template instance we're evaluating
---@field protected NetSyncProps FMovieSceneSequenceReplProperties @Replicated playback status and current time that are replicated to clients
---@field protected PlaybackClient TScriptInterface<UMovieScenePlaybackClient> @External client pointer in charge of playing back this sequence
---@field protected TickManager UMovieSceneSequenceTickManager @Global tick manager, held here to keep it alive while world sequences are in play
local UMovieSceneSequencePlayer = {}

---Stop playback without moving the cursor.
function UMovieSceneSequencePlayer:StopAtCurrentTime() end

---Stop playback and move the cursor to the end (or start, for reversed playback) of the sequence.
function UMovieSceneSequencePlayer:Stop() end

---Set a manual weight to be multiplied with all blendable elements within this sequence
---@param InWeight number
function UMovieSceneSequencePlayer:SetWeight(InWeight) end

---Set the valid play range for this sequence, determined by a starting time  and a duration (in seconds)
---@param StartTime number
---@param Duration number
function UMovieSceneSequencePlayer:SetTimeRange(StartTime, Duration) end

---Set the playback rate of this player. Negative values will play the animation in reverse.
---@param PlayRate number
function UMovieSceneSequencePlayer:SetPlayRate(PlayRate) end

---Set the current time of the player by evaluating from the current time to the specified time, as if the sequence is playing.
---Triggers events that lie within the evaluated range. Does not alter the persistent playback status of the player (IsPlaying).
---@param PlaybackParams FMovieSceneSequencePlaybackParams
function UMovieSceneSequencePlayer:SetPlaybackPosition(PlaybackParams) end

---Set if hiding the hud during play.
---@param HideHud boolean
function UMovieSceneSequencePlayer:SetHideHud(HideHud) end

---Set the frame-rate that this player should play with, making all frame numbers in the specified time-space
---@param FrameRate FFrameRate
function UMovieSceneSequencePlayer:SetFrameRate(FrameRate) end

---Set the valid play range for this sequence, determined by a starting frame number (in this sequence player's plaback frame), and a number of frames duration
---@param StartFrame integer
---@param Duration integer
---@param SubFrames number @[opt] 
function UMovieSceneSequencePlayer:SetFrameRange(StartFrame, Duration, SubFrames) end

---Set whether to disable camera cuts
---@param bInDisableCameraCuts boolean
function UMovieSceneSequencePlayer:SetDisableCameraCuts(bInDisableCameraCuts) end

---Set the state of the completion mode override. Note, setting the state to force restore state will only take effect if the sequence hasn't started playing
---@param CompletionModeOverride EMovieSceneCompletionModeOverride
function UMovieSceneSequencePlayer:SetCompletionModeOverride(CompletionModeOverride) end

---Scrub playback.
function UMovieSceneSequencePlayer:Scrub() end

---Called on the server when Stop() is called in order to differentiate Stops from Pauses.
---@param StoppedTime FFrameTime
---@param NewSerialNumber integer
function UMovieSceneSequencePlayer:RPC_OnStopEvent(StoppedTime, NewSerialNumber) end

---Called on the server when playback has reached the end. Could lead to stopping or pausing.
---@param StoppedTime FFrameTime
---@param NewSerialNumber integer
function UMovieSceneSequencePlayer:RPC_OnFinishPlaybackEvent(StoppedTime, NewSerialNumber) end

---Called on the server whenever an explicit change in time has occurred through one of the (Play|Jump|Scrub)To methods
---@param Method EUpdatePositionMethod
---@param RelevantTime FFrameTime
---@param NewSerialNumber integer
function UMovieSceneSequencePlayer:RPC_ExplicitServerUpdateEvent(Method, RelevantTime, NewSerialNumber) end

---Restore any changes made by this player to their original state
function UMovieSceneSequencePlayer:RestoreState() end

---Invalidates the given binding, forcing it to be refetched. This may be useful for some custom bindings that wish their resolution code to be called again.
---@param ObjectBinding FMovieSceneObjectBindingID
function UMovieSceneSequencePlayer:RequestInvalidateBinding(ObjectBinding) end

---Removes a previously assigned weight
function UMovieSceneSequencePlayer:RemoveWeight() end

---Play from the current position to the requested position and pause. If requested position is before the current position,
---playback will be reversed. Playback to the requested position will be cancelled if Stop() or Pause() is invoked during this
---playback.
---@param PlaybackParams FMovieSceneSequencePlaybackParams
---@param PlayToParams FMovieSceneSequencePlayToParams
function UMovieSceneSequencePlayer:PlayTo(PlaybackParams, PlayToParams) end

---Reverse playback.
function UMovieSceneSequencePlayer:PlayReverse() end

---Start playback from the current time cursor position, looping the specified number of times.
---@param NumLoops integer @[opt] 
function UMovieSceneSequencePlayer:PlayLooping(NumLoops) end

---Start playback forwards from the current time cursor position, using the current play rate.
function UMovieSceneSequencePlayer:Play() end

---Pause playback.
function UMovieSceneSequencePlayer:Pause() end

---Check whether playback is reversed.
---@return boolean
function UMovieSceneSequencePlayer:IsReversed() end

---Check whether the sequence is actively playing.
---@return boolean
function UMovieSceneSequencePlayer:IsPlaying() end

---Check whether the sequence is paused.
---@return boolean
function UMovieSceneSequencePlayer:IsPaused() end

---Go to end of the sequence and stop. Adheres to 'When Finished' section rules.
function UMovieSceneSequencePlayer:GoToEndAndStop() end

---Get the offset within the level sequence to start playing
---@return FQualifiedFrameTime
function UMovieSceneSequencePlayer:GetStartTime() end

---Get the name of the sequence this player is playing
---@param bAddClientInfo boolean @[opt] 
---@return string
function UMovieSceneSequencePlayer:GetSequenceName(bAddClientInfo) end

---Access the sequence this player is playing
---@return UMovieSceneSequence
function UMovieSceneSequencePlayer:GetSequence() end

---Get the playback rate of this player.
---@return number
function UMovieSceneSequencePlayer:GetPlayRate() end

---Get the object bindings for the requested object
---@param InObject UObject
---@return TArray_FMovieSceneObjectBindingID_
function UMovieSceneSequencePlayer:GetObjectBindings(InObject) end

---Get if the hud is hidden during play.
---@return boolean
function UMovieSceneSequencePlayer:GetHideHud() end

---Get this sequence's display rate.
---@return FFrameRate
function UMovieSceneSequencePlayer:GetFrameRate() end

---Get this sequence's duration in frames
---@return integer
function UMovieSceneSequencePlayer:GetFrameDuration() end

---Get the offset within the level sequence to finish playing
---@return FQualifiedFrameTime
function UMovieSceneSequencePlayer:GetEndTime() end

---Get the total duration of the sequence
---@return FQualifiedFrameTime
function UMovieSceneSequencePlayer:GetDuration() end

---Set whether to disable camera cuts
---@return boolean
function UMovieSceneSequencePlayer:GetDisableCameraCuts() end

---Get the current playback position
---@return FQualifiedFrameTime
function UMovieSceneSequencePlayer:GetCurrentTime() end

---Get the state of the completion mode override
---@return EMovieSceneCompletionModeOverride
function UMovieSceneSequencePlayer:GetCompletionModeOverride() end

---Retrieve all objects currently bound to the specified binding identifier
---@param ObjectBinding FMovieSceneObjectBindingID
---@return TArray_UObject_
function UMovieSceneSequencePlayer:GetBoundObjects(ObjectBinding) end

---Changes the direction of playback (go in reverse if it was going forward, or vice versa)
function UMovieSceneSequencePlayer:ChangePlaybackDirection() end

