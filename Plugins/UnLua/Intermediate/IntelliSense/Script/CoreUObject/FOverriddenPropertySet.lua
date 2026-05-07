---* Overridable serialization is experimental, not supported and use at your own risk *
---*************************************************************************************
---* Structure holding and tracking overridden properties of an UObject
---@class FOverriddenPropertySet
---@field private Owner UObject
---@field private bWasAdded boolean
---@field private OverriddenPropertyNodes TSet<FOverriddenPropertyNode>
local FOverriddenPropertySet = {}
