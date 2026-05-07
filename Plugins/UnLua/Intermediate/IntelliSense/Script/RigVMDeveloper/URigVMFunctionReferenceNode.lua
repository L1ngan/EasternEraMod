---The Function Reference Node is a library node which references
---a library node from a separate function library graph.
---@class URigVMFunctionReferenceNode : URigVMLibraryNode
---@field private ReferencedFunctionHeader FRigVMGraphFunctionHeader @void SetReferencedFunctionData(FRigVMGraphFunctionData* Data);
---@field private VariableMap TMap<string, string>
local URigVMFunctionReferenceNode = {}

---@return FRigVMGraphFunctionHeader
function URigVMFunctionReferenceNode:GetReferencedFunctionHeader_ForBlueprint() end

