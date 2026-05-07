---@class ULuaGameInstanceService : UGameInstanceSubsystem
local ULuaGameInstanceService = {}

function ULuaGameInstanceService:LuaInitialize() end

function ULuaGameInstanceService:LuaDeinitialize() end

---return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'
---@return string
function ULuaGameInstanceService:GetModuleName() end

