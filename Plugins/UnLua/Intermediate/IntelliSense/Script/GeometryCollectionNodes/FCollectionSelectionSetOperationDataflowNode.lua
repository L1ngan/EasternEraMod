---Runs boolean operation on selection ( support all selection types )
---@class FCollectionSelectionSetOperationDataflowNode : FDataflowNode
---@field private Operation ESetOperationEnum @Boolean operation
---@field private SelectionA FDataflowSelectionTypes @First Selection object
---@field private SelectionB FDataflowSelectionTypes @Second Selection object
---@field private Selection FDataflowSelectionTypes @Array of the selected bone indices after operation
local FCollectionSelectionSetOperationDataflowNode = {}
