---Template that performs evaluation of parameter sections
---@class FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
---@field protected Scalars TArray<FScalarParameterNameAndCurve> @The scalar parameter names and their associated curves.
---@field protected Bools TArray<FBoolParameterNameAndCurve> @The bool parameter names and their associated curves.
---@field protected Vector2Ds TArray<FVector2DParameterNameAndCurves> @The vector parameter names and their associated curves.
---@field protected Vectors TArray<FVectorParameterNameAndCurves> @The vector parameter names and their associated curves.
---@field protected Colors TArray<FColorParameterNameAndCurves> @The color parameter names and their associated curves.
---@field protected Transforms TArray<FTransformParameterNameAndCurves>
local FMovieSceneParameterSectionTemplate = {}
