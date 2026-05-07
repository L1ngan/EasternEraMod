---@class UBehaviorTreeGraphNode_CompositeDecorator : UBehaviorTreeGraphNode
---@field public BoundGraph UEdGraph @The logic graph for this decorator (returning a boolean)
---@field public CompositeName string
---@field public bShowOperations boolean @if set, all logic operations will be shown in description
---@field public bCanAbortFlow boolean @updated with internal graph changes, set when decorators inside can abort flow
---@field protected ParentNodeInstance UBTCompositeNode
---@field protected CachedDescription string
local UBehaviorTreeGraphNode_CompositeDecorator = {}

