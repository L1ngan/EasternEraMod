---Root node of an animation tree (sink)
---@class FAnimNode_Root : FAnimNode_Base
---@field public Result FPoseLink
---@field protected Name string @The name of this root node, used to identify the output of this graph. Filled in by the compiler, propagated from the parent graph.
---@field protected LayerGroup string @The group of this root node, used to group this output with others when used in a layer.
local FAnimNode_Root = {}
