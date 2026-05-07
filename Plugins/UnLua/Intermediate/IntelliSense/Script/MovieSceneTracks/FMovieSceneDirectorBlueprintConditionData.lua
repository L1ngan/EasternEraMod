---Data for a director blueprint condition endpoint call.
---@class FMovieSceneDirectorBlueprintConditionData
---@field public Function UFunction @The function to call (normally a generated blueprint function on the sequence director)
---@field public ConditionContextProperty Unknown @Property pointer for the function parameter that should receive the condition context params
---@field public PayloadVariables TMap<string, FMovieSceneDirectorBlueprintConditionPayloadVariable> @Array of payload variables to be added to the generated function
---@field public CompiledFunctionName string @Name of the generated blueprint function
---@field public ConditionContextPinName string @Pin name for passing the condition context params
---@field public WeakEndpoint TWeakObjectPtr<UObject> @Endpoint node in the sequence director
local FMovieSceneDirectorBlueprintConditionData = {}
