---Selects specified bones in the GeometryCollection by using a
---comma separated list, e.g. "0, 2, 5-10, 12-15"
---@class FCollectionTransformSelectionCustomDataflowNode_v2 : FDataflowNode
---@field public Collection FManagedArrayCollection @GeometryCollection for the selection
---@field public BoneIndices string @Comma separated list of single or a range of bone indices to specify the selection, e.g. "0, 2, 5-10, 12-15"
---@field public TransformSelection FDataflowTransformSelection @Array of the selected bone indices
local FCollectionTransformSelectionCustomDataflowNode_v2 = {}
