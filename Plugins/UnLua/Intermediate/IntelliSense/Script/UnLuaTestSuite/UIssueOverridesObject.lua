---@class UIssueOverridesObject : UObject
local UIssueOverridesObject = {}

---@return integer
function UIssueOverridesObject:GetConfig() end

---@return integer
function UIssueOverridesObject:CollectInfo() end

---return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'
---@return string
function UIssueOverridesObject:GetModuleName() end

