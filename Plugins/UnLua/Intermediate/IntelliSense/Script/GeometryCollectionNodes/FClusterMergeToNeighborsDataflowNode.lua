---Merge selected bones to their neighbors
---@class FClusterMergeToNeighborsDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Collection on which to merge bones into a neighboring cluster
---@field public TransformSelection FDataflowTransformSelection @Bone selection
---@field public NeighborSelectionMethod EClusterNeighborSelectionMethodEnum @Method to choose which neighbor to merge
---@field public MinVolumeCubeRoot number @Size (cube root of volume) of minimum desired post-merge clusters; if > 0, selected clusters may be merged multiple times until the cluster size is above this value
---@field public bOnlyToConnected boolean @Whether to only allow clusters to merge if their bones are connected in the proximity graph
---@field public bOnlySameParent boolean @Whether to only allow clusters to merge if they have the same parent bone
local FClusterMergeToNeighborsDataflowNode = {}
