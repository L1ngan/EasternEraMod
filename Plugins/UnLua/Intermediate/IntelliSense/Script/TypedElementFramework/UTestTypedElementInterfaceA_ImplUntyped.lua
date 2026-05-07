---Test untyped
---@class UTestTypedElementInterfaceA_ImplUntyped : UObject
local UTestTypedElementInterfaceA_ImplUntyped = {}

---@param InElementHandle FScriptTypedElementHandle
---@param InNewName string
---@param bNotify boolean @[opt] 
---@return boolean
function UTestTypedElementInterfaceA_ImplUntyped:SetDisplayName(InElementHandle, InNewName, bNotify) end

---@param InElementHandle FScriptTypedElementHandle
---@return string
function UTestTypedElementInterfaceA_ImplUntyped:GetDisplayName(InElementHandle) end

