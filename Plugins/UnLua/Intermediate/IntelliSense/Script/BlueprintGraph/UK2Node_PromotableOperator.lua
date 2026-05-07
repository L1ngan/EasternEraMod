---The promotable operator node allows for pin types to be promoted to others, i.e. float to double
---@class UK2Node_PromotableOperator : UK2Node_CallFunction
---@field private OperationName string @The name that this operation uses ("Add", "Multiply", etc)
---@field private NumAdditionalInputs integer @The current number of additional pins on this node
local UK2Node_PromotableOperator = {}

