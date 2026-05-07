---Numeric variant type that represents a 'time-warp' operation transforming a time into another time.
---By default this variant is a literal value that represents a play rate of 1.0 (ie, a 1:1 mapping), but it can be customized
---to provide a wide range of different transformations such as looping, clamping and custom curves
---@class FMovieSceneTimeWarpVariant
---@field private Variant FMovieSceneNumericVariant
local FMovieSceneTimeWarpVariant = {}
