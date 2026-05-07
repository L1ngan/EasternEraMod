---* Blueprint-friendly struct containing any context needed to evaluate conditions.
---@class FMovieSceneConditionContext
---@field public WorldContext UObject @The world context
---@field public Binding FMovieSceneBindingProxy @Binding for the bound object currently evaluating this condition if applicable (BindingId will be invalid for conditions on global tracks/sections).
---@field public BoundObjects TArray<UObject> @Array of objects bound to the binding currently evaluating this condition if applicable (will be empty for conditions on global tracks/sections)
local FMovieSceneConditionContext = {}
