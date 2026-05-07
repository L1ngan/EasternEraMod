---Structure used to represent a specific inverse transformation (ie from transformed to untransformed space) that cannot be combined with another.
---Stored as a stack inside FMovieSceneInverseSequenceTransform to represent a complete transformation
---from inner time-space to outer time-space.
---@class FMovieSceneInverseNestedSequenceTransform
---@field private TimeScale FMovieSceneTimeWarpVariant @Time scale as either a fixed play rate, or as an external implementation
---@field private Offset FFrameTime @Constant time offset. Offset is applied differently for different internal implementations of TimeScale.
local FMovieSceneInverseNestedSequenceTransform = {}
