---@class UBehaviorTreeGraph : UAIGraph
---@field public ModCounter integer @increased with every graph rebuild, used to refresh data from subtrees
---@field public bIsUsingModCounter boolean
---@field public RootNodeClass TSubclassOf<UBehaviorTreeGraphNode_Root>
local UBehaviorTreeGraph = {}

