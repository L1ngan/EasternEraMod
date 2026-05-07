---@class FFunctionCaller
---@field public FunctionName string @The function that should be called to invoke this event. Functions must have either no parameters, or a single, pass-by-value object/interface parameter, with no return parameter.
---@field private FunctionEntry TWeakObjectPtr<UObject> @Weak pointer to the function entry within the blueprint graph for this event. Stored as an editor-only UObject so UHT can parse it when building for non-editor.
---@field private DisplayOrder integer
local FFunctionCaller = {}
