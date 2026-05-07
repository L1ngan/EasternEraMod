---The Parameter Node represents an input or output argument / parameter
---of the Function / Graph. Parameter Node have only a single value pin.
---@class URigVMParameterNode : URigVMNode
local URigVMParameterNode = {}

---Returns true if this node is an input
---@return boolean
function URigVMParameterNode:IsInput() end

---Returns the name of the parameter
---@return string
function URigVMParameterNode:GetParameterName() end

---Returns this parameter node's parameter description
---@return FRigVMGraphParameterDescription
function URigVMParameterNode:GetParameterDescription() end

---Returns the default value of the parameter as a string
---@return string
function URigVMParameterNode:GetDefaultValue() end

---Returns the C++ data type struct of the parameter (or nullptr)
---@return UObject
function URigVMParameterNode:GetCPPTypeObject() end

---Returns the C++ data type of the parameter
---@return string
function URigVMParameterNode:GetCPPType() end

