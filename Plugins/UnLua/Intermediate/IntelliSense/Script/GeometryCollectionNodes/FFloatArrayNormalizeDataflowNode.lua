---Normalize the selected float data in a FloatArray
---@class FFloatArrayNormalizeDataflowNode : FDataflowNode
---@field public InFloatArray TArray<number> @Input VectorArray
---@field public Selection FDataflowVertexSelection @Selection for the operation
---@field public MinRange number
---@field public MaxRange number
---@field public OutFloatArray TArray<number>
local FFloatArrayNormalizeDataflowNode = {}
