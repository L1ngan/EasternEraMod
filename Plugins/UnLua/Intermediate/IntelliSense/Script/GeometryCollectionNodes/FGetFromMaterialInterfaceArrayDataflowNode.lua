---Get an element from a material array
---(if the index does not match the range of the array, null is returned)
---DEPRECATED 5.6 - use the generic GetArrayElement node instead
---@class FGetFromMaterialInterfaceArrayDataflowNode : FDataflowNode
---@field private MaterialArray TArray<UMaterialInterface> @Material array to get the material from
---@field private Material UMaterialInterface @Material at the requested index ( may be null if index does not match the array range )
---@field private Index integer @Index in the array to get the material from. Invalid index will return null material
local FGetFromMaterialInterfaceArrayDataflowNode = {}
