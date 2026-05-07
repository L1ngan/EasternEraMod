---@class UUnLuaEditorSettings : UObject
---@field public HotReloadMode EHotReloadMode @Pick a method for lua hot-reload.
---@field public bGenerateIntelliSense boolean @Whether or not generate intellisense files for lua.
---@field public bAutoStartup boolean @Whether or not startup UnLua module on game start. (Requires restart to take effect)
---@field public bEnableDebug boolean @Enable UnLua debug routine codes. (Requires restart to take effect)
---@field public bEnableUnrealInsights boolean @Enable Unreal Insights to profile call performance. (Requires restart to take effect)
---@field public bEnablePersistentParamBuffer boolean @Enable persistent buffer for UFunction's parameters. (Requires restart to take effect)
---@field public bEnableTypeChecking boolean @Enable type checking at lua runtime. (Requires restart to take effect)
---@field public bEnableCallOverriddenFunction boolean @Enable 'Overridden' support at lua runtime. (Requires restart to take effect)
---@field public bEnableFText boolean @Enable FText support at lua runtime which will no longer be treated as a string. (Requires restart to take effect)
---@field public bLuaCompileAsCpp boolean @Whether or not compile lua module as c++ code. (Requires restart to take effect)
---@field public LuaVersion string @Use the specified lua version. (Requires restart to take effect)
---@field public bWithUE4Namespace boolean @Create UE4 global table on lua env. (Requires restart to take effect)
---@field public bLegacyReturnOrder boolean @Place out parameters before return value. (Requires restart to take effect)
---@field public bLegacyBlueprintPath boolean @Auto append '_C' to blueprint class path. (Requires restart to take effect)
---@field public bLegacyAllowUTF8WithBOM boolean @Allow lua file with UTF-8 BOM header. (Requires restart to take effect)
---@field public bLegacyArgsPassing boolean @Arguments are passed to lua by pointer when called from UE. (Requires restart to take effect)
---@field public UpdateMode EUpdateMode
local UUnLuaEditorSettings = {}

