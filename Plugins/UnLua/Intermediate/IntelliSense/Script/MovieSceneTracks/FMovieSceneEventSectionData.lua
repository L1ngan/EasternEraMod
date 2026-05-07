---A curve of events
---@class FMovieSceneEventSectionData : FMovieSceneChannel
---@field private Times TArray<FFrameNumber>
---@field private KeyValues TArray<FEventPayload> @Array of values that correspond to each key time
---@field private KeyHandles FMovieSceneKeyHandleMap @This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets.
local FMovieSceneEventSectionData = {}
