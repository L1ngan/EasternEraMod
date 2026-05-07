---The Function Library is a graph used only to store
---the sub graphs used for functions.
---@class URigVMFunctionLibrary : URigVMGraph
---@field private PublicFunctionNames TArray<string>
---@field private FunctionToVariant TMap<string, FRigVMVariant>
---@field private LocalizedFunctions TMap<string, URigVMLibraryNode> @A map which stores a library node per original pathname. The source pathname is the full path of the source function that was localized to the local copy stored in the value of the pair.
local URigVMFunctionLibrary = {}

---Returns all references for a given function name
---@param InFunctionName string
---@return TArray_TSoftObjectPtr_URigVMFunctionReferenceNode__
function URigVMFunctionLibrary:GetReferencesForFunction(InFunctionName) end

---Returns all references for a given function name
---@param InFunctionName string
---@return TArray_string_
function URigVMFunctionLibrary:GetReferencePathsForFunction(InFunctionName) end

---Returns all of the stored functions
---@return TArray_URigVMLibraryNode_
function URigVMFunctionLibrary:GetFunctions() end

---Finds a function by a node within a function (or a sub graph of that)
---@param InNode URigVMNode
---@return URigVMLibraryNode
function URigVMFunctionLibrary:FindFunctionForNode(InNode) end

---Finds a function by name
---@param InFunctionName string
---@return URigVMLibraryNode
function URigVMFunctionLibrary:FindFunction(InFunctionName) end

