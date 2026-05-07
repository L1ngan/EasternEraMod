---The Enum Node represents a constant enum value for use within the graph.
---@class URigVMEnumNode : URigVMNode
local URigVMEnumNode = {}

---Returns the enum itself
---@return UEnum
function URigVMEnumNode:GetEnum() end

---Returns the C++ data type struct of the parameter (or nullptr)
---@return UObject
function URigVMEnumNode:GetCPPTypeObject() end

---Returns the C++ data type of the parameter
---@return string
function URigVMEnumNode:GetCPPType() end

