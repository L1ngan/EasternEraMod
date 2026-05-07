---Runs boolean operation on VertexSelections
---Deprecated (5.6) : use the generic CollectionSelectionSetOperation node instead
---@class FCollectionVertexSelectionSetOperationDataflowNode : FDataflowNode
---@field public Operation ESetOperationEnum @Boolean operation
---@field public VertexSelectionA FDataflowVertexSelection @Array of the selected vertex indices
---@field public VertexSelectionB FDataflowVertexSelection @Array of the selected vertex indices
---@field public VertexSelection FDataflowVertexSelection @Array of the selected vertex indices after operation
local FCollectionVertexSelectionSetOperationDataflowNode = {}
