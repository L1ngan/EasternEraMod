---The Array Node represents one of a series available
---array operations such as SetNum, GetAtIndex etc.
---@class UDEPRECATED_RigVMArrayNode : URigVMTemplateNode
---@field private OpCode ERigVMOpCode
local UDEPRECATED_RigVMArrayNode = {}

---Returns the op code of this node
---@return ERigVMOpCode
function UDEPRECATED_RigVMArrayNode:GetOpCode() end

---Returns the C++ data type struct of the array (or nullptr)
---@return UObject
function UDEPRECATED_RigVMArrayNode:GetCPPTypeObject() end

---Returns the C++ data type of the element
---@return string
function UDEPRECATED_RigVMArrayNode:GetCPPType() end

