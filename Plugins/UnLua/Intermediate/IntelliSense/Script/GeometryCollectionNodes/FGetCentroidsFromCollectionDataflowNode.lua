---Gets centroids of pieces from a Collection
---@class FGetCentroidsFromCollectionDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Input Collection
---@field public TransformSelection FDataflowTransformSelection @The centroids will be output for the bones selected in the TransformSelection
---@field public Centroids TArray<FVector> @Output centroids
local FGetCentroidsFromCollectionDataflowNode = {}
