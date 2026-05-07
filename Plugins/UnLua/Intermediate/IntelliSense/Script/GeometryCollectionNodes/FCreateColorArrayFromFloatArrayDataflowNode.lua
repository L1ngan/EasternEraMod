---Set the vertex color on the collection based on the normalized float array.
---@class FCreateColorArrayFromFloatArrayDataflowNode : FDataflowNode
---@field public FloatArray TArray<number> @Float array to use as a scalar for the color
---@field public ColorArray TArray<FLinearColor> @Color array output
---@field public bNormalizeInput boolean @Enable normalization of input array
---@field public Color FLinearColor @Base color for the normalized float array
local FCreateColorArrayFromFloatArrayDataflowNode = {}
