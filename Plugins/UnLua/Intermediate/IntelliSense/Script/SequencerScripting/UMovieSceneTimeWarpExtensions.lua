---Function library containing methods that relate to time-warp within Sequencer
---@class UMovieSceneTimeWarpExtensions : UBlueprintFunctionLibrary
local UMovieSceneTimeWarpExtensions = {}

---Retrieve this timewarp's constant play rate. Will throw an error if the timewarp is not a constant play rate.
---@param TimeWarp FMovieSceneTimeWarpVariant
---@return number
function UMovieSceneTimeWarpExtensions.ToFixedPlayRate(TimeWarp) end

---Assign a constant playrate to this timewarp, overwriting any existing timewarp implementation.
---@param TimeWarp FMovieSceneTimeWarpVariant @[out] 
---@param FixedPlayRate number
function UMovieSceneTimeWarpExtensions.SetFixedPlayRate(TimeWarp, FixedPlayRate) end

---@param FixedPlayRate number
---@return FMovieSceneTimeWarpVariant
function UMovieSceneTimeWarpExtensions.MakeTimeWarp(FixedPlayRate) end

---Converts a timewarp variant struct to a constant play rate
---@param TimeWarp FMovieSceneTimeWarpVariant
---@return number
function UMovieSceneTimeWarpExtensions.Conv_TimeWarpVariantToPlayRate(TimeWarp) end

---Converts a constant playrate to a timewarp variant
---@param ConstantPlayRate number
---@return FMovieSceneTimeWarpVariant
function UMovieSceneTimeWarpExtensions.Conv_PlayRateToTimeWarpVariant(ConstantPlayRate) end

---@param TimeWarp FMovieSceneTimeWarpVariant
---@param FixedPlayRate number @[out] 
function UMovieSceneTimeWarpExtensions.BreakTimeWarp(TimeWarp, FixedPlayRate) end

