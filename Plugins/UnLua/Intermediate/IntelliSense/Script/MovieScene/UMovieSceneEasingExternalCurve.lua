---@class UMovieSceneEasingExternalCurve : UObject
---@field public Curve UCurveFloat @Curve data
local UMovieSceneEasingExternalCurve = {}

---Evaluate the easing with an interpolation value between 0 and 1
---@param Interp number
---@return number
function UMovieSceneEasingExternalCurve:OnEvaluate(Interp) end

