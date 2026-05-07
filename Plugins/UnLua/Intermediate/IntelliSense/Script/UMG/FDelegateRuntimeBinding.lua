---@class FDelegateRuntimeBinding
---@field public ObjectName string @The widget that will be bound to the live data.
---@field public PropertyName string @The property on the widget that will have a binding placed on it.
---@field public FunctionName string @The function or property we're binding to on the source object.
---@field public SourcePath FDynamicPropertyPath
---@field public Kind EBindingKind @The kind of binding we're performing, are we binding to a property or a function.
local FDelegateRuntimeBinding = {}
