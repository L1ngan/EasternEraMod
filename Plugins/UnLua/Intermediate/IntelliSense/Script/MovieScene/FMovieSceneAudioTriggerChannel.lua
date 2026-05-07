---@class FMovieSceneAudioTriggerChannel : FMovieSceneChannel
---@field private Times TArray<FFrameNumber>
---@field private Values TArray<boolean> @These are all 1s, but are required for the templates to bind correctly
---@field private KeyHandles FMovieSceneKeyHandleMap @This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets.
local FMovieSceneAudioTriggerChannel = {}
