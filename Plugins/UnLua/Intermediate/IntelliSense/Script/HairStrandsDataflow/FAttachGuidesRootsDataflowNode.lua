---Attach the guides roots by setting their kinematic weights to 1.0f
---@class FAttachGuidesRootsDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Managed array collection to be used to store datas
---@field public GroupIndex integer @Group index on which the roots will be attached. -1 will attach all the groups
---@field public KinematicWeightsKey FCollectionAttributeKey @Point Kinematic weights key to be used in other nodes if necessary
local FAttachGuidesRootsDataflowNode = {}
