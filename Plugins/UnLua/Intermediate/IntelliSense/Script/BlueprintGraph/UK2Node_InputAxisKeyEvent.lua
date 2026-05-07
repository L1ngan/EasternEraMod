---@class UK2Node_InputAxisKeyEvent : UK2Node_Event
---@field public AxisKey FKey
---@field public bConsumeInput boolean @Prevents actors with lower priority from handling this input
---@field public bExecuteWhenPaused boolean @Should the binding execute even when the game is paused
---@field public bOverrideParentBinding boolean @Should any bindings to this event in parent classes be removed
local UK2Node_InputAxisKeyEvent = {}

