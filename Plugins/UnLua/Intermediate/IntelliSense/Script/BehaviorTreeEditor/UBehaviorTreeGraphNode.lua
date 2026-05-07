---@class UBehaviorTreeGraphNode : UAIGraphNode
---@field public Decorators TArray<UBehaviorTreeGraphNode> @only some of behavior tree nodes support decorators
---@field public Services TArray<UBehaviorTreeGraphNode> @only some of behavior tree nodes support services
---@field public bInjectedNode boolean @if set, this node was injected from subtree and shouldn't be edited
local UBehaviorTreeGraphNode = {}

