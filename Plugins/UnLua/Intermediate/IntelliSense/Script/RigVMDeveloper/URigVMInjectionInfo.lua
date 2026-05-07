---The Injected Info is used for injecting a node on a pin.
---Injected nodes are not visible to the user, but they are normal
---nodes on the graph.
---@class URigVMInjectionInfo : UObject
---@field public Node URigVMNode
---@field public bInjectedAsInput boolean
---@field public InputPin URigVMPin
---@field public OutputPin URigVMPin
local URigVMInjectionInfo = {}

---Returns the pin of this injected node.
---@return URigVMPin
function URigVMInjectionInfo:GetPin() end

---Returns the graph of this injected node.
---@return URigVMGraph
function URigVMInjectionInfo:GetGraph() end

