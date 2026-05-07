---Deletes selected bones from Collection. Empty clusters will be eliminated
---@class FPruneInCollectionDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Fractured GeometryCollection to prune
---@field public TransformSelection FDataflowTransformSelection @Transform selection for pruning
local FPruneInCollectionDataflowNode = {}
