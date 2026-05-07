---Data for a dynamic binding endpoint call.
---@class FMovieSceneDynamicBinding
---@field public Function UFunction @The function to call (normally a generated blueprint function on the sequence director)
---@field public ResolveParamsProperty Unknown @Property pointer for the function parameter that should receive the resolve params
---@field public PayloadVariables TMap<string, FMovieSceneDynamicBindingPayloadVariable> @Array of payload variables to be added to the generated function
---@field public CompiledFunctionName string @Name of the generated blueprint function
---@field public ResolveParamsPinName string @Pin name for passing the resolve params
---@field public WeakEndpoint TWeakObjectPtr<UObject> @Endpoint node in the sequence director
local FMovieSceneDynamicBinding = {}
