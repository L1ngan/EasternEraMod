---Computes statistics of a float array
---@class FFloatArrayComputeStatisticsDataflowNode : FDataflowNode
---@field public FloatArray TArray<number> @Array to compute values from
---@field public TransformSelection FDataflowTransformSelection @TransformSelection describes which values to use, if not connected all the elements will be used
---@field public OperationName EStatisticsOperationEnum @Statistics Operation
---@field public Value number @Computed value
---@field public Indices TArray<integer> @Indices of elements with the computed value
local FFloatArrayComputeStatisticsDataflowNode = {}
