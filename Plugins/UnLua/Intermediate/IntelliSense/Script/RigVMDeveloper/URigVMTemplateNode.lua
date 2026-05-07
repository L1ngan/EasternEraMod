---The Template Node represents an unresolved function.
---Template nodes can morph into all functions implementing
---the template's template.
---@class URigVMTemplateNode : URigVMNode
---@field protected TemplateNotation string
---@field protected ResolvedFunctionName string
local URigVMTemplateNode = {}

---@return boolean
function URigVMTemplateNode:IsSingleton() end

---returns true if the template node is resolved
---@return boolean
function URigVMTemplateNode:IsResolved() end

---returns true if the template is fully unresolved
---@return boolean
function URigVMTemplateNode:IsFullyUnresolved() end

---Returns the UStruct for this unit node
---(the struct declaring the RIGVM_METHOD)
---@return UScriptStruct
function URigVMTemplateNode:GetScriptStruct() end

---Returns the notation of the node
---@return string
function URigVMTemplateNode:GetNotation() end

