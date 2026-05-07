---@class UAnimGraphNode_BlendSpaceGraphBase : UAnimGraphNode_Base
---@field protected BlendSpace UBlendSpace @Internal blendspace
---@field protected BlendSpaceClass TSubclassOf<UBlendSpace> @Blendspace class, for template nodes
---@field protected BlendSpaceGraph UBlendSpaceGraph @Dummy blendspace graph (used for navigation only)
---@field protected Graphs TArray<UEdGraph> @Linked animation graphs for sample points
local UAnimGraphNode_BlendSpaceGraphBase = {}

