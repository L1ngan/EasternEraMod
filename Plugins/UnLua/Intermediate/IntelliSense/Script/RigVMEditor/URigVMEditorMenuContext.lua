---@class URigVMEditorMenuContext : UObject
local URigVMEditorMenuContext = {}

---Returns true if either alt key is down
---@return boolean
function URigVMEditorMenuContext:IsAltDown() end

---Get the active rigvm host instance in the viewport
---@return URigVMHost
function URigVMEditorMenuContext:GetRigVMHost() end

---Get the rigvm blueprint that we are editing
---@return URigVMBlueprint
function URigVMEditorMenuContext:GetRigVMBlueprint() end

---Returns context for graph node context menu
---@return FRigVMEditorGraphMenuContext
function URigVMEditorMenuContext:GetGraphMenuContext() end

