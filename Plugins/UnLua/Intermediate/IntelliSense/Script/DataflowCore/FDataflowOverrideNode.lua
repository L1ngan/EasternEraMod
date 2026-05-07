---FDataflowOverrideNode
---             Base class for override nodes within the Dataflow graph.
---             Override Nodes allow to access to Override property on
---             the asset. They can read the values by the key.
---@class FDataflowOverrideNode : FDataflowNode
---@field public Key string
---@field public Default string
---@field public IsOverriden boolean
local FDataflowOverrideNode = {}
