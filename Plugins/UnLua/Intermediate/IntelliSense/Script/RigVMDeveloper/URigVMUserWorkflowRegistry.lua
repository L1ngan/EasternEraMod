---@class URigVMUserWorkflowRegistry : UObject
local URigVMUserWorkflowRegistry = {}

---@param InHandle integer
function URigVMUserWorkflowRegistry:UnregisterProvider(InHandle) end

---@param InStruct UScriptStruct
---@param InProvider Delegate
---@return integer
function URigVMUserWorkflowRegistry:RegisterProvider(InStruct, InProvider) end

---@param InType ERigVMUserWorkflowType
---@param InStruct UScriptStruct
---@param InSubject UObject
---@return TArray_FRigVMUserWorkflow_
function URigVMUserWorkflowRegistry:GetWorkflows(InType, InStruct, InSubject) end

---@return URigVMUserWorkflowRegistry
function URigVMUserWorkflowRegistry.Get() end

