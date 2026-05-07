---Denotes a framerate conversion
---@class FMovieSceneTimeWarpFrameRate
---@field private FrameRateNumerator integer @FFrameRate packed into 48 bits (24 each for numerator/denominator, max of 16777215 each)
---@field private FrameRateDenominator integer
local FMovieSceneTimeWarpFrameRate = {}
