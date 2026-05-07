---Base class for RigVM editor side nodes
---@class URigVMEdGraphNode : UEdGraphNode
---@field private ModelNodePath string
---@field private CachedModelNode TWeakObjectPtr<URigVMNode>
---@field private PinPathToModelPin TMap<string, TWeakObjectPtr<URigVMPin>>
local URigVMEdGraphNode = {}

