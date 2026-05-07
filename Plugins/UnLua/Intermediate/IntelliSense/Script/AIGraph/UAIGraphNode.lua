---@class UAIGraphNode : UEdGraphNode
---@field public ClassData FGraphNodeClassData @instance class
---@field public NodeInstance UObject
---@field public ParentNode UAIGraphNode
---@field public SubNodes TArray<UAIGraphNode>
---@field public CopySubNodeIndex integer @subnode index assigned during copy operation to connect nodes again on paste
---@field public bIsReadOnly boolean @if set, all modifications (including delete/cut) are disabled
---@field public bIsSubNode boolean @if set, this node will be always considered as subnode
---@field public ErrorMessage string @error message for node
local UAIGraphNode = {}

