---Cached function name/ptr that is resolved at init time
---@class FAnimNodeFunctionRef
---@field private ClassName string @The name of the class to call the function with. If this is NAME_None, we assume this is a 'thiscall', if it is valid then we assume (and verify) we should call the function on a function library CDO.
---@field private FunctionName string @The name of the function to call
---@field private Class TSubclassOf<UObject> @The class to use to call the function with, recovered by looking for a class of name FunctionName
---@field private Function UFunction @The function to call, recovered by looking for a function of name FunctionName
local FAnimNodeFunctionRef = {}
