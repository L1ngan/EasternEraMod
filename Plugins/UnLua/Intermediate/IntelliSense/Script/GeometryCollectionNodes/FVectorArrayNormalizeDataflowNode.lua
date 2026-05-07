---Normalize all the selected vectors in a VectorArray
---@class FVectorArrayNormalizeDataflowNode : FDataflowNode
---@field public InVectorArray TArray<FVector> @Input VectorArray
---@field public Selection FDataflowVertexSelection @Selection for the operation
---@field public Magnitude number
---@field public OutVectorArray TArray<FVector>
local FVectorArrayNormalizeDataflowNode = {}
