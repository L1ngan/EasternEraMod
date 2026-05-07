---@class FMovieSceneEventChannel : FMovieSceneChannel
---@field private KeyTimes TArray<FFrameNumber> @Array of times for each key
---@field private KeyValues TArray<FMovieSceneEvent> @Array of values that correspond to each key time
---@field private KeyHandles FMovieSceneKeyHandleMap @This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets.
local FMovieSceneEventChannel = {}
