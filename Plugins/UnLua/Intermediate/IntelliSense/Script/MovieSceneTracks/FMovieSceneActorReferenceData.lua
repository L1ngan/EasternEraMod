---A curve of events
---@class FMovieSceneActorReferenceData : FMovieSceneChannel
---@field private KeyTimes TArray<FFrameNumber> @Sorted array of key times
---@field private DefaultValue FMovieSceneActorReferenceKey @Default value used when there are no keys
---@field private KeyValues TArray<FMovieSceneActorReferenceKey> @Array of values that correspond to each key time
---@field private KeyHandles FMovieSceneKeyHandleMap @This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets.
local FMovieSceneActorReferenceData = {}
