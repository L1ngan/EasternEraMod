---A curve of spaces
---@class FMovieSceneControlRigSpaceChannel : FMovieSceneChannel
---@field private KeyTimes TArray<FFrameNumber> @Sorted array of key times
---@field private KeyValues TArray<FMovieSceneControlRigSpaceBaseKey> @Array of values that correspond to each key time
---@field private KeyHandles FMovieSceneKeyHandleMap @This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets.
local FMovieSceneControlRigSpaceChannel = {}
