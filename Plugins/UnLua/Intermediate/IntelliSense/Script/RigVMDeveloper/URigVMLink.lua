---The Link represents a connection between two Pins
---within a Graph. The Link can be accessed on the
---Graph itself - or through the URigVMPin::GetLinks()
---method.
---@class URigVMLink : UObject
---@field private SourcePinPath string
---@field private TargetPinPath string
local URigVMLink = {}

---Returns the target Pin of this Link (or nullptr)
---@return URigVMPin
function URigVMLink:GetTargetPin() end

---Returns the target Node of this Link (or nullptr)
---@return URigVMNode
function URigVMLink:GetTargetNode() end

---Returns the source Pin of this Link (or nullptr)
---@return URigVMPin
function URigVMLink:GetSourcePin() end

---Returns the source Node of this Link (or nullptr)
---@return URigVMNode
function URigVMLink:GetSourceNode() end

---Returns a string representation of the Link,
---for example: "NodeA.Color.R -> NodeB.Translation.X"
---note: can be split again using SplitPinPathRepresentation
---@return string
function URigVMLink:GetPinPathRepresentation() end

---Returns the opposite Pin of this Link given one of its edges (or nullptr)
---@param InPin URigVMPin
---@return URigVMPin
function URigVMLink:GetOppositePin(InPin) end

---Returns the current index of this Link within its owning Graph.
---@return integer
function URigVMLink:GetLinkIndex() end

---Returns the graph nesting depth of this link
---@return integer
function URigVMLink:GetGraphDepth() end

---Returns the Link's owning Graph/
---@return URigVMGraph
function URigVMLink:GetGraph() end

