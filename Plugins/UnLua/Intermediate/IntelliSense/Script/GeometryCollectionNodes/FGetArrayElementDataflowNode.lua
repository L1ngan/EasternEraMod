---Returns the specified element from an array
---DEPRECATED 5.6 - use the generic GetArrayElement node instead
---@class FGetArrayElementDataflowNode : FDataflowNode
---@field public Index integer @Element index
---@field public Points TArray<FVector> @Array to get the element from
---@field public Point FVector @Specified element
local FGetArrayElementDataflowNode = {}
