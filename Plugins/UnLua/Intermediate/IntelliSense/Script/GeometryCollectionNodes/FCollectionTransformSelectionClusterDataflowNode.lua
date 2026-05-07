---Selects the clusters in the Collection
---Deprecated : this node had the wrong behavior and select the leaves instead
---                            Replace it by CollectionTransformSelectLeaf or use the second version of CollectionTransformSelectCluster
---@class FCollectionTransformSelectionClusterDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @GeometryCollection for the selection
---@field public TransformSelection FDataflowTransformSelection @Array of the selected bone indices
local FCollectionTransformSelectionClusterDataflowNode = {}
