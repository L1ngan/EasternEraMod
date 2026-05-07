---Selects bones if their Vertices/BoundingBox/Centroid in a box
---@class FCollectionTransformSelectionInBoxDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @GeometryCollection for the selection
---@field public Box FBox @Box to contain Vertices/BoundingBox/Centroid
---@field public Transform FTransform @Transform for the box
---@field public Type ESelectSubjectTypeEnum @Subject (Vertices/BoundingBox/Centroid) to check against box
---@field public bAllVerticesMustContainedInBox boolean @If true all the vertices of the piece must be inside of box
---@field public TransformSelection FDataflowTransformSelection @Array of the selected bone indices
local FCollectionTransformSelectionInBoxDataflowNode = {}
