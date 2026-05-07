---Test to two implementation in one object
---@class UTestTypedElementInterfaceBAndC_Typed : UObject
local UTestTypedElementInterfaceBAndC_Typed = {}

---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UTestTypedElementInterfaceBAndC_Typed:MarkAsTested(InElementHandle) end

---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UTestTypedElementInterfaceBAndC_Typed:GetIsTested(InElementHandle) end

