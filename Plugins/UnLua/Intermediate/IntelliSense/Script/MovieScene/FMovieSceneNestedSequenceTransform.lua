---Structure used to represent a specific transformation (ie from untransformed to transformed space) that cannot be combined with another.
---Stored as a stack inside FMovieSceneSequenceTransform to represent a complete transformation from inner time-space to outer time-space.
---@class FMovieSceneNestedSequenceTransform
---@field private TimeScale FMovieSceneTimeWarpVariant @Time scale implemented as an optionally-warping variant
---@field private Offset FFrameTime @Linear time transform for this sub-sequence.
local FMovieSceneNestedSequenceTransform = {}
