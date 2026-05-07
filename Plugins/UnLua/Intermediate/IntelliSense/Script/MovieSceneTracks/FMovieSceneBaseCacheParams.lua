---Base class for the cache parameters that will be used in all the cache sections
---@class FMovieSceneBaseCacheParams
---@field public FirstLoopStartFrameOffset FFrameNumber @The offset for the first loop of the animation clip
---@field public StartFrameOffset FFrameNumber @The offset into the beginning of the animation clip
---@field public EndFrameOffset FFrameNumber @The offset into the end of the animation clip
---@field public PlayRate number @The playback rate of the animation clip
---@field public bReverse boolean @Reverse the playback of the animation clip
local FMovieSceneBaseCacheParams = {}
