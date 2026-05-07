---Get vertices from a collection as a point cloud
---@class FCollectionToPointsDataflowNode : FDataflowNode
---@field private Collection FManagedArrayCollection @Collection storing the points
---@field private Points TArray<FVector> @Points from the collection
local FCollectionToPointsDataflowNode = {}
