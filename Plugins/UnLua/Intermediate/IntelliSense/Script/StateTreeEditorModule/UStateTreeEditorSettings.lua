---@class UStateTreeEditorSettings : UDeveloperSettings
---@field public SaveOnCompile EStateTreeSaveOnCompile @Determines when to save StateTrees post-compile
---@field public bShouldDebuggerAutoRecordOnPIE boolean @If enabled, debugger starts recording information at the start of each PIE session.
---@field public bShouldDebuggerResetDataOnNewPIESession boolean @If enabled, debugger will clear previous tracks at the start of each PIE session.
---@field public bRetainNodePropertyValues boolean @If enabled, changing the class of a node will try to copy over values of properties with the same name and type. i.e. if you change one condition for another, and both have a "Target" BB key selector, it'll be kept.
local UStateTreeEditorSettings = {}

