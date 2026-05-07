---Object to allow testing of inheritance on Python wrapped types.
---@class UPyTestChildObject : UPyTestObject
local UPyTestChildObject = {}

---@param InValue integer
---@return integer
function UPyTestChildObject:FuncInterfaceChild(InValue) end

---@param InValue integer
---@return integer
function UPyTestChildObject:FuncInterfaceOther(InValue) end

