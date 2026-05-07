---FDataflowTerminalNode
---             Base class for terminal nodes within the Dataflow graph.
---             Terminal Nodes allow for non-const access to UObjects as
---      edges in the graph. They are used to push data out to
---      asset or the world from the calling client. Terminals
---      may not have outputs, they are only leaf nodes in the
---      evaluation graph.
---@class FDataflowTerminalNode : FDataflowNode
local FDataflowTerminalNode = {}
