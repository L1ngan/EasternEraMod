---Runs boolean operation on TransformSelections
---Deprecated (5.6) : use the generic CollectionSelectionSetOperation node instead
---@class FCollectionTransformSelectionSetOperationDataflowNode : FDataflowNode
---@field public Operation ESetOperationEnum @Boolean operation
---@field public TransformSelectionA FDataflowTransformSelection @Array of the selected bone indices
---@field public TransformSelectionB FDataflowTransformSelection @Array of the selected bone indices
---@field public TransformSelection FDataflowTransformSelection @Array of the selected bone indices after operation
local FCollectionTransformSelectionSetOperationDataflowNode = {}
