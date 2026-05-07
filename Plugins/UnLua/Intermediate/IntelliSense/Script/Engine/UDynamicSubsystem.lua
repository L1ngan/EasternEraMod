---Dynamic Subsystems auto populate/depopulate existing collections when modules are loaded and unloaded
---Only UEngineSubsystems and UEditorSubsystems allow for dynamic loading.
---If instances of your subsystem aren't being created it maybe that the module they are in isn't being explicitly loaded,
---make sure there is a LoadModule("ModuleName") to load the module.
---@class UDynamicSubsystem : USubsystem
local UDynamicSubsystem = {}

