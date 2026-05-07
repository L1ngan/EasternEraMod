---Selects the contact(s) of the selected bones
---@class FCollectionTransformSelectionContactDataflowNode : FDataflowNode
---@field public TransformSelection FDataflowTransformSelection @Array of the selected bone indices
---@field public Collection FManagedArrayCollection @GeometryCollection for the selection
---@field public bAllowContactInParentLevels boolean @Whether to allow contact with bones that are in a parent level
local FCollectionTransformSelectionContactDataflowNode = {}
