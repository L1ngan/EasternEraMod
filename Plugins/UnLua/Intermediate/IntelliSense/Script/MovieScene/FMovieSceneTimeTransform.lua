---Movie scene sequence transform class that transforms from one time-space to another.
---                    | TimeScale     Offset  |
---                    | 0                     1               |
---As such, traditional matrix mathematics can be applied to transform between different sequence's time-spaces.
---Transforms apply time scale first, and then offset.
---@class FMovieSceneTimeTransform
---@field public TimeScale number @The sequence's time scale (or play rate)
---@field public Offset FFrameTime @Scalar frame offset applied after the scale
local FMovieSceneTimeTransform = {}
