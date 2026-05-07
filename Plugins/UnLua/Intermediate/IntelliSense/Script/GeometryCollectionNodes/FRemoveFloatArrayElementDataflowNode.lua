---Removes the specified element from an array
---@class FRemoveFloatArrayElementDataflowNode : FDataflowNode
---@field public Index integer @Element index
---@field public bPreserveOrder boolean @Preserve order, if order not important set it to false for faster computation
---@field public FloatArray TArray<number> @Array to remove the element from
local FRemoveFloatArrayElementDataflowNode = {}
