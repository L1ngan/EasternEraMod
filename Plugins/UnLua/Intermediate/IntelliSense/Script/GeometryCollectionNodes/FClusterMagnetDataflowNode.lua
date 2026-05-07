---Cluster by grouping the selected bones with their adjacent, neighboring bones.
---@class FClusterMagnetDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Collection on which to merge bones into a cluster
---@field public TransformSelection FDataflowTransformSelection @Bone selection
---@field public Iterations integer @How many layers of neighbors to include in the clusters -- i.e. if 1, only direct neighbors are clustered; if 2, neighbors of neighbors are included, etc.
local FClusterMagnetDataflowNode = {}
