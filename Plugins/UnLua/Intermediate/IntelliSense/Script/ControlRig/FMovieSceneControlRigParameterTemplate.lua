---@class FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
---@field protected Enums TArray<FEnumParameterNameAndCurve> @The bool parameter names and their associated curves.
---@field protected Integers TArray<FIntegerParameterNameAndCurve> @The enum parameter names and their associated curves.
---@field protected Spaces TArray<FSpaceControlNameAndChannel> @Controls and their space keys
---@field protected Constraints TArray<FConstraintAndActiveChannel>
local FMovieSceneControlRigParameterTemplate = {}
