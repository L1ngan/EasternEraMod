---Base class for all track instances. Can also be used for root tracks where AnimatedObject will be nullptr
---@class UMovieSceneTrackInstance : UObject
---@field private WeakAnimatedObject TWeakObjectPtr<UObject>
---@field private bIsRootTrackInstance boolean
---@field private PrivateLinker UMovieSceneEntitySystemLinker
---@field private Inputs TArray<FMovieSceneTrackInstanceInput>
local UMovieSceneTrackInstance = {}

