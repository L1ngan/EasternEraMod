---@class UTestTypedElementInterfaceA_ImplTyped : UObject
local UTestTypedElementInterfaceA_ImplTyped = {}

---@param InElementHandle FScriptTypedElementHandle
---@param InNewName string
---@param bNotify boolean @[opt] 
---@return boolean
function UTestTypedElementInterfaceA_ImplTyped:SetDisplayName(InElementHandle, InNewName, bNotify) end

---@param InElementHandle FScriptTypedElementHandle
---@return string
function UTestTypedElementInterfaceA_ImplTyped:GetDisplayName(InElementHandle) end

