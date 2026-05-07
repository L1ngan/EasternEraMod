---Flattens selected bones. If no selection is provided, flattens all bones to level 1
---@class FClusterFlattenDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Fractured GeometryCollection to flatten
---@field public OptionalTransformSelection FDataflowTransformSelection @If connected, clusters under the selected bones will be flattened. If no selection is provided, all bones will be flattened to level 1.
local FClusterFlattenDataflowNode = {}
