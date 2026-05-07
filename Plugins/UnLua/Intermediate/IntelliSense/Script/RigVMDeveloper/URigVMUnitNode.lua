---The Struct Node represents a Function Invocation of a RIGVM_METHOD
---declared on a USTRUCT. Struct Nodes have input / output pins for all
---struct UPROPERTY members.
---@class URigVMUnitNode : URigVMTemplateNode
local URigVMUnitNode = {}

---Returns the default value for the struct as text
---@return string
function URigVMUnitNode:GetStructDefaultValue() end

---Returns the name of the declared RIGVM_METHOD
---@return string
function URigVMUnitNode:GetMethodName() end

