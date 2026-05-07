---System responsible for animating material parameter entities.
---Visits any BoundMaterial with the supported parameter names and either a BlendChannelOutput component
---or no BlendChannelInput, and applies the resulting parameter to the bound material instance.
---@class UMovieSceneMaterialParameterEvaluationSystem : UMovieSceneEntitySystem
local UMovieSceneMaterialParameterEvaluationSystem = {}

