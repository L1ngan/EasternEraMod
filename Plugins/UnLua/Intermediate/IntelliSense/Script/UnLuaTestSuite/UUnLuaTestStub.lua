---@class UUnLuaTestStub : UObject
---@field public SimpleEvent MulticastDelegate
---@field public SimpleHandler Delegate
---@field public ComplexHandler Delegate
---@field public Issue304Event MulticastDelegate
---@field public Issue362Delegate Delegate
---@field public Counter integer
---@field public MapForIssue407 TMap<integer, integer>
local UUnLuaTestStub = {}

---@param Array TArray_integer_
---@return integer
function UUnLuaTestStub:TestForIssue407(Array) end

function UUnLuaTestStub:AddCount() end

