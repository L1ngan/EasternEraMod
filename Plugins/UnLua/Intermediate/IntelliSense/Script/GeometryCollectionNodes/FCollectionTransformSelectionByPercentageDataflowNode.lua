---Outputs the specified percentage of the selected bones
---@class FCollectionTransformSelectionByPercentageDataflowNode : FDataflowNode
---@field public TransformSelection FDataflowTransformSelection @Array of the selected bone indices
---@field public Percentage integer @Percentage to keep from the original selection
---@field public bDeterministic boolean @Sets the random generation to deterministic
---@field public RandomSeed number @Seed value for the random generation
local FCollectionTransformSelectionByPercentageDataflowNode = {}
