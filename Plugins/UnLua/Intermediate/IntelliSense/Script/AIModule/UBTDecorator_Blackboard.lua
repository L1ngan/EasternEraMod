---Blackboard decorator node.
---A decorator node that bases its condition on a Blackboard key.
---@class UBTDecorator_Blackboard : UBTDecorator_BlackboardBase
---@field protected IntValue integer @value for arithmetic operations
---@field protected FloatValue number @value for arithmetic operations
---@field protected StringValue string @value for string operations
---@field protected CachedDescription string @cached description
---@field protected OperationType integer @operation type
---@field protected NotifyObserver integer @when observer can try to request abort?
---@field protected BasicOperation integer
---@field protected ArithmeticOperation integer
---@field protected TextOperation integer
local UBTDecorator_Blackboard = {}

