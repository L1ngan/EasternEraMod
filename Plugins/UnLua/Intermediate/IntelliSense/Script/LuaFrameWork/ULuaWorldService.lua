---@class ULuaWorldService : UWorldSubsystem
local ULuaWorldService = {}

function ULuaWorldService:LuaPostInitialize() end

function ULuaWorldService:LuaOnWorldBeginPlay() end

function ULuaWorldService:LuaInitialize() end

function ULuaWorldService:LuaDeinitialize() end

---@param Path string
---@param Pos FVector
---@param Rotator FRotator
---@return ULevelStreamingDynamic
function ULuaWorldService:LoadLevelByPath(Path, Pos, Rotator) end

---@param Path string
---@return UUserWidget
function ULuaWorldService:GetWidgetByPath(Path) end

---return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'
---@return string
function ULuaWorldService:GetModuleName() end

