---Exposes operations to be performed on a blend space anim node.
---@class UBlendSpaceLibrary : UBlueprintFunctionLibrary
local UBlendSpaceLibrary = {}

---Forces the Position to the specified value
---@param BlendSpace FBlendSpaceReference
---@param NewPosition FVector
function UBlendSpaceLibrary.SnapToPosition(BlendSpace, NewPosition) end

---Get the current position of the blend space.
---@param BlendSpace FBlendSpaceReference
---@return FVector
function UBlendSpaceLibrary.GetPosition(BlendSpace) end

---Get the current sample coordinates after going through the filtering.
---@param BlendSpace FBlendSpaceReference
---@return FVector
function UBlendSpaceLibrary.GetFilteredPosition(BlendSpace) end

---Get a blend space context from an anim node context (pure).
---@param Node FAnimNodeReference
---@param BlendSpace FBlendSpaceReference @[out] 
---@param Result boolean @[out] 
function UBlendSpaceLibrary.ConvertToBlendSpacePure(Node, BlendSpace, Result) end

---Get a blend space context from an anim node context.
---@param Node FAnimNodeReference
---@param Result EAnimNodeReferenceConversionResult @[out] 
---@return FBlendSpaceReference
function UBlendSpaceLibrary.ConvertToBlendSpace(Node, Result) end

