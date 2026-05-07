---@class UObjectForIssue539 : UObject
local UObjectForIssue539 = {}

---@param Dest FVector @[out] 
---@param Obj UObject @[out] 
---@param Radius number @[out] 
---@param bStop boolean @[out] 
function UObjectForIssue539:Test(Dest, Obj, Radius, bStop) end

---return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'
---@return string
function UObjectForIssue539:GetModuleName() end

