---A container class that owns component source bindings. This is used to ensure we don't end up
---with a namespace clash between graphs, variables, bindings and resources.
---@class UOptimusComponentSourceBindingContainer : UObject
---@field public Bindings TArray<UOptimusComponentSourceBinding>
local UOptimusComponentSourceBindingContainer = {}

