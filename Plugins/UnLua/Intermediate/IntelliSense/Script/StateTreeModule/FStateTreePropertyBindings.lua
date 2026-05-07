---Runtime storage and execution of property bindings.
---@class FStateTreePropertyBindings : FPropertyBindingBindingCollection
---@field private SourceStructs TArray<FStateTreeBindableStructDesc> @Array of expected source structs.
---@field private PropertyPathBindings TArray<FStateTreePropertyPathBinding> @Array of property bindings, resolved into arrays of copies before use.
---@field private PropertyReferencePaths TArray<FStateTreePropertyRefPath> @Array of referenced property paths
---@field private PropertyAccesses TArray<FStateTreePropertyAccess> @Array of individually accessed properties
local FStateTreePropertyBindings = {}
