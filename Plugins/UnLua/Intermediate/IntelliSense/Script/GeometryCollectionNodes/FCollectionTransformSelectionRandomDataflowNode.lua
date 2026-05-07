---Selects bones randomly in the Collection
---@class FCollectionTransformSelectionRandomDataflowNode : FDataflowNode
---@field public bDeterministic boolean @If true, it always generates the same result for the same RandomSeed
---@field public RandomSeed number @Seed for the random generation, only used if Deterministic is on
---@field public RandomThreshold number @Bones get selected if RandomValue > RandomThreshold
---@field public Collection FManagedArrayCollection @GeometryCollection for the selection
---@field public TransformSelection FDataflowTransformSelection @Array of the selected bone indices
local FCollectionTransformSelectionRandomDataflowNode = {}
