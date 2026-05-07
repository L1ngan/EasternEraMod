---@class FMovieSceneObjectPathChannel : FMovieSceneChannel
---@field private PropertyClass TSubclassOf<UObject>
---@field private Times TArray<FFrameNumber>
---@field private Values TArray<FMovieSceneObjectPathChannelKeyValue>
---@field private DefaultValue FMovieSceneObjectPathChannelKeyValue
---@field private KeyHandles FMovieSceneKeyHandleMap @This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets.
local FMovieSceneObjectPathChannel = {}
