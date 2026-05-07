---This class along with UPyTestVectorDelegate verify that 2 UObjects with the same delegate name/type, do not collide.
---@class UPyTestStructDelegate : UObject
---@field public OnNameCollisionTestDelegate MulticastDelegate @Called when a new item is selected in the combobox.
local UPyTestStructDelegate = {}

---@param PyStruct FPyTestStruct
function UPyTestStructDelegate:OnNameCollisionDelegate__DelegateSignature(PyStruct) end

