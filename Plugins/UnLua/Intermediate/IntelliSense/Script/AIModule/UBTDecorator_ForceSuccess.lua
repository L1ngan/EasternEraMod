---Change node result to Success
---useful for creating optional branches in sequence
---Forcing failed result was not implemented, because it doesn't make sense in both basic composites:
---- sequence = child nodes behind it will be never run
---- selector = would allow executing multiple nodes, turning it into a sequence...
---@class UBTDecorator_ForceSuccess : UBTDecorator
local UBTDecorator_ForceSuccess = {}

