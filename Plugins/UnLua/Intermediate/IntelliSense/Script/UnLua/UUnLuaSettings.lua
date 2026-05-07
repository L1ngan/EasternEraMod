---@class UUnLuaSettings : UObject
---@field public StartupModuleName string @Entry module name of lua env. Leave it empty to skip execution on startup.
---@field public DeadLoopCheck integer @Prevent from infinite loops in lua. Timeout in seconds.
---@field public DanglingCheck boolean @Prevent dangling pointers in lua.
---@field public bPrintLuaStackOnSystemError boolean @Whether to print all Lua env stacks on crash.
---@field public EnvLocatorClass TSubclassOf<ULuaEnvLocator> @Class of LuaEnvLocator, which handles lua env locating for each UObject.
---@field public ModuleLocatorClass TSubclassOf<ULuaModuleLocator>
---@field public PreBindClasses TArray<FSoftClassPath> @List of classes to bind on startup.
local UUnLuaSettings = {}

