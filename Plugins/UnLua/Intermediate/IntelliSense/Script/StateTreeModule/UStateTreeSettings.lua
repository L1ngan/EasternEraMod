---Default StateTree settings
---@class UStateTreeSettings : UDeveloperSettings
---@field public bAutoStartDebuggerTracesOnNonEditorTargets boolean @Editor targets relies on PIE and StateTreeEditor to start/stop traces. This is to start traces automatically when launching Standalone, Client or Server builds. It's also possible to do it manually using 'statetree.startdebuggertraces' and 'statetree.stopdebuggertraces' in the console.
local UStateTreeSettings = {}

