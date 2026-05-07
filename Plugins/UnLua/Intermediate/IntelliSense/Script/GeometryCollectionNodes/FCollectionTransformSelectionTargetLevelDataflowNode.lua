---Selects the root bones in the Collection
---@class FCollectionTransformSelectionTargetLevelDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @GeometryCollection for the selection
---@field public TargetLevel integer @Level to select
---@field public bSkipEmbedded boolean @Whether to avoid embedded geometry in the selection (i.e., only select rigid and cluster nodes)
---@field public TransformSelection FDataflowTransformSelection @Array of the selected bone indices
local FCollectionTransformSelectionTargetLevelDataflowNode = {}
