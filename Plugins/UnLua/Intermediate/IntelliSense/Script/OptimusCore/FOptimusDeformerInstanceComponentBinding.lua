---Defines a binding between a component provider in the graph and an actor component in the component hierarchy on
---the actor whose deformable component we're bound to.
---@class FOptimusDeformerInstanceComponentBinding
---@field public ProviderName string @Binding name on deformer graph.
---@field public ComponentName string @Component name to bind. This should be sanitized before storage.
local FOptimusDeformerInstanceComponentBinding = {}
