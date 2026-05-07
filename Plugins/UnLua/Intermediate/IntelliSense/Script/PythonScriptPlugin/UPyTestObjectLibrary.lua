---Function library containing methods that should be hoisted onto the test object in Python.
---@class UPyTestObjectLibrary : UBlueprintFunctionLibrary
local UPyTestObjectLibrary = {}

---@param InObj UPyTestObject
---@return boolean
function UPyTestObjectLibrary.IsBoolSet(InObj) end

---@return integer
function UPyTestObjectLibrary.GetOtherConstantValue() end

