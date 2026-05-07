---@class BFL_Issue346_C : UBlueprintFunctionLibrary
local BFL_Issue346_C = {}

---return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'
---@return string
---@param __WorldContext UObject
function BFL_Issue346_C:GetModuleName(__WorldContext) end

---@param Value string
---@param __WorldContext UObject
---@param Result string @[out] 
function BFL_Issue346_C.Test(Value, __WorldContext, Result) end

