---ULevelSequencePlayer is used to actually "play" an level sequence asset at runtime.
---This class keeps track of playback state and provides functions for manipulating
---an level sequence while its playing.
---@class ULevelSequencePlayer : UMovieSceneSequencePlayer
---@field public OnCameraCut MulticastDelegate @Event triggered when there is a camera cut
local ULevelSequencePlayer = {}

---Get the active camera cut camera
---@return UCameraComponent
function ULevelSequencePlayer:GetActiveCameraComponent() end

---Create a new level sequence player.
---@param WorldContextObject UObject
---@param LevelSequence ULevelSequence
---@param Settings FMovieSceneSequencePlaybackSettings
---@param OutActor ALevelSequenceActor @[out] 
---@return ULevelSequencePlayer
function ULevelSequencePlayer.CreateLevelSequencePlayer(WorldContextObject, LevelSequence, Settings, OutActor) end

