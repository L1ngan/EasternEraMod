---Selects specified bones in the GeometryCollection by using a
---space separated list, e.g. "0 1 2 12 23"
---@class FCollectionTransformSelectionCustomDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @GeometryCollection for the selection
---@field public BoneIndicies string @Space separated list of bone indices to specify the selection, e.g. "0 1 2 3 23 34"
---@field public TransformSelection FDataflowTransformSelection @Array of the selected bone indices
local FCollectionTransformSelectionCustomDataflowNode = {}
