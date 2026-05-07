---Entry for a delegate to assign after a blueprint has been instanced
---For this class we assume the delegate has been generated and exists on BPGC instance itself
---@class FGeneratedBlueprintDelegateBinding
---@field public DelegatePropertyName string @Name of property on the component that we want to assign to.
---@field public FunctionNameToBind string @Name of function that we want to bind to the delegate.
local FGeneratedBlueprintDelegateBinding = {}
