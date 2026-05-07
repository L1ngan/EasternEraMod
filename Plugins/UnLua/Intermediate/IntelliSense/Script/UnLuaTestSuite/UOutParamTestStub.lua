---@class UOutParamTestStub : UObject
local UOutParamTestStub = {}

---@param Dest FVector @[out] 
---@param Obj UObject @[out] 
---@param Radius number @[out] 
---@param bStop boolean @[out] 
function UOutParamTestStub:ReturnPartial(Dest, Obj, Radius, bStop) end

---@param Dest FVector @[out] 
---@param Obj UObject @[out] 
---@param Radius number @[out] 
---@param bStop boolean @[out] 
function UOutParamTestStub:ReturnFull(Dest, Obj, Radius, bStop) end

---return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'
---@return string
function UOutParamTestStub:GetModuleName() end

