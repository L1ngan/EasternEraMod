---Time Limit decorator node.
---A decorator node that bases its condition on whether a timer has exceeded a specified value. The timer is reset each time the node becomes relevant.
---@class UBTDecorator_TimeLimit : UBTDecorator
---@field public TimeLimit FValueOrBBKey_Float @max allowed time for execution of underlying node
local UBTDecorator_TimeLimit = {}

