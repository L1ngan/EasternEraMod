---* Blueprint-specific resolution context for custom bindings.
---@class FMovieSceneBindingResolveContext
---@field public WorldContext UObject @The world context
---@field public Binding FMovieSceneBindingProxy @Binding for the bound object currently evaluating this condition if applicable (BindingId will be invalid for conditions on global tracks/sections).
local FMovieSceneBindingResolveContext = {}
