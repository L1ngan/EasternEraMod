---Does Path Exist decorator node.
---A decorator node that bases its condition on whether a path exists between two points from the Blackboard.
---@class UBTDecorator_DoesPathExist : UBTDecorator
---@field protected BlackboardKeyA FBlackboardKeySelector @blackboard key selector
---@field protected BlackboardKeyB FBlackboardKeySelector @blackboard key selector
---@field public bUseSelf boolean @deprecated, set value of blackboard key A on initialization
---@field public PathQueryType FValueOrBBKey_Enum
---@field public FilterClass FValueOrBBKey_Class @"None" will result in default filter being used
local UBTDecorator_DoesPathExist = {}

