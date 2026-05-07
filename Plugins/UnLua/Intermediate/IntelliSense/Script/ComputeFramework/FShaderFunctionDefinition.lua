---Describes a shader function signature.
---@class FShaderFunctionDefinition
---@field public Name string @Function name.
---@field public ParamTypes TArray<FShaderParamTypeDefinition> @Function parameter types.
---@field public bHasReturnType boolean @If set to true then the first element of ParamTypes is the return type. Otherwise return type is void.
local FShaderFunctionDefinition = {}
