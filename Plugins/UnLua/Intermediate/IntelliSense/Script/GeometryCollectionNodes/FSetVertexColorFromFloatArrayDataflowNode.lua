---Set the vertex color on the collection based on the normalized float array.
---@class FSetVertexColorFromFloatArrayDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Collection Passthrough
---@field public FloatArray TArray<number> @Float array to use as a scalar for the color
---@field public bNormalizeInput boolean @Enable normalization of input array
---@field public Color FLinearColor @Base color for the normalized float array
local FSetVertexColorFromFloatArrayDataflowNode = {}
