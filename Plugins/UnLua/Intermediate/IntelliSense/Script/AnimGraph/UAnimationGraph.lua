---@class UAnimationGraph : UEdGraph
---@field public BlendOptions FAnimGraphBlendOptions @Blending options for animation graphs in Linked Animation Blueprints.
local UAnimationGraph = {}

---Returns contained graph nodes of the specified (or child) class
---@param NodeClass TSubclassOf_UAnimGraphNode_Base_
---@param GraphNodes TArray_UAnimGraphNode_Base_ @[out] 
---@param bIncludeChildClasses boolean @[opt] 
function UAnimationGraph:GetGraphNodesOfClass(NodeClass, GraphNodes, bIncludeChildClasses) end

