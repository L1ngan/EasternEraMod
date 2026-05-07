---@class UTestTypedElementInterfaceA : UInterface
local UTestTypedElementInterfaceA = {}

---@param InElementHandle FScriptTypedElementHandle
---@param InNewName string
---@param bNotify boolean @[opt] 
---@return boolean
function UTestTypedElementInterfaceA:SetDisplayName(InElementHandle, InNewName, bNotify) end

---@param InElementHandle FScriptTypedElementHandle
---@return string
function UTestTypedElementInterfaceA:GetDisplayName(InElementHandle) end

