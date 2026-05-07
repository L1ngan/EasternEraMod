---The Variable Node represents a mutable value / local state within the
---the Function / Graph. Variable Node's can be a getter or a setter.
---Getters are pure nodes with just an output value pin, while setters
---are mutable nodes with an execute and input value pin.
---@class URigVMVariableNode : URigVMNode
local URigVMVariableNode = {}

---Returns true if this variable is a local variable
---@return boolean
function URigVMVariableNode:IsLocalVariable() end

---Returns true if this variable is an input argument
---@return boolean
function URigVMVariableNode:IsInputArgument() end

---Returns true if this node is a variable getter
---@return boolean
function URigVMVariableNode:IsGetter() end

---Returns true if this variable is an external variable
---@return boolean
function URigVMVariableNode:IsExternalVariable() end

---Returns the name of the variable
---@return string
function URigVMVariableNode:GetVariableName() end

---Returns this variable node's variable description
---@return FRigVMGraphVariableDescription
function URigVMVariableNode:GetVariableDescription() end

---Returns the default value of the variable as a string
---@return string
function URigVMVariableNode:GetDefaultValue() end

---Returns the C++ data type struct of the variable (or nullptr)
---@return UObject
function URigVMVariableNode:GetCPPTypeObject() end

---Returns the C++ data type of the variable
---@return string
function URigVMVariableNode:GetCPPType() end

