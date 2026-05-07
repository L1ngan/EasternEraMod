---Custom output node to write out physical material weights.
---This can be used to generate the dominant physical material for each point on a landscape.
---Note that the use of a material output node to generate this information is optional and when a node of this type is not present we fall back on a CPU path which analyzes landscape layer data.
---@class UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput
---@field public Inputs TArray<FPhysicalMaterialInput> @Array of physical material inputs.
local UMaterialExpressionLandscapePhysicalMaterialOutput = {}

