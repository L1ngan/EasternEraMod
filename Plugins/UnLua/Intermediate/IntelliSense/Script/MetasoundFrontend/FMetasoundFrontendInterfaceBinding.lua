---@class FMetasoundFrontendInterfaceBinding
---@field public OutputInterfaceVersion FMetasoundFrontendVersion @Version of interface to bind from (the corresponding output vertices)
---@field public InputInterfaceVersion FMetasoundFrontendVersion @Version of interface to bind to (the corresponding input vertices)
---@field public BindingPriority integer @Value describing if interface binding priority is higher or lower than another interface binding that may be shared between vertices attempting to be connected via binding functionality.
---@field public VertexBindings TArray<FMetasoundFrontendInterfaceVertexBinding> @Array of named pairs (output & input names) that describe what edges to create if binding functionality is executed between two nodes.
local FMetasoundFrontendInterfaceBinding = {}
