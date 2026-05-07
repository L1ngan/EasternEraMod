---@class UControlRigWorkflowOptions : URigVMUserWorkflowOptions
---@field public Hierarchy URigHierarchy
---@field public Selection TArray<FRigElementKey>
local UControlRigWorkflowOptions = {}

---@return boolean
function UControlRigWorkflowOptions:EnsureAtLeastOneRigElementSelected() end

