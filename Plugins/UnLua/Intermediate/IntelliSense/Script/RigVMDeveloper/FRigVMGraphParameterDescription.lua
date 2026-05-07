---The parameter description is used to convey information
---about unique parameters within a Graph. Multiple Parameter
---Nodes can share the same parameter description.
---@class FRigVMGraphParameterDescription
---@field public Name string @The name of the parameter
---@field public bIsInput boolean @True if the parameter is an input
---@field public CPPType string @The C++ data type of the parameter
---@field public CPPTypeObject UObject @The Struct of the C++ data type of the parameter (or nullptr)
---@field public DefaultValue string @The default value of the parameter
local FRigVMGraphParameterDescription = {}
