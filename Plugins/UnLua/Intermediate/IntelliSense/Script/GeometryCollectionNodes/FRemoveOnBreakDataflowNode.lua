---@class FRemoveOnBreakDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Collection to set theremoval data on
---@field public TransformSelection FDataflowTransformSelection @selection to apply the data on ( if not specified the entire collection will be set )
---@field public bEnabledRemoval boolean @Whether or not to enable the removal on the selection
---@field public PostBreakTimer FVector2f @How long after the break the removal will start ( Min / Max )
---@field public RemovalTimer FVector2f @How long removal will last ( Min / Max )
---@field public bClusterCrumbling boolean @If applied to a cluster this will cause the cluster to crumble upon removal, otherwise will have no effect
local FRemoveOnBreakDataflowNode = {}
