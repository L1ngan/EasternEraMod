---Gets BoundingBoxes of pieces from a Collection
---@class FGetBoundingBoxesFromCollectionDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Input Collection
---@field public TransformSelection FDataflowTransformSelection @The BoundingBoxes will be output for the bones selected in the TransformSelection
---@field public BoundingBoxes TArray<FBox> @Output BoundingBoxes
local FGetBoundingBoxesFromCollectionDataflowNode = {}
