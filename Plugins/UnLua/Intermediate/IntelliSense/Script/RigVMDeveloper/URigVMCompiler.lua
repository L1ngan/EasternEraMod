---@class URigVMCompiler : UObject
local URigVMCompiler = {}

---@param InGraphs TArray_URigVMGraph_
---@param InController URigVMController
---@param OutVM URigVM
---@param Context FRigVMExtendedExecuteContext @[out] 
---@return boolean
function URigVMCompiler:CompileVM(InGraphs, InController, OutVM, Context) end

---@param InGraphs TArray_URigVMGraph_
---@param InController URigVMController
---@param OutVM URigVM
---@return boolean
function URigVMCompiler:Compile(InGraphs, InController, OutVM) end

