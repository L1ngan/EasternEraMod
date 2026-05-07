---This class along with UPyTestStructDelegate verify that 2 UObjects with the same delegate name/type, do not collide.
---@class UPyTestVectorDelegate : UObject
---@field public OnNameCollisionTestDelegate MulticastDelegate @Called when a new item is selected in the combobox.
local UPyTestVectorDelegate = {}

---@param Vec FVector2D
function UPyTestVectorDelegate:OnNameCollisionDelegate__DelegateSignature(Vec) end

