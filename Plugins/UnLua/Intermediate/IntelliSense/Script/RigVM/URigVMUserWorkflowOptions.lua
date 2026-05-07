---@class URigVMUserWorkflowOptions : UObject
---@field protected Subject UObject
---@field protected Workflow FRigVMUserWorkflow
local URigVMUserWorkflowOptions = {}

---@return boolean
function URigVMUserWorkflowOptions:RequiresDialog() end

---@param InMessage string
function URigVMUserWorkflowOptions:ReportWarning(InMessage) end

---@param InMessage string
function URigVMUserWorkflowOptions:ReportInfo(InMessage) end

---@param InMessage string
function URigVMUserWorkflowOptions:ReportError(InMessage) end

---@return boolean
function URigVMUserWorkflowOptions:IsValid() end

