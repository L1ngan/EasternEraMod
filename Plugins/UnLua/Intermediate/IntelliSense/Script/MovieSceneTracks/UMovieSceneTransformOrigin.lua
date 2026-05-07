---@class UMovieSceneTransformOrigin : UInterface
local UMovieSceneTransformOrigin = {}

---Get the transform from which all absolute component transform sections should be relative. Scale is ignored.
---@return FTransform
function UMovieSceneTransformOrigin:BP_GetTransformOrigin() end

