---Properties that are broadcast from server->clients for time/state synchronization
---@class FMovieSceneSequenceReplProperties
---@field public LastKnownPosition FFrameTime @The last known position of the sequence on the server
---@field public LastKnownStatus integer @The last known playback status of the sequence on the server
---@field public LastKnownNumLoops integer @The last known number of loops of the sequence on the server
---@field public LastKnownSerialNumber integer @The last known serial number on the server
local FMovieSceneSequenceReplProperties = {}
