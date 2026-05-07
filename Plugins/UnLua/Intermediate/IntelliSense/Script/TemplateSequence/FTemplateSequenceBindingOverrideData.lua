---Template sequence binding override data
---This is similar to FMovieSceneBindingOverrideData, but works only for a template sequence's root object,
---so we don't need it to store the object binding ID.
---@class FTemplateSequenceBindingOverrideData
---@field public Object TWeakObjectPtr<UObject> @Specifies the object binding to override.
---@field public bOverridesDefault boolean @Specifies whether the default assignment should remain bound (false) or if this should completely override the default binding (true).
local FTemplateSequenceBindingOverrideData = {}
