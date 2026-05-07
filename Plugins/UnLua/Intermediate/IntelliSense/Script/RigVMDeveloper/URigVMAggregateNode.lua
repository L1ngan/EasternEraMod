---The Aggregate Node contains a subgraph of nodes with aggregate pins (2in+1out or 1out+2in) connected
---to each other. For example, a unit node IntAdd which adds 2 integers and provides Result=A+B could have
---A, B and Result as aggregates in order to add additional input pins to construct an Aggregate Node that computes
---Result=A+B+C.
---@class URigVMAggregateNode : URigVMCollapseNode
local URigVMAggregateNode = {}

