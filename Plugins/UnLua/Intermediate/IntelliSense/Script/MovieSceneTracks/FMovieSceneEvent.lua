---@class FMovieSceneEvent
---@field public Ptrs FMovieSceneEventPtrs @The function that should be called to invoke this event. Functions must have either no parameters, or a single, pass-by-value object/interface parameter, with no return parameter.
---@field public PayloadVariables TMap<string, FMovieSceneEventPayloadVariable> @Array of payload variables to be added to the generated function
---@field public CompiledFunctionName string
---@field public BoundObjectPinName string
---@field public WeakEndpoint TWeakObjectPtr<UObject> @Serialized weak pointer to the function entry (UK2Node_FunctionEntry) or custom event node (UK2Node_CustomEvent) within the blueprint graph for this event. Stored as an editor-only UObject so UHT can parse it when building for non-editor.
local FMovieSceneEvent = {}
