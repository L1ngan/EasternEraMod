---The Library Node represents a function invocation of a
---function specified somewhere else. The function can be
---expressed as a sub-graph (RigVMGroupNode) or as a
---referenced function (RigVMFunctionNode).
---@class URigVMLibraryNode : URigVMTemplateNode
local URigVMLibraryNode = {}

---@return TArray_FRigVMVariantRef_
function URigVMLibraryNode:GetMatchingVariants() end

---@return URigVMFunctionLibrary
function URigVMLibraryNode:GetLibrary() end

---@return FRigVMVariantRef
function URigVMLibraryNode:GetFunctionVariantRef() end

---@return FRigVMVariant
function URigVMLibraryNode:GetFunctionVariant() end

---@return URigVMGraph
function URigVMLibraryNode:GetContainedGraph() end

