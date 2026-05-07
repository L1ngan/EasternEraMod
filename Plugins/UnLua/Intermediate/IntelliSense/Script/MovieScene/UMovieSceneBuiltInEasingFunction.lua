---@class UMovieSceneBuiltInEasingFunction : UObject
---@field public Type EMovieSceneBuiltInEasing
local UMovieSceneBuiltInEasingFunction = {}

---Evaluate the easing with an interpolation value between 0 and 1
---@param Interp number
---@return number
function UMovieSceneBuiltInEasingFunction:OnEvaluate(Interp) end

