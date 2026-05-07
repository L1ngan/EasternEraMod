---@class UBTCompositeNode : UBTNode
---@field public Children TArray<FBTCompositeChild> @child nodes
---@field public Services TArray<UBTService> @service nodes
---@field protected bApplyDecoratorScope boolean @if set, all decorators in branch below will be removed when execution flow leaves (decorators on this node are not affected)
local UBTCompositeNode = {}

