---Exposes operations to be performed on anim node contexts
---@class ULinkedAnimGraphLibrary : UBlueprintFunctionLibrary
local ULinkedAnimGraphLibrary = {}

---Returns whether the node hosts an instance (e.g. linked anim graph or layer)
---@param Node FLinkedAnimGraphReference
---@return boolean
function ULinkedAnimGraphLibrary.HasLinkedAnimInstance(Node) end

---Get the linked instance is hosted by this node. If the node does not host an instance then HasLinkedAnimInstance will return false
---@param Node FLinkedAnimGraphReference
---@return UAnimInstance
function ULinkedAnimGraphLibrary.GetLinkedAnimInstance(Node) end

---Get a linked anim graph reference from an anim node reference (pure)
---@param Node FAnimNodeReference
---@param LinkedAnimGraph FLinkedAnimGraphReference @[out] 
---@param Result boolean @[out] 
function ULinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure(Node, LinkedAnimGraph, Result) end

---Get a linked anim graph reference from an anim node reference
---@param Node FAnimNodeReference
---@param Result EAnimNodeReferenceConversionResult @[out] 
---@return FLinkedAnimGraphReference
function ULinkedAnimGraphLibrary.ConvertToLinkedAnimGraph(Node, Result) end

