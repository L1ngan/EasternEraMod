---* Overridable serialization is experimental, not supported and use at your own risk *
---*************************************************************************************
---* Overridden property information node, there will be one per overriden property/subojects
---@class FOverriddenPropertyNode
---@field public NodeID FOverriddenPropertyNodeID
---@field public Operation EOverriddenPropertyOperation
---@field public SubPropertyNodeKeys TMap<FOverriddenPropertyNodeID, FOverriddenPropertyNodeID>
local FOverriddenPropertyNode = {}
