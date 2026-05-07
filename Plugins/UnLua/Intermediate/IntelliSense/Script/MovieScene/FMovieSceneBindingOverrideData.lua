---Movie scene binding override data
---@class FMovieSceneBindingOverrideData
---@field public ObjectBindingId FMovieSceneObjectBindingID @Specifies the object binding to override.
---@field public Object TSoftObjectPtr<UObject> @Specifies the object to override the binding with.
---@field public bOverridesDefault boolean @Specifies whether the default assignment should remain bound (false) or if this should completely override the default binding (true).
local FMovieSceneBindingOverrideData = {}
