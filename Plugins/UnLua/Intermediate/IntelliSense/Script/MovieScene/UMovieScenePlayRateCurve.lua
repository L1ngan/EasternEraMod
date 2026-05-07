---A time-warp defined as a play rate curve.
---Time remapping is computed using the integral of the play rate curve.
---@class UMovieScenePlayRateCurve : UMovieSceneTimeWarpGetter
---@field public PlayRate FMovieSceneTimeWarpChannel @Curve defined in play-rate space. Does not support cycling.
---@field public PlaybackStartFrame FFrameNumber
---@field public bManualPlaybackStart boolean
local UMovieScenePlayRateCurve = {}

