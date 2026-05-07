---@class FStateTreeEditorBreakpoint
---@field public ID FGuid @Unique Id of the Node or State associated to the breakpoint.
---@field public BreakpointType EStateTreeBreakpointType @The event type that should trigger the breakpoint (e.g. OnEnter, OnExit, etc.).
local FStateTreeEditorBreakpoint = {}
