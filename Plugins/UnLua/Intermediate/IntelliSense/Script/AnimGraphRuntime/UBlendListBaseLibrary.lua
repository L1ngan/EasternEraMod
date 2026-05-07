---Exposes operations to be performed on anim state machine node contexts
---@class UBlendListBaseLibrary : UBlueprintFunctionLibrary
local UBlendListBaseLibrary = {}

---Reset target blend list node to that the next blend is executed from a blank state
---@param BlendListBase FBlendListBaseReference
function UBlendListBaseLibrary.ResetNode(BlendListBase) end

---Get a blend list base context from an anim node context.
---@param Node FAnimNodeReference
---@param Result EAnimNodeReferenceConversionResult @[out] 
---@return FBlendListBaseReference
function UBlendListBaseLibrary.ConvertToBlendListBase(Node, Result) end

