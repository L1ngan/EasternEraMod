---Object to test deprecation of Python wrapped types.
---@class UDEPRECATED_LegacyPyTestObject : UPyTestObject
local UDEPRECATED_LegacyPyTestObject = {}

---@param InValue integer
---@return integer
function UDEPRECATED_LegacyPyTestObject:FuncInterfaceChild(InValue) end

---@param InValue integer
---@return integer
function UDEPRECATED_LegacyPyTestObject:FuncInterfaceOther(InValue) end

