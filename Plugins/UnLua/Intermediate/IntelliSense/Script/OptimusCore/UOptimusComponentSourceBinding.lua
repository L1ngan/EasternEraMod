---@class UOptimusComponentSourceBinding : UObject
---@field public BindingName string @The name to give the binding, to disambiguate it from other bindings of same component type.
---@field public ComponentType TSubclassOf<UOptimusComponentSource> @The component type that this binding applies to
---@field public ComponentTags TArray<string> @Component tags to automatically bind this component binding to.
---@field protected bIsPrimaryBinding boolean
local UOptimusComponentSourceBinding = {}

