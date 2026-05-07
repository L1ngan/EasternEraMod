---An action to remap a variable inside of a function reference node renaming a node in the graph.
---@class FRigVMSetRemappedVariableAction : FRigVMBaseAction
---@field public NodePath string
---@field public InnerVariableName string
---@field public OldOuterVariableName string
---@field public NewOuterVariableName string
local FRigVMSetRemappedVariableAction = {}
