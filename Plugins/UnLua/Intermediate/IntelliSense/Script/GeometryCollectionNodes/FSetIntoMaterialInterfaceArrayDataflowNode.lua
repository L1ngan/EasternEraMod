---Set an element into a material array at a specific index
---(if the index does not match the range of the array, the array will remain unchanged)
---@class FSetIntoMaterialInterfaceArrayDataflowNode : FDataflowNode
---@field private MaterialArray TArray<UMaterialInterface> @Material array to modify
---@field private Material UMaterialInterface @Material to set at the specific index into the array
---@field private Index integer @Index Set the material at (if the index does not match the range of the array, the array will remain unchanged)
local FSetIntoMaterialInterfaceArrayDataflowNode = {}
